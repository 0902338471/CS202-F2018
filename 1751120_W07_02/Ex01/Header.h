#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class CItem {
public:
	CItem(string tmpname);
	~CItem() {

	}
	CItem() = default;
	bool compareName(string tmpname)
	{
		if (tmpname == name)
			return true;
		return false;
	}
	virtual void print(int key)
	{
		cout << name;
	}
	bool checkHidden()
	{
		return isHidden;
	}
	virtual void setHidden(bool n1, bool n2)
	{
		if (n1 == true)
			isHidden = true;
		else
			isHidden = false;
	}
	virtual CItem *findByName(string nametmp)
	{
		if (nametmp == name)
			return &(*this);
		return NULL;
	}
private:
	string name;
	bool isHidden;
};
class CFolder :public CItem {
public:
	CFolder() = default;
	CFolder(string tmpname) :CItem(tmpname)
	{
		Num = 0;
	}
	void add(CItem*tmp)
	{
		list.push_back(tmp);
	}
	void print(int key)
	{
		if (key == 1)//printsubitem
		{

		}
		else
		{
			for (int i = 0; i < list.size(); i++)
			{
				if(list[i]->checkHidden()==false)
				   list[i]->CItem::print(key);
				   cout << endl;
			}
		}
	}
	CFolder*removeByName(string tmp)
	{
		for (int i = 0; i < list.size(); i++)
		{
			if (list[i]->compareName(tmp))
			{
				if (i !=list.size()-1)
				{
					CItem *tmp = list[i];
					list[i] = list[list.size() - 1];
					list[list.size()-1] = tmp;
				}
				list.pop_back();
				break;
			}
		}
		return &(*this);
	}
	CItem* findByName(string name)
	{
		if (CItem::findByName(name) != NULL)
			return &(*this);
		for (int i = 0; i < list.size(); i++)
		{
			if (list[i]->findByName(name) != NULL)
				return list[i]->findByName(name);
		}
		return NULL;
	}
	void setHidden(bool n1, bool n2)
	{
		CItem::setHidden(n1, n2);
		for (int i = 0; i < list.size(); i++)
		{
			list[i]->setHidden(n1, n2);
		}
	}
private:
	 vector<CItem*> list;
	int Num;//numofFileandFolder
};
class CFile :public CItem {
public:
	CFile(string tmp, int tmpnum) :CItem(tmp) {
		size = tmpnum;
	}
	~CFile()
	{

	}
	CItem* findByName(string name)
	{
		return CItem::findByName(name);
	}
	void setHidden(bool n1, bool n2)
	{
		CItem::setHidden(n1, n2);
	}
private:
	int size;
};
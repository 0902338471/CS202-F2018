#include <iostream>
#include <vector>
#include <string>
using namespace std;
template<class T>
class NullArrayException :public exception
{
public:
	string message()
	{
		string tmp = "This is a NULL array,there are no elements to remove!!!";
		return tmp;
	}
private:
	int n = 0;
};
template<class T>
class IndexBiggerthanN :public exception
{
public:
	string message()
	{
		string tmp = "Your index is bigger than number of elements in the array,can't get the element with that index!!!";
		return tmp;
	}
private:
	int index;
};
template<class T>
class ExistingArrayException :public exception
{
public:
	ExistingArrayException() = default;
	ExistingArrayException(vector<T>tmp)
	{
		n = tmp.size();
		for (int i = 0; i < n; i++)
			datas.push_back(tmp[i]);
	}
	~ExistingArrayException() {};
	string Announcement()
	{
		string tmp = "This Array has been initialized and used before,starting to initialize again....";
		return tmp;
	}
private:
	vector<T> datas;
	int n;
};
template<class T>
class MyArray
{
public:
	MyArray() = default;
	MyArray(T *a,int n)
	{
		for (int i = 0; i < n; i++)
			data.push_back(a[i]);
	}
	void init()
	{
		if (data.size() != 0)
		{
			for (int i = 0; i < data.size(); i++)
				data.pop_back();
			throw new ExistingArrayException<T>(data);
		}
	}
	void add(T elements)
	{
		data.push_back(elements);
	}
	T remove()
	{
		if (n == 0)
		{
			throw new NullArrayException<T>;
			return NULL;
		}
		else
		{
			T key = data.pop_back();
			n -= 1;
		}
		return key;
	}
	T get(T idx)
	{
		if (idx >= data.size())
		{
			throw new IndexBiggerthanN<T>;
			return NULL;
		}
		else
			return data[idx];
	}
	int size()
	{
		return data.size();
	}
	void Bubblesorting()
	{
		for (int size = data.size(); size > 1; size--)
		{
			for (int i = 0; i < size - 1; i++)
			{
				if (data[i] > data[i + 1])
					swap(data[i], data[i + 1]);
			}
		}
	}
	void printout()
	{
		for (int i = 0; i < data.size(); i++)
			cout << data[i] << " ";
	}
	void generate()
	{
		int n;
		int *a;

	}
	friend istream& operator>>(istream &is, MyArray &tmp)
	{
		try
		{
			tmp.init();
			int key;
			while (is >> key)
			{
				if (key == 0)
					break;
				tmp.data.push_back(key);
			}
			return is;
		}
		catch (ExistingArrayException<T> *tmp1)
		{
			cout<<tmp1->Announcement();
		}
	}
private:
	vector<T> data;
};


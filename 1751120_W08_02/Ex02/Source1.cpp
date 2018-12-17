#include "Header.h"
int EyedFace::counts = 0;
int main() {
	EyedFace tui;
	cout << EyedFace::counts << endl;
	EyedFace tui1;
	EyedFace tui2;
	cout<< EyedFace::counts ;
	tui1.~EyedFace();
	cout << EyedFace::counts;
	system("pause");
	return 0;
}
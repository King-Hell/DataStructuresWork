#include<iostream>
using namespace std;
template<class T>
bool func(T x, T a[],int n) {
	if (n < 0)
		return false;
	else {
		if (a[n] == x) 
			return true;
		else
			func(x, a, n - 1);
	}
}
int main() {
	int x= 0;
	int a[] = { 2,4,5,6,3,6,7,6 };
	cout << func(x, a, 8);
	system("pause");
	return 0;
}
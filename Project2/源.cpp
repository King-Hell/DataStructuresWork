#include<iostream>
using namespace std;
void print(bool a[], int size) {
	for (int i = 0; i < size; i++) {
		cout << a[i];
	}
	cout << endl;
}
void func(bool a[],int n,int size) {
	if (n == 0) {
		print(a,size);
	}else{
		func(a, n - 1,size);
		a[n - 1] = !a[n - 1];
		func(a, n - 1,size);
		a[n - 1] = !a[n - 1];
	}
}

int main(){
	bool a[] = {false,false,false,false};
	func(a,4,4);
	system("pause");
	return 0;
}
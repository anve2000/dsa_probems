#include<iostream>
using namespace std;



	int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[5] = {1,2,3,4,5};
	cout<<arr[1]<<endl;
	cout<< *arr<<endl;
	cout<< &arr<<endl;

// 	2
// 1
// 0x7ffcdfe31b90

	int a = 2;
	cout<<a<<endl;

	int *b = &a;
	cout<<b<<endl;
	cout<<*b<<endl;


	cout<<*a<<endl;
	// syntax Error, trying to treat constant as address

	cout<<&a<<endl;

// 	2
// 0x7ffcdfe31b84
// 2

 	
 	return 0;
}
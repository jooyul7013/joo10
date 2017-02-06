#include <iostream>

using namespace std;

void func(int a)
{
	cout << "first version of func is called! and value is " << a << endl;
}

void func(int a, int b)
{
	cout << "second version of func is called! and value is " << a <<" and "<< b << endl;
}

int main()
{
	func(1);
	func(1, 2);

	return 0;
}

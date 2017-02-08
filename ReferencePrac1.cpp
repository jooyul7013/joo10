/*
 *참조자를 이용하여 인자로 전달된 int형 변수를 1씩 증가시키는 함수와
 인자로 전달된 int형 변수의 부호를 바꾸는 함수
 */
#include <iostream>

void Adder(int &numb);
void SignChanger(int &numb);

int main (void)
{
	using namespace std;

	int number = 1;

	Adder(number);
	cout<<"result of Adder() is : "<<number<<endl;

	SignChanger(number);
	cout<<"result of SignChanger() is : "<<number<<endl;
	
	return 0;
}

void Adder(int &numb)
{
	numb = numb+1;
}

void SignChanger(int &numb)
{
	numb = -numb;
}

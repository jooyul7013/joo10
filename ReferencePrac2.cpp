/*
 * 참조자를 이용하여 포인터 두개를 받아 
 * 가리키는 대상을 서로 바꾸도록 하는 함수 작성
 */
#include <iostream>

void SwapPointer(int *(&num1), int *(&num2));

int main(void)
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	std::cout<<"ptr1 is : "<<*ptr1<<" and ptr2 is : "<<*ptr2<<std::endl;

	return 0;
}

void SwapPointer(int *(&num1), int *(&num2))
{
	int *tmp = num1;
	num1 = num2;
	num2 = tmp;
}


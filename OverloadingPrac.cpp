#include <iostream>

void swap(int* number1, int* number2)
{
	int tmp;
	tmp = *number1;
	*number1 = *number2;
	*number2 = tmp;
}

void swap(char* char1, char* char2)
{
	char tmp;
	tmp = *char1;
	*char1 = *char2;
	*char2 = tmp;
}

void swap(double* dbnumb1, double* dbnumb2)
{
	double tmp;
	tmp = *dbnumb1;
	*dbnumb1 = *dbnumb2;
	*dbnumb2 = tmp;
}


int main(void)
{
	int num1 = 1;
	int num2 = 2;
	char char1 = 'A';
	char char2 = 'B';
	double dbnum1 = 1.1111;
	double dbnum2 = 2.2222;

	swap(&num1, &num2);
	swap(&char1, &char2);
	swap(&dbnum1, &dbnum2);
	
	std::cout<<num1<<" and "<<num2<<std::endl;
	std::cout<<char1<<" and "<<char2<<std::endl;
	std::cout<<dbnum1<<" and "<<dbnum2<<std::endl;

	return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len)
{
	// char * str = (char*)malloc(sizeof(char)*len);
	char * str = new char[len];
	return str;
}

int main(void)
{
	char * str = MakeStrAdr(20);
	strcpy(str, "New, Delete test 1");
	cout<<str<<endl;
	// free(str);
	delete []str;
	
	return 0;
}

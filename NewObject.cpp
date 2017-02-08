#include <iostream>
#include <stdlib.h>
using namespace std;

class TmpClass
{
	public:
		TmpClass()
		{
			cout<<"It show difference between 'new' and 'malloc'"<<endl;
		}
};

int main(void)
{
	cout<<"case 1: ";
	TmpClass * cls1 = new TmpClass;

	cout<<"case 2: ";
	TmpClass * cls2 = (TmpClass*)malloc(sizeof(TmpClass)*1);

	delete cls1;
	free(cls2);

	return 0;
}

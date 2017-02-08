#include <iostream>
//#define SQAURE(x) ((x) * (x))
//이렇게 매크로 형태로 정의할 수 있고


inline int SQUARE(int x)//함수를 인라인 화 시킬수 있다
{
	return x*x;
}

int main(void)
{
	std::cout<<SQUARE(5)<<std::endl;
	std::cout<<SQUARE(12)<<std::endl;
	//인라인 함수이기 때문에 함수의호출문이 몸체로 대체되어 실행속도가 빠르다
	return 0;
}

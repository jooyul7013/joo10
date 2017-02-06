#include <iostream>

namespace A{
	void Add() {
		std::cout<<"namespace A의 Add() 호출!\n"<<std::endl;
	}
}

namespace B{
	void Add() {
		std::cout<<"namespace B의 Add() 호출!\n"<<std::endl;
	}
}

int main()
{
	A::Add();
	B::Add();
	
	return 0;
}

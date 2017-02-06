#include <iostream>

int main(void){
	int baseNumber;
	int count;

	std::cout<<"몇단을 출력할 지 입력해주세요.\n"<<std::endl;
	std::cin>>baseNumber;

	for(count = 1; count < 10; count++)
	{
		std::cout<<baseNumber<<" X "<<count<<" = "<<baseNumber*count<<std::endl;
	}

	return 0;
}

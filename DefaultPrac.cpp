/*
 * DefaultValue.cpp의 BoxVolume함수를 '매개변수 디폴트 값 지정' 형태가 아닌 '함수 오버로딩'의 형태로 수정하는 연습문제
 */


#include <iostream>
int BoxVolume(int length, int width, int height);
int BoxVolume(int length, int width);
int BoxVolume(int length);

int main(void)
{
	std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
	//std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;
	//첫번째 값에는 디폴트 값이 없기 때문에 위 행은 컴파일 에러
	
	return 0;
}

int BoxVolume(int length, int width, int height)//디폴트 값은 원형 선언에만 위치해야함 여긴X
{
	return length*width*height;
}
int BoxVolume(int length, int width)//디폴트 값은 원형 선언에만 위치해야함 여긴X
{
	return length*width*1;
}
int BoxVolume(int length)//디폴트 값은 원형 선언에만 위치해야함 여긴X
{
	return length*1*1;
}

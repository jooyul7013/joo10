/*
 * 2차원 평면 상에서 좌표를 표현 하는 구조체와
 * 함수의 선언부만으로 두점을 덧셈연산하는 PntAdder를 완성하고
 * 구조체 관련 선언은 new를 사용하라
 */
#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point * tmpPoint = new Point;
	tmpPoint->xpos = p1.xpos+p2.xpos;
	tmpPoint->ypos = p1.ypos+p2.ypos;

	return *tmpPoint;
}

int main(void)
{
	Point *pt1 = new Point;
	Point *pt2 = new Point;

	pt1->xpos = 10;
	pt1->ypos = 10;

	pt2->xpos = 1;
	pt2->ypos = 1;

	Point &result = PntAdder(*pt1, *pt2);

	cout<<"xpos is : "<<result.xpos<<" and ypos is : "<<result.ypos<<endl;

	delete pt1;
	delete pt2;
	delete &result;

	return 0;
}

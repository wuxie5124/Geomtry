#include <iostream>
#include <cmath>
#include <memory>
using namespace std;
class Point {
public:
	Point() {};
	Point(double x, double y) { PointX = x, PointY = y; };
	void setValue();
	int index;
	double PointX;
	double PointY;
};
void Point::setValue() {
	cout << "请输入点的坐标x,y: ";
	cin >> PointX >> PointY;
}


class Polyline {
private:
	int pointNum;
	int MaxNum;
	Point *point;
public:
	Polyline(double x = 0, double y = 0) {
		pointNum = 0;
		MaxNum = 10;
		point = new Point[MaxNum];
		point[pointNum].PointX = x;
		point[pointNum].PointY = y;
		pointNum++;
	}
	~Polyline(void) {
		if (point != NULL) {
			delete point;
			point = NULL;
		}
	}
	void addPoint(double x, double y) {
		Point *p = NULL;
		if (pointNum == MaxNum) {
			p = new Point[MaxNum * 2];
			memcpy(p, this->point, MaxNum * sizeof(point));
			delete point;
			MaxNum *= 2;
		}
		point[pointNum].PointX = x;
		point[pointNum].PointY = y;
		pointNum++;
	}
	void getPointNumber() {
		cout << "折线有" << pointNum << "个点"<<endl;
		cout << sizeof(point);
	}
};


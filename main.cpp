#include <iostream>

using namespace std;

class shape{

};

class Rectangle : shape{
public:
    double width0, height0;
    Rectangle(double width, double height){
        width0 = width;
        height0 = height;

    }

};
class Square : shape{
public:
    double side0;
    Square(double side){
        side0 = side;

    }
};
class Circle :shape{
public:
    double radius0;
    Circle(double radius){
        radius0 = radius;

    }
};

int main() {

    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    // printArea(r1);
    // printArea(s1);
    // printArea(c1);


}

#include <iostream>
using namespace std;


class Rectangle : shape{
    double width0, height0;
    Rectangle(double width, double height){

    }

};
class Square{
    double side0 : shape;
    Square(double side){

    }
};
class Circle : shape{
    double radius0;
    Circle(double radius){

    }
};
class Shape{

};
int main() {

    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    // printArea(r1);
    // printArea(s1);
    // printArea(c1);


}

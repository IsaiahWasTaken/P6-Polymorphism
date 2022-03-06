#include <iostream>
#include <math.h>
using namespace std;



class Shape{
public:
     const virtual double area() = 0;


};






class Rectangle : public Shape{
public:
    double width0, height0;
    Rectangle(double width, double height){
        width0 = width;
        height0 = height;
    }

    const double area (){
        return width0*height0;
    }

};
class Square : public Shape{
public:
    double side0;
    Square(double side){
        side0 = side;

    }

    const double area(){
        return pow(side0,2);
    }
};
class Circle : public Shape{
public:
    double radius0;
    Circle(double radius){
        radius0 = radius;



    }

    const double area(){
        return M_PI * pow(radius0,2);
    }


};

void printArea(Shape& shape) {
    cout << shape.area() << "\n";
}



int main() {

    Rectangle r1{ 3.0, 5.0 };
    Square s1{ 4.0 };
    Circle c1{ 10.0 };
    printArea(r1);
    printArea(s1);
    printArea(c1);


}

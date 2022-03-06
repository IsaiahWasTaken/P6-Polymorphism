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
template <typename T>
void printArea(T& shape) {
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
/*1. Personally, I think I'd prefer static polymorphism since in this scenario you wouldn't need the Shape class
 * which saves time and space even though it wouldn't make a huge difference in this case. In a large scale project I
 * static polymorphism will save you a lot of time and reduce the potential of you making mistakes.
 *
 *
 *2. Based on my experience with static polymorphism, I can see why it's encouraged over dynamic simply by the fact
 * dynamic polymorphism can be more complicated or tedious. Using static polymorphism simplifies code and can make it 
 * easier to interrupt as it requires less to be written.
 *
 *
 */

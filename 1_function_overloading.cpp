#include<iostream>
using namespace std;

int area(float r) {
    return 3.14*r*r;
}

int area(float b, float h) {
    return (b*h)/2;
}

int main(){
    float radius, base, height;
    cout << "Enter the Radius of Circle: ";
    cin >> radius;
    cout << "The Area of Circle with Radius " << radius << " is " << area(radius);

    cout << "\n\nEnter the Base of Triangle: ";
    cin >> base;
    cout << "Enter the Height of Triangle: ";
    cin >> height;

    cout << "\nThe Area of Triangle with base " << base << " and height " << height << " is " << area(base, height);
    return 0;
}

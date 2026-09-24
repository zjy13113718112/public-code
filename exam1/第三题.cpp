//
// Created by formiko on 2026/9/23.
//
#include <iostream>
#include "windows.h"
#include <string>
using namespace std;
class Car {
private:
    string color;
    int number;
public:
    Car(string color,int number) : color(color),number(number) {}
    ~Car() {
    }
    void display() {
        cout << "车辆颜色是:" << color << endl;
        cout << "车牌号信息是：" << number << endl;
    }
};
int main(){
    SetConsoleOutputCP(CP_UTF8);
    Car car1("红色",12345);
    Car car2("蓝色",45678);
    car1.display();
    car2.display();
    return 0;
}



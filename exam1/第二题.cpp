//
// Created by formiko on 2026/9/22.
//
#include <iostream>
#include "windows.h"
#include <string>
using namespace std;
struct Student{string name; int id; double score;};
void input(Student *s) {
    cin >> s->name;
    cin >> s->id;
    cin >> s->score;
}
void display(Student *s) {
    cout << "姓名："<< s->name << endl;
    cout << "学号：" << s->id << endl;
    cout << "成绩：" << s->score << endl;
}
int main(){
SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    Student stu;
    input(&stu);
    display(&stu);
    return 0;
}
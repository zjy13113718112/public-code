# public-code
对于该考核题，我进行了如下编写并试图去实现对应的功能。
第一题：
   1.其要求是对随机数字进行升序排列，考虑到用数组存储数字并输出较为方便，所以建立了int *Parr = new int[10](因为是10个数字进行排列。
   2.因为要取最小值排列，所以编写函数min和min_index(用于储存min中各数字的内存地址）来对数组中的数字进行管理
   3.因为要进行输出，编写for循环并循环10次
   4.在for中对数组数字的大小判断，if(j==i) (j为变量因子),min = Parr[j]（将数组中的数字给函数），min_index同理，是内存地址的传输。相当于是循环第一次将第一个数字进行记录，然后保留下来。
   5.编写if(Parr[j] < min),进行逻辑判断，扫描到的数字若比min中的小，则min中数字替换，此时min中数字相较于已排列好的数字更小，为接下来换序做准备
   6.int tmp =Parr[i]; Parr[i] = Parr[min_index]和Parr[min_index] = tmp这三行代码，tmp为临时储存内容的变量，将前面记录好的数字存储到里面，第二行则是把最小值的位置写进对应的数组位置中，第三行则是把原来第一行写的数字重新记录回原来的位置中，然后继续进行下一轮的循环比较。最后cout输出数组内容即可。


第二题：
    1.其要求是运用结构体和指针输入数据然后并提供信息，由于输出内容含有中文，首先用#include "windows.h"和SetConsoleOutputCP(CP_UTF8)完成中文的操作。
    2.定义结构体student，字符串name和整数id,double score用于支持成绩显示为小数。然后编写void input提供name id和score的输入，dispaly则用于展示对应的数据
    3.main中Student stu用于调用结构体，后input(&stu)就是调用结构体里的函数，display同理


第三题：
    1.题目要求输出车辆信息并用相关知识完成，class Car{ code.. } 完成类的定义，然后private完成私有的设置，并在里面编写对应字符串color和int number。
    2.Car(string color,int number):color(color),number(number){}中Car为构造函数，括号中的是形参列表接收数据，“：”后的内容是对变量完成赋值。~Car(){}则是进行析构函数，用于释放内存。后面编写display进行对应信息的输出。
    3.main内则是对成员进行具体赋值，最后调用display完成信息输出。

ros2基础考核：
    其要求运行该文件，先在ubuntu中mkdir -p ~/ros2_ws/src创建目录，再进行cd ~/ros2_ws进入工作空间的根目录，colcon进行编译然后再source install/setup.bash更新环境变量，最后用ros2 run daohang daohang.cpp运行程序，最终实现效果。
   
   

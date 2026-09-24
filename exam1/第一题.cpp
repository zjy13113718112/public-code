//
// Created by formiko on 2026/9/22.
//
#include <iostream>
#include <random>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
    int * Parr = new int[10] {[0] = 5, [1] = 8, [2] = 2, [3] = 10, [4] = 7, [5] = 15, [6] = 13, [7] = 11, [8] = 20, [9] = 18, };
    int min;
    int min_index;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (j == i)
            {
                min = Parr[j];
                min_index = j;
            }
            if (Parr[j] < min)
            {
                min = Parr[j];
                min_index = j;
            }
        }
        int tmp = Parr[i];
        Parr[i] = Parr[min_index];
        Parr[min_index] = tmp;
    }

    for (int i = 0; i < 10; i++) {
        cout << Parr[i] << "," ;
    }
    return 0;

}


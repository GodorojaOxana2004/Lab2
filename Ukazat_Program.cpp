#include <iostream>

int main()
{
    int i;
    i = 69;
    int number = 72;
    i = 69 + 72;
    int arr[3] = {};
    int *iPointer = &i;
    number = *iPointer;
    int *pointertoi = &i;
    *pointertoi = 15;
    int *pointerToArr = &arr[0];
    pointerToArr = pointerToArr + 2;
    *pointerToArr = 5; // исправила ↓
    iPointer = &arr[2]; 
    *iPointer = 6;

    return 0;
}

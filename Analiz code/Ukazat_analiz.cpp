#include <stdlib.h>
#include <iostream>

struct TwoInts // в структуре TwoInts содержатся переменные a и b
{
    int a; 
    int b; 
};

struct StructWithArray // в StructWithArray содержится массив и указатель someNumber 
{
    int arr[4]; // массив из 4 элементов
    int* someNumber; // Адрес в someNumber является целочисленным.
};

int main()
{
    TwoInts i2 = { };  // Создается переменная i2, типа TwoInts
    i2.a = 5; // элемент структуры а, присваивается значение 5
    i2.b = 7; // элемент структуры b, присваивается значение 7

    std::cout << i2.a << std::endl; // выводится i2.a
    std::cout << i2.b << std::endl; // выводится i2.b
    
    StructWithArray s = { }; // Создается переменная s типа StructWithArray
    s.arr[0] = 10; //  присваивается первому элементу arr значение 10 из структуры s 

    StructWithArray s1 = { }; //переменная s1 типа StructWithArray и массив arr в ней устанавливается в {0, 0, 0, 0}
    s1.arr[0] = 15; // присваивается первому элементу arr значение 15 из структуры s1 

    StructWithArray* sPointer = &s; //указатель sPointer на переменную типа StructWithArray, и указывает на переменную s.
    sPointer->arr[0] = 20; //sPointer изменяет значение первого элемента массива arr в структуре, на которую он указывает.

    std::cout << s.arr[0] << std::endl; // Выводится значение первого элемента массива arr из переменной s
    s.arr[0] = 25; // Первый элемент массива arr из переменной s устанавливается в 25
    std::cout << s.arr[0] << std::endl; //  вывод первого элемента arr из структуры s
    sPointer->arr[0] = 30; //Через указатель sPointer изменяется значение первого элемента массива arr в название переменной. 
    std::cout << s.arr[0] << std::endl;// вывод первого элемента arr из структуры s 

    sPointer = &s1; //Указатель sPointer теперь указывает на переменную s1
    sPointer->arr[0] = 35; // значение первого элемента массива arr в структуре s1 устанавливается в 35.
    std::cout << s.arr[0] << std::endl; //  вывод первого элемента arr из структуры s = 30
    std::cout << s1.arr[0] << std::endl; //вывод первого элемента arr из структуры s1 = 35

    StructWithArray structArray[2] = { }; // создается массив structArray из двух элементов типа StructWithArray, и оба элемента инициализируются значением {0, 0, 0, 0}
    structArray[0].arr[3] = 77; //четвертый элемент массива arr, первого элемента structArray устанавливается на 77.
    structArray[1].someNumber = &structArray[0].arr[3]; // указатель someNumber второго элемента structArray устанавливается на адрес четвертого элемента массива arr первого элемента structArray.

    sPointer = &s; // Указатель sPointer снова указывает на переменную s
    int* pointer = &sPointer->arr[3]; // указатель pointer, который указывает на четвертый элемент массива arr в структуре s.
    s.arr[3] = 72; //Затем четвертый элемент массива arr в переменной s устанавливается в 72
    std::cout << *pointer; //  значение 72 выводится на консоль через указатель pointer

    StructWithArray memory; //Создается переменная memory типа StructWithArray
    memset(&memory, 0, sizeof(StructWithArray)); // функция memset заполняет блок памяти нулями. В данном случае, она заполняет память, занимаемую переменной memory.
    return 0;
}

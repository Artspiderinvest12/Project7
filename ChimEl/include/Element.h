#ifndef ELEMENT_H
#define ELEMENT_H
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;


class Element
{
    public:
        Element();
        ~Element();
        void input(void);//ввод данных хим элемента
        void output(void);//вывод данных хим элемента
        string getElement();
        float getMass();

    private:

        char title[50];//название элмента
        char element[10];//символическое обозначение
        float atomic_mass;//атомная масса
        int nucleus_charge;//заряд ядра

};

#endif // ELEMENT_H

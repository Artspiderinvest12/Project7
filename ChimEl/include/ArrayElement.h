#ifndef ARRAYELEMENT_H
#define ARRAYELEMENT_H
#include <Element.h>
#include <iostream>
#include <iomanip>

class ArrayElement
{
    public:
        ArrayElement();
        ~ArrayElement();

        int push_back();//добавление элемента в конец массива
        int pop_back();//удаление из конца
        int view();//просмотр элементов
        int Info();//выводит сведения о химическом элементе по его символическому названию
        int maxMass();//выводит элемент с самой большой массой

        void resize(int);

        void save();//сохранение файла
        void load();//загрузка файла


    private:
        Element *arr;//массив химических элементов
        int count;//размер массива
};

#endif // ARRAYELEMENT_H

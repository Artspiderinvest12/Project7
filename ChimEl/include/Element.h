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
        void input(void);//���� ������ ��� ��������
        void output(void);//����� ������ ��� ��������
        string getElement();
        float getMass();

    private:

        char title[50];//�������� �������
        char element[10];//������������� �����������
        float atomic_mass;//������� �����
        int nucleus_charge;//����� ����

};

#endif // ELEMENT_H

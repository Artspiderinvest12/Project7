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

        int push_back();//���������� �������� � ����� �������
        int pop_back();//�������� �� �����
        int view();//�������� ���������
        int Info();//������� �������� � ���������� �������� �� ��� �������������� ��������
        int maxMass();//������� ������� � ����� ������� ������

        void resize(int);

        void save();//���������� �����
        void load();//�������� �����


    private:
        Element *arr;//������ ���������� ���������
        int count;//������ �������
};

#endif // ARRAYELEMENT_H

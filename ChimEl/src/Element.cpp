#include "Element.h"

Element::Element()
{
    //ctor
}

Element::~Element()
{
    //dtor
}

void Element::input(void)
{
    cout << "������� ������ ����������� ��������" << endl;
    cout << "��������: ";
    cin >> title;
    cout << "������������� �����������: ";
    cin >> element;
    cout << "����� �����: ";
    cin >> atomic_mass;
    cout << "����� ����: ";
    cin >>  nucleus_charge;
}

void Element::output(void)
{
    cout << setw(10) << title << " |" << setw(25) << element << " |" << setw(11) << atomic_mass << " |" << setw(10) << nucleus_charge << " |" << endl;
}

string Element::getElement()
{
    return element;
}

float Element::getMass()
{
    return atomic_mass;
}

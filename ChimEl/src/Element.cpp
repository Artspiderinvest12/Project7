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
    cout << "Введите данные химического элемента" << endl;
    cout << "Название: ";
    cin >> title;
    cout << "Символическое обозначение: ";
    cin >> element;
    cout << "Масса атома: ";
    cin >> atomic_mass;
    cout << "Заряд ядра: ";
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

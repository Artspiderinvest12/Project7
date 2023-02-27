#include "ArrayElement.h"

ArrayElement::ArrayElement()
{
    arr = NULL;
    count = 0;
}

ArrayElement::~ArrayElement()
{
    if (arr) delete [] arr;
}


void ArrayElement::resize(int b)
{
    if (arr)
    {
        Element *newarr = new Element[b];
        for (int i = 0; i < count && i < b; i++)
        {
            newarr[i]=arr[i];
        }
        delete [] arr;
        arr = newarr;
    }
    else
        arr = new Element[b];
}


int ArrayElement::push_back()
{
    if (arr == NULL)
    {
        count = 1;
        arr = new Element[count];
        arr[0].input();
    }
    else
    {
        resize(++count);
        arr[count-1].input();
    }
    return count;
}

int ArrayElement::pop_back()
{
    if (count <= 0) return 0;
    if (--count > 0)
        resize(count);
    else
        delete [] arr;
}

int ArrayElement::view()
{

    if (count == 0)
    {
        cout << "Массив пуст" << endl;
        return -1;
    }

    int j = 0;
    cout << "|======================================================================|" << endl;
    cout << "|"<< setw(5) << "N" << " |" << setw(10) << "Название" << " |" <<  setw(25) << "Символическое обозначение" <<" |" <<  setw(11) << "Масса атома" << " |" <<  setw(10) << "Заряд ядра" << " |" << endl;
    for(int i = 0; i < count; i++)
    {
        cout << "|" << setw(5) << j++ << " |";
        arr[i].output();
    }

    cout << "|======================================================================|" << endl;
}

int ArrayElement::Info()
{
    if(count == 0)
    {
        cout << "Массив пуст" << endl;
        return -1;
    }

    string sim;
    bool result = false;
    cout << "Введите символическое название элемента..." << endl;
    cin >> sim;

    for(int i = 0; i < count; i++)
    {
        if(arr[i].getElement() == sim)
        {
            cout << "Элемент " << sim << ":" << endl;
            cout << setw(10) << "Название" << " |" <<  setw(25) << "Символическое обозначение" <<" |" <<  setw(11) << "Масса атома" << " |" <<  setw(10) << "Заряд ядра" << " |" << endl;
            arr[i].output();
            result = true;
        }
    }
    if(result == false)
        cout << "Такого элемента нет" << endl;
}

int ArrayElement::maxMass()
{
    int maxIndex = 0;
    if(arr == NULL)
    {
        cout << "Массив пуст" << endl;
        return -1;
    }
    else
    {
        for(int i = 0; i < count-1; i++){
            if(arr[i+1].getMass() > arr[i].getMass())
                maxIndex = i+1;
        }
        cout << setw(10) << "Название" << " |" <<  setw(25) << "Символическое обозначение" <<" |" <<  setw(11) << "Масса атома" << " |" <<  setw(10) << "Заряд ядра" << " |" << endl;
        arr[maxIndex].output();
    }

}


void ArrayElement::save()
{
    ofstream out("output.bin", ios::binary);
    for (int i=0; i<count; i++)
    {
        out.write((char*)&arr[i],sizeof(Element));
    }

}

void ArrayElement::load()
{
    ifstream in("output.bin", ios::binary);
    in.seekg (0, ios::end);
    count = in.tellg() / sizeof(Element);
    in.seekg (0, ios::beg);
    resize(count);
    for (int i=0; i<count; i++)
    {
        in.read((char*)&arr[i],sizeof(Element));
    }
}

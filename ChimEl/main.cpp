#include <iostream>
#include <locale>
#include <string>
#include <fstream>
#include <windows.h>
#include <iomanip>
#include <ArrayElement.h>
#include <Element.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    char menu;
    ArrayElement elem;
    do{
        system ("CLS");
        cout << "1. �������� �����" << endl;
        cout << "2. ���������� � �����" << endl;
        cout << "3. �������� � �����" << endl;
        cout << "4. ������� � �����" << endl;
        cout << "5. �������� ���������" << endl;
        cout << "6. ������� �������� � ���������� �������� �� ��� �������������� ��������" << endl;
        cout << "7. ����� �������� � ����� ������� ������� ������" << endl;
        cout << "0. �����" << endl;
        menu = getchar();
        switch (menu)
        {
            case '1': system ("CLS"); elem.load(); system("PAUSE"); break;
            case '2': system ("CLS"); elem.save(); system("PAUSE"); break;
            case '3': system ("CLS"); elem.push_back(); system("PAUSE"); break;
            case '4': system ("CLS"); elem.pop_back(); system("PAUSE"); break;
            case '5': system ("CLS"); elem.view(); system("PAUSE"); break;
            case '6': system ("CLS"); elem.Info(); system("PAUSE"); break;
            case '7': system ("CLS"); elem.maxMass(); system("PAUSE"); break;
        }
    }
    while (menu!='0');

    return 0;
}

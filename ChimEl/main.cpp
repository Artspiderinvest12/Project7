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
        cout << "1. Загрузка файла" << endl;
        cout << "2. Сохранение в файла" << endl;
        cout << "3. Добавить в конец" << endl;
        cout << "4. Удалить с конца" << endl;
        cout << "5. Просмотр элементов" << endl;
        cout << "6. Вывести сведения о химическом элементе по его символическому названию" << endl;
        cout << "7. Вывод элемента с самой большой атомной массой" << endl;
        cout << "0. Выход" << endl;
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

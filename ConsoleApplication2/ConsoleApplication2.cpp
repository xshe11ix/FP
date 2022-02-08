﻿#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int STOLB = 6;
    const int STROK = 6;
    int a[STOLB][STROK];
    for (int i = 0; i < STOLB; i++)
    {
        for (int j = 0; j < STROK; j++)
        {
            cout << "a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];

        }
    }

    cout << "Многоугольник:" << '\n';
    for (int i = 0; i < STOLB; i++)
    {
        for (int j = 0; j < STROK; j++)
            if (a[i][j] == 1)
            {

                cout << "_ "; //static_cast<char>(176);
                //cout << static_cast<char>(176);
            }
            else
                cout << "  ";
        cout << endl;
    }

    cout << "(для удобства счёта точек)" << '\n';
    for (int i = 0; i < STOLB; i++)
    {
        for (int j = 0; j < STROK; j++)
        {
            cout << a[i][j] << "  ";
        }cout << endl;
    }
    cout << "Нахождение площади"<<'\n';

    int g, v;
    cout << "Введите кол-во точек на границе многоугольника (1): ";
    cin >> g;
    cout << "Введите кол-во точек внутри многоугольника (0): ";
    cin >> v;
    cout << "S=" << v + (g / 2) - 1;
}
#include <iostream>
#include <windows.h>

void Lab1_1();

void Lab1_2();

using namespace std;

int main() {
    Lab1_1();
    Lab1_2();
}

void Lab1_2() {
    setlocale(LC_ALL,"Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8);
    int z = 150;
    float x = 15.933f;
    short c = 250;
    cout << "z = " << z << endl;
    cout << "x = " << x << endl;
    cout << "c = " << c << endl;
    short day = 12;
    string month = " мая ";
    short year = 2003;
    cout << "Моя дата рождения: " << day << month << year << " года" << endl;
    const float c1 = 2.3f;
    const string c2 = "WINDOWS";
    cout << c1 << endl << c2 << endl;
}

void Lab1_1() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(CP_UTF8); // Я использую среду CLion, для корректного
    // отображения в ней надо указать UTF-8
    cout << "First string\n";
    cout << "Первая строка\n" << "Вторая стройка\n";
    cout << "Спецсимволы \"\\\".";
    cout << "\n\n";
}


#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    // ������������ ������� ������ �� ��������� ��� �������� ��������
    system("color B6");
    SetConsoleCP(1251); // ������������ ��������� �������� (Windows-1251)
    SetConsoleOutputCP(1251); // ������������ ��������� ��������� (Windows-1251)

    // ���� ��� ���������� ����� �����������
    string last_name;
    string first_name;
    int age;
    string city;

    // ����� ����� � �����������
    cout << "������ �������: ";
    getline(cin, last_name);

    cout << "������ ��'�: ";
    getline(cin, first_name);

    cout << "������ ��: ";
    cin >> age;
    cin.ignore(); // �������� ������ ���� �������� �����

    cout << "������ ���� ����������: ";
    getline(cin, city);

    // ���� �������� �����
    cout << "\n���� ����� " << first_name << " " << last_name << "." << endl;
    cout << "��� " << age << " ����." << endl;
    cout << "� ���� � " << city << "." << endl;

    return 0;
}
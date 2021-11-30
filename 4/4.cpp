// 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int value = 0;
	cout << "Выберите число месяца - ";
	cin >> value;
	switch (value)
	{
	case 1:
		system("cls");
		cout << "Вы выбрали месяц Январь";
		break;
	case 2:
		system("cls");
		cout << "Вы выбрали месяц Февраль";
		break;
	case 3:
		system("cls");
		cout << "Вы выбрали месяц Март";
		break;
	case 4:
		system("cls");
		cout << "Вы выбрали месяц Апрель";
		break;
	case 5:
		system("cls");
		cout << "Вы выбрали месяц Май";
		break;
	case 6:
		system("cls");
		cout << "Вы выбрали месяц Июнь";
		break;
	case 7:
		system("cls");
		cout << "Вы выбрали месяц Июль";
		break;
	case 8:
		system("cls");
		cout << "Вы выбрали месяц Август";
		break;
	case 9:
		system("cls");
		cout << "Вы выбрали месяц Сентябрь";
		break;
	case 10:
		system("cls");
		cout << "Вы выбрали месяц Октябрь";
		break;
	case 11:
		system("cls");
		cout << "Вы выбрали месяц Ноябрь";
		break;
	case 12:
		system("cls");
		cout << "Вы выбрали месяц Декабрь";
		break;

	default:
		system("cls");
		cout << "Вы ввели неверное значение";
		break;
	}
	int a; cin >> a;
	return 0;
}


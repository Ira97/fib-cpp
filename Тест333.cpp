#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	unsigned int value;
	string surname;


public:

	Student()
	{
		value = 0;
		surname = "";

	}


	Student(int value, string surname)
	{
		this->value = value;
		this->surname = surname;

	}

	string Get_surname()
	{
		return surname;

	}

	unsigned int Get_value()
	{
		return value;

	}
	string Set_surname(string s)
	{
		this->surname = s;
		return surname;


	}
	unsigned int Set_value(unsigned int k)
	{
		this->value = k;
		return value;
	}

	void Print()
	{
		cout << "Student =" + surname + "\t" + "number =" + to_string(value);
	}

};






class Hash
{
	int First()
	{

		//int index = value % 10;
		//return index;
	}

};


void qsortRecursive(int* mas, int size) {
	//Указатели в начало и в конец массива
	int i = 0;
	int j = size - 1;

	//Центральный элемент массива
	int mid = mas[size / 2];

	//Делим массив
	do {
		//Пробегаем элементы, ищем те, которые нужно перекинуть в другую часть
		//В левой части массива пропускаем(оставляем на месте) элементы, которые меньше центрального
		while (mas[i] < mid) {
			i++;
		}
		//В правой части пропускаем элементы, которые больше центрального
		while (mas[j] > mid) {
			j--;
		}

		//Меняем элементы местами
		if (i <= j) {
			int tmp = mas[i];
			mas[i] = mas[j];
			mas[j] = tmp;

			i++;
			j--;
		}
	} while (i <= j);


	//Рекурсивные вызовы, если осталось, что сортировать
	if (j > 0) {
		//"Левый кусок"
		qsortRecursive(mas, j + 1);
	}
	if (i < size) {
		//"Првый кусок"
		qsortRecursive(&mas[i], size - i);
	}
}























int main()
{
	setlocale(LC_ALL, "rus");

	Student arr[3];
	string s;
	unsigned int k;



	for (int i = 0; i < 3; i++)
	{
		cout << "Введите фамилию и № зачетки студента" << "\n";
		cin >> k;
		cin >> s;
		arr[i].Set_value(k);
		arr[i].Set_surname(s);
		//arr[i] = Student(k, s);
	}


	//for (int i = 0; i < 3; i++) {
	//	cout << arr[i].Get_surname()<<"\n";
		//cout << arr[i].Get_value() << "\n";
	//}

	int a = 5;

	int* arrr = new int [a] {1, 4, 5, 7, 8};

	qsortRecursive(arrr, 9);

	for (int i = 0; i < 10; i++)
	{
		cout << arrr[i];
	}





}




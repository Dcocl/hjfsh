#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//вариант 2
	//1. Задан массив A, содержащий 12 целых случайных чисел от -5 до 5. Найти сумму элементов массива. 
	/*const int size = 12;
	int m[size];
	srand(time(nullptr));
	for (int i = 0; i < size; i++) {
		m[i] = rand() % 11 - 5;
		cout << m[i] << ' ';
}
	cout << endl;
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += m[i];
		}
		cout << sum;
	//2. Задан массив, который содержит 13 случайных целых чисел от -12 до 12. Найти произведение отрицательных элементов массива. 
	/*int m[13];
	srand(time(nullptr));
	for (int i = 0; i < 12; i++) {
		m[i] = rand() % 25 - 12;
		cout << m[i] << ' ';
	}
	cout << endl;
	int p = 1;
	for (int i = 0; i < 12; i++) {
		if (m[i] < 0) {
			p *= m[i];
		}
	}
	cout << p;*/
	//3. Задан массив, который содержит 11 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 3 или на 5 или на 7.
	/*int arr[11];
	int a = 0;
	for (int i = 0; i < 11; i++) {
		arr[i] = rand() % 21;
		if (arr[i] % 3 == 0 || arr[i] % 5 == 0 || arr[i] % 7 == 0);
		k++;
	}
	for (int i = 0; i < 11; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << a << endl;*/
	//4. Задан массив из 15 целых чисел  от 0 до 25. Найти сумму элементов массива, которые являются нечетными числами.
	int  mas[15];
	int size = 0;
	for (int i = 0; i < 15; i++) {
		mas[i] = rand() % 26;
		if (mas[i] % 2 != 0) {
			size += mas[i];
		}
	}
	for (int i = 0; i < 15; i++) {
		cout << mas[i] << ' ';
	}
	cout << endl;
	cout << size << endl;
}
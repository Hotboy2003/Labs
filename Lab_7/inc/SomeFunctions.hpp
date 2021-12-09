#pragma once
#include <math.h>

namespace mt
{

	const int N_Max = 1000;

	// 1. Название функции соответствует тому, что она делает
	// 2. Одна задача - одна функция
	// 3. Разбитие на файлы
	// 4. Используйте пространства имен

	// заголовок, сигнатура
	// тип данных, название, аргументы (может не быть)
	// передача по значению
	bool isPrime(int x);

	// Обмен двух переменных
	// & - передача по ссылке
	// void - функция ничего не возвращает (процедура)
	void swap(int& a, int& b);

	// Поиск суммы цифр числа
	int sumOfDigits(int x);

	// Сортировка
	// массив передан по ссылке
	void sort(int n, int mas[N_Max]);

}

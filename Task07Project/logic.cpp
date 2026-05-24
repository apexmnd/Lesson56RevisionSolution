// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.

#include "logic.h"

int recursion(int number) {
	if (number <= 9)
	{
		return number % 2 == 0 ? 0 : 1;
	}

	return recursion(number / 10) + (number % 2 == 0 ? 0 : 1);
}

int count_of_odd_digits(int number) {
	if (number < 0)
	{
		number *= -1;
	}

	return recursion(number);
}
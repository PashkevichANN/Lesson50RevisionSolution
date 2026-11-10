// Task 05 [The reverse algorithm]
// Алгоритм обратной перестановки
// 
// Дан вектор целочисленных значений. Необходимо спроектировать эффективный 
// алгоритм и реализовать функцию, которая реверсирует элементы вектора.
// Дополнительно в функции необходимо предусмотреть механизм "защиты от дурака"
// для работы с некорректными данными.

#include "logic.h"
// O(N)
void reverse(int array[], int size) {
	if (size <= 0) {
		return;
	}
	int n = size / 2;
	int last_number = size-1;

	for (int i = 0; i < n; i++) {
		int t = array[i];
		array[i] = array[last_number];
		array[last_number] = t;
		last_number--;
	}



}
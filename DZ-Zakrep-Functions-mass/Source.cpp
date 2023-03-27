
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

void mass(int arr[], const int length) {
	std::cout<<'[';
	for (int i = 0; i < length;i++)
		std::cout <<arr[i]<< ", ";
	std::cout << "\b\b]\n";
	std::cout << std::endl;
}

void print_arr(int arr[], const int length, int num1, int num2) { // разделить функцию на две
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (num1 + 1 - num2) + num1;	
	
}
int search_index(int arr[], const int length, int n, int begin = 0) {
	for(int i = begin; i < length; i++)
		if (arr[i] == n)		
			return i;
	return -1;
}

int serch_last_index(int arr[], const int length, int n) {
	for (int i = length - 1; i >= 0; i--)
		if (arr[i] == n)
			return i;
	return -1;
}
int serch_last_index(int arr[], const int length, int n, int begin) {
	for (int i = begin; i >= 0; i--)
		if (arr[i] == n)
			return i;
	return -1;
}

int arr_min(int arr[], const int length) {
	int k, i, j;
	int min = 0;
	for (i = 0; i < length; i++) {
		k = i;
		min = arr[i];
		for(j = i +1;j<length;j++)
			if (arr[j]> min) {
				k = j;
				min = arr[j];
			}
		if (k != i) {
			arr[k] = arr[i];
			arr[i] = min;
		}
	}
	return min;
}

int arr_max(int arr[], const int length) {
	int k, i, j;
	int max = 0;
	for (i = 0; i < length; i++) {
		k = i;
		max = arr[i];
		for (j = i + 1; j < length; j++)
			if (arr[j] < max) {
				k = j;
				max = arr[j];
			}
		if (k != i) {
			arr[k] = arr[i];
			arr[i] = max;
		}
	}
	return max;
}
int mean_value(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i];
	return (double)sum/length;
}

int range(int arr[], const int length, int num1, int num2) {	
	for (int i = 0; i < length; i++)
		if(arr[i] >= num1 && arr[i] <= num2)		
	    return arr[i];
}

int main() {
	setlocale(LC_ALL, "Rus");


	std::cout << "Initial Array:\n";
	const int size = 100;	
	int array[size];

	print_arr(array, size, -100, 100);	
	mass(array, size);

	/*int n = 0;	
	std::cout << "Enter number -> ";
	std::cin >> n;
	int index = search_index(array, size, n);
	if (index != -1)
		std::cout << "Index: " << index << std::endl;
	else
		std::cout << "Error!" << std::endl;*/

	
	std::cout << "Minimum value output " << arr_min(array, size) << std::endl;

	std::cout << "Maximum value output " << arr_max(array, size) << std::endl;
	std::cout << "Average " << mean_value(array, size) << std::endl;

	int n, m;
	std::cout << "Enter the output range of the array numbers 2 numbers -> ";
	std::cin >> n>>m;
	
	std::cout << "Final array " << range(array, size, n, m);
	mass(array, size);

	
	return 0;
}
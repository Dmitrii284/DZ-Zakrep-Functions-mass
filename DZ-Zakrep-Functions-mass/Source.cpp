
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
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << std::endl;
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





int main() {
	setlocale(LC_ALL, "Rus");


	std::cout << "Initial Array:\n";
	const int size = 100;	
	int array[size];

	print_arr(array, size, -100, 100);	
	

	int n = 0;	
	std::cout << "Enter number -> ";
	std::cin >> n;
	int index = search_index(array, size, n);
	if (index != -1)
		std::cout << "Index: " << index << std::endl;
	else
		std::cout << "Error!" << std::endl;



	return 0;
}
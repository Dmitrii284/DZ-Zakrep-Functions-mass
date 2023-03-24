
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

//void mass(int arr[], const int length) {
//	std::cout<<'[';
//	for (int i = 0; i < length;i++)
//		std::cout <<arr[i]<< ", ";
//	std::cout << "\b\b]\n";
//	std::cout << std::endl;1
//}

void show_arr(int arr[], const int length, int num1, int num2) {	
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (num1 + 1 - num2) + num1;
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
	std::cout << std::endl;
}
void serch_index(int arr[], const int langth, int bigin = 0) {
	int b = 0;	
	std::cout << "Initial index -> ";
	std::cin >> b;
	for(int i =0;i<langth;i++)
		if (arr[i] == bigin) {
			b = i;
			break;		}
	std::cout << " On display its position number: " << arr[b] << " corresponds to the index " << b << '\n'<<std::endl;
}








int main() {
	setlocale(LC_ALL, "Rus");


	std::cout << "Initial Array: \n";
	const int size = 100;	
	int array[size];

	show_arr(array, size,-100,100);	
	

	int n = 0;	
	serch_index(array, size, n);

	return 0;
}
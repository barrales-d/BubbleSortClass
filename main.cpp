#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "bubbleSort.h"

std::vector<int> randomList() {
	std::vector<int> list; 
	int size = rand() % 1000;
	for (int i = 0; i < size; i++) {
		int neg = i % 2 == 0 ? -1 : 1; 
		int input = rand() % 10000 * neg; 
		list.push_back(input);
	}
	return list; 
}
int main() {
	srand(time(NULL));
	char exit = 'y';
	while(exit != 'n') {
		std::cout << "Would you like to run the Bubble sort algorithm on a random list?\n";
		std::cout << "Press n for no and y for yes.\n"; 
		std::cin >> exit; if (exit == 'n') break; 
		std::vector<int> test = randomList();
		BubbleSort arr(test); 

		std::cout << "Unsorted: Size = " << test.size() << std::endl;
		arr.print(); 

		arr.sort();
		std::cout << "Sorted: ";
		arr.print();
	}
	return 0; 
}
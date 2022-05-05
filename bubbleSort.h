#pragma once
#include <iostream>
#include <vector>

class BubbleSort {
private:
	std::vector<int> _list;
	bool _complete;

	void swap(int i, int j, std::vector<int> & rList); 
	bool isComplete(const std::vector<int>& rList);
public:
	BubbleSort(std::vector<int> arr ) : _list(arr), _complete(false) { }
	
	void print() { 
		std::cout << "[ ";
		for (int i : _list){
			if (i == _list[_list.size() - 1])
				std::cout << i << ' ';
			else
				std::cout << i << ", "; 
		}
		std::cout << "]\n";
	}
	void sort(); 
};
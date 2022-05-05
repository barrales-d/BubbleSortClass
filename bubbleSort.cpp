#include "bubbleSort.h"
void BubbleSort::swap(int i, int j, std::vector<int> & rList) {
	int temp = rList[i]; 
	rList[i] = rList[j];
	rList[j] = temp; 
}
bool BubbleSort::isComplete(const std::vector<int> & rList) {
	for (int i = 0; i < _list.size(); i++) {
		int next;
		if (i != _list.size() - 1) {
			next = i + 1;
			if (_list[i] > _list[next])
				return false;
		}
	}
	return true;
}

void BubbleSort::sort() {
	while(!isComplete(_list))
	for (int i = 0; i < _list.size(); i++) {
		int next; 
		if (i != _list.size() - 1) {
			next = i + 1;
			if (_list[i] > _list[next])
			{
				swap(i, next, _list);
			}
		}
	}
}
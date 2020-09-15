#include <iostream>
using namespace std;

#ifndef SORTING_H_
#define SORTING_H_

class Sorting {

public:

	void selectionSort(int array[], int arrayLen) {
			int tempInt = 0;
		for(int i = 0; i < arrayLen-1; i++){
			int tempPos = i;
			tempInt = array[tempPos];
			for(int j = i + 1; j < arrayLen; j++){
				if(array[j] < tempInt){
					tempPos = j;
					tempInt = array[j];
				}
			}
			tempInt = array[i];
			array[i] = array[tempPos];
			array[tempPos] = tempInt;
			
		}
    }

	void insertionSort(int array[], int arrayLen) { 
		for(int i = 1; i < arrayLen; i++){
			int x = i;
			for(int j= i-1; j >= 0; j--){
				if(array[x] < array[j]){
					int temp;
					temp = array[x];
					array[x] = array[j];
					array[j] = temp;
					x--;
				}
				else{
					break;
				}
			}
		}
	}

	void printArray(int A[], int length) {
		cout << "[";
		for (int i = 0; i < length - 1; i++)
			cout << A[i] << ", ";
		cout << A[length - 1] << "]";
	}
};

#endif

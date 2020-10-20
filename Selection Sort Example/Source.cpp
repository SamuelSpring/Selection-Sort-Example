#include <iostream>

void swap(int& x, int& y) {
	int temp;
	temp = x;
	x = y;
	y = temp;

}
void display(int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		std::cout << arr[i];
	}
	std::cout << std::endl;
}

void selectionSort(int arr[], int arrSize) {
	int minIndex;
	/*
	The selection sort is much for efficient than the bubble sort because
	rather than move elements one subscript at a time, we bypass that whole
	process by moving the intended element directly to its final destination.
	*/
	for (int position = 0; position < arrSize - 1; position++) {			//						DETAILED EXPLANATION:
		minIndex = position;												//we set our minimum index to the current position that is unsorted.
		for (int maxIndex = position + 1; maxIndex < arrSize; maxIndex++) { //then we go through each subscript until..
			if (arr[maxIndex] < arr[minIndex]) {							//we find an element that is smaller than our current "position" AKA minIndex.
				minIndex = maxIndex;										//the new min is set to the current max.
			}
		}
		if (minIndex != position) {											//then as long as the minimum and the position are not the same,
			swap(arr[minIndex], arr[position]);								//we swap the new minIndex (previously our maxIndex) with our old minIndex, AKA the "position."
		}
																			//repeat until the entire array is in ascending order.
	}


}

int main() {
	
	//TEST CODE
	
	const int arraySize = 10;
	int numArray[arraySize] = { 8, 3, 2, 6, 23, 16, 42, 3, 9, 1 };
	display(numArray, arraySize);
	selectionSort(numArray, arraySize);
	display(numArray, arraySize);
}
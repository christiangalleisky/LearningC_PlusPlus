#include "Person_Student_Inheritance.h"



int* returnAnArray(int size) {
	int *nums = new int[size];
	std::cout << "Enter " << size << " numbers." << std::endl;
	for (int i = 0; i < size; i++)
		std::cin >> nums[i];
	return nums;
}

int** returnA_2_By_2_Array(int width, int heighth) {
	int **nums = new int*[width];
	for (int i = 0; i < width; i++)
		nums[i] = new int[heighth];
	std::cout << "Enter " << (width*heighth) << " numbers." << std::endl;
	for (int i = 0; i < width; i++)
		for(int u = 0; u < heighth; u++)
			std::cin >> nums[i][u];
	return nums;
}
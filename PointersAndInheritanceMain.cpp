#include "Person_Student_Inheritance.h"

int* returnAnArray(int size);
int** returnA_2_By_2_Array(int width, int heighth);

int main() {
	
	//using a for each loop with explicit declaration of array size
	int nums0[5];
	std::cout << "Enter 5 numbers" << std::endl;
	for (int x = 0; x < 5; x++)
		std::cin >> nums0[x];
	for (int i : nums0)
		std::cout << i << std::endl;

	//using dynamic memory allocation of array with for loop
	std::cout << "How many nums to store?" << std::endl;
	int size;
	std::cin >> size;
	int *nums1 = new int[size];
	for (int i = 0; i < size; i++)
		std::cin >> nums1[i];
	for (int i = 0; i < size; i++)
		std::cout << nums1[i] << std::endl;

	//using compile time declaration of array with for each loop
	int nums2[5] = { 1,2,3,4,5 };
	for (int i : nums2)
		std::cout << i << std::endl;

	system("PAUSE");

	//multi-demensional arrays
	std::cout << "MULTIDEMENSIONAL ARRAYS" << std::endl;
	int heighth, width;
	std::cout << "Enter the hight and then the width" << std::endl;
	std::cin >> heighth;
	std::cin >> width;

	int **nums3 = new int*[width];
	for (int i = 0; i < width; i++)
		nums3[i] = new int[heighth];

	std::cout << "Begin entered values" << std::endl;
	for (int i = 0; i < heighth; i++)
		for (int x = 0; x < width; x++)
			std::cin >> nums3[i][x];
	std::cout << "Reading Western Style the values stored are..." << std::endl;
	for (int i = 0; i < heighth; i++)
		for (int x = 0; x < width; x++)
			std::cout << nums3[i][x] << std::endl;

	int g = 3;
	int *nums4 = &g;

	int *nums5 = returnAnArray(4);
	for (int i = 0; i < 7; i++) //3 interations longer than the array size
		std::cout << *(nums5 + i) << std::endl;

	int **nums6 = returnA_2_By_2_Array(2, 4); //width, heighth
	for (int i = 0; i < 2; i++)
		for (int x = 0; x < 4; x++)
			std::cout << nums6[i][x] << std::endl;

	system("PAUSE");
	
	Person p(30, "Chris", 567891234);
	Student s(007, 55, "Kev", 123456789, "ComputerScience");

	p.to_String();
	s.to_String();

	std::cout << "Population total = ";
	std::cout << s.getPopulation() << std::endl;
	std::cout << std::endl;

	system("PAUSE");

	Person *pp = new Person(22, "Fernando", 2345449876);
	Person *sp = new Student(804, 29, "Jeff", 321432156, "Computer Programming");

	return 0;
}
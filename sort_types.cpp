/******************************************************************************

                            Work of Milan Grewal

*******************************************************************************/

#include <iostream>

using namespace std;

int bubbleSort(int[], int);
int selectionSort(int[], int);
void swap(int[], int[]);

int main()
{

	int bubbleCount = 0;
	int selectionCount = 0;
	
	const int SIZE = 20;


	int array1[SIZE] = { 54, 34, 32, 4, 23, 5, 42, 456, 56, 424, 3, 543, 34, 67, 76, 65, 55, 56, 43, 45};
	int array2[SIZE] = { 54, 34, 32, 4, 23, 5, 42, 456, 56, 424, 3, 543, 34, 67, 76, 65, 55, 56, 43, 45};

	bubbleCount = bubbleSort(array1, SIZE);

	selectionCount = selectionSort(array2, SIZE);

	cout << "The bubble sort had " << bubbleCount << " exchanges." << endl;
	cout << "The selection sort had " << selectionCount << " exchanges." << endl;


	return 0;
}

int bubbleSort(int array1[], int size)
{
	int index;
	int maxVal;
	int bubbleCount = 0;

	for (maxVal = size - 1; maxVal > 0; maxVal--)
	{
		for (index = 0; index < maxVal; index++)
		{
			if (array1[index] > array1[index + 1])
			{
				swap(array1[index], array1[index + 1]);
				bubbleCount++;
			}
		}
	}

 
	return bubbleCount;
}


int selectionSort(int array2[], int size)
{
	int index;
	int MinIndex, MinVal;
	int SelectionCount = 0;

	for (int start = 0; start < (size - 1); start++)
	{
		MinIndex = start;
		MinVal = array2[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array2[index] < MinVal)
			{
				MinVal = array2[index];
				MinIndex = index;
				SelectionCount++;
			}
		}
		swap(array2[MinIndex], array2[start]);
	}

	return SelectionCount;


}


void swap(int &a, int &b)
{

	int temp = a;
	a = b;
	b = temp;
}



#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void sortArray(int[], int);
void showArray(int[], int);
int main()
{
	// Array of unsorted values
	int values[6] = { 10, 2, 30, 40, 22, 6 };
	// Display the values
	cout << "The unsorted values are:\n";
	showArray(values, 6);
	// Sort the values.
	sortArray(values, 6);
	// Display them again.
	cout << "The sorted values are:\n";
	showArray(values, 6);
	return 0;
}
void sortArray(int arr[], int size)
{
	bool swap;
	int temp;
	do
	{
		swap = false;
		for (int count = 0; count < size - 1; count++)
		{
			if(arr[count] > arr[count + 1])
			{
				temp = arr[count];
				arr[count] = arr[count + 1];
				arr[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
void showArray(int arr[], int size)
{
	for (int count = 0; count < size - 1; count++)
		cout << arr[count] << " ";
	cout << endl;
}
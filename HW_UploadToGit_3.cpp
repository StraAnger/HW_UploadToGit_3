#include <iostream>
using namespace std;
// I.����������� ��������� ������� ��� ������ � ��������� :

const size_t SIZE = 10;
//1. ����� ��������

int searchMinElement(const int array[], int arraySize) {
	int minElement;
	minElement = array[0];
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] < minElement) {
			minElement = array[i];
		}
	}
	return minElement;
}

//2. ����� ���������
int searchMaxElement(const int array[], int arraySize) {
	int maxElement;
	maxElement = array[0];
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] > maxElement) {
			maxElement = array[i];
		}
	}
	return maxElement;
}
//3. ����� ����� ��������� �������
int searchSumOfElements(const int array[], int arraySize) {
	int sumOfElements = 0;

	for (int i = 0; i < arraySize; ++i) {
		sumOfElements += array[i];
	}
	return sumOfElements;
}
//4. ����� ������������ ��������� �������
long long searchMultOfElements(const int array[], int arraySize) {
	long long multOfElements = 1;

	for (int i = 0; i < arraySize; ++i) {
		multOfElements *= array[i];
	}
	return multOfElements;
}
//5. ����� ������� ��������� �������� � �������, ���� ������ �������� � ������� ��� �� ���������� - 1
int searchIndexOfElement(const int array[], int arraySize, int inputElement) {

	int isInArray = -1;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] == inputElement) {
			return i;
		}
	}
	return isInArray;
}
//6. �������� ������� �������� � �������.���������� true, ���� ������� � ������� ����, false � ���.
int isInArray(const int array[], int arraySize, int isInArray) {
	bool inArray = 0;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] == isInArray) {
			inArray = true;
		}
	}
	return inArray;
}
//7. ������ ������� �� �����
void printOfArray(const int array[], int arraySize) {
	cout << "Current array is: ";
	for (int i = 0; i < arraySize; ++i) {
		cout << array[i] << " ";
	}
	cout << endl;
}
//8. ������� �������������� �������� �������
int searchSumDivByNumberOfElements(const int array[], int arraySize) {
	int sumOfElements = 0;

	for (int i = 0; i < arraySize; ++i) {
		sumOfElements += array[i];
	}
	return sumOfElements / arraySize;
}
//9. ������� ���������� ������������� ��������� �������
int searchNegativeElements(const int array[], int arraySize) {
	int counterNegativeElements = 0;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] < 0) {
			++counterNegativeElements;
		}
	}
	return counterNegativeElements;
}
//10. ������� ���������� ��������� �������� � ������
int searchByNumberInElements(const int array[], int arraySize, int isInArray) {
	int counterSpecificElements = 0;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] == isInArray) {
			++counterSpecificElements;
		}
	}
	return counterSpecificElements;
}
//11. ������� ���������� ������ ��������� � �������
int searchEvenElements(const int array[], int arraySize) {
	int counterEvenElements = 0;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] % 2 == 0) {
			++counterEvenElements;
		}
	}
	return counterEvenElements;
}
//12. ������� ���������� ������������� ��������� � �������
int searchPositiveElements(const int array[], int arraySize) {
	int counterPositiveElements = 0;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] > 0) {
			++counterPositiveElements;
		}
	}
	return counterPositiveElements;
}
//13. ������� ���������� �������� ��������� � �������
int searchOddElements(const int array[], int arraySize) {
	int counterOddElements = 0;
	for (int i = 0; i < arraySize; ++i) {
		if (array[i] % 2 != 0) {
			++counterOddElements;
		}
	}
	return counterOddElements;
}
//14. �������� �������� �� ������ ��������������� �� �����������.���� ������ ������������, �� ���������� true, ����� - false.

int isArraySorted(const int array[], int arraySize) {
	bool isSorted = false;

	for (int i = 1; i < arraySize; ++i) {
		if (array[i] > array[i - 1]) {
			isSorted = true;
		}
		else {
			isSorted = false;
			break;
		}
	}
	return isSorted;
}


int main() {

	int array[SIZE];
	int inputNumber, inputNumber2, inputNumber3;

	cout << "Enter an INT array of " << SIZE << " elements, please: " << endl;
	for (int i = 0; i < SIZE; ++i) {
		cin >> array[i];
	}

	cout << "Enter number to search the entrance of it in array: ";
	cin >> inputNumber;
	cout << "Enter number to search INDEX in array: ";
	cin >> inputNumber2;
	cout << "Enter number to search in array: ";
	cin >> inputNumber3;

	cout << "Min element of array is: " << searchMinElement(array, SIZE) << endl;
	cout << "Max element of array is: " << searchMaxElement(array, SIZE) << endl;
	cout << "Sum of array elements is: " << searchSumOfElements(array, SIZE) << endl;
	cout << "Multiplication of array elements is: " << searchMultOfElements(array, SIZE) << endl;
	cout << "Index of " << inputNumber2 << " in array is: " << searchIndexOfElement(array, SIZE, inputNumber2) << endl;
	cout << "Is " << inputNumber3 << " in array? : " << isInArray(array, SIZE, inputNumber3) << endl;


	printOfArray(array, SIZE);
	cout << "Integer division by number of elements is: " << searchSumDivByNumberOfElements(array, SIZE) << endl;
	cout << "Number of negative elements is: " << searchNegativeElements(array, SIZE) << endl;
	cout << "Number of entrance " << inputNumber << " in array is: " << searchByNumberInElements(array, SIZE, inputNumber) << endl;
	cout << "Number of even elements is: " << searchEvenElements(array, SIZE) << endl;
	cout << "Number of positive elements is: " << searchPositiveElements(array, SIZE) << endl;
	cout << "Number of odd elements is: " << searchOddElements(array, SIZE) << endl;
	cout << "Is it true that array is sorted upwards? : " << isArraySorted(array, SIZE) << endl;
	return 0;
}
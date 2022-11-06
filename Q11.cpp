#include <iostream>
using namespace std;

void split(int arr[], int size, int split) {

	for (int i = 0; i < split; i++) {
		int a = arr[0];

		for (int j = 0; j < size - 1; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = a;
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << "\n";
	}
}

int main() {
	//Split the Array and Add First Part to the End
	int arr[50], size ,split_index;

	cout << "Enter the value of n\n";
	cin >> size;

	cout << "Enter the numbers\n";

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << endl;

	cout << "Enter the position of the element to split the array\n";
	cin >> split_index;

	split(arr, size, split_index);

	return 0;
}
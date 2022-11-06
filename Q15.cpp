//#include <iostream>
//using namespace std;
//
//void duplicate(int arr[], int size) {
//
//	cout << "duplicate elements present in the given array are\t";
//
//	for (int i = 0; i < size; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] == arr[j]) {
//				cout << arr[j] << " ";
//			}
//		}
//	}
//}
//
//int main() {
//	//print repeated elements of array
//	int arr[50], size, count = 0;
//	
//	cout << "Enter the size of the array:\t";
//	cin >> size;
//	
//	cout << "Enter the elements of the array:\n";
//	
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//
//	duplicate(arr, size);
//
//	return 0;
//}
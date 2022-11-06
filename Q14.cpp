//#include <iostream>
//using namespace std;
//
//void sort(int arr[], int size) {
//	int temp;
//
//	for (int i = 0; i < size; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] > arr[j]) {
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//
//int main() {
//	//merge 2 sorted arrays
//	int arr1[50], arr2[50], arr3[50], size1, size2, total = 0;
//
//	cout << "Enter the size of the first array:\t";
//	cin >> size1;
//
//	cout << "Enter the elements of the first array:\n";
//
//	for (int i = 0; i < size1; i++) {
//		cin >> arr1[i];
//	}
//
//	cout << "Enter the size of the second array:\t";
//	cin >> size2;
//
//	cout << "Enter the elements of the second array:\n";
//
//	for (int i = 0; i < size2; i++) {
//		cin >> arr2[i];
//	}
//
//	total = size1 + size2;
//
//	for (int i = 0; i < total; i++) {
//		if (i < size1) {
//			arr3[i] = arr1[i];
//		}
//		else {
//			arr3[i] = arr2[i - size1];
//		}
//	}
//
//	sort(arr3, total);
//
//	cout << "The merged array is:\n";
//
//	for (int i = 0; i < total; i++) {
//		cout << arr3[i] << " ";
//	}
//
//	return 0;
//}
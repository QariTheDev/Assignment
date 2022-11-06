//#include <iostream>
//using namespace std;
//
//void segregate(int arr[], int size) {
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
//
//	cout << "Segregated Array is\t";
//
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//}
//
//int main() {
//	//Segregate 0s and 1s in an Array
//	int arr[6] = { 0, 1, 0, 1, 1, 0 };
//	int size = sizeof(arr) / sizeof(int);
//	
//	segregate(arr, size);
//
//	return 0;
//}
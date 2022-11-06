//#include <iostream>
//using namespace std;
//
//int main() {
//	//Max diff between 2 elements
//	const int arr_size = 5;
//	int arr[arr_size],largest, smallest;
//
//	for (int i = 0; i < arr_size; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < arr_size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	largest = arr[0];
//	for (int i = 1; i < arr_size; i++) {
//		if (largest < arr[i]) {
//			largest = arr[i];
//		}
//	}
//	smallest = arr[0];
//	for (int i = 1; i < arr_size; i++) {
//		if (smallest > arr[i]) {
//			smallest = arr[i];
//		}
//	}
//	
//	cout << "The Max Difference is " << largest - smallest;
//
//	return 0;
//}
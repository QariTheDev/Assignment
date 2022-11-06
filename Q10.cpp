//#include <iostream>
//using namespace std;
//
//void mode(int arr[], int size) {
//	int count = 0, max_count = 0, max_val = 0;
//
//	for (int i = 0; i < size; i++) {
//		count = 0;
//		for (int j = 0; j < size; j++) {
//			if (arr[i] == arr[j]) {
//				count++;
//			}
//		}
//
//		if (count > max_count) {
//			max_count = count;
//			max_val = arr[i];
//		}
//	}
//
//	cout << "Mode: " << max_val;
//
//}
//
//int main() {
//	//Finding mode of an Array
//	int arr[50], size;
//
//	cout << "Enter the limit\n";
//	cin >> size;
//
//	cout << "Enter the set of numbers\n";
//
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//
//	cout << "Given Array = ";
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	mode(arr, size);
//
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//void sort(int arr[], int size) {
//	int temp;
//	for (int i = 0; i < size; i++) {
//		for (int j = i + 1; j < size; j++) {
//			if (arr[i] > arr[j]) {
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << "\n";
//	}
//}
//
//void insert(int arr[], int size) {
//	int num, pos = 0;
//
//	cout << "Enter the number to be inserted\t";
//	cin >> num;
//
//	for (int i = 0; i < size; i++) {
//		if (arr[i] > num) {
//			break;
//		}
//		pos++;
//	}
//	for (int i = size; i > pos; i--) {
//		arr[i] = arr[i - 1];
//	}
//	arr[pos] = num;
//
//	cout << "Final List is\n";
//	for (int i = 0; i < size + 1; i++) {
//		cout << arr[i] << "\n";
//	}
//}
//
//int main() {
//	//insert element in sorted array
//	int arr[50], size;
//
//	cout << "Enter the size of an array\n";
//	cin >> size;
//
//	cout << "Enter the elements\n";
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//
//	cout << "Sorted List is\n";
//	sort(arr, size);
//
//	insert(arr, size);
//
//	return 0;
//}
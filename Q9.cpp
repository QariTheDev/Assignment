//#include <iostream>
//using namespace std;
//
//int main() {
//	//odd occurring elements
//	int arr[50], size, count = 0;
//
//	cout << "Enter the size of array\t";
//	cin >> size;
//
//	arr[size];
//
//	cout << "Enter " << size << " elements of an array\n";
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < size; i++) {
//		int j;
//		count = 0;
//		for (j = 0; j < i; j++) {
//			if (arr[i] == arr[j]) {
//				count++;
//			}
//			if (count % 2 != 0 && count > 1) {
//				cout << arr[i] << " occurs " << count << " times ";
//				break;
//			}
//		}
//	}
//
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//
//int main() {
//	//delete element from index
//	int size, arr[50], index;
//
//	cout << "Enter the size of the array\t";
//	cin >> size;
//
//	for (int i = 0; i < size; i++) {
//		cout << "\narr[" << i << "] = ";
//		cin >> arr[i];
//	}
//
//	cout << "\nEnter the index of the element to be deleted:  ";
//	cin >> index;
//
//	if (index < 0 || index >= size) {
//		cout << "\nDeletion is not possible in the array.";
//	}
//	else {
//		for (int i = index; i < size; i++) {
//			arr[i] = arr[i + 1];
//		}
//
//		cout << "The array after deleting the element is :  ";
//		for (int i = 0; i < size - 1; i++) {
//			cout << arr[i] << " ";
//		}
//	}
//
//
//
//
//	return 0;
//}
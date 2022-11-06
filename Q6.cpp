//#include <iostream>
//using namespace std;
//
//int main() {
//	//non-repeated elements of array
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
//    cout << "\nThe array after removing duplicates is: ";
//    for (int i = 0; i < size; i++){
//
//        int j;
//
//        for (j = 0; j < i; j++) {
//            if (arr[i] == arr[j]) {
//                break;
//            }
//        }
//        if (i == j) {
//            cout << arr[i] << " ";
//        }
//    }
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//
//int missing_num(int arr[], int n) {
//	int N = n + 1;
//	int total = ((N) * (N + 1)) / 2;
//
//	for (int i = 0; i < n; i++) {
//		total -= arr[i];
//	}
//	
//	return total;
//}
//
//int main() {
//	//missing elements of array
//	int arr[50], size;
//
//	cout << "Enter the size of array\t";
//	cin >> size;
//
//	arr[size];
//
//	cout << "Enter elements of an array\n";
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//	
//	int missing = missing_num(arr,size);
//	cout << "Missing Element is : " << missing;
//	
//    return 0;
//}
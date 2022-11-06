//#include <iostream>
//using namespace std;
//
//
//int missing_num(int arr[], int n) {
//	int total = 1;
//
//	for (int i = 2; i <= n + 1; i++) {
//		total += i;
//		total -= arr[i - 2];
//	}
//	
//	return total;
//}
//
//int main() {
//	//missing elements of array (2nd method)
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
//#include <iostream>
//using namespace std;
//
//void maxSubArray(int arr[], int size) {
//	int max_sum = -100000000, start = 0, end = 0;
//
//	for (int i = 0; i < size; i++) {
//		int current_sum = 0;
//
//		for (int j = i; j < size; j++) {
//			current_sum += arr[j];
//			if (max_sum < current_sum) {
//				max_sum = current_sum;
//				start = i;
//				end = j;
//			}
//		}
//	}
//
//	cout << "\n\nThe largest contiguous subarray is ";
//
//	for (int i = start; i <= end; i++) {
//		cout << arr[i] << " ";
//	}
//
//	cout << "\nThe sum of the largest contiguous subarray is " << max_sum << endl;
//
//}
//
//int main() {
//	//Largest Sum of Contiguous Subarray of an Array
//	int arr[50], size;
//	
//	cout << "Type the length of the array\n";
//	cin >> size;
//	
//	cout << "type the elements of the array\n";
//	
//	for (int i = 0; i < size; i++) {
//		cin >> arr[i];
//	}
//
//	maxSubArray(arr, size);
//
//	return 0;
//}
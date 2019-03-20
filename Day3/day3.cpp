#include<iostream>
using namespace std;
int binser( int *arr, int value, int high, int low = 0)
{
	if (low > high)
		return -2;
	int mid = (low + high) / 2;

	if (arr[mid] > value)
		return binser(arr, value, mid - 1, low);
	else if (arr[mid] < value)
		return binser(arr, value, high, mid + 1);
	else return mid;
}
int main() {
	int rus = 0;
	int N;
	
	int M;
	
	cin >> N;
	int* arrN = new  int[N];
	for (int i = 0;i < N;i++) {
		cin >> arrN[i];
	}
	cin >> M;
	int* arrM = new int[M];
	for (int i = 0;i < M;i++) {
		cin >> arrM[i];
	}
	for (int i = 0;i < M;i++) {
		cout << binser(arrN, arrM[i], N) + 1 << " ";
	}
	delete []arrM;
	delete []arrN;
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	cout << "정수 5개 입력>>";

	int* arr = new int[5];
	double sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	double average = sum / 5;
	cout << "평균 " << average << endl;

	delete[] arr;

}
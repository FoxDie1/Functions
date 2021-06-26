#include<iostream>
using namespace std;

/*
-----------------------------------------------------------
HomeWork:
�������� �������:
??? Input(???);			//��������� ������ �������� ��������� ������� � ����������;
??? PrintReverse(???);	//������� ������ �� ����� � �������� ������� - �� ���������� �������� � �������
??? Sum(???);			//���������� ����� ��������� �������
??? Avg(???);			//���������� ������� �������������� ��������� �������
??? minValueIn(???);	//���������� ����������� �������� �� �������
??? maxValueIn(???);	//���������� ������������ �������� �� �������

��� ��� ������� ����� ������ ����� �����, � ���� �� �������.
-----------------------------------------------------------
*/

#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Input(int arr[], const int n);
void PrintReverse(int arr[], const int n);
double Sum (int arr[], const int n);
double Avg(int arr[], const int n);
int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	Input(arr, n);
}

 void Input(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
		cin >> arr[i];
	}
	cout << endl;
}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	PrintReverse(arr, n);
}
void PrintReverse (int arr[], const int n)
{
	for (int i =n-1; i >=0; i--)
	{
		cout <<  arr[i] << tab;
	}
	cout << endl;
}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
		cin >> arr[i];
	}	
	cout<<"Summa:"<<Sum(arr, n);
}
double Sum(int arr[], const int n)
	{
		double Sum = 0;
		for (int i = 0; i < n; i++)
		{
			Sum=Sum+arr[i];
		}
		return Sum;
	}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
		cin >> arr[i];
	}
	cout<<Avg(arr, n);
}
double Avg(int arr[], const int n)
{
	double sum = 0;
	double avg = 0;
	for (int i = 0; i <n; i++)
	{
		sum = sum + arr[i];
	}

	return avg=sum/n;
}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
		cin >> arr[i];
	}
	cout<<minValueIn(arr, n);
}

int minValueIn(int arr[], const int n)
{
	int minValue = arr[0];
	if (minValue > arr[1])
		minValue = arr[1];
	if (minValue > arr[2])
		minValue = arr[2];
	if (minValue > arr[3])
		minValue = arr[3];
	if (minValue > arr[4])
		minValue = arr[4];

	return minValue;
}*/

/*void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	for (int i = 0; i < n; i++)
	{
		cout << "������� �������� ��������� �������:" << arr[i] << tab;
		cin >> arr[i];
	}
	cout << maxValueIn(arr, n);
}

int maxValueIn(int arr[], const int n)
{
	int maxValue = arr[0];
	if (maxValue < arr[1])
		maxValue = arr[1];
	if (maxValue < arr[2])
		maxValue = arr[2];
	if (maxValue < arr[3])
		maxValue = arr[3];
	if (maxValue < arr[4])
		maxValue = arr[4];

	return maxValue;
}*/

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n] = { 1, 2, 3,4,5 };
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Summa:" << Sum(arr, n)<<endl;
	cout << "������� ��������������:" << Avg(arr, n)<<endl;
	cout<<"������������ ��������:"<<minValueIn(arr, n)<<endl;
	cout <<"������������ ��������:"<<maxValueIn(arr, n)<<endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
		//������� rand () ���������� ����� � ���������� �� 0 �� 32767
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

double Sum(int arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}

/*double Avg(int arr[], const int n)
{
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return avg = sum / n;
}*/

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

/*int minValueIn(int arr[], const int n)
{
	int minValue = arr[0];
	if (minValue > arr[1])
		minValue = arr[1];
	if (minValue > arr[2])
		minValue = arr[2];
	if (minValue > arr[3])
		minValue = arr[3];
	if (minValue > arr[4])
		minValue = arr[4];

	return minValue;
}*/

int minValueIn(int arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}int maxValueIn(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
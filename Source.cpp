#include<iostream>
#include <conio.h>
using namespace std;

/*
-----------------------------------------------------------
HomeWork:
Написать функции:
??? Input(???);			//Позволяет ввести значения элементов массива с клавиатуры;
??? PrintReverse(???);	//Выводит массив на экран в обратном порядке - от последнего элемента к первому
??? Sum(???);			//Возвращает сумму элементов массива
??? Avg(???);			//Возвращает среднее арифметическое элементов массива
??? minValueIn(???);	//Возвращает минимальное значение из массива
??? maxValueIn(???);	//Возвращает максимальное значение из массива

Все эти функции можно писать прямо здесь, в этом же проекте.
-----------------------------------------------------------
*/

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(short arr[], const int n);
void Input(int arr[], const int n);
void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);
void PrintReverse(float arr[], const int n);
void PrintReverse(char arr[], const int n);
void PrintReverse(short arr[], const int n);
double Sum (int arr[], const int n);
double Sum (double arr[], const int n);
float Sum (float arr[], const int n);
char Sum (char arr[], const int n);
short Sum (short arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
char Avg(char arr[], const int n);
short Avg(short arr[], const int n);
int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
char minValueIn(char arr[], const int n);
short minValueIn(short arr[], const int n);
int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);
char maxValueIn(char arr[], const int n);
short maxValueIn(short arr[], const int n);

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
		cout << "Введите значение элементов массива:" << arr[i] << tab;
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
		cout << "Введите значение элементов массива:" << arr[i] << tab;
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
		cout << "Введите значение элементов массива:" << arr[i] << tab;
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
		cout << "Введите значение элементов массива:" << arr[i] << tab;
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
		cout << "Введите значение элементов массива:" << arr[i] << tab;
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
	cout << "Среднее арифметическое:" << Avg(arr, n)<<endl;
	cout<<"Миниммальное значение:"<<minValueIn(arr, n)<<endl;
	cout <<"Максимальное значение:"<<maxValueIn(arr, n)<<endl;

	double d_arr[n];//double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "сумма элементов массива:" << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(d_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(d_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(d_arr, n) << endl;

	float f_arr[n];//float array
	FillRand(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "сумма элементов массива:" << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(f_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(f_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(f_arr, n) << endl;
	
	char c_arr[n] = { 40,31,7,25,23 };//char array
	Print(c_arr, n);
	PrintReverse(c_arr, n);
	cout << "сумма элементов массива:" << Sum(c_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(c_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(c_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(c_arr, n) << endl;

	short s_arr[n];
	FillRand(s_arr, n);
	Print(s_arr, n);
	PrintReverse(s_arr, n);
	cout << "сумма элементов массива:" << Sum(s_arr, n) << endl;
	cout << "Среднее арифметическое:" << Avg(s_arr, n) << endl;
	cout << "Миниммальное значение:" << minValueIn(s_arr, n) << endl;
	cout << "Максимальное значение:" << maxValueIn(s_arr, n) << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand()%100)/10;
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 100)/10;
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] =char (rand() % 100);
		//Функция rand () возвращает число в промежутке от 0 до 32767
	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] =short (rand() % 100);
		//Функция rand () возвращает число в промежутке от 0 до 32767
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
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i =0 ; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(short arr[], const int n)
{
	for (int i =0 ; i < n; i++)
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
void PrintReverse(double arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void PrintReverse(float arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void PrintReverse(char arr[], const int n)
{
	for (int i = n-1; i >=0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void PrintReverse(short arr[], const int n)
{
	for (int i = n-1; i >=0; i--)
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
double Sum(double arr[], const int n)
{
	double Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}
float Sum(float arr[], const int n)
{
	float Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}
char Sum(char arr[], const int n)
{
	char Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}
short Sum(short arr[], const int n)
{
	short Sum = 0;
	for (int i = 0; i < n; i++)
	{
		Sum = Sum + arr[i];
	}
	return Sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}
float Avg(float arr[], const int n)
{
	return Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return Sum(arr, n) / n;
}
short Avg(short arr[], const int n)
{
	return Sum(arr, n) / n;
}

int minValueIn(int arr[], const int n)
{
	int minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}
double minValueIn(double arr[], const int n)
{
	double minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}
float minValueIn(float arr[], const int n)
{
	float minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}
char minValueIn(char arr[], const int n)
{
	char minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}
short minValueIn(short arr[], const int n)
{
	short minValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minValue)minValue = arr[i];
	}
	return minValue;

}

int maxValueIn(int arr[], const int n)
{
	int maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
double maxValueIn(double arr[], const int n)
{
	double maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
float maxValueIn(float arr[], const int n)
{
	float maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
char maxValueIn(char arr[], const int n)
{
	char maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}
short maxValueIn(short arr[], const int n)
{
	short maxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxValue)maxValue = arr[i];
	}
	return maxValue;
}

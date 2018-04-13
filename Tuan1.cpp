#include <iostream>
#include<cstring>
#include<cmath>
#include<stdlib.h>
using namespace std;
void test()
{
    int n = 3;
    int m = 7;
    cout<<m%n;
}

void quickSort(long long Data[], long long l , long long r)
{
	if (l <= r)
	{
		long long key = Data[(l+r)/2];
		long long i = l;
		long long j = r;

		while (i <= j)
		{
			while (Data[i] < key)
            {
				i++;
            }
			while (Data[j] > key)
            {
				j--;
            }

			if (i <= j)
			{
				swap(Data[i], Data[j]);
				i++;
				j--;
			}
		}

		if (l < j)
        {
            quickSort(Data, l, j);
        }
		if (r > i)
        {
            quickSort(Data, i, r);
        }
	}
}

int loop(int a, int b)
{
    if(a == b) return a;
    if(a < b)
    {
        b = b - a;
        return loop(a, b);
    }
    if(a > b)
    {
        a = a - b;
        return loop(a, b);
    }
}

void task1()
{
	string s;
	getline(cin,s);
	for(int i = s.length() - 1; i >= 0; i--)
	{
		cout<<s[i];
	}
}
void task2()
{
	class Point
	{
		float x;
		float y;
	};
	class Line
	{
		float pointOne;
		float pointTwo;
	};
}

void task3()
{
	int x1, x2;
	cin>>x1>>x2;
	int answer = loop(x1, x2);
	cout<<answer;
}

void task4()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    long long left = arr[0];
    long long right = arr[n-1];
    quickSort(arr, 0, n-1);
    for (long long i = n - 1; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
}
void task5()
{
	int n;
	cin>>n;
	int temp;
	int max, min;
	for(int i = 0;i < n;i++)
	{
		cin>>temp;
		if( i == 0)
		{
			max = temp;
			min = temp;
		}
		if(max < temp) max = temp;
		if(min > temp) min = temp;
	}
	cout<<max + min;
}
int main()
{
    //task5();
    //test();
}

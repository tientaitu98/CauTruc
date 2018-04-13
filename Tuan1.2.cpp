#include <iostream>

using namespace std;

class Point
	{
	public:
		int xpos, ypos;
	};

class Line
	{
	public:
		Point fisrt;
		Point last;
	};
void bai2()
{
	Point arr[4];
	int x, y;
	for(int i = 0; i < 4;i++)
	{
		cin >> x >> y;
		arr[i].xpos = x;
		arr[i].ypos = y;
	}s

}
void bai4()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	for(int i = 0; i< n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];
			}
		}
	}
	for(int i = 0; i< n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void bai5()
{
	int n = 5;
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
	bai2();
}


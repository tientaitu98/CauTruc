#include <iostream>
using namespace std;
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
void hIndex()
{
    long long n, h = 0;
    cin >> n;
    long long* arr = new long long[n + 1];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i = n - 1; i >= 0; i--)
    {
        if(arr[i] > h)
        {
            h += 1;
        }
        else
        {
            break;
        }
    }
    cout << h;
}
char intergeToArray(int i)
{
    switch(i)
    {
        case 0:
            {
                return '0';
            }
        case 1:
            {
                return '1';
            }
        case 2:
            {
                return '2';
            }
        case 3:
            {
                return '3';
            }
        case 4:
        {
            return '4';
        }
        case 5:
        {
            return '5';
        }
        case 6:
        {
            return '6';
        }
        case 7:
        {
            return '7';
        }
        case 8:
        {
            return '8';
        }
        case 9:
        {
            return '9';
        }
    }
}
int arrayToInterger(char c)
{
    if(c == '0') return 0;
    if(c == '1') return 1;
    if(c == '2') return 2;
    if(c == '3') return 3;
    if(c == '4') return 4;
    if(c == '5') return 5;
    if(c == '6') return 6;
    if(c == '7') return 7;
    if(c == '8') return 8;
    if(c == '9') return 9;
}
void united()
{
    long n;
    int max = 0;
    int temp1, temp2;
    int answer[10000];
    for(int i = 0; i < 10000; i++)
    {
        answer[i] = 0;
    }
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>temp1>>temp2;
        for(int i = temp1; i <= temp2; i++)
        {
            answer[i] = 1;
        }
        if (max < temp2)
        {
            max = temp2;
        }
    }
    int countNumber = 0;
    if(answer[0] == 0)
    {
        for(int i = 1; i <= max + 1; i++)
        {
            if(answer[i] == 1 ) countNumber++;
            else
            {
                cout<< i - countNumber << " " << i - 1 << endl;
                countNumber = 0;
            }
        }
    }
    else
    {
        for(int i = 0; i <= max + 1; i++)
        {
            if(answer[i] == 1 ) countNumber++;
            else
            {
                cout<< i - countNumber << " " << i - 1 <<endl;
                countNumber = 0;
            }
        }
    }
}

void sortArray()
{
    long long n;
    cin>>n;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    for (long long i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int sumCharArray(long long x)
{
    int sum = 0;
    if(x == 0) return 0;
    else
    {
        while(x != 0)
        {
            sum += (x%10);
            x = x/10;
        }
        return sum;
    }
}
void quickSortSpecial(long long Data[], long long l , long long r)
{
	if (l <= r)
	{
		long long key = sumCharArray(Data[(l+r)/2]);
		long long i = l;
		long long j = r;

		while (i <= j)
		{
			while (sumCharArray(Data[i]) < key)
            {
				i++;
            }
			while (sumCharArray(Data[j]) > key)
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
            quickSortSpecial(Data, l, j);
        }
		if (r > i)
        {
            quickSortSpecial(Data, i, r);
        }
	}
}

long long arr1[1000001];
long long arr2[1000001];
void sortCharArray()
{
    int n;
    cin >> n;
    int dem = 0;
	for(int i = 0; i < n; i++)
    {
		cin >> arr1[i] ;
		arr2[dem++] = sumCharArray(arr1[i]) ;
	}
	for(int i = 0; i < n; i++)
    {
		for(int j = i+1; j < n; j++)
        {
			if(arr2[i] > arr2[j])
			{
				swap(arr2[i],arr2[j]);
				swap(arr1[i],arr1[j]);
			}
            else if(arr2[i] == arr2[j])
            {
                if(arr1[i] > arr1[j])
                {
                    swap(arr1[i],arr1[j]) ;
                }
            }
		}
	}
	for(int i = 0;i < n; i++) cout << arr1[i] << endl ;
}
bool checkString(string s1, string s2)
{
    if(s1.length() != s2.length()) return false;
    else
    {
        int arr1[26], arr2[26];
        for(int i = 0; i < 26; i++)
        {
            arr1[i] = 0;
            arr2[i] = 0;
        }
        for(int i = 0; i < s1.length(); i++)
        {
            arr1[(int)(s1[i]) - 97] ++;
            arr2[(int)(s2[i]) - 97] ++;
        }
        for(int i = 0; i < 26; i++)
        {
            if(arr1[i] != arr2[i])
            {
                return false;
            }
        }
        return true;
    }
}
void stringSpecial()
{
    int n;
    string s1, s2;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>s1>>s2;
        if (checkString(s1, s2)) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
}
void draft()
{
    cout<<sumCharArray(12992);
}
int main()
{
    sortCharArray();
}

#include<iostream>
#include<stack>
#include<string>
#include<queue>

#include<algorthm>

#define max 200
using namespace std;
bool meet = false;
void bai1()
{
	string s;
	int n, i = 0, time = 0;

	cin>>s;
	cin.ignore();
	cin>>n;
	cout<<s<<" "<<n<<endl;
	stack<char> a;

    for(int i = 0; i < s.lenght(); i++)
    {
        cout<<a.top()<<endl;
        if(s[i] == 'V')
        {
            a.push(s[i]);
        }
        else if(!a.empty())
        {
            a.pop() ;
            n--;
        }
        if(n == 0) cout<<i+1;

    }
    cout<<time;
}
void bfs(long i,long n,long x, long a[max][max],bool check[200])
{
        queue<int> q;
        q.push(i);
        check[i]=true;
        long dem=0;
        while(!q.empty())
        {
            long k = q.front();
            for(int j = 1; j <= n; j++)
            {
                if(a[k][j] == 1 && check[j] = =false && j <= x)
                {
	                q.push(j);
	                check[j] = true;
	                dem++;
            	}
        	}
            q.pop();
        }
        cout<<dem+1;
}
void input(long &n,long &m,long &x,long a[max][max])
{
        cin>>n>>m>>x;
        int u,v;
        for(int i=1;i<=n;i++)
        {
        	for(int j=1;j<=n;j++)
        	{
                a[i][j]=0;
        	}
        }
        for(int i=1;i<=m;i++)
        {
                cin>>u>>v;
                a[u][v] = 1;
                a[v][u] = 1;
        }
}
void bai3()
{
    long n;
    long m;
    long x;
    long a[max][max];
    bool check[max];
    long dem=0;
    input(n,m,x,a);
    int min=100000;
    for(int i=1;i<=n;i++)
    {
        check[i]=false;
        if(i<min)
        {
            min=i;
        }
    }
    bfs(min,n,x,a,check);
}

void quickSort(int  Data[],  int l ,  int r)
{
	if (l <= r)
	{
		int  key = Data[(l+r)/2];
		int  i = l;
		int  j = r;

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
void bai2()
{
	int n, m;
	cin>>n>>m;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	quickSort(arr, 0, n-1);
	int sum = 0;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if( sum >= m) break;
		else if(arr[i] > 0)
		{
			sum += arr[i];
			count ++;
		}
	}
	cout<<count;
}
int main()
{
    bai3();
}




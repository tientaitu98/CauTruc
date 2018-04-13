#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int value;
    Node* next;
    Node* pre;
};

class LinkedList
{
    public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        listSize = 0;
    }
    void addNode(int value)
    {
        Node* p = new Node;
        p->value = value;
        p->next = NULL;

        if(head == NULL)
        {
            head = p;
            tail = p;
            listSize++;
        }
        else
        {
            tail->next = p;
            tail = p;
            listSize++;
        }
    }
    void deleteNodeTail()
    {
        if(head == NULL) listSize = 0;
        else if(head == tail)
        {
            delete head;
            head = NULL;
            listSize--;
        }
        else
        {
            Node* cur = head;
            while(cur->next->next != NULL)
            {
                cur = cur->next;
            }
            tail = cur;
            tail->next = NULL;
            listSize--;
        }
    }
    void deleteNodeHead()
    {
        if(head == NULL) listSize = 0;
        else if(head == tail)
        {
            delete head;
            head = NULL;
            listSize--;
        }
        else
        {
            head = head->next;
        }
    }
    int getSize()
    {
        return listSize;
    }
    void printAll()
    {
        Node* tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->value << " ";
            tmp = tmp->next;
        }
    }
    int getHead()
    {
        return head->value;
    }
    int getTail()
    {
        return tail->value;
    }
    private:
    Node *head;
    Node *tail;
    int listSize;
};
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
void test1()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    if(n < 3)
    {
        for(int i = 0; i < n; i++)
        {
            cout<<arr[i];
        }
    }
    else
    {
        for(int i = n - 1; i > n - 4; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i = 0; i < 3 ; i++)
        {
            cout<<arr[i]<<" ";
        }
    }
}
void test2()
{
    int n;
    cin>>n;
    int arr[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr, 0, n-1);
    for(int i = 1; i < n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            continue;
        }
        else count++;
        if( i == n-1 && count == 0)
        {
            count--;
        }
    }
    cout<<++count;
}
void test3()
{
    LinkedList a = LinkedList();
    int Q, type, value;
    cin >> Q;
    for (int i=0; i < Q; i++)
        {
            cin >> type;
            switch(type)
            {
            case 1:
                cin >> value;
                a.addNode(value);
                break;
            case 2:
                a.deleteNodeTail();
                break;
            case 3:
                cout << a.getSize() << endl;
                break;
            }
        }
}
void simpleQueue()
{
    LinkedList a = LinkedList();
    int Q, type, value;
    cin >> Q;
    for (int i=0; i < Q; i++)
        {
            cin >> type;
            switch(type)
            {
            case 1:
                cin >> value;
                break;
            case 2:
                a.deleteNodeHead();
                break;
            case 3:
                cout << a.getHead() << endl;
                break;
            }
        }
}
void simpleStack()
{
    LinkedList a = LinkedList();
    int Q, type, value;
    cin >> Q;
    for (int i=0; i < Q; i++)
        {
            cin >> type;
            switch(type)
            {
            case 1:
                cin >> value;
                a.addNode(value);
                break;
            case 2:
                a.deleteNodeTail();
                break;
            case 3:
                cout << a.getTail() << endl;
                break;
            }
        }
}

bool isValid(string s, int n)
{
    stack<char> a;
    int i;
    for(i = 0; i < n; ++i)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            a.push(s[i]);
        }
        else
        {
         //   char c;
            switch(s[i])
            {
                case ')':
                	{
                    char c = a.top() ;
                    a.pop() ;
                    if( c == '[' || c == '{')
                    {
						return false ;
					}
					break;
					}
                case ']':
                	{
                	char c = a.top() ;
                    a.pop() ;
                    if( c == '(' || c == '{')
                    {
						return false ;
					}
                    break;
                    }
                case '}':
                	{
                	char c = a.top() ;
                    a.pop() ;
                    if( c == '[' || c == '(')
                    {
						return false ;
					}
                    break;
                    }
            }
        }
    }
    if(a.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
void stringValid()
{
    int i, T;
    string s;
    cin >> T;
    for(i = 0; i < T; ++i)
    {
    	cin >> s;
	    int n = s.length();
	    if(n % 2 != 0)
	    {
	    	cout << "no" << endl;
		}
		else if(s == " ")
		{
			cout << "yes" << endl;
		}
		else
		{
			if(isValid(s, n))
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
}

void twoStack()
{
    int n,m,x;
	cin>>n>>m>>x;
	int a[n],b[m];
	int cA[n+1];//cong don^`
	cA[0]=0;
	int imax=-1,j=0;
	int sum=0;
	int resMax=imax+1;
	for(int i=0;i<n;i++)
    {
		cin>>a[i];
		cA[i+1]=cA[i]+a[i];
		if(cA[i+1]<=x)
		{
			sum=cA[i+1];
			imax=i;
		}
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	while(sum<=x && j<m)
	{
		sum+=b[j];
		while(sum>x && imax>=0)
		{
			sum-=a[imax];
			imax--;
		}
		if(sum<=x && (imax+j+2)>resMax)
		{
			resMax=imax+j+2;
		}
		j++;
	}
	cout<<resMax;
}

void sumEqual()
{
    int  n , m, k ;
    cin >> n >> m >>  k;
    int arr1[100000] , arr2[100000] , arr3[100000] ;
    int sum1 = 0  , sum2 = 0 , sum3 = 0 ;
    for(int i = 0; i < n; i++ )
    {
        cin >> arr1[i] ;
        sum1 += arr1[i] ;
    }
    for(int i = 0; i < m; i++ )
    {
        cin >> arr2[i] ;
        sum2 += arr2[i] ;
    }
    for(int i = 0;i < k ;i++ )
    {
        cin >> arr3[i] ;
        sum3+=arr3[i] ;
    }
    int d = 0 ;
    int i1= 0 , j1 =0 , k1= 0 ;
    bool check = false;
    while( check == false)
    {
        if(i1 == n-1|| j1 == m-1 || k1 == k-1 )
        {
            check = true;
        }
        if(sum1 == sum2 && sum1 == sum3 ) {
            cout << sum1 << endl;
            check = false;
        }
        else if(sum1 >= sum2 && sum1 >= sum3 && i1+1 < n  )
        {
            sum1 -= arr1[i1++] ;
        }
        else if(sum2 >= sum1  && sum2 >= sum3 && j1 + 1 < m )
        {
            sum2 -= arr2[j1++] ;
        }
        else if(sum2 >= sum1 && sum2 >= sum3 && k1 + 1 < k)
        {
            sum3-= arr3[k1++] ;
        }
    }
}

int main()
{
    twoStack();
}

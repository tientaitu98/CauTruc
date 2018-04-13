#include <iostream>
using namespace std;
/*
// Use Linklist to slove this example
// creat a struct Node
struct Node
{
	string bookTitle;
	string publisher;
	int yearPublished;
	string author;
	Node* next;
};

// creat a struct Book
struct Book
{
	Node* head = NULL;
	//input function
	void input()
	{
		// Book title
		string _bookTitle;
		cout<<"bookTitle: ";
		getline(cin, _bookTitle);

		// Publisher
		string _publisher;
		cout<<"publisher: ";
		getline(cin, _publisher);

		// Time
		int _yearPublished;
		cout<<"yearPublished: ";
		cin>>_yearPublished;
		cin.ignore();

		// The writer
		cout<<"author: ";
		string _author;
		getline(cin, _author);

		// Make new Node
		Node *p = new Node;
		p->bookTitle = _bookTitle;
		p->publisher = _publisher;
		p->yearPublished = _yearPublished;
		p->author = _author;
		p->next = head;
		head = p;
	}
	// get author function
	string getAuthor()
	{
		string _bookTitle;
		getline(cin, _bookTitle);
		Node* cur = new	Node;
		cur = head;
		// Find out the author
		while(cur != NULL)
		{
			if(cur->bookTitle == _bookTitle)
			{
				cout<<endl;
				// If true, return the author
				return cur->author;
			}
			cur = cur->next;
		}
		// if not
		cout<<"Unknow book title!";
	}
	// get booktitle function
	void getBookTitle()
	{
		string _author;
		getline(cin,_author);
		Node* cur = new	Node;
		cur = head;
		// Find out the booktitle
		while(cur != NULL)
		{
			if(cur->author == _author)
			{
				cout<<cur->bookTitle;
			}
			cur = cur->next;
		}
		// if not
		cout<<"Unknow author!";
	}

};
void library()
{
	Book book;
	int n;
	cin>>n;
	cin.ignore();
	//Input information of example
	for(int i = 0; i < n; i++)
	{
		cout<<"book "<<i + 1<<" : "<<endl;
		book.input();
	}
	// find author name use book title
	cout<<"getauthor \n Input bookTitle: ";
	string s1 = book.getAuthor();
	cout<<s1<<endl;

	// find book title use authohr name
	cout<<"getBookTitle \n Input author: ";
	string s2 = book.getBookTitle;
	cout<<s2<<endl;
}
*/
void baiTapLapTrinh1()
{
	string s1, answer;
	int pos;
	string c;
	getline(cin, s1);
	cin>>pos>>c;
	s1.insert(pos, c);
	cout<<s1;

}
void baiTapLapTrinh2()
{
	string s1, s2, s3, s4, temp, answer;
	getline(cin, s1);
	int i = 0;
	while (s1[i] != ' ')
	{
		s2 += s1[i];
		i++;
	}
	int j = s1.length() - 1;
	while (s1[j] != ' ')
	{
		temp += s1[j];
		j--;
	}
	for(int k = temp.length() - 1; k >= 0; k--)
	{
		s3 += temp[k];
	}
	for(int k = i; k <= j; k++)
	{
		s4 += s1[k];
	}
	answer = s3 + s4 + s2;
	cout<<answer;
}
void baiTapLapTrinh3()
{
	string s;
	int i = 0;
	int answer = 0;
	getline(cin, s);
	while(i < s.length())
	{
		if(s[i] == ' ')
		{
			answer ++;
		}
		i++;
	}
	cout<<answer + 1;
}
void baiTapLapTrinh4()
{
	string s;
	char temp;
	getline(cin, s);
	int x, y;
	cin>>x>>y;
	temp = s[x];
	s[x] = s[y];
	s[y] = temp;
	cout<<s;
}
void baiNamGui()
{
	char s[1000];
	int i,j;
	cin.getline(s,1000);
	cin>>i>>j;
	int temp;
	for(int k=1;k<=strlen(s);k++){
		if((k<=i && i<=strlen(s)) && (k<=i && i<=strlen(s)) && i!=j){
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		}
	}
	cout<<s;
}
}
int main()
{
	
}

#include <iostream>
#define max 10
using namespace std;
struct Node
{
	int data;
	Node* next;
};
struct List
{
	string element[max];
	int count;
	//Initialization
	void initialization()
	{
		count = 0;
	}
	//Check if the list are empty
	bool isEmpty()
	{
		if(count == 0) return true;
		else return	false;
	}
	//Check if the list are full
	bool isFull()
	{
		if(count == max) return true;
		else return false;
	}
	//Get the element in the position p
	bool getElement(string &x,int p)
	{
		if(isEmpty() == true) return false;
		if(p <= 0 || p > count) return false;
		x = element[p];
		return true;
	}
	//Change the element in the position p
	bool changeElement(string &x,int p)
	{
		if(isEmpty() == true) return false;
		if(p <= 0 || p > count) return false;
		element[p] = x;
		return true;
	}
	//Insert one element in the position p
	bool insertion(string x, int p)
	{
		if(isEmpty() == true) return false;
		if(p <= 0 || p > count) return false;
		for(int i = count + 1; i > p; i--)
		{
			element[i] = element[i-1];
		}
		element[p] = x;
		count++;
		return true;
	}
	//Remove element in the position p
	bool remove(int p)
	{
		if(isEmpty() == true) return false;
		if(p <= 0 || p > count) return false;
		for(int i = p; i < count; i++)
		{
			element[i] = element[i+1];
		}
		count--;
		return true;
	}
	//Browse the list
	bool browse()
	{
		if(isEmpty() == true) return false;
		for(int i = 0; i < count; i++)
		{
			cout<<element[i];
		}
		return true;
	}
};

struct linkedList
{
	Node* head;
	void Initialization()
	{
		head = NULL;
	}
	bool isEmpty()
	{
		if(head == NULL) return true;
		else return false;
	}
	bool getElement(int &x, int k)
	{
		Node* p = head;
		if(isEmpty() == true) return false;
		for (int i = 1; i < k; i++)
		{
			p = p->next;
			if(p == NULL) return false;
		}
		x = p->data;
		return true;
	}
	bool remove(int k)
	{
		Node* p = head;
		Node* preP;
		if(isEmpty() == true) return false;
		if(k == 1)
		{
			head = head->next;
			return true;
		}
		for (int i = 1; i < k; i++)
		{
			preP = p;
			p = p->next;
			if(p == NULL) return false;
		}
		preP->next = p->next;
		return true;
	}
	bool insertNode(int k, int x)
	{
		Node* p = head;
		Node* added;
		added->data = x;
		if(isEmpty() == true) return false;
		if(k == 1)
		{
			head = head->next;
			return true;
		}
		for (int i = 1; i < k; i++)
		{
			p = p->next;
			if(p == NULL) return false;
		}
		added->next = p->next;
		p->next = added;
		return true;
	}
	bool browse()
	{
		if(isEmpty() == true) return false;
		for(Node* p; p !=NULL; P = P->next)
		{
			cout<<p->data;
		}
		return true;
	}
};
int main()
{

}
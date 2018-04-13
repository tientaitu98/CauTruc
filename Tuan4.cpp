#include<iostream>
#include<math.h>
using namespace std;

bool isElement(int n)
{
    int i;
    int ngt=1;
    if(n == 1) return true;
    else
    {
        for(i = 2; i <= sqrt(n); i++)
        {
            ngt=1;
            if(n%i==0)
            {
                ngt=0;
            }
        }
        if(ngt==1) return true;
        else return false;
    }

}
void test()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                if(arr[i] > arr[j] && isElement(arr[i])==true && isElement(arr[j]) == true)
                {
                    int temp;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    for(int i = 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

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
    void deleteNode()
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
    void sortNode()
    {
        Node* cur1 = head;
        while(cur1 != NULL)
        {
            Node* cur2 = cur1->next;
            while(cur2 != NULL)
            {
                if(cur1->value > cur2->value)
                {
                    cur1->value = cur1->value + cur2->value;
                    cur2->value = cur1->value - cur2->value;
                    cur1->value = cur1->value - cur2->value;
                }
                cur2 = cur2->next;
            }
            cur1 = cur1->next;
        }
    }
    int getSize()
    {
        return listSize;
    }
    int sum()
    {
        Node* tmp = head;
        int sum = 0;
        while (tmp != NULL)
        {
            sum = sum + tmp->value;
            tmp = tmp->next;
        }
        return sum;
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
    private:
    Node *head;
    Node *tail;
    int listSize;
};

void bai1()
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
                a.deleteNode();
                break;
            case 3:
                cout << a.getSize() << endl;
                break;
            }
        }
}
void bai2()
{
    LinkedList myLinkedList;
    int number, n_numbers = 0;
    while(cin >> number)
    {
        myLinkedList.addNode(number);
        n_numbers++;
    }
    myLinkedList.printAll();
};
void bai3()
{
    LinkedList myLinkedList;
    int number, n_numbers = 0;
    while (cin >> number)
    {
        myLinkedList.addNode(number);
        n_numbers++;
    }
    myLinkedList.sortNode();
    myLinkedList.printAll();
}
void bai4()
{
    LinkedList myLinkedList;
    int number, n_numbers = 0;
    while (cin >> number)
    {
        myLinkedList.addNode(number);
        n_numbers++;
    }
    cout<<myLinkedList.sum();
}
void bai5()
{
    LinkedList myLinkedList;
    int Q;
    cin >> Q;
    int t, number;
    while (Q--)
    {
        cin >> t;
        if (t == 1)
        {
            cin >> number;
            myLinkedList.addNode(number);
        }
        else
        {
            myLinkedList.deleteNode();
        }
    }
    cout << myLinkedList.sum();
}
int main()
{
    bai5();
}


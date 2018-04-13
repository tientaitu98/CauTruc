#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *pre;
    Node(Node* _pre, int _data, Node* _next)
    {
        pre = _pre;
        data = _data;
        next = _next;
    }
};

class LinkedList{
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        listSize = 0;
    }
    void addNode(int value){
        Node* newNode = new Node(tail, value, NULL);
        if(head == NULL)
        {
            head = newNode;
        }
        else
        {
            tail -> next = newNode;
        }
        tail = newNode;
    }
    void deleteNode(){
        Node* tmp = tail;
        if(head -> next == NULL)
        {
            head = NULL;
        }
        else
        {
        	tail = tail -> pre;
        	tail -> next = NULL;
			delete tmp;	
		}
    }
    void printAll(){
        Node* tmp = head;
        while (tmp != NULL){
            cout << tmp->data << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    int getSize(){
        int size = 0;
        Node *tmp;
        for(tmp = head; tmp != NULL; tmp = tmp -> next)
        {
            size += 1;
        }
        return size;
    }

private:
    Node *head;
    Node *tail;
    int listSize;
};
int main(){
    LinkedList a = LinkedList();
    int Q, type, value;
    cin >> Q;
    for (int i=0; i< Q; i++){
            cin >> type;
            switch(type){
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
    return 0;
}


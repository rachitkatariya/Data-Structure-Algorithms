/*

Push Front : Inserting Node in head
Push Back : Inserting Node in tail
Pop Front : Deleting Node in head
Pop Back : Deleting Node in tail

*/

#include <iostream>
using namespace std;

class Node
{
    public:

    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = NULL;
        tail = NULL;
    }

    ~List(){
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }  
    }

    void insertMid(int val, int pos){
        Node *newNode = new Node(val);
        Node *temp = head;

        for(int i=0; i<pos-1; i++){
            if(temp == NULL){
                cout << "Position is invalid";
                return;
            }
            temp = temp->next;
        }

        // temp is now at pos-1 i.e. prev/left
        newNode-> next = temp->next;
        temp->next = newNode;
    }

    void printList() {
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList(); // 1->2->3->Null

    ll.push_back(4);
    ll.push_back(5);
    
    ll.printList(); // 1 -> 2 -> 3 -> 4 -> 5 -> NULL

    ll.insertMid(100,2); //1 -> 2 -> 100 -> 3 -> 4 -> 5 -> NULL
    ll.printList();


    return 0;
}
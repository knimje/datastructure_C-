#include<iostream>
using namespace std;
const int MAX =5;

class Queue
{
private:
    int arr[MAX];
    int F,R;
public:
    Queue();
    void add_Q(int item);        //en_Q
    int del_Q();                    //de_Q
    void traversal();               //traversal
};

//intialises the data member
Queue :: Queue()
{
    F=-1;
    R=-1;
}

//adds an element to the queue
void Queue :: add_Q(int item)
{
    if(R==MAX-1)
    {
        cout<<"Queue is Full"<<endl;
        return;
    }
    R++;
    arr[R] =item;
    if(F==-1)  F=0;
}

//removes an element from the queue
int Queue :: del_Q()
{
    int data;
    if(F==-1)
    {
        cout<<"Queue is Empty"<<endl;
        return NULL;
    }
    data = arr[F];
    arr[F]=0;
    if(F==R) F=R=-1;
    else F++;
    return data ;
}

//display the elements of the Queue
void Queue :: traversal()
{
    if(F==-1)
    {
        cout<<"Queue is Empty"<<endl;
        return;
    }
    cout<<"the elements of the queue are as follows: "<<endl;
    for (int i=F;i<=R;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    Queue q;
    q.traversal();
    q.add_Q(1);
    q.add_Q(2);
    q.add_Q(3);
    q.add_Q(4);
    q.traversal();
    q.add_Q(5);
    q.add_Q(6);
    q.traversal();

    int n;
    n=q.del_Q();
    if(n!=NULL)
        cout<<"Item deleted: "<<n<<endl;

    n=q.del_Q();
    if(n!=NULL)
        cout<<"Item deleted: "<<n<<endl;

    n=q.del_Q();
    if(n!=NULL)
        cout<<"Item deleted: "<<n<<endl;
    q.traversal();
    return 0;
}

//Output:
/*
Queue is Empty
the elements of the queue are as follows:
1
2
3
4
Queue is Full
the elements of the queue are as follows:
1
2
3
4
5
Item deleted: 1
Item deleted: 2
Item deleted: 3
the elements of the queue are as follows:
4
5
*/

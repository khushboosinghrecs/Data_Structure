#include<iostream>
using namespace std;
class queue
{
    private:
    int front;
    int rear;
    int size;
    int *Q;
    public:
    queue(){
        front=rear=0;
        size=10;
        Q=new int [size];
    }
    queue(int size){
        front=rear=0;
        this->size=size;
        Q=new int[this->size];
    }
    void enque(int x);
    int deque();
    void display();
};
 
 void queue:: enque(int x)
 {
     if(rear+1 %size==front)
     {
         cout<<"queue is full"<<'\n';
     }
     else
     {
        rear=(rear+1)%size;
        Q[rear]=x;
     }
 }

 int queue:: deque()
 {
     int x=-1;
     if(front==rear)
     {
         cout<<"que is empty";
     }
     else
     {
         front =(front+1) %size;
         x=Q[front];
         front++;
     }
     return x;
 }

 void queue:: display()
 {
    int i=front +1;
    do
    {
    cout<< Q[i]<<" ";
    i=(i+1)%size;
    }while(i!=(rear+1)%size);
    cout<<'\n';
 }
 int main()
 {
     queue q(5);
     q.enque(10);
     q.enque(20);
     q.enque(30);
     q.enque(40);
     q.enque(409);
     q.display();
     q.deque();
     q.display();
     return 0;
 }

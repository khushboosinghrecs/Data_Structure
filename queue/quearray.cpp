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
        front=rear=-1;
        size=10;
        Q=new int [size];
    }
    queue(int size){
        front=rear=-1;
        this->size=size;
        Q=new int[this->size];
    }
    void enque(int x);
    int deque();
    void display();
};
 
 void queue:: enque(int x)
 {
     if(rear==size-1)
     {
         cout<<"queue is full"<<'\n';
     }
     else
     {
        rear++;
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
         x=Q[front +1];
         front++;
     }
     return x;
 }

 void queue:: display()
 {
     for(int i=front+1; i<=rear; i++)
     {
         cout<<Q[i]<<'\n';
     }
 }
 int main()
 {
     queue q(5);
     q.enque(10);
     q.enque(20);
     q.enque(30);
     q.deque();
     q.display();
     return 0;
 }
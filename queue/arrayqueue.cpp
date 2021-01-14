#include <bits/stdc++.h>
using namespace std;
class Queue
{
	int front, rear;
	int size, capacity;
	int *arr;

public:
	Queue(int capacity)
	{
		this->capacity = capacity;
		front = 0;
		size = 0;
		rear = capacity - 1;
		arr = new int[capacity];
	}
	bool isFull()
	{
		return size == capacity;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	void enqueue(int data)
	{
		if (isFull())
			return;
		rear = (rear + 1) % capacity;
		arr[rear] = data;
		size++;
	}
	void dequeue()
	{
		if (isEmpty())
			return;
		front = (front + 1) % capacity;
		size--;
	}
	void display()
	{
		for (int i = 0; i < size; i++)
			cout << arr[(front + i) % capacity] << " ";
		cout << endl;
	}
};
int main()
{
	//write your code here
	int n;
	cin >> n;
	int capacity = n;
	Queue queue(capacity);
	for (int i = 0; i < n; i++)
	{
		int ele;
		cin >> ele;
		queue.enqueue(ele);
		queue.display();
	}
	while (!queue.isEmpty())
	{
		queue.dequeue();
		queue.display();
	}
	return 0;
}

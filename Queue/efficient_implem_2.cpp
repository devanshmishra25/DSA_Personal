#include <bits/stdc++.h> 
using namespace std; 

 
class Queue { 
public: 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
}; 

 
Queue* createQueue(unsigned capacity) 
{ 
	Queue* queue = new Queue(); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 

	 
	queue->rear = capacity - 1; 
	queue->array = new int[( 
		queue->capacity * sizeof(int))]; 
	return queue; 
} 

 
int isFull(Queue* queue) 
{ 
	return (queue->size == queue->capacity); 
} 


int isEmpty(Queue* queue) 
{ 
	return (queue->size == 0); 
} 


void enqueue(Queue* queue, int item) 
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1) 
				% queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	cout << item << " enqueued to queue\n"; 
} 

 
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1) 
				% queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 


int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

 
int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 

 
int main() 
{ 
	Queue* queue = createQueue(1000); 

	enqueue(queue, 10); 
	enqueue(queue, 20); 
	enqueue(queue, 30); 
	enqueue(queue, 40); 

	cout << dequeue(queue) 
		<< " dequeued from queue\n"; 

	cout << "Front item is "
		<< front(queue) << endl; 
	cout << "Rear item is "
		<< rear(queue) << endl; 

	return 0; 
} 


//Striver code 

#include<bits/stdc++.h>

using namespace std;
class Queue {
  int * arr;
  int start, end, currSize, maxSize;
  public:
    Queue() {
      arr = new int[16];
      start = -1;
      end = -1;
      currSize = 0;
    }

  Queue(int maxSize) {
    ( * this).maxSize = maxSize;
    arr = new int[maxSize];
    start = -1;
    end = -1;
    currSize = 0;
  }
  void push(int newElement) {
    if (currSize == maxSize) {
      cout << "Queue is full\nExiting..." << endl;
      exit(1);
    }
    if (end == -1) {
      start = 0;
      end = 0;
    } else
      end = (end + 1) % maxSize;
    arr[end] = newElement;
    cout << "The element pushed is " << newElement << endl;
    currSize++;
  }
  int pop() {
    if (start == -1) {
      cout << "Queue Empty\nExiting..." << endl;
    }
    int popped = arr[start];
    if (currSize == 1) {
      start = -1;
      end = -1;
    } else
      start = (start + 1) % maxSize;
    currSize--;
    return popped;
  }
  int top() {
    if (start == -1) {
      cout << "Queue is Empty" << endl;
      exit(1);
    }
    return arr[start];
  }
  int size() {
    return currSize;
  }

};

int main() {
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}
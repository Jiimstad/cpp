#include <iostream>
#include <climits>
using namespace std;

#ifndef QUEUE_H_
#define QUEUE_H_

class Queue {

private:

	int maxQueueSize, front, rear, currentSize;
	int *queue;

public:
	Queue(int maxQueueSize) {
		if (maxQueueSize <= 0)
			cout << "Queue size should be a positive integer.";
		else {
			this->maxQueueSize = maxQueueSize;
			front = rear = 0;
			currentSize = 0;
			queue = new int[maxQueueSize];
		}
	}

	~Queue() {
		delete[] queue;
	}

	void enqueue(int val) { 
		if(currentSize == maxQueueSize){
			cout << "Cannot enqueue. Queue is full." << endl;
		}
		else{
			if(rear != maxQueueSize-1){
				queue[rear] = val;
				rear = rear + 1;
				currentSize = currentSize + 1;
			}
			else{
				queue[rear] = val;
				rear = 0;
				currentSize = currentSize + 1;
			}
		}
	}

	int dequeue() { 
		if(currentSize == 0){
			cout << "Queue is empty, nothing to dequeue." << endl;
		}
		else{
			if(front != maxQueueSize - 1){
				front = front + 1;
				currentSize = currentSize - 1;
				return queue[front - 1];
			}
			else{
				front = 0;
				currentSize = currentSize - 1;
				return queue[maxQueueSize - 1];
			}
		}
	}

	int size() { 
		return currentSize;
	}

	void print() {
		if (size() == 0)
			cout << "[]";
		else {
			cout << "[";
			if (rear > front) {
				for (long i = front; i < rear - 1; i++)
					cout << queue[i] << ", ";
				cout << queue[rear - 1] << "]";
			} else {
				for (long i = front; i < maxQueueSize - 1; i++)
					cout << queue[i] << ", ";
				cout << queue[maxQueueSize - 1];

				for (long i = 0; i < rear; i++)
					cout << ", " << queue[i];
				cout << "]";
			}
		}
	}
};

#endif

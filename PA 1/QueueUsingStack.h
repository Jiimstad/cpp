#include <iostream>
#include <climits>
#include "Stack.h"
using namespace std;

#ifndef QUEUEUSINGSTACK_H_
#define QUEUEUSINGSTACK_H_

class QueueUsingStack {

	Stack *mainStack;
	int maxQueueSize;

public:
	QueueUsingStack(int maxQueueSize) {
		this->maxQueueSize = maxQueueSize;
		mainStack = new Stack(maxQueueSize);
	}

	~QueueUsingStack() {
		delete mainStack;
	}

	void enqueue(int val) { 
	    
		if(size() == maxQueueSize){
			cout << "Cannot enqueue, queue is full," << endl;
		}
		else{
		    Stack *tempStack;
	        tempStack = new Stack(maxQueueSize);
	        int x = size();
		    for(int i = 0; i < x; i++){
		        tempStack->push(mainStack->pop());
		    }
		    
			mainStack->push(val);
			int y = tempStack->size();
			for(int j = 0; j < y; j++){
			    mainStack->push(tempStack->pop());
			}
			
		}
		
	}

	int dequeue() { 
		if(size() >= 0){
			return mainStack->pop();
		}
		else{
			cout << "Queue is empty, cannot dequeue." << endl;
		}
	}

	int size() { 
		return mainStack->size();
	}

	void print() {
		if (size() == 0)
			cout << "[]";
		else {
			cout << "[";
			int n = size();
			for (int i = 0; i < n - 1; i++) {
				int x = dequeue();
				cout << x << ", ";
				enqueue(x);
			}
			int x = dequeue();
			cout << x << "]";
			enqueue(x);
		}
	}
};
#endif

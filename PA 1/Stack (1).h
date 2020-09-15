#include <iostream>
#include <climits>
using namespace std;

#ifndef STACK_H_
#define STACK_H_

class Stack {

private:
	int maxStackSize, topOfStack;
	int *stack;

public:

	Stack(int maxStackSize) {
		if (maxStackSize <= 0)
			cout << "Stack size should be a positive integer.";
		else {
			this->maxStackSize = maxStackSize;
			topOfStack = -1;
			stack = new int[maxStackSize];
		}
	}

	~Stack() {
		delete[] stack;
	}

	void push(int val) { 
		if(topOfStack < maxStackSize){
		    
		topOfStack = topOfStack + 1;
		stack[topOfStack] = val;
		
		
		}
		else{
			cout << "Stack is full!" << endl;
		}
	}

	int pop() { 
		if(topOfStack > -1){
			topOfStack = topOfStack - 1;
			
			return (stack[topOfStack+1]);
		}
		else{
		    cout<<"stack is empty"<<endl;
		}
	}

	int size() { 
		return topOfStack +1;
	}
};

#endif

#include "Queue.h"
#include "QueueUsingStack.h"
#include "Sorting.h"

void testCorrectness() {
	int queueSize = 7;
	QueueUsingStack qViaStack(queueSize);
	Queue queue(queueSize);
	cout << "**** Enqueue Test ****";
	cout << endl;
	for (int i = 1; i <= 4; i++) {
		int x = i * 5;
		qViaStack.enqueue(x);
		queue.enqueue(x);
		cout << endl << "Enqueue " << x;
		cout << endl << "Stack implementation: ";
		qViaStack.print();
		cout << endl << "Standard implementation: ";
		queue.print();
		cout << endl;
	}
	cout << endl << "**** Dequeue Test ****";
	cout << endl;
	for (int i = 1; i <= 2; i++) {
		cout << endl << "Stack implementation: (Dequeued "
				<< qViaStack.dequeue() << ") ";
		qViaStack.print();
		cout << endl << "Standard implementation: (Dequeued " << queue.dequeue()
				<< ") ";
		queue.print();
		cout << endl;
	}
	cout << endl << "**** Enqueue Test ****";
	cout << endl;
	for (int i = 1; i <= 5; i++) {
		int x = i * 7;
		qViaStack.enqueue(x);
		queue.enqueue(x);
		cout << endl << "Enqueue " << x;
		cout << endl << "Stack implementation: ";
		qViaStack.print();
		cout << endl << "Standard implementation: ";
		queue.print();
		cout << endl;
	}
	cout << endl << "**** Dequeue Test ****";
	cout << endl;
	for (int i = 1; i <= 7; i++) {
		cout << endl << "Stack implementation: (Dequeued "
				<< qViaStack.dequeue() << ") ";
		qViaStack.print();
		cout << endl << "Standard implementation: (Dequeued " << queue.dequeue()
				<< ") ";
		queue.print();
		cout << endl;
	}
}

void testSorting() {
	cout << endl << "**** Sorting ****" << endl << endl;
	Sorting sortObj;
	int A[] = { 13, 17, 8, 14, 1 };
	int lenA = sizeof(A) / sizeof(int);
	cout << "Original Array: ";
	sortObj.printArray(A, lenA);
	sortObj.selectionSort(A, lenA);
	cout << endl << "Selection Sorted Array: ";
	sortObj.printArray(A, lenA);

	cout << endl << endl;

	int B[] = { -13, -17, -8, -14, -1, -20 };
	int lenB = sizeof(B) / sizeof(int);
	cout << "Original Array: ";
	sortObj.printArray(B, lenB);
	sortObj.insertionSort(B, lenB);
	cout << endl << "Insertion Sorted Array: ";
	sortObj.printArray(B, lenB);
}

int main() {
	testCorrectness();
	testSorting();
	return 1;
}


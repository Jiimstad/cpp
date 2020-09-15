#include "Queue.h"
#include "QueueUsingStack.h"

void testTime() {
	for (int maxSize = 10000; maxSize <= 50000; maxSize += 10000) {

		QueueUsingStack qViaStack(maxSize);
		long startTime = clock();
		for (int i = 0; i < maxSize; i++) {
			qViaStack.enqueue(i);
		}
		for (int i = 0; i < maxSize; i++) {
			qViaStack.dequeue();
		}
		long endTime = clock();

		cout << "Time taken for " << 2 * maxSize
				<< " enqueue/dequeue operations, when using a stack implementation: "
				<< (endTime - startTime) * 1000 / CLOCKS_PER_SEC << endl;
	}
	cout << endl;
	for (int maxSize = 100000; maxSize <= 500000; maxSize += 100000) {

		Queue queue(maxSize);
		long startTime = clock();
		for (int i = 0; i < maxSize; i++) {
			queue.enqueue(i);
		}
		for (int i = 0; i < maxSize; i++) {
			queue.dequeue();
		}
		long endTime = clock();
		cout << "Time taken for " << 2 * maxSize
				<< " enqueue/dequeue operations, when using a stack implementation: "
				<< (endTime - startTime) * 1000 / CLOCKS_PER_SEC << endl;
	}
}

int main() {
	testTime();
	return 1;
}


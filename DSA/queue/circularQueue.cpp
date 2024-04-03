#include <iostream>
using namespace std;

#define SIZE 5 /* Size of Circular Queue */

class CircularQueue {
private:
    int queue[SIZE];
    int FRONT, REAR;

public:
    CircularQueue() {
        FRONT = -1; // 2 pointers -> FRONT(tracks the first element of the queue),REAR(tracks the last element of the queue)
        REAR = -1; // set to -1 initially
    }

    bool isFull() {
        if ((FRONT == 0 && REAR == SIZE - 1) || (FRONT == REAR + 1)) { // Check if the queue is full
            return true;
        }
        return false;
    }

    bool isEmpty() {
        if (FRONT == -1) { // Check if the queue is empty
            return true;
        }
        return false;
    }

    void enQueue(int value) {
        if (isFull()) { // Check if the queue is full
            cout << "Queue is full\n"; // Display message if queue is full
            return;
        }
        if (FRONT == -1) { // For the first element, set FRONT to 0
            FRONT = 0;
        }
        REAR = (REAR + 1) % SIZE; // Increment REAR circularly
        queue[REAR] = value; // Add the element at the REAR position
    }

    int deQueue() {
        int element;
        if (isEmpty()) { // Check if the queue is empty
            cout << "Queue is empty\n"; // Display message if queue is empty
            return -1;
        }
        element = queue[FRONT]; // Get the element at FRONT
        if (FRONT == REAR) { // If only one element is left in the queue
            FRONT = -1;
            REAR = -1; // Reset FRONT and REAR
        } else {
            FRONT = (FRONT + 1) % SIZE; // Increment FRONT circularly
        }
        return element; // Return the dequeued element
    }

    void display() {
        int i;
        if (isEmpty()) { // Check if the queue is empty
            cout << endl << "Empty Queue" << endl; // Display message if queue is empty
        } else {
            cout << "FRONT -> " << FRONT; // Display FRONT
            cout << endl << "queue -> ";
            for (i = FRONT; i != REAR; i = (i + 1) % SIZE) { // Traverse the queue circularly
                cout << queue[i]; // Display elements of the queue
            }
            cout << queue[i];
            cout << endl << "REAR -> " << REAR; // Display REAR
        }
    }
};

int main() {
    CircularQueue q;

    // Fails because front = -1
    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // Fails to enqueue because front == 0 && rear == SIZE - 1
    q.enQueue(6);

    q.display();

    int elem = q.deQueue();

    if (elem != -1)
        cout << endl << "Deleted Element is " << elem;

    q.display();

    q.enQueue(7);

    q.display();

    // Fails to enqueue because front == rear + 1
    q.enQueue(8);

    return 0;
}

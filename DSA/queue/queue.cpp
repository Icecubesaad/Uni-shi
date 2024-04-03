#include <iostream>
using namespace std;
// 2 pointers -> FRONT(tracks the first element in the queue), REAR(tracks the last element in the queue)

class Queue
{
private:
    int FRONT;
    int REAR;
    int queue[6];

public:
    Queue()
    {
        // initially set to -1
        FRONT = -1;
        REAR = -1;
    };
    bool isFull()
    {
        if (FRONT == 0 && REAR == 6 - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (FRONT == -1)
            return true;
        else
            return false;
    }
    void enQueue(int value)
    {
        // check if queue is full
        if (isFull())
        {
            cout << "Queue is full\n";
        }
        // if not, set the FRONT to 0, increment REAR by 1 and push it in queue using REAR index
        else
        {
            // case where queue is fully empty
            if (FRONT == -1)
            {
                FRONT = 0;
            }
            ++REAR;
            queue[REAR] = value;
        }
    }
    int deQueue()
    {
        // check if queue is empty
        if (isEmpty())
        {
            cout << "Queue is empty\n";
        }
        // return the value pointed by the FRONT, which is 0 initially
        // increment FRONT by 1
        // if the last element in queue is recieved, set both of them again -1
        else
        {
            cout << "Dequeued the value at index " << FRONT << " value : " << queue[FRONT]<<endl;

            if (FRONT >= REAR)
            {
                FRONT, REAR = -1;
            }
            else
            {
                FRONT++;
            }
        }
    }
     void display() {
    /* Function to display elements of Queue */
    int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << endl
         << "FRONT index-> " << FRONT;
      cout << endl
         << "queue -> ";
      for (i = FRONT; i <= REAR; i++)
        cout << queue[i] << "  ";
      cout << endl
         << "REAR index-> " << REAR << endl;
    }
  }
};
int main(){
    Queue q;

  //deQueue is not possible on empty queue
  q.deQueue();

  //enQueue 5 elements
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  // 6th element can't be added to because the queue is full
  q.enQueue(6);

  q.display();

  //deQueue removes element entered first i.e. 1
  q.deQueue();

  //Now we have just 4 elements
  q.display();

  return 0;
}
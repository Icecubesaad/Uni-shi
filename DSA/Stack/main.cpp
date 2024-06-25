#include "myStack.h"
#include "iostream"
using namespace std;
int main()
{
	myStack<int> stack1;
	int ask;
	int size;
	int num;
	int number_pop;
    int even;
    int odd;
	bool loop = true;
	cout << "\n0.   press 0 to exit\n1.	Press 1 to add a new item to the stack. void push(Type)\n2.	Press 2 to removeand return the last element from the stack.Type pop()\n3.	Press 3 to check if the stack is full. bool full()\n4.	Press 4 to check if the stack is empty. bool empty()\n5.	Press 5 to return the size of the stack. int size()\n6.	Press 6 to display the stack.7.	Press 7 to count even and odd numbers in the stack\n8.	Press 8 to count sum of even numbers present in the stack\n9.	Press 9 to count sum of odd numbers present in the stack";
	while (loop)
	{
		cout << "\nEnter one option : ";
		cin >> ask;
		if (ask == 0)
		{
			loop = false;
		}
		else if (ask == 1)
		{
			cout << "\n Enter a number you want to push : ";
			cin >> num;
			stack1.push(num);
		}
		else if (ask == 2)
		{
			number_pop = stack1.pop();
			cout << "popped number : " << number_pop << endl;
		}
		else if (ask == 3)
		{
			if (stack1.isFull())
			{
				cout << "Stack is full \n";
			}
			else
			{
				cout << "Stack is not full \n";
			}
		}
		else if (ask == 4)
		{
			if (stack1.isEmpty())
			{
				cout << "Stack is Empty \n";
			}
			else
			{
				cout << "Stack is not Empty \n";
			}
		}
		else if (ask == 5)
		{
			size = stack1.size();
			cout << "Stack size is " << size;
		}
		else if (ask == 6)
		{
			stack1.displayStack();
		}else{
			cout<<"Invalid input\n";
		}
	}
	return 0;
}

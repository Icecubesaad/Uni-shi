#include <iostream>
using namespace std;
class Abstract {
public:
	virtual void display() = 0;
};
class Father:public Abstract {
public:
	Father() {
		cout << "Father class contructor\n";
	}
	~Father() {
		cout << "Father class destructor\n";
	}
	void display() {
		cout << "Father class is called;\n";
	}
};
class Mother {
public:
	Mother() {
		cout << "Mother class contructor\n";
	}
	~Mother() {
		cout << "Mother class Destructor\n";
	}
	void display() {
		cout << "Mother class is called\n";
	}
};
class Child:virtual public Father {
public:
	Child() {
		cout << "Child contructor is called\n";
	}
	~Child() {
		cout << "Child destructor is called\n";
	}
	void display() {
		cout << "Child class is called\n";
	}
};
int main() {
	Abstract* a1;
	Child c1;
	a1 = &c1;
	a1->display();
}
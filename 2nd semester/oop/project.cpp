#include <iostream>
using namespace std;

class RegrowToolkitAbstractionClass
{
public:
    virtual int* ReturnNewArray() = 0;
    virtual void copyArray(int* newArray, int* oldArray, int size) = 0;
    virtual ~RegrowToolkitAbstractionClass() {} // Add a virtual destructor
};

class RegrowToolkit : public RegrowToolkitAbstractionClass
{
protected:
    int* newArray = nullptr;

public:
    int* ReturnNewArray() override
    {
        return newArray;
    }

    void copyArray(int* newArray, int* oldArray, int size) override
    {
        for (int i = 0; i < size; i++)
        {
            newArray[i] = oldArray[i];
        }
    }

    int* AssignNewValue(int* newArray, int size, int value)
    {
        newArray[size] = value;
        return newArray;
    }

    void DoItYourSelf(int*& oldArray,int extent)
    {
        int ask, i = 0, size = 1;
        oldArray = nullptr;
        oldArray = new int[size];

        cout << "Enter the initial Value : ";
        cin >> ask;
        *oldArray = ask;
        cout << "Added your value into the old array." << endl;

        while (i < extent)
        {
            cout << "Running the loop for the " << i << " time." << endl;
            cout << "Enter the new value : ";
            cin >> ask;

            int* tempArray = new int[size + 1];
            copyArray(tempArray, oldArray, size);
            tempArray[size] = ask;
            size++;

            delete[] oldArray;
            oldArray = tempArray;
            i++;
        }

        delete[] oldArray;
    }
};

int main()
{
    RegrowToolkit object;
    int extent = 5;
    int* oldArray;
    object.DoItYourSelf(oldArray,extent);
    for (int i = 0; i < extent; i++)
    {
        cout<<*(oldArray+i)<<endl;
    }
    
    return 0;
}

class MaxHeapAbstract {
public:
    virtual void Insert(int key) = 0;
    virtual void display() = 0;
    virtual int removeMax() = 0;
    virtual ~MaxHeapAbstract() {}
};
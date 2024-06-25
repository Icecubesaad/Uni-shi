class MinHeapAbstract {
public:
    virtual void Insert(int key) = 0;
    virtual void display() = 0;
    virtual int removeMin() = 0;
    virtual ~MinHeapAbstract() {}
};
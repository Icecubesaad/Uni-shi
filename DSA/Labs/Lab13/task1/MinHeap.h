
template <typename T>
class MinHeapAbstract {
public:
    virtual void Insert(const T& key) = 0;
    virtual void display() = 0;
    virtual ~MinHeapAbstract() {}
};
#ifndef RING_H
#define RING_H

typedef int Data;

class Ring
{


public:
    Ring();
    ~Ring();


    void add (Data datum);
    Data del();
    bool isEmpty();
    void Clear();

private:
     class RingImplementation;
    RingImplementation *pimpl;


};

#endif // RING_H

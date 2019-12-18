#include "counter.h"

//Counter Counter::operator ++()
//{
//    ++count_;
//    Counter temp; // create a dummy object
//    temp.count_ = count_; // set the value
//    return temp; // return the object
//}

Counter Counter::operator ++()
{
    return Counter(++count_); // unnamed temp object
}

Counter Counter::operator ++(int) // postfix
{
    return Counter(count_++);
}


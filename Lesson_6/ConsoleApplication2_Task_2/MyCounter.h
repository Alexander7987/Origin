#pragma once

class Counter
{
private:
    double value;
public:
    Counter();
    Counter(double n);
    void increment();
    void decrement();
    void equal();
};

#include "MyCounter.h"
#include <iostream>

Counter::Counter()
    {
        this->value = 1;
        std::cout << this->value;
    }
 Counter::Counter(double n)
    {
        this->value = n;
    }
 void Counter::increment()
    {
        this->value++;
    }
 void Counter::decrement()
    {
        this->value--;
    }
 void Counter::equal()
    {
        std::cout << this->value << std::endl;
    }
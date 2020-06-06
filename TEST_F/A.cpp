//A.cpp
#include "A.h"
A::A( int a ){
    this->_a = a;
}
A::~A( ){
}
void A::add( int a ){
    this->_a += a;
}
int A::getA( ){
    return this->_a;
}

bool A::f1(int b){
        if (b==1)
        {
            /* code */
            return true;
        }
}
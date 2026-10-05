#pragma once

class IList {
public:
    virtual ~IList() = default;

    virtual void insert(double x, int pos) = 0;  
    virtual void remove(int pos) = 0;            
    virtual int  indexOf(double x) const = 0;   
    virtual bool isEmpty() const = 0;
    virtual void print() const = 0;
};
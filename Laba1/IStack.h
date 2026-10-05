#pragma once
#include <string>

class IStack {
public:
    virtual ~IStack() = default;

    virtual void push(const std::string& x) = 0; 
    virtual void pop() = 0;                
    virtual std::string last() const = 0;   
    virtual bool isEmpty() const = 0;             
    virtual void print() const = 0;               
};
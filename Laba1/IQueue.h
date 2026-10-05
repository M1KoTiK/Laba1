#pragma once
#include <string>

class IQueue 
{
    public:
        virtual ~IQueue() = default;

        virtual void enqueue(const std::string& x) = 0;  
        virtual void dequeue() = 0;                      
        virtual std::string first() const = 0;
        virtual bool isEmpty() const = 0;
        virtual void print() const = 0;
};
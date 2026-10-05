#pragma once
#include "IQueue.h"

class ArrayQueue : public IQueue 
{
    private:
        static const int MAX_SIZE = 10;
        std::string contents[MAX_SIZE];
        int n = 0;

    public:
        ArrayQueue();

        void enqueue(const std::string& x) override;
        void dequeue() override;
        std::string first() const override;
        bool isEmpty() const override;
        void print() const override;
};
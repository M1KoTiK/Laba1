#pragma once
#include "IStack.h"

class ArrayStack : public IStack 
{
    private:
        static const int MAX_SIZE = 10;
        std::string contents[MAX_SIZE];
        int n = 0;

    public:
        ArrayStack();

        void push(const std::string& x) override;
        void pop() override;
        std::string last() const override;
        bool isEmpty() const override;
        void print() const override;
};
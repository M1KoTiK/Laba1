#pragma once

class ISet 
{
    public:
        virtual ~ISet() = default;

        virtual void add(int x) = 0;
        virtual void remove(int x) = 0;
        virtual bool contains(int x) const = 0;
        virtual bool isEmpty() const = 0;
        virtual void print() const = 0;
};
#pragma once
#include "ISet.h"

class ArraySet : public ISet 
{
    private:
        static const int SIZE = 10;

        struct Element {
            int item;
            bool exists;
        };

        Element numbers[SIZE];

        int getEmptyPosition() const;  // -1 если нет свободных

    public:
        ArraySet();

        void add(int x) override;
        void remove(int x) override;
        bool contains(int x) const override;
        bool isEmpty() const override;
        void print() const override;
};
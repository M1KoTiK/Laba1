#pragma once
#include "IList.h"

class ArrayList : public IList 
{
    private:
        static const int MAX_SIZE = 228; // просто так
        double contents[MAX_SIZE];
        int n = 0;

    public:
        ArrayList();

        void insert(double x, int pos) override;
        void remove(int pos) override;
        int  indexOf(double x) const override;
        bool isEmpty() const override;
        void print() const override;
};
#include "ArraySet.h"
#include <iostream>
using namespace std;

ArraySet::ArraySet() 
{
    for (int i = 0; i < SIZE; i++) 
    {
        numbers[i].exists = false;
    }
}

int ArraySet::getEmptyPosition() const 
{
    for (int i = 0; i < SIZE; i++) 
    {
        if (!numbers[i].exists) return i;
    }
    return -1;
}

bool ArraySet::contains(int x) const 
{
    for (int i = 0; i < SIZE; i++) 
    {
        if (numbers[i].exists && numbers[i].item == x) return true;
    }
    return false;
}

void ArraySet::add(int x) 
{
    if (contains(x)) 
    {
        cout << "Element already exists\n";
        return;
    }
    int pos = getEmptyPosition();
    if (pos == -1) 
    {
        cout << "No place\n";
        return;
    }
    numbers[pos].item = x;
    numbers[pos].exists = true;
}

void ArraySet::remove(int x) 
{
    for (int i = 0; i < SIZE; i++) 
    {
        if (numbers[i].exists && numbers[i].item == x) 
        {
            numbers[i].exists = false;
            return;
        }
    }
    cout << "No such element\n";
}

bool ArraySet::isEmpty() const 
{
    for (int i = 0; i < SIZE; i++) 
    {
        if (numbers[i].exists) return false;
    }
    return true;
}

void ArraySet::print() const 
{
    if (isEmpty()) 
    {
        cout << "Set is empty\n";
        return;
    }
    for (int i = 0; i < SIZE; i++) 
    {
        if (numbers[i].exists) 
        {
            cout << numbers[i].item << " ";
        }
    }
    cout << endl;
}
#include "ArrayQueue.h"
#include <iostream>
using namespace std;

ArrayQueue::ArrayQueue() 
{

}

void ArrayQueue::enqueue(const string& x) 
{
    if (n == MAX_SIZE) 
    {
        cout << "Queue is full\n";
        return;
    }
    contents[n++] = x;
}

void ArrayQueue::dequeue() 
{
    if (n == 0) 
    {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = 0; i < n - 1; i++) 
    {
        contents[i] = contents[i + 1];
    }
    n--;
}

string ArrayQueue::first() const 
{
    if (n == 0) 
    {
        cout << "Queue is empty\n";
        return "";
    }
    return contents[0];
}

bool ArrayQueue::isEmpty() const 
{
    return n == 0;
}

void ArrayQueue::print() const 
{
    if (n == 0) 
    {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << contents[i] << " ";
    }
    cout << endl;
}
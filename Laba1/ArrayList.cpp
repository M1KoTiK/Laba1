#include "ArrayList.h"
#include <iostream>
using namespace std;

ArrayList::ArrayList() 
{

}

void ArrayList::insert(double x, int pos) 
{
    if (n == MAX_SIZE) 
    {
        cout << "List is full\n";
        return;
    }
    if (pos < 0 || pos > n) 
    {
        cout << "Incorrect index\n";
        return;
    }
    // сдвиг вправо
    for (int i = n - 1; i >= pos; i--) 
    {
        contents[i + 1] = contents[i];
    }
    contents[pos] = x;
    n++;
}

void ArrayList::remove(int pos) 
{
    if (pos < 0 || pos >= n) 
    {
        cout << "Incorrect index\n";
        return;
    }
    // сдвиг влево
    for (int i = pos; i < n - 1; i++) 
    {
        contents[i] = contents[i + 1];
    }
    n--;
}

int ArrayList::indexOf(double x) const 
{
    for (int i = 0; i < n; i++) 
    {
        if (contents[i] == x) return i;
    }
    return -1;
}

bool ArrayList::isEmpty() const 
{
    return n == 0;
}

void ArrayList::print() const 
{
    if (n == 0) 
    {
        cout << "List is empty\n";
        return;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << contents[i] << " ";
    }
    cout << endl;
}
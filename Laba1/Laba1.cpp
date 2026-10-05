#include <iostream>
#include <string>
#include <cstdlib>
#include <clocale>

#include "IStack.h"
#include "IQueue.h"
#include "IList.h"
#include "ISet.h"

#include "ArrayStack.h"
#include "ArrayQueue.h"
#include "ArrayList.h"
#include "ArraySet.h"

using namespace std;

void stackMenu(IStack* stack)
{
    for (;;)
    {
        cout << "\n--- STACK MENU ---\n";
        cout << "1 - Print\n";
        cout << "2 - Push (add)\n";
        cout << "3 - Pop (remove last)\n";
        cout << "4 - Last (peek)\n";
        cout << "5 - isEmpty\n";
        cout << "0 - Back to main menu\n";
        cout << "Your choice - ";

        int choice;
        cin >> choice;

        string s;

        switch (choice)
        {
            case 1:
                stack->print();
                break;

            case 2:
                cout << "New string: ";
                cin >> s;
                stack->push(s);
                stack->print();
                break;

            case 3:
                stack->pop();
                stack->print();
                break;

            case 4:
                s = stack->last();
                if (!stack->isEmpty())
                {
                    cout << "Last element = " << s << endl;
                }
                break;

            case 5:
                cout << (stack->isEmpty() ? "Stack is EMPTY" : "Stack is NOT empty") << endl;
                break;

            case 0:
                return;

            default:
                cout << "Error: wrong choice\n";
        }

        system("pause");
        system("cls");
    }
}

void queueMenu(IQueue* queue)
{
    for (;;)
    {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1 - Print\n";
        cout << "2 - Enqueue (add to end)\n";
        cout << "3 - Dequeue (remove first)\n";
        cout << "4 - First (peek)\n";
        cout << "5 - isEmpty\n";
        cout << "0 - Back to main menu\n";
        cout << "Your choice - ";

        int choice;
        cin >> choice;

        string s;

        switch (choice)
        {
            case 1:
                queue->print();
                break;

            case 2:
                cout << "New string: ";
                cin >> s;
                queue->enqueue(s);
                queue->print();
                break;

            case 3:
                queue->dequeue();
                queue->print();
                break;

            case 4:
                s = queue->first();
                if (!queue->isEmpty())
                {
                    cout << "First element = " << s << endl;
                }
                break;

            case 5:
                cout << (queue->isEmpty() ? "Queue is EMPTY" : "Queue is NOT empty") << endl;
                break;

            case 0:
                return;

            default:
                cout << "Error: wrong choice\n";
        }

        system("pause");
        system("cls");
    }
}

void listMenu(IList* list)
{
    for (;;)
    {
        cout << "\n--- LIST MENU ---\n";
        cout << "1 - Print\n";
        cout << "2 - Insert (value, position)\n";
        cout << "3 - Remove (by position)\n";
        cout << "4 - indexOf (find position by value)\n";
        cout << "5 - isEmpty\n";
        cout << "0 - Back to main menu\n";
        cout << "Your choice - ";

        int choice;
        cin >> choice;

        double x;
        int pos;

        switch (choice)
        {
            case 1:
                list->print();
                break;

            case 2:
                cout << "Value: ";
                cin >> x;
                cout << "Position (0..N): ";
                cin >> pos;
                list->insert(x, pos);
                list->print();
                break;

            case 3:
                cout << "Position to remove: ";
                cin >> pos;
                list->remove(pos);
                list->print();
                break;

            case 4:
                cout << "Value to find: ";
                cin >> x;
                pos = list->indexOf(x);
                if (pos == -1)
                {
                    cout << "Element not found\n";
                }
                else
                {
                    cout << "Index = " << pos << endl;
                }
                break;

            case 5:
                cout << (list->isEmpty() ? "List is EMPTY" : "List is NOT empty") << endl;
                break;

            case 0:
                return;

            default:
                cout << "Error: wrong choice\n";
        }

        system("pause");
        system("cls");
    }
}

void setMenu(ISet* set)
{
    for (;;)
    {
        cout << "\n--- SET MENU ---\n";
        cout << "1 - Print\n";
        cout << "2 - Add (ignored if exists)\n";
        cout << "3 - Remove (by value)\n";
        cout << "4 - Contains (check presence)\n";
        cout << "5 - isEmpty\n";
        cout << "0 - Back to main menu\n";
        cout << "Your choice - ";

        int choice;
        cin >> choice;

        int x;

        switch (choice)
        {
            case 1:
                set->print();
                break;

            case 2:
                cout << "Value: ";
                cin >> x;
                set->add(x);
                set->print();
                break;

            case 3:
                cout << "Value to remove: ";
                cin >> x;
                set->remove(x);
                set->print();
                break;

            case 4:
                cout << "Value to check: ";
                cin >> x;
                cout << (set->contains(x) ? "Contains" : "Does NOT contain") << endl;
                break;

            case 5:
                cout << (set->isEmpty() ? "Set is EMPTY" : "Set is NOT empty") << endl;
                break;

            case 0:
                return;

            default:
                cout << "Error: wrong choice\n";
        }

        system("pause");
        system("cls");
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    IStack* stack = new ArrayStack();
    IQueue* queue = new ArrayQueue();
    IList* list = new ArrayList();
    ISet* set = new ArraySet();

    for (;;)
    {
        cout << "\n========= MAIN MENU =========\n";
        cout << "1 - Stack\n";
        cout << "2 - Queue\n";
        cout << "3 - List\n";
        cout << "4 - Set\n";
        cout << "0 - Exit\n";
        cout << "=============================\n";
        cout << "Your choice - ";

        int choice;
        cin >> choice;

        switch (choice)
        {
            case 1:
                stackMenu(stack);
                break;

            case 2:
                queueMenu(queue);
                break;

            case 3:
                listMenu(list);
                break;

            case 4:
                setMenu(set);
                break;

            case 0:
                delete stack;
                delete queue;
                delete list;
                delete set;
                cout << "Goodbye!\n";
                return 0;

            default:
                cout << "Error: wrong choice\n";
        }

        system("cls");
    }
}
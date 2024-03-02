#include <iostream>
#include <string>
#include "head.h"
#include "implemntaion.h"

using namespace std;

int main()
{
    string newN;
    int size, ch, repet = 0;

    do
    {
        cout << "Enter A Size (Max Size = 100) : \n";
        cin >> size;
    } while (size > 100);

    Stack<string> st1(size);

    st1.initialize();

    do
    {
        cout << "Enter  Your Choose :\n1 - Push Element \n2 - Pop Element \n3 - Display Element \n4 - Get Top Element \n5 - Reverse Stack \n6 - Clear Stack \n7 - Initialize Stack \n ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter A number : ";
            cin >> newN;
            st1.push(newN);
            break;
        case 2:
            st1.pop();
            break;
        case 3:
            st1.print();
            break;
        case 4:
            cout << "\n"
                 << st1.getTop() << "\n";
            break;
        case 5:
            st1.reverse();
            break;
        case 6:
            st1.clearStack();
            break;
        case 7:
            st1.initialize();
            break;
        default:
            cout << "Not Option !! ";
            break;
        }
        cout << "\nYou Need Choose Again Press '1' \n";
        cin >> repet;
    } while (repet == 1)

    return 0;
}
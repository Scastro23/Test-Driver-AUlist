#include <iostream>
#include "AUList.h"
#include "ItemType.h"

using namespace std;

void testAUList() {
    AUList list;

    cout << "Testing MakeEmpty: ";
    list.MakeEmpty();
    if (list.GetLength() == 0)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

    cout << "Testing IsFull: ";
    if (!list.IsFull())
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;


    cout << "Testing PutItem: "; // Test PutItem
    list.PutItem(ItemType(10));
    list.PutItem(ItemType(20));
    if (list.GetLength() == 2)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

  
    cout << "Testing GetItem: "; // Test GetItem
    bool found;
    if (list.GetItem(ItemType(20), found).getValue() == 20 && found)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

    // Test DeleteItem
    cout << "Testing DeleteItem: ";
    list.DeleteItem(ItemType(20));
    if (list.GetLength() == 1)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;

    // Test ResetList and GetNextItem
    cout << "Testing ResetList and GetNextItem: ";
    list.ResetList();
    if (list.GetNextItem().getValue() == 10)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;
}

int main() {
    testAUList();
    return 0;
}

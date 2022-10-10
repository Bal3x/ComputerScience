#include "ListInterface.h"
#include "LinkedList.h"
#include "Node.h"
#include "PrecondViolatedExcep.h"
#include <iostream>
#include <string>

using namespace::std;

int main()
{
    LinkedList<char> listPtr;
    char data[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
    std::cout << "isEmpty: returns " << listPtr.isEmpty() << "; should be 1 (true)" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        if (listPtr.insert(i + 1, data[i]))
            std::cout << "Inserted " << listPtr.getEntry(i + 1) << " at position " << (i + 1) << std::endl;
        else
            std::cout << "Cannot insert " << data[i] << " at position " << (i + 1) << std::endl;
    }  // end for
    return 0;
}  // end main
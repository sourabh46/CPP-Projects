#include<iostream>
#include "List.h"
using namespace std;

/**< Implementation of default List constructor */
List::List()
{
    content = 0;                    /**< content points to null */
    length = 0;                     /**< length is zero initially */
}

/**< Implementation of List constructor that takes character array and size to set necessary private variables */
List::List(char input[], int inputSize)
{
    int i;
    content = new char[inputSize];
    length = inputSize;
    for(i = 0; i < inputSize; i++)
    {
        content[i] = input[i];      /**< strcpy(array, m) should not be used, since input[] might not be null terminating */
    }
}

/**< Implementation of List destructor */
List::~List()
{
    delete []content;               /**< Deallocation of memory */
}

/**< Implementation of function that returns the size of List */
int List::getSize()
{
    return length;
}

/**< Implementation of function that returns the element of List based on input index */
char List::getElement(int index)
{
    return content[index];
}

/**< Implementation of function that returns true if input element is present in List, false otherwise */
bool List::isElement(char ch)
{
    int i;
    for(i = 0; i < length; i++)
    {
        if(content[i] == ch)
        {
            return true;            /**< Returns true immediately when it finds a match */
        }
    }
    return false;                   /**< Returns false otherwise */
}

/**< Implementation of function that returns pointer to a List contains common elements with another List */
List* List::commonElements(List *anotherList)
{
    char tmp[100];
    int i, k = 0;
    List *ptr;                      /**< This ptr will be returned at the end */
    for(i = 0; i < length; i++)     /**< Iterate through the caller List object */
    {
        if(anotherList->isElement(content[i]))
        {
            tmp[k++] = content[i]; /**< content[i] is the element inside caller List Object */
        }
    }
    /**< Create an object at ptr using "new" keyword */
    /**< This "new" will create another object dynamically */
    /**< Its constructor will allocate the char* array */
    /**< inside it using another "new" */
    ptr = new List(tmp, k);
    return ptr;
}

void List::show()
{
    int i;
    cout << "[ ";
    for(i = 0; i < length; i++)
    {
        if(i)
        {
            cout <<", ";
        }
        cout << content[i] ;
    }
    cout << "]" << endl;
}

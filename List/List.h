#pragma once
class List
{
private:
    char *content;
    int length;
public:
    List();                                         /**< Default List constructor */
    List(char input[], int inputSize);              /**< Custom List constructor */
    ~List();                                        /**< List destructor */
    int getSize();                                  /**< Function that returns the size of List */
    char getElement(int index);                     /**< Function that returns the element of List based on input index */
    bool isElement(char ch);                        /**< Function that returns true if input element is present in List, false otherwise */
    List* commonElements(List *anotherList);        /**< Function that returns pointer to a List contains common elements with another List */
    void show();                                    /**< Function that prints the elements of the List */
};

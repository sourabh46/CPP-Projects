#include "List.h"

int main()
{
    char a[]= {'a', 'b', 'c'}, b[]= {'b', 'c'};
    List A(a, 3), B(b, 2), *C;
    C = A.commonElements(&B);
    C->show();
    /**< C must be deleted; otherwise, the dynamic object created */
    /**< inside CommonElements() function using "new" will not be freed */
    delete C;
    return 0;
}

#include "Worker.h"
#include "Supervisor.h"

int main()
{
    /**< Construction of child class with necessary arguments and finally prints information */
    Worker worker("Alpha",32,100);
    worker.calculateSalary();
    worker.describeEmployee();

    /**< Construction of grandchild class with necessary arguments and finally prints information */
    Supervisor super("Beta",20,300,420);
    super.calculateSalary();
    super.describeEmployee();

    return 0;
}

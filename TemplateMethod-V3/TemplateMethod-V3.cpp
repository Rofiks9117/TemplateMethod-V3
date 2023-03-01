#include <iostream>
#include "Coffee.h"
#include "Tea.h"

int main()
{
    Coffee* myCoffee = new Coffee();
    Tea* myTea = new Tea();

    myCoffee->prepareRecipe();
    std::cout << "\n---------------------\n";
    myTea->prepareRecipe();
}

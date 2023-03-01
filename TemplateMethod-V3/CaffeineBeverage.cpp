#include "CaffeineBeverage.h"
#include <iostream>
using namespace std;

void CaffeineBeverage::pourInCup()
{
    cout << "Pouring into cup" << endl;
}

void CaffeineBeverage::boilWater() {
    cout << "Boiling water" << endl;
}

void CaffeineBeverage::prepareRecipe() {
    boilWater();
    brew();
    pourInCup();
    addCondiments();
}
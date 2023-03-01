#pragma once
class CaffeineBeverage
{
public:
	void prepareRecipe();
	virtual void brew() = 0;
	virtual void addCondiments() = 0;
protected:
	void boilWater();
	void pourInCup();
};
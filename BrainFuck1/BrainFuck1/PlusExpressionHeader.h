#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the '+' operation
class PlusExpression :public Expression {
public:
	bool isComposite()override;
	void execute()override;
	PlusExpression(); //default constructor 
};
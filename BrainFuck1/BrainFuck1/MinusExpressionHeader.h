#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the '-' BrainFuck operation
class MinusExpression : public Expression {
public:
	bool isComposite()override;
	void execute()override;
	MinusExpression();//default constructor
};

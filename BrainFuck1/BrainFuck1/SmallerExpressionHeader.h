#pragma once
#include "Libs.h"
#include"Expression.h"
//class corresponding to the '<' operation of Brainfuck
class SmallerExpression : public Expression {
public:
	bool isComposite()override;
	void execute()override;
	SmallerExpression(); //default constructor
};
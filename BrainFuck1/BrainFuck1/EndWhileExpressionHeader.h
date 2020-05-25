#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the ']' operation
class EndWhileExpression : public Expression {
private:
	int posOfBegin;  // field which contains the corresponding '[' position
public:
	bool isComposite() override;
	void execute() override ;
	EndWhileExpression(int c);//constructor which recieves the '[' position. Initializes posOfBegin
	EndWhileExpression();//default constructor
};
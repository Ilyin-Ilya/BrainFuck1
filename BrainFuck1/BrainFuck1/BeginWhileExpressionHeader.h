#pragma once
//beginWhile class header
#include"ParserHeader.h"
#include"MainHeader.h"

class BeginWhileExpression : public Expression { //class, corresponding to the '[' operation
private:
	vector<Expression* > expressions;
public:
	bool isComposite() override;
	void execute() override ;
	BeginWhileExpression(string str, Container container,  Parser* p);//constructor to proceed the string to the corresponding ']' and build our class object
	Expression* getObject(); //method for returning the class object
	BeginWhileExpression(); //default constructor
};

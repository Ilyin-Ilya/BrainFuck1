#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the '.' operation
class DotExpression :public Expression {
public:
   bool isComposite() override;
   void execute() override;
   DotExpression(); //default constructor
};

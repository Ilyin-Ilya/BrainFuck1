#pragma once
#include"Libs.h"
#include"Expression.h"
//class to Execute the built model
class Executor {
private:
	queue<Expression *> que; //list of commands to execute
public:
	Executor(queue<Expression* > que);//Constructor. Recieves the list of commands to execute
	void execute();//execute the list 
};
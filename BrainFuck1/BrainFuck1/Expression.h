#pragma once
//abstract class for BrainFuck command
class Expression {
public:
	virtual bool isComposite() = 0; //shows if the command depends on other commands. Only while does
	virtual void execute() = 0;  //execute BrainFuck command
	Expression();//constructor
};
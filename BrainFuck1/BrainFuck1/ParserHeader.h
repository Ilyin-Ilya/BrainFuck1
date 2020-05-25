#pragma once
#include"Libs.h"
#include"Expression.h"
//class to parse the string and build the sequence of brainfuck commands 
class Parser {
private:
	queue<Expression* > listOfExpressions; //list of brainfuck commands
public:
	queue<Expression* >getListOfExpressions(); // get the list of objects 
    void parseString(string s, Container container); //parses the string and builds objects corresponding to the BrainFuck commands
	Expression* toObject(char symbol, Container container); // transfers symbol of the string to the Command Object
	Parser(); //default constructor
};
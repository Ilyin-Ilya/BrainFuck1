#include"MainHeader.h"

Container init() {    //container, which stores pairs char - corresponding class object. Contains all 7 operations in BrainFuck
	Container container;
	container['.'] = new DotExpression();
	container['>'] = new BiggerExpression();
	container['<'] = new SmallerExpression();
	container['+'] = new PlusExpression();
	container['['] = new BeginWhileExpression();
	container[']'] = new EndWhileExpression();
	container['-'] = new MinusExpression();
	
	return container;
}

int main() {
	cin >> s; //input string
	Container container = init();
	Checker* checker = new Checker(container);   
	if ((checker->check(s))) {                  //checking, if the input string is correct
		Parser* parser = new Parser();
		parser->parseString(s, container);      //first stage - compilation
		Executor* executor = new Executor(parser->getListOfExpressions()); 
		executor->execute();  //second stage - execution
		delete parser;
		delete executor;
	}
	delete checker;
	system("pause");
	return 0;
}
#include"ParserHeader.h"
#include"BeginWhileExpressionHeader.h"
queue<Expression*> Parser::getListOfExpressions() { return this->listOfExpressions; }
void Parser::parseString(string s, Container container) {
	while(i<s.size()){
		Expression* expr = this->toObject(s[i], container);
		if (dynamic_cast<BeginWhileExpression*>(expr)) {
			listOfExpressions.push(new BeginWhileExpression(s, container, this));
			i++;
			continue;
		}
		i++;
		listOfExpressions.push(expr);
    }
}
Expression* Parser:: toObject(char symbol, Container container) {
		return container[symbol];
}
Parser::Parser(){}

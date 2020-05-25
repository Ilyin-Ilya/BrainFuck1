#include"BeginWhileExpressionHeader.h"
#include"EndWhileExpressionHeader.h"


bool BeginWhileExpression:: isComposite() { return true; }

void BeginWhileExpression::execute() {
	while(arr[j]){
		for (int k = 0; k < expressions.size(); k++) {
				expressions[k]->execute();		
		}
    }
}

Expression* BeginWhileExpression::getObject() { return this; }

BeginWhileExpression::BeginWhileExpression() {}

BeginWhileExpression::BeginWhileExpression(string str, Container container, Parser* p) {
	int temp = i;
	do {
		i++;
		Expression* expr = p->toObject(str[i], container);
		if (dynamic_cast<EndWhileExpression*>(expr)) {
			expressions.push_back(new EndWhileExpression(temp));
			continue;
		}
		if(!expr->isComposite())
			expressions.push_back(expr);
		else {
			expressions.push_back(BeginWhileExpression(str, container, p).getObject());
		}

	} while (str[i] != ']');
}
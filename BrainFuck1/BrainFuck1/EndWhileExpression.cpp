#include"EndWhileExpressionHeader.h"
bool EndWhileExpression::isComposite() { return false; };
void EndWhileExpression::execute() {
	if (arr[i]) {
		i = posOfBegin;
	}
}
EndWhileExpression::EndWhileExpression() {};
EndWhileExpression::EndWhileExpression(int pos) {
	this->posOfBegin = pos;
}
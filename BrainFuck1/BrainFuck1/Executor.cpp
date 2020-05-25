#include"Executor.h"
Executor::Executor(queue<Expression* > expr) { this->que = expr; }
void Executor::execute() {
	while (!que.empty()) {
		Expression* exp = que.front();
		que.pop();
		exp->execute();
	}
}
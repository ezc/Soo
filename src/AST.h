/*
	语法分析树的类
*/
#ifndef _AST_H
#define _AST_H
#include <queue>
#include "Lexer.h"
using namespace std;
class AST
{
public:
	void If_Else(queue<Token> Token );//编译器中if else结构
};
void AST::If_Else(queue<Token> Token)
{

}
#endif
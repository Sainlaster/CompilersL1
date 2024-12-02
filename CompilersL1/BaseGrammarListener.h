
// Generated from BaseGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BaseGrammarParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BaseGrammarParser.
 */
class  BaseGrammarListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(BaseGrammarParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(BaseGrammarParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(BaseGrammarParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BaseGrammarParser::StatementContext *ctx) = 0;

  virtual void enterStringExpr(BaseGrammarParser::StringExprContext *ctx) = 0;
  virtual void exitStringExpr(BaseGrammarParser::StringExprContext *ctx) = 0;

  virtual void enterDoubleExpr(BaseGrammarParser::DoubleExprContext *ctx) = 0;
  virtual void exitDoubleExpr(BaseGrammarParser::DoubleExprContext *ctx) = 0;

  virtual void enterIdExp(BaseGrammarParser::IdExpContext *ctx) = 0;
  virtual void exitIdExp(BaseGrammarParser::IdExpContext *ctx) = 0;

  virtual void enterCompExpr(BaseGrammarParser::CompExprContext *ctx) = 0;
  virtual void exitCompExpr(BaseGrammarParser::CompExprContext *ctx) = 0;

  virtual void enterPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext *ctx) = 0;
  virtual void exitPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext *ctx) = 0;

  virtual void enterFuncCallExpr(BaseGrammarParser::FuncCallExprContext *ctx) = 0;
  virtual void exitFuncCallExpr(BaseGrammarParser::FuncCallExprContext *ctx) = 0;

  virtual void enterBoolExpr(BaseGrammarParser::BoolExprContext *ctx) = 0;
  virtual void exitBoolExpr(BaseGrammarParser::BoolExprContext *ctx) = 0;

  virtual void enterParenthesisExpr(BaseGrammarParser::ParenthesisExprContext *ctx) = 0;
  virtual void exitParenthesisExpr(BaseGrammarParser::ParenthesisExprContext *ctx) = 0;

  virtual void enterMulDivExpr(BaseGrammarParser::MulDivExprContext *ctx) = 0;
  virtual void exitMulDivExpr(BaseGrammarParser::MulDivExprContext *ctx) = 0;

  virtual void enterNumExpr(BaseGrammarParser::NumExprContext *ctx) = 0;
  virtual void exitNumExpr(BaseGrammarParser::NumExprContext *ctx) = 0;

  virtual void enterVariableDeclaration(BaseGrammarParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(BaseGrammarParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterConstDeclaration(BaseGrammarParser::ConstDeclarationContext *ctx) = 0;
  virtual void exitConstDeclaration(BaseGrammarParser::ConstDeclarationContext *ctx) = 0;

  virtual void enterAssignment(BaseGrammarParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(BaseGrammarParser::AssignmentContext *ctx) = 0;

  virtual void enterCompOperator(BaseGrammarParser::CompOperatorContext *ctx) = 0;
  virtual void exitCompOperator(BaseGrammarParser::CompOperatorContext *ctx) = 0;

  virtual void enterPrintln(BaseGrammarParser::PrintlnContext *ctx) = 0;
  virtual void exitPrintln(BaseGrammarParser::PrintlnContext *ctx) = 0;

  virtual void enterReturn(BaseGrammarParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(BaseGrammarParser::ReturnContext *ctx) = 0;

  virtual void enterBlockStatement(BaseGrammarParser::BlockStatementContext *ctx) = 0;
  virtual void exitBlockStatement(BaseGrammarParser::BlockStatementContext *ctx) = 0;

  virtual void enterFunctionCall(BaseGrammarParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(BaseGrammarParser::FunctionCallContext *ctx) = 0;

  virtual void enterFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterIfStatement(BaseGrammarParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(BaseGrammarParser::IfStatementContext *ctx) = 0;

  virtual void enterElifStatement(BaseGrammarParser::ElifStatementContext *ctx) = 0;
  virtual void exitElifStatement(BaseGrammarParser::ElifStatementContext *ctx) = 0;

  virtual void enterElseStatement(BaseGrammarParser::ElseStatementContext *ctx) = 0;
  virtual void exitElseStatement(BaseGrammarParser::ElseStatementContext *ctx) = 0;

  virtual void enterWhileStatement(BaseGrammarParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(BaseGrammarParser::WhileStatementContext *ctx) = 0;


};


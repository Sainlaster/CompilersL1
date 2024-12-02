
// Generated from BaseGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BaseGrammarListener.h"


/**
 * This class provides an empty implementation of BaseGrammarListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BaseGrammarBaseListener : public BaseGrammarListener {
public:

  virtual void enterProgram(BaseGrammarParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(BaseGrammarParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(BaseGrammarParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BaseGrammarParser::StatementContext * /*ctx*/) override { }

  virtual void enterStringExpr(BaseGrammarParser::StringExprContext * /*ctx*/) override { }
  virtual void exitStringExpr(BaseGrammarParser::StringExprContext * /*ctx*/) override { }

  virtual void enterDoubleExpr(BaseGrammarParser::DoubleExprContext * /*ctx*/) override { }
  virtual void exitDoubleExpr(BaseGrammarParser::DoubleExprContext * /*ctx*/) override { }

  virtual void enterIdExp(BaseGrammarParser::IdExpContext * /*ctx*/) override { }
  virtual void exitIdExp(BaseGrammarParser::IdExpContext * /*ctx*/) override { }

  virtual void enterCompExpr(BaseGrammarParser::CompExprContext * /*ctx*/) override { }
  virtual void exitCompExpr(BaseGrammarParser::CompExprContext * /*ctx*/) override { }

  virtual void enterPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext * /*ctx*/) override { }
  virtual void exitPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext * /*ctx*/) override { }

  virtual void enterFuncCallExpr(BaseGrammarParser::FuncCallExprContext * /*ctx*/) override { }
  virtual void exitFuncCallExpr(BaseGrammarParser::FuncCallExprContext * /*ctx*/) override { }

  virtual void enterBoolExpr(BaseGrammarParser::BoolExprContext * /*ctx*/) override { }
  virtual void exitBoolExpr(BaseGrammarParser::BoolExprContext * /*ctx*/) override { }

  virtual void enterParenthesisExpr(BaseGrammarParser::ParenthesisExprContext * /*ctx*/) override { }
  virtual void exitParenthesisExpr(BaseGrammarParser::ParenthesisExprContext * /*ctx*/) override { }

  virtual void enterMulDivExpr(BaseGrammarParser::MulDivExprContext * /*ctx*/) override { }
  virtual void exitMulDivExpr(BaseGrammarParser::MulDivExprContext * /*ctx*/) override { }

  virtual void enterNumExpr(BaseGrammarParser::NumExprContext * /*ctx*/) override { }
  virtual void exitNumExpr(BaseGrammarParser::NumExprContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(BaseGrammarParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(BaseGrammarParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterConstDeclaration(BaseGrammarParser::ConstDeclarationContext * /*ctx*/) override { }
  virtual void exitConstDeclaration(BaseGrammarParser::ConstDeclarationContext * /*ctx*/) override { }

  virtual void enterAssignment(BaseGrammarParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(BaseGrammarParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterCompOperator(BaseGrammarParser::CompOperatorContext * /*ctx*/) override { }
  virtual void exitCompOperator(BaseGrammarParser::CompOperatorContext * /*ctx*/) override { }

  virtual void enterPrintln(BaseGrammarParser::PrintlnContext * /*ctx*/) override { }
  virtual void exitPrintln(BaseGrammarParser::PrintlnContext * /*ctx*/) override { }

  virtual void enterReturn(BaseGrammarParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(BaseGrammarParser::ReturnContext * /*ctx*/) override { }

  virtual void enterBlockStatement(BaseGrammarParser::BlockStatementContext * /*ctx*/) override { }
  virtual void exitBlockStatement(BaseGrammarParser::BlockStatementContext * /*ctx*/) override { }

  virtual void enterFunctionCall(BaseGrammarParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(BaseGrammarParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterIfStatement(BaseGrammarParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(BaseGrammarParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElifStatement(BaseGrammarParser::ElifStatementContext * /*ctx*/) override { }
  virtual void exitElifStatement(BaseGrammarParser::ElifStatementContext * /*ctx*/) override { }

  virtual void enterElseStatement(BaseGrammarParser::ElseStatementContext * /*ctx*/) override { }
  virtual void exitElseStatement(BaseGrammarParser::ElseStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(BaseGrammarParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(BaseGrammarParser::WhileStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};



// Generated from BaseGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BaseGrammarVisitor.h"


/**
 * This class provides an empty implementation of BaseGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BaseGrammarBaseVisitor : public BaseGrammarVisitor {
public:

  virtual std::any visitProgram(BaseGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(BaseGrammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringExpr(BaseGrammarParser::StringExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleExpr(BaseGrammarParser::DoubleExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdExp(BaseGrammarParser::IdExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompExpr(BaseGrammarParser::CompExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCallExpr(BaseGrammarParser::FuncCallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolExpr(BaseGrammarParser::BoolExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenthesisExpr(BaseGrammarParser::ParenthesisExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDivExpr(BaseGrammarParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumExpr(BaseGrammarParser::NumExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaration(BaseGrammarParser::VariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDeclaration(BaseGrammarParser::ConstDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(BaseGrammarParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompOperator(BaseGrammarParser::CompOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintln(BaseGrammarParser::PrintlnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(BaseGrammarParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStatement(BaseGrammarParser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(BaseGrammarParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(BaseGrammarParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElifStatement(BaseGrammarParser::ElifStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStatement(BaseGrammarParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(BaseGrammarParser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }


};


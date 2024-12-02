
// Generated from BaseGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BaseGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BaseGrammarParser.
 */
class  BaseGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BaseGrammarParser.
   */
    virtual std::any visitProgram(BaseGrammarParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(BaseGrammarParser::StatementContext *context) = 0;

    virtual std::any visitStringExpr(BaseGrammarParser::StringExprContext *context) = 0;

    virtual std::any visitDoubleExpr(BaseGrammarParser::DoubleExprContext *context) = 0;

    virtual std::any visitIdExp(BaseGrammarParser::IdExpContext *context) = 0;

    virtual std::any visitCompExpr(BaseGrammarParser::CompExprContext *context) = 0;

    virtual std::any visitPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext *context) = 0;

    virtual std::any visitFuncCallExpr(BaseGrammarParser::FuncCallExprContext *context) = 0;

    virtual std::any visitBoolExpr(BaseGrammarParser::BoolExprContext *context) = 0;

    virtual std::any visitParenthesisExpr(BaseGrammarParser::ParenthesisExprContext *context) = 0;

    virtual std::any visitMulDivExpr(BaseGrammarParser::MulDivExprContext *context) = 0;

    virtual std::any visitNumExpr(BaseGrammarParser::NumExprContext *context) = 0;

    virtual std::any visitVariableDeclaration(BaseGrammarParser::VariableDeclarationContext *context) = 0;

    virtual std::any visitConstDeclaration(BaseGrammarParser::ConstDeclarationContext *context) = 0;

    virtual std::any visitAssignment(BaseGrammarParser::AssignmentContext *context) = 0;

    virtual std::any visitCompOperator(BaseGrammarParser::CompOperatorContext *context) = 0;

    virtual std::any visitPrintln(BaseGrammarParser::PrintlnContext *context) = 0;

    virtual std::any visitReturn(BaseGrammarParser::ReturnContext *context) = 0;

    virtual std::any visitBlockStatement(BaseGrammarParser::BlockStatementContext *context) = 0;

    virtual std::any visitFunctionCall(BaseGrammarParser::FunctionCallContext *context) = 0;

    virtual std::any visitFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext *context) = 0;

    virtual std::any visitIfStatement(BaseGrammarParser::IfStatementContext *context) = 0;

    virtual std::any visitElifStatement(BaseGrammarParser::ElifStatementContext *context) = 0;

    virtual std::any visitElseStatement(BaseGrammarParser::ElseStatementContext *context) = 0;

    virtual std::any visitWhileStatement(BaseGrammarParser::WhileStatementContext *context) = 0;


};


#include <iostream>
#include <map>
#include <string>
#include <stack>
#include "antlr4-runtime.h"
#include "BaseGrammarLexer.h"
#include "BaseGrammarParser.h"
#include "BaseGrammarVisitor.h"

struct Variable {
    int i;
    float f;
    std::string s;
    bool b=false;
    bool isConst = false;
    size_t type_id;
    enum {
        INT = 14,
        FLOAT = 15,
        STRING = 16,
        BOOL = 100
    };
    void setValue(std::string v) {
        if (!isConst) {
            switch (type_id) {
            case INT:
                i = std::atoi(v.c_str());
                break;
            case FLOAT:
                f = atof(v.c_str());
                break;
            case STRING:
                s = v;
                break;
            case BOOL:
                if (v == "True") {
                    b = true;
                }
                else {
                    b = false;
                }
                break;
            }
        }
        else {
            std::cout << "TRY TO CHANGE CONST VALUE\n" << type_id;
            exit(1);
        }
    }
    Variable operator + (const Variable& sec) const
    {
            if (type_id == sec.type_id) {
                Variable t;
                switch (type_id) {
                case INT:
                    t.type_id = INT;
                    t.i = i + sec.i;
                    return t;
                    break;
                case FLOAT:
                    t.type_id = FLOAT;
                    t.f = f + sec.f;
                    return t;
                    break;
                case STRING:
                    t.type_id = STRING;
                    t.f = f + sec.f;
                    return t;
                    break;
                }
            }
            else {
                std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
                exit(1);
            }
    }
    Variable operator - (const Variable& sec) const
    {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                t.type_id = INT;
                t.i = i - sec.i;
                return t;
                break;
            case FLOAT:
                t.type_id = FLOAT;
                t.f = f - sec.f;
                return t;
                break;
            case STRING:
                t.type_id = STRING;
                //t.i = i - sec.i;
                return t;
                break;
            }
        }
            else {
                std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
                exit(1);
            }
        
    }
    Variable operator * (const Variable& sec) const
    {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                t.type_id = INT;
                t.i = i * sec.i;
                return t;
                break;
            case FLOAT:
                t.type_id = FLOAT;
                t.f = f * sec.f;
                return t;
                break;
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    Variable operator / (const Variable& sec) const
    {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                t.type_id = INT;
                t.i = i / sec.i;
                return t;
                break;
            case FLOAT:
                t.type_id = FLOAT;
                t.f = f / sec.f;
                return t;
                break;
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }

    }
    bool operator < (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i < sec.i;
                break;
            case FLOAT:
                return f < sec.f;
                break;
            default:
                std::cout << "Cant compare, bad type\n";
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator <= (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i <= sec.i;
                break;
            case FLOAT:
                return f <= sec.f;
                break;
            default:
                std::cout << "Cant compare, bad type\n";
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator > (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i > sec.i;
                break;
            case FLOAT:
                return f > sec.f;
                break;
            default:
                std::cout << "Cant compare, bad type\n";
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator >= (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i >= sec.i;
                break;
            case FLOAT:
                return f >= sec.f;
                break;
            default:
                std::cout << "Cant compare, bad type\n";
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator == (const Variable& sec) const {
        if (type_id == sec.type_id) {
            switch (type_id) {
            case INT:
                return i == sec.i;
                break;
            case FLOAT:
                return f == sec.f;
                break;
            case STRING:
                return s == sec.s;
                break;
            default:
                std::cout << "Cant compare, bad type\n";
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    bool operator != (const Variable& sec) const {
        if (type_id == sec.type_id) {
            Variable t;
            switch (type_id) {
            case INT:
                return i != sec.i;
                break;
            case FLOAT:
                return f != sec.f;
                break;
            case STRING:
                return s != sec.s;
                break;
            default:
                std::cout << "Cant compare, bad type\n";
            }
        }
        else {
            std::cout << "Bad Types\n" << type_id << " " << sec.type_id;
            exit(1);
        }
    }
    std::string toString() {
        switch (type_id) {
        case INT:
            return std::to_string(i);
            break;
        case FLOAT:
            return std::to_string(f);
            break;
        case STRING:
            return s;
            break;
        case BOOL:
            if (b == true) {
                return "True";
            }
            else {
                return "False";
            }
            break;
        }
    }
    static Variable makeOperation(Variable v1, size_t op, Variable v2) {
        Variable t;
        switch (op)
        {
        case BaseGrammarLexer::PLUS:
            t = v1 + v2;
            return t;
            break;
        case BaseGrammarLexer::MINUS:
            t = v1 - v2;
            return t;
            break;
            case BaseGrammarLexer::ASTERISK:
                t = v1 * v2;
                return t;
                break;
            case BaseGrammarLexer::SLASH:
                t = v1 / v2;
                return t;
                break;
        default:
            break;
        }
    }
    static bool makeComp(Variable v1, size_t op, Variable v2) {
        Variable t;
        switch (op)
        {
        case BaseGrammarLexer::LESS:
            return v1 < v2;
            break;
        case BaseGrammarLexer::LESS_OR_EQUAL:
            return  v1 <= v2;
            break;
        case BaseGrammarLexer::EQUAL:
            return  v1 == v2;
            break;
        case BaseGrammarLexer::NOT_EQUAL:
            return  v1 != v2;
            break;
        case BaseGrammarLexer::GREATER:
            return  v1 > v2;
            break;
        case BaseGrammarLexer::GREATER_OR_EQUAL:
            return  v1 >= v2;
            break;
        default:
            break;
        }
    }
};

class TreeShapeListener : public BaseGrammarVisitor {
public:
    std::map<std::string, Variable> variables;
    std::stack<Variable> expressionStack;
    bool elifChecker = false;
    std::any visitProgram(BaseGrammarParser::ProgramContext* ctx) override {
        return visitChildren(ctx);
    }

    std::any visitStatement(BaseGrammarParser::StatementContext* ctx) override {
        return visitChildren(ctx);
    }
    std::any visitConstDeclaration(BaseGrammarParser::ConstDeclarationContext* ctx) override
    {
        Variable var;
        visit(ctx->expression());
        var = expressionStack.top();
        expressionStack.pop();
        variables[ctx->IDENTIFIER()->getText()] = var;
        var.isConst = true;
        std::cout << "SET CONST " << ctx->IDENTIFIER()->getText() << " as " << var.toString() << " (" << ctx->expression()->getText() << ")" << std::endl;
        return ctx;
    }
    std::any visitVariableDeclaration(BaseGrammarParser::VariableDeclarationContext* ctx) override {
        Variable var;
        visit(ctx->expression());
        var = expressionStack.top();
        expressionStack.pop();
        variables[ctx->IDENTIFIER()->getText()] = var;
        std::cout << "SET " << ctx->IDENTIFIER()->getText() << " as " << var.toString() <<" ("<<ctx->expression()->getText()<<")" << std::endl;
        return ctx;
    }

    std::any visitAssignment(BaseGrammarParser::AssignmentContext* ctx) override {
        visit(ctx->expression());
        Variable value = expressionStack.top();
        expressionStack.pop();
        variables[ctx->IDENTIFIER()->getText()] = value;
        std::cout << ctx->IDENTIFIER()->getText() <<" = "<< value.toString() <<" ("<<ctx->expression()->getText()<<")"<< std::endl;
        return ctx;
    }

    std::any visitPlusMinusExpr(BaseGrammarParser::PlusMinusExprContext* ctx) override {
        Variable left, right, result;
        visit(ctx->left);
        left = expressionStack.top();
        expressionStack.pop();
        visit(ctx->right);
        right = expressionStack.top();
        expressionStack.pop();
        result = Variable::makeOperation(left, ctx->op->getType(), right);
        expressionStack.push(result);
        return ctx;
    }
    std::any visitBoolExpr(BaseGrammarParser::BoolExprContext* ctx) override
    {
        Variable num;
        num.type_id = Variable::BOOL;
        num.setValue(ctx->getText());
        expressionStack.push(num);
        return ctx;
    }
    std::any visitNumExpr(BaseGrammarParser::NumExprContext* ctx) override {
        Variable num;
        num.type_id = Variable::INT;
        num.setValue(ctx->getText());
        expressionStack.push(num);
        return ctx;
    }

    std::any visitStringExpr(BaseGrammarParser::StringExprContext* ctx) override {
        Variable str;
        str.type_id = Variable::STRING;
        str.setValue(ctx->getText());
        expressionStack.push(str);
        return ctx;
    }

    std::any visitCompExpr(BaseGrammarParser::CompExprContext* ctx) override {
        Variable left, right, result;
        visit(ctx->left);
        left = expressionStack.top();
        expressionStack.pop();
        visit(ctx->right);
        right = expressionStack.top();
        expressionStack.pop();

        // Compare values
        bool comparisonResult = false;


        comparisonResult= Variable::makeComp(left, ctx->compOperator()->op->getType(), right);
        result.type_id = Variable::BOOL;
        result.setValue(comparisonResult ? "True" : "False");
        expressionStack.push(result);
        return ctx;
    }

    std::any visitIfStatement(BaseGrammarParser::IfStatementContext* ctx) override {
        Variable condition;
        visit(ctx->expression());
        condition = expressionStack.top();
        expressionStack.pop();
        elifChecker = false;
        if (condition.b) {
            visit(ctx->statement());
        }
        else {
            for (auto elif : ctx->elifStatement()) {
                visit(elif);
                if (elifChecker==true) {
                    return ctx;
                }
            }
            if (ctx->elseStatement()) {
                visit(ctx->elseStatement()->statement());
            }
        }
        return ctx;
    }
    std::any visitElifStatement(BaseGrammarParser::ElifStatementContext* ctx) override
    {
        visit(ctx->expression());
        Variable condition;
        condition = expressionStack.top();
        expressionStack.pop();
        if (condition.b) {
            visit(ctx->statement());
            elifChecker = true;
            return true;
        }
        return false;
    }
    std::any visitPrintln(BaseGrammarParser::PrintlnContext* ctx) override {
        visit(ctx->expression());
        Variable result = expressionStack.top();
        expressionStack.pop();
        std::cout << "Println: " << result.toString() << std::endl;
        return ctx;
    }


    // Унаследовано через BaseGrammarVisitor
    std::any visitDoubleExpr(BaseGrammarParser::DoubleExprContext* ctx) override
    {
        Variable num;
        num.type_id = Variable::FLOAT;
        num.setValue(ctx->getText());
        expressionStack.push(num);
        return ctx;
    }

    std::any visitIdExp(BaseGrammarParser::IdExpContext* ctx) override
    {
        expressionStack.push(variables[ctx->IDENTIFIER()->getText()]);
        return ctx;
    }

    std::any visitFuncCallExpr(BaseGrammarParser::FuncCallExprContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitParenthesisExpr(BaseGrammarParser::ParenthesisExprContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitMulDivExpr(BaseGrammarParser::MulDivExprContext* ctx) override
    {
        Variable left, right, result;
        visit(ctx->left);
        left = expressionStack.top();
        expressionStack.pop();
        visit(ctx->right);
        right = expressionStack.top();
        expressionStack.pop();
        result = Variable::makeOperation(left, ctx->op->getType(), right);
        expressionStack.push(result);
        return ctx;
    }

    std::any visitCompOperator(BaseGrammarParser::CompOperatorContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitReturn(BaseGrammarParser::ReturnContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitBlockStatement(BaseGrammarParser::BlockStatementContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitFunctionCall(BaseGrammarParser::FunctionCallContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitFunctionDefinition(BaseGrammarParser::FunctionDefinitionContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitElseStatement(BaseGrammarParser::ElseStatementContext* context) override
    {
        return visitChildren(context);
    }

    std::any visitWhileStatement(BaseGrammarParser::WhileStatementContext* ctx) override
    {
        Variable condition;
        visit(ctx->expression());
        condition = expressionStack.top();
        expressionStack.pop();
        while (condition.b) {
            visit(ctx->statement());
            visit(ctx->expression());
            condition = expressionStack.top();
            expressionStack.pop();
        }
        return ctx;

    }

};

int main(int argc, const char* argv[]) {
    std::ifstream stream("inp.txt");
    antlr4::ANTLRInputStream input(stream);
    BaseGrammarLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    BaseGrammarParser parser(&tokens);
    BaseGrammarParser::ProgramContext* trees = parser.program();

    TreeShapeListener visitor;
    visitor.visit(trees);

    return 0;
}

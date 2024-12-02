
// Generated from BaseGrammar.g4 by ANTLR 4.13.2


#include "BaseGrammarListener.h"
#include "BaseGrammarVisitor.h"

#include "BaseGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BaseGrammarParserStaticData final {
  BaseGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BaseGrammarParserStaticData(const BaseGrammarParserStaticData&) = delete;
  BaseGrammarParserStaticData(BaseGrammarParserStaticData&&) = delete;
  BaseGrammarParserStaticData& operator=(const BaseGrammarParserStaticData&) = delete;
  BaseGrammarParserStaticData& operator=(BaseGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag basegrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<BaseGrammarParserStaticData> basegrammarParserStaticData = nullptr;

void basegrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (basegrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(basegrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BaseGrammarParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "expression", "variableDeclaration", "constDeclaration", 
      "assignment", "compOperator", "println", "return", "blockStatement", 
      "functionCall", "functionDefinition", "ifStatement", "elifStatement", 
      "elseStatement", "whileStatement"
    },
    std::vector<std::string>{
      "", "'('", "')'", "'var'", "'const'", "'println'", "'return'", "'{'", 
      "'}'", "','", "'fun'", "'if'", "'elif'", "'else'", "'while'", "", 
      "", "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'=='", "'!='", 
      "'<'", "'<='", "'>'", "'>='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "IDENTIFIER", 
      "NUMBER", "DOUBLE_NUMBER", "STRING_LITERAL", "BOOL", "ASTERISK", "SLASH", 
      "PLUS", "MINUS", "ASSIGN", "EQUAL", "NOT_EQUAL", "LESS", "LESS_OR_EQUAL", 
      "GREATER", "GREATER_OR_EQUAL", "SPACE", "LINE_COMMENT", "MULTI_LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,33,178,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,1,0,5,0,34,8,0,10,0,12,0,37,9,0,1,0,1,0,1,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,3,1,51,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,3,2,64,8,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,76,8,
  	2,10,2,12,2,79,9,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,
  	5,1,5,1,6,1,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,1,9,5,9,105,8,9,10,9,12,9,108,
  	9,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,5,10,117,8,10,10,10,12,10,120,9,
  	10,3,10,122,8,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,5,11,132,8,11,
  	10,11,12,11,135,9,11,3,11,137,8,11,1,11,1,11,1,11,5,11,142,8,11,10,11,
  	12,11,145,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,5,12,155,8,12,
  	10,12,12,12,158,9,12,1,12,3,12,161,8,12,1,13,1,13,1,13,1,13,1,13,1,13,
  	1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,0,1,4,16,0,2,4,6,8,
  	10,12,14,16,18,20,22,24,26,28,30,0,3,1,0,20,21,1,0,22,23,1,0,25,30,188,
  	0,35,1,0,0,0,2,50,1,0,0,0,4,63,1,0,0,0,6,80,1,0,0,0,8,85,1,0,0,0,10,90,
  	1,0,0,0,12,94,1,0,0,0,14,96,1,0,0,0,16,99,1,0,0,0,18,102,1,0,0,0,20,111,
  	1,0,0,0,22,125,1,0,0,0,24,148,1,0,0,0,26,162,1,0,0,0,28,168,1,0,0,0,30,
  	171,1,0,0,0,32,34,3,2,1,0,33,32,1,0,0,0,34,37,1,0,0,0,35,33,1,0,0,0,35,
  	36,1,0,0,0,36,38,1,0,0,0,37,35,1,0,0,0,38,39,5,0,0,1,39,1,1,0,0,0,40,
  	51,3,6,3,0,41,51,3,8,4,0,42,51,3,10,5,0,43,51,3,22,11,0,44,51,3,20,10,
  	0,45,51,3,14,7,0,46,51,3,16,8,0,47,51,3,24,12,0,48,51,3,18,9,0,49,51,
  	3,30,15,0,50,40,1,0,0,0,50,41,1,0,0,0,50,42,1,0,0,0,50,43,1,0,0,0,50,
  	44,1,0,0,0,50,45,1,0,0,0,50,46,1,0,0,0,50,47,1,0,0,0,50,48,1,0,0,0,50,
  	49,1,0,0,0,51,3,1,0,0,0,52,53,6,2,-1,0,53,54,5,1,0,0,54,55,3,4,2,0,55,
  	56,5,2,0,0,56,64,1,0,0,0,57,64,5,15,0,0,58,64,5,16,0,0,59,64,5,17,0,0,
  	60,64,5,18,0,0,61,64,3,20,10,0,62,64,5,19,0,0,63,52,1,0,0,0,63,57,1,0,
  	0,0,63,58,1,0,0,0,63,59,1,0,0,0,63,60,1,0,0,0,63,61,1,0,0,0,63,62,1,0,
  	0,0,64,77,1,0,0,0,65,66,10,9,0,0,66,67,7,0,0,0,67,76,3,4,2,10,68,69,10,
  	8,0,0,69,70,7,1,0,0,70,76,3,4,2,9,71,72,10,7,0,0,72,73,3,12,6,0,73,74,
  	3,4,2,8,74,76,1,0,0,0,75,65,1,0,0,0,75,68,1,0,0,0,75,71,1,0,0,0,76,79,
  	1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,5,1,0,0,0,79,77,1,0,0,0,80,81,
  	5,3,0,0,81,82,5,15,0,0,82,83,5,24,0,0,83,84,3,4,2,0,84,7,1,0,0,0,85,86,
  	5,4,0,0,86,87,5,15,0,0,87,88,5,24,0,0,88,89,3,4,2,0,89,9,1,0,0,0,90,91,
  	5,15,0,0,91,92,5,24,0,0,92,93,3,4,2,0,93,11,1,0,0,0,94,95,7,2,0,0,95,
  	13,1,0,0,0,96,97,5,5,0,0,97,98,3,4,2,0,98,15,1,0,0,0,99,100,5,6,0,0,100,
  	101,3,4,2,0,101,17,1,0,0,0,102,106,5,7,0,0,103,105,3,2,1,0,104,103,1,
  	0,0,0,105,108,1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,109,1,0,0,0,
  	108,106,1,0,0,0,109,110,5,8,0,0,110,19,1,0,0,0,111,112,5,15,0,0,112,121,
  	5,1,0,0,113,118,3,4,2,0,114,115,5,9,0,0,115,117,3,4,2,0,116,114,1,0,0,
  	0,117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,122,1,0,0,0,120,
  	118,1,0,0,0,121,113,1,0,0,0,121,122,1,0,0,0,122,123,1,0,0,0,123,124,5,
  	2,0,0,124,21,1,0,0,0,125,126,5,10,0,0,126,127,5,15,0,0,127,136,5,1,0,
  	0,128,133,5,15,0,0,129,130,5,9,0,0,130,132,5,15,0,0,131,129,1,0,0,0,132,
  	135,1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,137,1,0,0,0,135,133,1,
  	0,0,0,136,128,1,0,0,0,136,137,1,0,0,0,137,138,1,0,0,0,138,139,5,2,0,0,
  	139,143,5,7,0,0,140,142,3,2,1,0,141,140,1,0,0,0,142,145,1,0,0,0,143,141,
  	1,0,0,0,143,144,1,0,0,0,144,146,1,0,0,0,145,143,1,0,0,0,146,147,5,8,0,
  	0,147,23,1,0,0,0,148,149,5,11,0,0,149,150,5,1,0,0,150,151,3,4,2,0,151,
  	152,5,2,0,0,152,156,3,2,1,0,153,155,3,26,13,0,154,153,1,0,0,0,155,158,
  	1,0,0,0,156,154,1,0,0,0,156,157,1,0,0,0,157,160,1,0,0,0,158,156,1,0,0,
  	0,159,161,3,28,14,0,160,159,1,0,0,0,160,161,1,0,0,0,161,25,1,0,0,0,162,
  	163,5,12,0,0,163,164,5,1,0,0,164,165,3,4,2,0,165,166,5,2,0,0,166,167,
  	3,2,1,0,167,27,1,0,0,0,168,169,5,13,0,0,169,170,3,2,1,0,170,29,1,0,0,
  	0,171,172,5,14,0,0,172,173,5,1,0,0,173,174,3,4,2,0,174,175,5,2,0,0,175,
  	176,3,2,1,0,176,31,1,0,0,0,13,35,50,63,75,77,106,118,121,133,136,143,
  	156,160
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  basegrammarParserStaticData = std::move(staticData);
}

}

BaseGrammarParser::BaseGrammarParser(TokenStream *input) : BaseGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BaseGrammarParser::BaseGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BaseGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *basegrammarParserStaticData->atn, basegrammarParserStaticData->decisionToDFA, basegrammarParserStaticData->sharedContextCache, options);
}

BaseGrammarParser::~BaseGrammarParser() {
  delete _interpreter;
}

const atn::ATN& BaseGrammarParser::getATN() const {
  return *basegrammarParserStaticData->atn;
}

std::string BaseGrammarParser::getGrammarFileName() const {
  return "BaseGrammar.g4";
}

const std::vector<std::string>& BaseGrammarParser::getRuleNames() const {
  return basegrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& BaseGrammarParser::getVocabulary() const {
  return basegrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BaseGrammarParser::getSerializedATN() const {
  return basegrammarParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

BaseGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BaseGrammarParser::ProgramContext::EOF() {
  return getToken(BaseGrammarParser::EOF, 0);
}

std::vector<BaseGrammarParser::StatementContext *> BaseGrammarParser::ProgramContext::statement() {
  return getRuleContexts<BaseGrammarParser::StatementContext>();
}

BaseGrammarParser::StatementContext* BaseGrammarParser::ProgramContext::statement(size_t i) {
  return getRuleContext<BaseGrammarParser::StatementContext>(i);
}


size_t BaseGrammarParser::ProgramContext::getRuleIndex() const {
  return BaseGrammarParser::RuleProgram;
}

void BaseGrammarParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void BaseGrammarParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any BaseGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::ProgramContext* BaseGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BaseGrammarParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 52472) != 0)) {
      setState(32);
      statement();
      setState(37);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(38);
    match(BaseGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BaseGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::VariableDeclarationContext* BaseGrammarParser::StatementContext::variableDeclaration() {
  return getRuleContext<BaseGrammarParser::VariableDeclarationContext>(0);
}

BaseGrammarParser::ConstDeclarationContext* BaseGrammarParser::StatementContext::constDeclaration() {
  return getRuleContext<BaseGrammarParser::ConstDeclarationContext>(0);
}

BaseGrammarParser::AssignmentContext* BaseGrammarParser::StatementContext::assignment() {
  return getRuleContext<BaseGrammarParser::AssignmentContext>(0);
}

BaseGrammarParser::FunctionDefinitionContext* BaseGrammarParser::StatementContext::functionDefinition() {
  return getRuleContext<BaseGrammarParser::FunctionDefinitionContext>(0);
}

BaseGrammarParser::FunctionCallContext* BaseGrammarParser::StatementContext::functionCall() {
  return getRuleContext<BaseGrammarParser::FunctionCallContext>(0);
}

BaseGrammarParser::PrintlnContext* BaseGrammarParser::StatementContext::println() {
  return getRuleContext<BaseGrammarParser::PrintlnContext>(0);
}

BaseGrammarParser::ReturnContext* BaseGrammarParser::StatementContext::return_() {
  return getRuleContext<BaseGrammarParser::ReturnContext>(0);
}

BaseGrammarParser::IfStatementContext* BaseGrammarParser::StatementContext::ifStatement() {
  return getRuleContext<BaseGrammarParser::IfStatementContext>(0);
}

BaseGrammarParser::BlockStatementContext* BaseGrammarParser::StatementContext::blockStatement() {
  return getRuleContext<BaseGrammarParser::BlockStatementContext>(0);
}

BaseGrammarParser::WhileStatementContext* BaseGrammarParser::StatementContext::whileStatement() {
  return getRuleContext<BaseGrammarParser::WhileStatementContext>(0);
}


size_t BaseGrammarParser::StatementContext::getRuleIndex() const {
  return BaseGrammarParser::RuleStatement;
}

void BaseGrammarParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void BaseGrammarParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any BaseGrammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::StatementContext* BaseGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, BaseGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(50);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(40);
      variableDeclaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      constDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(42);
      assignment();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(43);
      functionDefinition();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(44);
      functionCall();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(45);
      println();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(46);
      return_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(47);
      ifStatement();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(48);
      blockStatement();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(49);
      whileStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

BaseGrammarParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BaseGrammarParser::ExpressionContext::getRuleIndex() const {
  return BaseGrammarParser::RuleExpression;
}

void BaseGrammarParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringExprContext ------------------------------------------------------------------

tree::TerminalNode* BaseGrammarParser::StringExprContext::STRING_LITERAL() {
  return getToken(BaseGrammarParser::STRING_LITERAL, 0);
}

BaseGrammarParser::StringExprContext::StringExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::StringExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringExpr(this);
}
void BaseGrammarParser::StringExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringExpr(this);
}

std::any BaseGrammarParser::StringExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitStringExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleExprContext ------------------------------------------------------------------

tree::TerminalNode* BaseGrammarParser::DoubleExprContext::DOUBLE_NUMBER() {
  return getToken(BaseGrammarParser::DOUBLE_NUMBER, 0);
}

BaseGrammarParser::DoubleExprContext::DoubleExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::DoubleExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleExpr(this);
}
void BaseGrammarParser::DoubleExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleExpr(this);
}

std::any BaseGrammarParser::DoubleExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitDoubleExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdExpContext ------------------------------------------------------------------

tree::TerminalNode* BaseGrammarParser::IdExpContext::IDENTIFIER() {
  return getToken(BaseGrammarParser::IDENTIFIER, 0);
}

BaseGrammarParser::IdExpContext::IdExpContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::IdExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdExp(this);
}
void BaseGrammarParser::IdExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdExp(this);
}

std::any BaseGrammarParser::IdExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitIdExp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CompExprContext ------------------------------------------------------------------

BaseGrammarParser::CompOperatorContext* BaseGrammarParser::CompExprContext::compOperator() {
  return getRuleContext<BaseGrammarParser::CompOperatorContext>(0);
}

std::vector<BaseGrammarParser::ExpressionContext *> BaseGrammarParser::CompExprContext::expression() {
  return getRuleContexts<BaseGrammarParser::ExpressionContext>();
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::CompExprContext::expression(size_t i) {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(i);
}

BaseGrammarParser::CompExprContext::CompExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::CompExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompExpr(this);
}
void BaseGrammarParser::CompExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompExpr(this);
}

std::any BaseGrammarParser::CompExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitCompExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusMinusExprContext ------------------------------------------------------------------

std::vector<BaseGrammarParser::ExpressionContext *> BaseGrammarParser::PlusMinusExprContext::expression() {
  return getRuleContexts<BaseGrammarParser::ExpressionContext>();
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::PlusMinusExprContext::expression(size_t i) {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* BaseGrammarParser::PlusMinusExprContext::PLUS() {
  return getToken(BaseGrammarParser::PLUS, 0);
}

tree::TerminalNode* BaseGrammarParser::PlusMinusExprContext::MINUS() {
  return getToken(BaseGrammarParser::MINUS, 0);
}

BaseGrammarParser::PlusMinusExprContext::PlusMinusExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::PlusMinusExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusMinusExpr(this);
}
void BaseGrammarParser::PlusMinusExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusMinusExpr(this);
}

std::any BaseGrammarParser::PlusMinusExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitPlusMinusExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallExprContext ------------------------------------------------------------------

BaseGrammarParser::FunctionCallContext* BaseGrammarParser::FuncCallExprContext::functionCall() {
  return getRuleContext<BaseGrammarParser::FunctionCallContext>(0);
}

BaseGrammarParser::FuncCallExprContext::FuncCallExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::FuncCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncCallExpr(this);
}
void BaseGrammarParser::FuncCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncCallExpr(this);
}

std::any BaseGrammarParser::FuncCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitFuncCallExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExprContext ------------------------------------------------------------------

tree::TerminalNode* BaseGrammarParser::BoolExprContext::BOOL() {
  return getToken(BaseGrammarParser::BOOL, 0);
}

BaseGrammarParser::BoolExprContext::BoolExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::BoolExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpr(this);
}
void BaseGrammarParser::BoolExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpr(this);
}

std::any BaseGrammarParser::BoolExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitBoolExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesisExprContext ------------------------------------------------------------------

BaseGrammarParser::ExpressionContext* BaseGrammarParser::ParenthesisExprContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}

BaseGrammarParser::ParenthesisExprContext::ParenthesisExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::ParenthesisExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesisExpr(this);
}
void BaseGrammarParser::ParenthesisExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesisExpr(this);
}

std::any BaseGrammarParser::ParenthesisExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitParenthesisExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<BaseGrammarParser::ExpressionContext *> BaseGrammarParser::MulDivExprContext::expression() {
  return getRuleContexts<BaseGrammarParser::ExpressionContext>();
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::MulDivExprContext::expression(size_t i) {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(i);
}

tree::TerminalNode* BaseGrammarParser::MulDivExprContext::ASTERISK() {
  return getToken(BaseGrammarParser::ASTERISK, 0);
}

tree::TerminalNode* BaseGrammarParser::MulDivExprContext::SLASH() {
  return getToken(BaseGrammarParser::SLASH, 0);
}

BaseGrammarParser::MulDivExprContext::MulDivExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::MulDivExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulDivExpr(this);
}
void BaseGrammarParser::MulDivExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulDivExpr(this);
}

std::any BaseGrammarParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumExprContext ------------------------------------------------------------------

tree::TerminalNode* BaseGrammarParser::NumExprContext::NUMBER() {
  return getToken(BaseGrammarParser::NUMBER, 0);
}

BaseGrammarParser::NumExprContext::NumExprContext(ExpressionContext *ctx) { copyFrom(ctx); }

void BaseGrammarParser::NumExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumExpr(this);
}
void BaseGrammarParser::NumExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumExpr(this);
}

std::any BaseGrammarParser::NumExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitNumExpr(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::expression() {
   return expression(0);
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BaseGrammarParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  BaseGrammarParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, BaseGrammarParser::RuleExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParenthesisExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(53);
      match(BaseGrammarParser::T__0);
      setState(54);
      expression(0);
      setState(55);
      match(BaseGrammarParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IdExpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(57);
      match(BaseGrammarParser::IDENTIFIER);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(58);
      match(BaseGrammarParser::NUMBER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<DoubleExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(59);
      match(BaseGrammarParser::DOUBLE_NUMBER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StringExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      match(BaseGrammarParser::STRING_LITERAL);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<FuncCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(61);
      functionCall();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BoolExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(62);
      match(BaseGrammarParser::BOOL);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(77);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(75);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(65);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(66);
          antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BaseGrammarParser::ASTERISK

          || _la == BaseGrammarParser::SLASH)) {
            antlrcpp::downCast<MulDivExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(67);
          antlrcpp::downCast<MulDivExprContext *>(_localctx)->right = expression(10);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<PlusMinusExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(68);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(69);
          antlrcpp::downCast<PlusMinusExprContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BaseGrammarParser::PLUS

          || _la == BaseGrammarParser::MINUS)) {
            antlrcpp::downCast<PlusMinusExprContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(70);
          antlrcpp::downCast<PlusMinusExprContext *>(_localctx)->right = expression(9);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<CompExprContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(71);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(72);
          compOperator();
          setState(73);
          antlrcpp::downCast<CompExprContext *>(_localctx)->right = expression(8);
          break;
        }

        default:
          break;
        } 
      }
      setState(79);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

BaseGrammarParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BaseGrammarParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(BaseGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* BaseGrammarParser::VariableDeclarationContext::ASSIGN() {
  return getToken(BaseGrammarParser::ASSIGN, 0);
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::VariableDeclarationContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}


size_t BaseGrammarParser::VariableDeclarationContext::getRuleIndex() const {
  return BaseGrammarParser::RuleVariableDeclaration;
}

void BaseGrammarParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void BaseGrammarParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}


std::any BaseGrammarParser::VariableDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitVariableDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::VariableDeclarationContext* BaseGrammarParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 6, BaseGrammarParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(BaseGrammarParser::T__2);
    setState(81);
    match(BaseGrammarParser::IDENTIFIER);
    setState(82);
    match(BaseGrammarParser::ASSIGN);
    setState(83);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclarationContext ------------------------------------------------------------------

BaseGrammarParser::ConstDeclarationContext::ConstDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BaseGrammarParser::ConstDeclarationContext::IDENTIFIER() {
  return getToken(BaseGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* BaseGrammarParser::ConstDeclarationContext::ASSIGN() {
  return getToken(BaseGrammarParser::ASSIGN, 0);
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::ConstDeclarationContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}


size_t BaseGrammarParser::ConstDeclarationContext::getRuleIndex() const {
  return BaseGrammarParser::RuleConstDeclaration;
}

void BaseGrammarParser::ConstDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstDeclaration(this);
}

void BaseGrammarParser::ConstDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstDeclaration(this);
}


std::any BaseGrammarParser::ConstDeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitConstDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::ConstDeclarationContext* BaseGrammarParser::constDeclaration() {
  ConstDeclarationContext *_localctx = _tracker.createInstance<ConstDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, BaseGrammarParser::RuleConstDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(BaseGrammarParser::T__3);
    setState(86);
    match(BaseGrammarParser::IDENTIFIER);
    setState(87);
    match(BaseGrammarParser::ASSIGN);
    setState(88);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

BaseGrammarParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BaseGrammarParser::AssignmentContext::IDENTIFIER() {
  return getToken(BaseGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* BaseGrammarParser::AssignmentContext::ASSIGN() {
  return getToken(BaseGrammarParser::ASSIGN, 0);
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::AssignmentContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}


size_t BaseGrammarParser::AssignmentContext::getRuleIndex() const {
  return BaseGrammarParser::RuleAssignment;
}

void BaseGrammarParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void BaseGrammarParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any BaseGrammarParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::AssignmentContext* BaseGrammarParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 10, BaseGrammarParser::RuleAssignment);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    match(BaseGrammarParser::IDENTIFIER);
    setState(91);
    match(BaseGrammarParser::ASSIGN);
    setState(92);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompOperatorContext ------------------------------------------------------------------

BaseGrammarParser::CompOperatorContext::CompOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BaseGrammarParser::CompOperatorContext::LESS() {
  return getToken(BaseGrammarParser::LESS, 0);
}

tree::TerminalNode* BaseGrammarParser::CompOperatorContext::LESS_OR_EQUAL() {
  return getToken(BaseGrammarParser::LESS_OR_EQUAL, 0);
}

tree::TerminalNode* BaseGrammarParser::CompOperatorContext::EQUAL() {
  return getToken(BaseGrammarParser::EQUAL, 0);
}

tree::TerminalNode* BaseGrammarParser::CompOperatorContext::NOT_EQUAL() {
  return getToken(BaseGrammarParser::NOT_EQUAL, 0);
}

tree::TerminalNode* BaseGrammarParser::CompOperatorContext::GREATER() {
  return getToken(BaseGrammarParser::GREATER, 0);
}

tree::TerminalNode* BaseGrammarParser::CompOperatorContext::GREATER_OR_EQUAL() {
  return getToken(BaseGrammarParser::GREATER_OR_EQUAL, 0);
}


size_t BaseGrammarParser::CompOperatorContext::getRuleIndex() const {
  return BaseGrammarParser::RuleCompOperator;
}

void BaseGrammarParser::CompOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompOperator(this);
}

void BaseGrammarParser::CompOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompOperator(this);
}


std::any BaseGrammarParser::CompOperatorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitCompOperator(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::CompOperatorContext* BaseGrammarParser::compOperator() {
  CompOperatorContext *_localctx = _tracker.createInstance<CompOperatorContext>(_ctx, getState());
  enterRule(_localctx, 12, BaseGrammarParser::RuleCompOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    antlrcpp::downCast<CompOperatorContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2113929216) != 0))) {
      antlrcpp::downCast<CompOperatorContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintlnContext ------------------------------------------------------------------

BaseGrammarParser::PrintlnContext::PrintlnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::PrintlnContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}


size_t BaseGrammarParser::PrintlnContext::getRuleIndex() const {
  return BaseGrammarParser::RulePrintln;
}

void BaseGrammarParser::PrintlnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintln(this);
}

void BaseGrammarParser::PrintlnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintln(this);
}


std::any BaseGrammarParser::PrintlnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitPrintln(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::PrintlnContext* BaseGrammarParser::println() {
  PrintlnContext *_localctx = _tracker.createInstance<PrintlnContext>(_ctx, getState());
  enterRule(_localctx, 14, BaseGrammarParser::RulePrintln);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(BaseGrammarParser::T__4);
    setState(97);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

BaseGrammarParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::ReturnContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}


size_t BaseGrammarParser::ReturnContext::getRuleIndex() const {
  return BaseGrammarParser::RuleReturn;
}

void BaseGrammarParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}

void BaseGrammarParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}


std::any BaseGrammarParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::ReturnContext* BaseGrammarParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 16, BaseGrammarParser::RuleReturn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(BaseGrammarParser::T__5);
    setState(100);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

BaseGrammarParser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BaseGrammarParser::StatementContext *> BaseGrammarParser::BlockStatementContext::statement() {
  return getRuleContexts<BaseGrammarParser::StatementContext>();
}

BaseGrammarParser::StatementContext* BaseGrammarParser::BlockStatementContext::statement(size_t i) {
  return getRuleContext<BaseGrammarParser::StatementContext>(i);
}


size_t BaseGrammarParser::BlockStatementContext::getRuleIndex() const {
  return BaseGrammarParser::RuleBlockStatement;
}

void BaseGrammarParser::BlockStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlockStatement(this);
}

void BaseGrammarParser::BlockStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlockStatement(this);
}


std::any BaseGrammarParser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::BlockStatementContext* BaseGrammarParser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, BaseGrammarParser::RuleBlockStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    match(BaseGrammarParser::T__6);
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 52472) != 0)) {
      setState(103);
      statement();
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
    match(BaseGrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

BaseGrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BaseGrammarParser::FunctionCallContext::IDENTIFIER() {
  return getToken(BaseGrammarParser::IDENTIFIER, 0);
}

std::vector<BaseGrammarParser::ExpressionContext *> BaseGrammarParser::FunctionCallContext::expression() {
  return getRuleContexts<BaseGrammarParser::ExpressionContext>();
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::FunctionCallContext::expression(size_t i) {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(i);
}


size_t BaseGrammarParser::FunctionCallContext::getRuleIndex() const {
  return BaseGrammarParser::RuleFunctionCall;
}

void BaseGrammarParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void BaseGrammarParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any BaseGrammarParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::FunctionCallContext* BaseGrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 20, BaseGrammarParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(BaseGrammarParser::IDENTIFIER);
    setState(112);
    match(BaseGrammarParser::T__0);
    setState(121);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1015810) != 0)) {
      setState(113);
      expression(0);
      setState(118);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BaseGrammarParser::T__8) {
        setState(114);
        match(BaseGrammarParser::T__8);
        setState(115);
        expression(0);
        setState(120);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(123);
    match(BaseGrammarParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

BaseGrammarParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BaseGrammarParser::FunctionDefinitionContext::IDENTIFIER() {
  return getTokens(BaseGrammarParser::IDENTIFIER);
}

tree::TerminalNode* BaseGrammarParser::FunctionDefinitionContext::IDENTIFIER(size_t i) {
  return getToken(BaseGrammarParser::IDENTIFIER, i);
}

std::vector<BaseGrammarParser::StatementContext *> BaseGrammarParser::FunctionDefinitionContext::statement() {
  return getRuleContexts<BaseGrammarParser::StatementContext>();
}

BaseGrammarParser::StatementContext* BaseGrammarParser::FunctionDefinitionContext::statement(size_t i) {
  return getRuleContext<BaseGrammarParser::StatementContext>(i);
}


size_t BaseGrammarParser::FunctionDefinitionContext::getRuleIndex() const {
  return BaseGrammarParser::RuleFunctionDefinition;
}

void BaseGrammarParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void BaseGrammarParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}


std::any BaseGrammarParser::FunctionDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinition(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::FunctionDefinitionContext* BaseGrammarParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 22, BaseGrammarParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(BaseGrammarParser::T__9);
    setState(126);
    antlrcpp::downCast<FunctionDefinitionContext *>(_localctx)->name = match(BaseGrammarParser::IDENTIFIER);
    setState(127);
    match(BaseGrammarParser::T__0);
    setState(136);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BaseGrammarParser::IDENTIFIER) {
      setState(128);
      match(BaseGrammarParser::IDENTIFIER);
      setState(133);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == BaseGrammarParser::T__8) {
        setState(129);
        match(BaseGrammarParser::T__8);
        setState(130);
        match(BaseGrammarParser::IDENTIFIER);
        setState(135);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(138);
    match(BaseGrammarParser::T__1);
    setState(139);
    match(BaseGrammarParser::T__6);
    setState(143);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 52472) != 0)) {
      setState(140);
      statement();
      setState(145);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(146);
    match(BaseGrammarParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

BaseGrammarParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::IfStatementContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}

BaseGrammarParser::StatementContext* BaseGrammarParser::IfStatementContext::statement() {
  return getRuleContext<BaseGrammarParser::StatementContext>(0);
}

std::vector<BaseGrammarParser::ElifStatementContext *> BaseGrammarParser::IfStatementContext::elifStatement() {
  return getRuleContexts<BaseGrammarParser::ElifStatementContext>();
}

BaseGrammarParser::ElifStatementContext* BaseGrammarParser::IfStatementContext::elifStatement(size_t i) {
  return getRuleContext<BaseGrammarParser::ElifStatementContext>(i);
}

BaseGrammarParser::ElseStatementContext* BaseGrammarParser::IfStatementContext::elseStatement() {
  return getRuleContext<BaseGrammarParser::ElseStatementContext>(0);
}


size_t BaseGrammarParser::IfStatementContext::getRuleIndex() const {
  return BaseGrammarParser::RuleIfStatement;
}

void BaseGrammarParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void BaseGrammarParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any BaseGrammarParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::IfStatementContext* BaseGrammarParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, BaseGrammarParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(BaseGrammarParser::T__10);
    setState(149);
    match(BaseGrammarParser::T__0);
    setState(150);
    expression(0);
    setState(151);
    match(BaseGrammarParser::T__1);
    setState(152);
    statement();
    setState(156);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(153);
        elifStatement(); 
      }
      setState(158);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(160);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(159);
      elseStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElifStatementContext ------------------------------------------------------------------

BaseGrammarParser::ElifStatementContext::ElifStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::ElifStatementContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}

BaseGrammarParser::StatementContext* BaseGrammarParser::ElifStatementContext::statement() {
  return getRuleContext<BaseGrammarParser::StatementContext>(0);
}


size_t BaseGrammarParser::ElifStatementContext::getRuleIndex() const {
  return BaseGrammarParser::RuleElifStatement;
}

void BaseGrammarParser::ElifStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElifStatement(this);
}

void BaseGrammarParser::ElifStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElifStatement(this);
}


std::any BaseGrammarParser::ElifStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitElifStatement(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::ElifStatementContext* BaseGrammarParser::elifStatement() {
  ElifStatementContext *_localctx = _tracker.createInstance<ElifStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, BaseGrammarParser::RuleElifStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(BaseGrammarParser::T__11);
    setState(163);
    match(BaseGrammarParser::T__0);
    setState(164);
    expression(0);
    setState(165);
    match(BaseGrammarParser::T__1);
    setState(166);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

BaseGrammarParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::StatementContext* BaseGrammarParser::ElseStatementContext::statement() {
  return getRuleContext<BaseGrammarParser::StatementContext>(0);
}


size_t BaseGrammarParser::ElseStatementContext::getRuleIndex() const {
  return BaseGrammarParser::RuleElseStatement;
}

void BaseGrammarParser::ElseStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStatement(this);
}

void BaseGrammarParser::ElseStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStatement(this);
}


std::any BaseGrammarParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::ElseStatementContext* BaseGrammarParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, BaseGrammarParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(BaseGrammarParser::T__12);
    setState(169);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

BaseGrammarParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BaseGrammarParser::ExpressionContext* BaseGrammarParser::WhileStatementContext::expression() {
  return getRuleContext<BaseGrammarParser::ExpressionContext>(0);
}

BaseGrammarParser::StatementContext* BaseGrammarParser::WhileStatementContext::statement() {
  return getRuleContext<BaseGrammarParser::StatementContext>(0);
}


size_t BaseGrammarParser::WhileStatementContext::getRuleIndex() const {
  return BaseGrammarParser::RuleWhileStatement;
}

void BaseGrammarParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void BaseGrammarParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BaseGrammarListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any BaseGrammarParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BaseGrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

BaseGrammarParser::WhileStatementContext* BaseGrammarParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 30, BaseGrammarParser::RuleWhileStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(BaseGrammarParser::T__13);
    setState(172);
    match(BaseGrammarParser::T__0);
    setState(173);
    expression(0);
    setState(174);
    match(BaseGrammarParser::T__1);
    setState(175);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BaseGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BaseGrammarParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 8);
    case 2: return precpred(_ctx, 7);

  default:
    break;
  }
  return true;
}

void BaseGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  basegrammarParserInitialize();
#else
  ::antlr4::internal::call_once(basegrammarParserOnceFlag, basegrammarParserInitialize);
#endif
}

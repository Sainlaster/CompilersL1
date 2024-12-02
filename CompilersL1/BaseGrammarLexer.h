
// Generated from BaseGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  BaseGrammarLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    IDENTIFIER = 15, NUMBER = 16, DOUBLE_NUMBER = 17, STRING_LITERAL = 18, 
    BOOL = 19, ASTERISK = 20, SLASH = 21, PLUS = 22, MINUS = 23, ASSIGN = 24, 
    EQUAL = 25, NOT_EQUAL = 26, LESS = 27, LESS_OR_EQUAL = 28, GREATER = 29, 
    GREATER_OR_EQUAL = 30, SPACE = 31, LINE_COMMENT = 32, MULTI_LINE_COMMENT = 33
  };

  explicit BaseGrammarLexer(antlr4::CharStream *input);

  ~BaseGrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

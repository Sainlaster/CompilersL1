
// Generated from BaseGrammar.g4 by ANTLR 4.13.2


#include "BaseGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BaseGrammarLexerStaticData final {
  BaseGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BaseGrammarLexerStaticData(const BaseGrammarLexerStaticData&) = delete;
  BaseGrammarLexerStaticData(BaseGrammarLexerStaticData&&) = delete;
  BaseGrammarLexerStaticData& operator=(const BaseGrammarLexerStaticData&) = delete;
  BaseGrammarLexerStaticData& operator=(BaseGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag basegrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<BaseGrammarLexerStaticData> basegrammarlexerLexerStaticData = nullptr;

void basegrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (basegrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(basegrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BaseGrammarLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "IDENTIFIER", "NUMBER", 
      "DOUBLE_NUMBER", "STRING_LITERAL", "BOOL", "ASTERISK", "SLASH", "PLUS", 
      "MINUS", "ASSIGN", "EQUAL", "NOT_EQUAL", "LESS", "LESS_OR_EQUAL", 
      "GREATER", "GREATER_OR_EQUAL", "SPACE", "LINE_COMMENT", "MULTI_LINE_COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,33,219,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,1,0,1,0,1,1,1,1,1,2,1,2,
  	1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,
  	10,1,10,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,
  	13,1,13,1,13,1,13,1,14,1,14,5,14,128,8,14,10,14,12,14,131,9,14,1,15,4,
  	15,134,8,15,11,15,12,15,135,1,16,1,16,1,16,1,16,1,17,1,17,5,17,144,8,
  	17,10,17,12,17,147,9,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,3,18,160,8,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,
  	1,23,1,24,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,
  	1,29,1,29,1,29,1,30,4,30,189,8,30,11,30,12,30,190,1,30,1,30,1,31,1,31,
  	1,31,1,31,5,31,199,8,31,10,31,12,31,202,9,31,1,31,1,31,1,32,1,32,1,32,
  	1,32,5,32,210,8,32,10,32,12,32,213,9,32,1,32,1,32,1,32,1,32,1,32,1,211,
  	0,33,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,
  	27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,
  	25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,1,0,6,3,0,65,90,95,
  	95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,1,0,34,34,3,0,9,10,13,
  	13,32,32,2,0,10,10,13,13,225,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,
  	1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,
  	0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,
  	29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,
  	0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,
  	0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,
  	61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,1,67,1,0,0,0,3,69,1,0,0,0,5,71,1,
  	0,0,0,7,75,1,0,0,0,9,81,1,0,0,0,11,89,1,0,0,0,13,96,1,0,0,0,15,98,1,0,
  	0,0,17,100,1,0,0,0,19,102,1,0,0,0,21,106,1,0,0,0,23,109,1,0,0,0,25,114,
  	1,0,0,0,27,119,1,0,0,0,29,125,1,0,0,0,31,133,1,0,0,0,33,137,1,0,0,0,35,
  	141,1,0,0,0,37,159,1,0,0,0,39,161,1,0,0,0,41,163,1,0,0,0,43,165,1,0,0,
  	0,45,167,1,0,0,0,47,169,1,0,0,0,49,171,1,0,0,0,51,174,1,0,0,0,53,177,
  	1,0,0,0,55,179,1,0,0,0,57,182,1,0,0,0,59,184,1,0,0,0,61,188,1,0,0,0,63,
  	194,1,0,0,0,65,205,1,0,0,0,67,68,5,40,0,0,68,2,1,0,0,0,69,70,5,41,0,0,
  	70,4,1,0,0,0,71,72,5,118,0,0,72,73,5,97,0,0,73,74,5,114,0,0,74,6,1,0,
  	0,0,75,76,5,99,0,0,76,77,5,111,0,0,77,78,5,110,0,0,78,79,5,115,0,0,79,
  	80,5,116,0,0,80,8,1,0,0,0,81,82,5,112,0,0,82,83,5,114,0,0,83,84,5,105,
  	0,0,84,85,5,110,0,0,85,86,5,116,0,0,86,87,5,108,0,0,87,88,5,110,0,0,88,
  	10,1,0,0,0,89,90,5,114,0,0,90,91,5,101,0,0,91,92,5,116,0,0,92,93,5,117,
  	0,0,93,94,5,114,0,0,94,95,5,110,0,0,95,12,1,0,0,0,96,97,5,123,0,0,97,
  	14,1,0,0,0,98,99,5,125,0,0,99,16,1,0,0,0,100,101,5,44,0,0,101,18,1,0,
  	0,0,102,103,5,102,0,0,103,104,5,117,0,0,104,105,5,110,0,0,105,20,1,0,
  	0,0,106,107,5,105,0,0,107,108,5,102,0,0,108,22,1,0,0,0,109,110,5,101,
  	0,0,110,111,5,108,0,0,111,112,5,105,0,0,112,113,5,102,0,0,113,24,1,0,
  	0,0,114,115,5,101,0,0,115,116,5,108,0,0,116,117,5,115,0,0,117,118,5,101,
  	0,0,118,26,1,0,0,0,119,120,5,119,0,0,120,121,5,104,0,0,121,122,5,105,
  	0,0,122,123,5,108,0,0,123,124,5,101,0,0,124,28,1,0,0,0,125,129,7,0,0,
  	0,126,128,7,1,0,0,127,126,1,0,0,0,128,131,1,0,0,0,129,127,1,0,0,0,129,
  	130,1,0,0,0,130,30,1,0,0,0,131,129,1,0,0,0,132,134,7,2,0,0,133,132,1,
  	0,0,0,134,135,1,0,0,0,135,133,1,0,0,0,135,136,1,0,0,0,136,32,1,0,0,0,
  	137,138,3,31,15,0,138,139,5,46,0,0,139,140,3,31,15,0,140,34,1,0,0,0,141,
  	145,5,34,0,0,142,144,8,3,0,0,143,142,1,0,0,0,144,147,1,0,0,0,145,143,
  	1,0,0,0,145,146,1,0,0,0,146,148,1,0,0,0,147,145,1,0,0,0,148,149,5,34,
  	0,0,149,36,1,0,0,0,150,151,5,84,0,0,151,152,5,114,0,0,152,153,5,117,0,
  	0,153,160,5,101,0,0,154,155,5,70,0,0,155,156,5,97,0,0,156,157,5,108,0,
  	0,157,158,5,115,0,0,158,160,5,101,0,0,159,150,1,0,0,0,159,154,1,0,0,0,
  	160,38,1,0,0,0,161,162,5,42,0,0,162,40,1,0,0,0,163,164,5,47,0,0,164,42,
  	1,0,0,0,165,166,5,43,0,0,166,44,1,0,0,0,167,168,5,45,0,0,168,46,1,0,0,
  	0,169,170,5,61,0,0,170,48,1,0,0,0,171,172,5,61,0,0,172,173,5,61,0,0,173,
  	50,1,0,0,0,174,175,5,33,0,0,175,176,5,61,0,0,176,52,1,0,0,0,177,178,5,
  	60,0,0,178,54,1,0,0,0,179,180,5,60,0,0,180,181,5,61,0,0,181,56,1,0,0,
  	0,182,183,5,62,0,0,183,58,1,0,0,0,184,185,5,62,0,0,185,186,5,61,0,0,186,
  	60,1,0,0,0,187,189,7,4,0,0,188,187,1,0,0,0,189,190,1,0,0,0,190,188,1,
  	0,0,0,190,191,1,0,0,0,191,192,1,0,0,0,192,193,6,30,0,0,193,62,1,0,0,0,
  	194,195,5,47,0,0,195,196,5,47,0,0,196,200,1,0,0,0,197,199,8,5,0,0,198,
  	197,1,0,0,0,199,202,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,203,1,
  	0,0,0,202,200,1,0,0,0,203,204,6,31,0,0,204,64,1,0,0,0,205,206,5,47,0,
  	0,206,207,5,42,0,0,207,211,1,0,0,0,208,210,9,0,0,0,209,208,1,0,0,0,210,
  	213,1,0,0,0,211,212,1,0,0,0,211,209,1,0,0,0,212,214,1,0,0,0,213,211,1,
  	0,0,0,214,215,5,42,0,0,215,216,5,47,0,0,216,217,1,0,0,0,217,218,6,32,
  	0,0,218,66,1,0,0,0,8,0,129,135,145,159,190,200,211,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  basegrammarlexerLexerStaticData = std::move(staticData);
}

}

BaseGrammarLexer::BaseGrammarLexer(CharStream *input) : Lexer(input) {
  BaseGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *basegrammarlexerLexerStaticData->atn, basegrammarlexerLexerStaticData->decisionToDFA, basegrammarlexerLexerStaticData->sharedContextCache);
}

BaseGrammarLexer::~BaseGrammarLexer() {
  delete _interpreter;
}

std::string BaseGrammarLexer::getGrammarFileName() const {
  return "BaseGrammar.g4";
}

const std::vector<std::string>& BaseGrammarLexer::getRuleNames() const {
  return basegrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BaseGrammarLexer::getChannelNames() const {
  return basegrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BaseGrammarLexer::getModeNames() const {
  return basegrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BaseGrammarLexer::getVocabulary() const {
  return basegrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BaseGrammarLexer::getSerializedATN() const {
  return basegrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& BaseGrammarLexer::getATN() const {
  return *basegrammarlexerLexerStaticData->atn;
}




void BaseGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  basegrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(basegrammarlexerLexerOnceFlag, basegrammarlexerLexerInitialize);
#endif
}

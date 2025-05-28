
// Generated from translator.g4 by ANTLR 4.13.2


#include "translatorLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct TranslatorLexerStaticData final {
  TranslatorLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TranslatorLexerStaticData(const TranslatorLexerStaticData&) = delete;
  TranslatorLexerStaticData(TranslatorLexerStaticData&&) = delete;
  TranslatorLexerStaticData& operator=(const TranslatorLexerStaticData&) = delete;
  TranslatorLexerStaticData& operator=(TranslatorLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag translatorlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TranslatorLexerStaticData> translatorlexerLexerStaticData = nullptr;

void translatorlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (translatorlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(translatorlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TranslatorLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "INT", "FLOAT", "VAR", "SUB", "ADD", "DIV", 
      "MUL", "POW", "INC", "DEC", "EQ", "NE", "LS", "LE", "GT", "GE", "OR", 
      "AND", "NOT", "SEP", "ASGN", "ADD_ASGN", "SUB_ASGN", "MUL_ASGN", "DIV_ASGN", 
      "LBR", "RBR", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'if'", "'{'", "'}'", "'elif'", "'else'", "'while'", "'print'", 
      "'abs'", "'sqrt'", "'max'", "','", "'min'", "", "", "", "'-'", "'+'", 
      "'/'", "'*'", "'^'", "'++'", "'--'", "'=='", "'!='", "'<'", "'<='", 
      "'>'", "'>='", "'||'", "'&&'", "'!'", "';'", "'='", "'+='", "'-='", 
      "'*='", "'/='", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "INT", "FLOAT", 
      "VAR", "SUB", "ADD", "DIV", "MUL", "POW", "INC", "DEC", "EQ", "NE", 
      "LS", "LE", "GT", "GE", "OR", "AND", "NOT", "SEP", "ASGN", "ADD_ASGN", 
      "SUB_ASGN", "MUL_ASGN", "DIV_ASGN", "LBR", "RBR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,40,226,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,1,0,1,0,1,0,1,1,1,1,1,2,
  	1,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,
  	1,9,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,12,5,12,133,8,12,10,12,
  	12,12,136,9,12,3,12,138,8,12,1,13,1,13,1,13,5,13,143,8,13,10,13,12,13,
  	146,9,13,1,13,1,13,4,13,150,8,13,11,13,12,13,151,3,13,154,8,13,1,14,1,
  	14,5,14,158,8,14,10,14,12,14,161,9,14,1,15,1,15,1,16,1,16,1,17,1,17,1,
  	18,1,18,1,19,1,19,1,20,1,20,1,20,1,21,1,21,1,21,1,22,1,22,1,22,1,23,1,
  	23,1,23,1,24,1,24,1,25,1,25,1,25,1,26,1,26,1,27,1,27,1,27,1,28,1,28,1,
  	28,1,29,1,29,1,29,1,30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,33,1,34,1,
  	34,1,34,1,35,1,35,1,35,1,36,1,36,1,36,1,37,1,37,1,38,1,38,1,39,1,39,1,
  	39,1,39,0,0,40,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,
  	47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,69,
  	35,71,36,73,37,75,38,77,39,79,40,1,0,5,1,0,49,57,1,0,48,57,3,0,65,90,
  	95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,9,10,13,13,32,32,231,0,
  	1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,
  	0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,
  	23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,
  	0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,
  	0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,
  	55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,
  	0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,
  	0,0,77,1,0,0,0,0,79,1,0,0,0,1,81,1,0,0,0,3,84,1,0,0,0,5,86,1,0,0,0,7,
  	88,1,0,0,0,9,93,1,0,0,0,11,98,1,0,0,0,13,104,1,0,0,0,15,110,1,0,0,0,17,
  	114,1,0,0,0,19,119,1,0,0,0,21,123,1,0,0,0,23,125,1,0,0,0,25,137,1,0,0,
  	0,27,153,1,0,0,0,29,155,1,0,0,0,31,162,1,0,0,0,33,164,1,0,0,0,35,166,
  	1,0,0,0,37,168,1,0,0,0,39,170,1,0,0,0,41,172,1,0,0,0,43,175,1,0,0,0,45,
  	178,1,0,0,0,47,181,1,0,0,0,49,184,1,0,0,0,51,186,1,0,0,0,53,189,1,0,0,
  	0,55,191,1,0,0,0,57,194,1,0,0,0,59,197,1,0,0,0,61,200,1,0,0,0,63,202,
  	1,0,0,0,65,204,1,0,0,0,67,206,1,0,0,0,69,209,1,0,0,0,71,212,1,0,0,0,73,
  	215,1,0,0,0,75,218,1,0,0,0,77,220,1,0,0,0,79,222,1,0,0,0,81,82,5,105,
  	0,0,82,83,5,102,0,0,83,2,1,0,0,0,84,85,5,123,0,0,85,4,1,0,0,0,86,87,5,
  	125,0,0,87,6,1,0,0,0,88,89,5,101,0,0,89,90,5,108,0,0,90,91,5,105,0,0,
  	91,92,5,102,0,0,92,8,1,0,0,0,93,94,5,101,0,0,94,95,5,108,0,0,95,96,5,
  	115,0,0,96,97,5,101,0,0,97,10,1,0,0,0,98,99,5,119,0,0,99,100,5,104,0,
  	0,100,101,5,105,0,0,101,102,5,108,0,0,102,103,5,101,0,0,103,12,1,0,0,
  	0,104,105,5,112,0,0,105,106,5,114,0,0,106,107,5,105,0,0,107,108,5,110,
  	0,0,108,109,5,116,0,0,109,14,1,0,0,0,110,111,5,97,0,0,111,112,5,98,0,
  	0,112,113,5,115,0,0,113,16,1,0,0,0,114,115,5,115,0,0,115,116,5,113,0,
  	0,116,117,5,114,0,0,117,118,5,116,0,0,118,18,1,0,0,0,119,120,5,109,0,
  	0,120,121,5,97,0,0,121,122,5,120,0,0,122,20,1,0,0,0,123,124,5,44,0,0,
  	124,22,1,0,0,0,125,126,5,109,0,0,126,127,5,105,0,0,127,128,5,110,0,0,
  	128,24,1,0,0,0,129,138,5,48,0,0,130,134,7,0,0,0,131,133,7,1,0,0,132,131,
  	1,0,0,0,133,136,1,0,0,0,134,132,1,0,0,0,134,135,1,0,0,0,135,138,1,0,0,
  	0,136,134,1,0,0,0,137,129,1,0,0,0,137,130,1,0,0,0,138,26,1,0,0,0,139,
  	140,3,25,12,0,140,144,5,46,0,0,141,143,7,1,0,0,142,141,1,0,0,0,143,146,
  	1,0,0,0,144,142,1,0,0,0,144,145,1,0,0,0,145,154,1,0,0,0,146,144,1,0,0,
  	0,147,149,5,46,0,0,148,150,7,1,0,0,149,148,1,0,0,0,150,151,1,0,0,0,151,
  	149,1,0,0,0,151,152,1,0,0,0,152,154,1,0,0,0,153,139,1,0,0,0,153,147,1,
  	0,0,0,154,28,1,0,0,0,155,159,7,2,0,0,156,158,7,3,0,0,157,156,1,0,0,0,
  	158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,30,1,0,0,0,161,159,
  	1,0,0,0,162,163,5,45,0,0,163,32,1,0,0,0,164,165,5,43,0,0,165,34,1,0,0,
  	0,166,167,5,47,0,0,167,36,1,0,0,0,168,169,5,42,0,0,169,38,1,0,0,0,170,
  	171,5,94,0,0,171,40,1,0,0,0,172,173,5,43,0,0,173,174,5,43,0,0,174,42,
  	1,0,0,0,175,176,5,45,0,0,176,177,5,45,0,0,177,44,1,0,0,0,178,179,5,61,
  	0,0,179,180,5,61,0,0,180,46,1,0,0,0,181,182,5,33,0,0,182,183,5,61,0,0,
  	183,48,1,0,0,0,184,185,5,60,0,0,185,50,1,0,0,0,186,187,5,60,0,0,187,188,
  	5,61,0,0,188,52,1,0,0,0,189,190,5,62,0,0,190,54,1,0,0,0,191,192,5,62,
  	0,0,192,193,5,61,0,0,193,56,1,0,0,0,194,195,5,124,0,0,195,196,5,124,0,
  	0,196,58,1,0,0,0,197,198,5,38,0,0,198,199,5,38,0,0,199,60,1,0,0,0,200,
  	201,5,33,0,0,201,62,1,0,0,0,202,203,5,59,0,0,203,64,1,0,0,0,204,205,5,
  	61,0,0,205,66,1,0,0,0,206,207,5,43,0,0,207,208,5,61,0,0,208,68,1,0,0,
  	0,209,210,5,45,0,0,210,211,5,61,0,0,211,70,1,0,0,0,212,213,5,42,0,0,213,
  	214,5,61,0,0,214,72,1,0,0,0,215,216,5,47,0,0,216,217,5,61,0,0,217,74,
  	1,0,0,0,218,219,5,40,0,0,219,76,1,0,0,0,220,221,5,41,0,0,221,78,1,0,0,
  	0,222,223,7,4,0,0,223,224,1,0,0,0,224,225,6,39,0,0,225,80,1,0,0,0,7,0,
  	134,137,144,151,153,159,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  translatorlexerLexerStaticData = std::move(staticData);
}

}

translatorLexer::translatorLexer(CharStream *input) : Lexer(input) {
  translatorLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *translatorlexerLexerStaticData->atn, translatorlexerLexerStaticData->decisionToDFA, translatorlexerLexerStaticData->sharedContextCache);
}

translatorLexer::~translatorLexer() {
  delete _interpreter;
}

std::string translatorLexer::getGrammarFileName() const {
  return "translator.g4";
}

const std::vector<std::string>& translatorLexer::getRuleNames() const {
  return translatorlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& translatorLexer::getChannelNames() const {
  return translatorlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& translatorLexer::getModeNames() const {
  return translatorlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& translatorLexer::getVocabulary() const {
  return translatorlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView translatorLexer::getSerializedATN() const {
  return translatorlexerLexerStaticData->serializedATN;
}

const atn::ATN& translatorLexer::getATN() const {
  return *translatorlexerLexerStaticData->atn;
}




void translatorLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  translatorlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(translatorlexerLexerOnceFlag, translatorlexerLexerInitialize);
#endif
}

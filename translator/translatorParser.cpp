
// Generated from translator.g4 by ANTLR 4.13.2


#include "translatorVisitor.h"

#include "translatorParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct TranslatorParserStaticData final {
  TranslatorParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  TranslatorParserStaticData(const TranslatorParserStaticData&) = delete;
  TranslatorParserStaticData(TranslatorParserStaticData&&) = delete;
  TranslatorParserStaticData& operator=(const TranslatorParserStaticData&) = delete;
  TranslatorParserStaticData& operator=(TranslatorParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag translatorParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<TranslatorParserStaticData> translatorParserStaticData = nullptr;

void translatorParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (translatorParserStaticData != nullptr) {
    return;
  }
#else
  assert(translatorParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<TranslatorParserStaticData>(
    std::vector<std::string>{
      "expr", "arth_expr", "term", "power", "factor", "compare", "logic_expr", 
      "logic_term", "logic_factor", "elif", "while", "functions", "row", 
      "prog"
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
  	4,1,40,322,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,1,0,
  	1,0,3,0,32,8,0,1,1,1,1,1,1,1,1,1,1,1,1,5,1,40,8,1,10,1,12,1,43,9,1,1,
  	2,1,2,1,2,1,2,1,2,1,2,5,2,51,8,2,10,2,12,2,54,9,2,1,3,1,3,1,3,1,3,1,3,
  	3,3,61,8,3,1,4,3,4,64,8,4,1,4,1,4,1,4,1,4,1,4,3,4,71,8,4,1,4,1,4,3,4,
  	75,8,4,1,4,1,4,3,4,79,8,4,1,4,3,4,82,8,4,1,5,1,5,1,5,1,5,1,5,3,5,89,8,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,97,8,5,1,5,1,5,1,5,1,5,1,5,3,5,104,8,5,
  	1,5,1,5,1,5,1,5,1,5,1,5,3,5,112,8,5,1,5,1,5,1,5,1,5,1,5,3,5,119,8,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,3,5,127,8,5,1,5,1,5,1,5,1,5,1,5,3,5,134,8,5,1,5,
  	1,5,1,5,1,5,1,5,1,5,3,5,142,8,5,1,5,1,5,1,5,1,5,1,5,3,5,149,8,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,3,5,157,8,5,1,5,1,5,1,5,1,5,1,5,3,5,164,8,5,1,5,1,5,
  	1,5,1,5,1,5,1,5,3,5,172,8,5,3,5,174,8,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,3,6,186,8,6,1,7,1,7,1,7,1,7,1,7,3,7,193,8,7,1,8,1,8,1,8,1,8,
  	1,8,1,8,3,8,201,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,5,9,218,8,9,10,9,12,9,221,9,9,1,9,1,9,1,9,1,9,1,9,3,9,228,8,
  	9,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,267,8,11,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,305,8,12,1,13,1,13,1,13,3,13,310,
  	8,13,1,13,1,13,1,13,3,13,315,8,13,5,13,317,8,13,10,13,12,13,320,9,13,
  	1,13,0,3,2,4,26,14,0,2,4,6,8,10,12,14,16,18,20,22,24,26,0,2,1,0,16,17,
  	1,0,18,19,359,0,31,1,0,0,0,2,33,1,0,0,0,4,44,1,0,0,0,6,60,1,0,0,0,8,81,
  	1,0,0,0,10,173,1,0,0,0,12,185,1,0,0,0,14,192,1,0,0,0,16,200,1,0,0,0,18,
  	202,1,0,0,0,20,229,1,0,0,0,22,266,1,0,0,0,24,304,1,0,0,0,26,306,1,0,0,
  	0,28,32,3,2,1,0,29,32,3,12,6,0,30,32,3,22,11,0,31,28,1,0,0,0,31,29,1,
  	0,0,0,31,30,1,0,0,0,32,1,1,0,0,0,33,34,6,1,-1,0,34,35,3,4,2,0,35,41,1,
  	0,0,0,36,37,10,2,0,0,37,38,7,0,0,0,38,40,3,4,2,0,39,36,1,0,0,0,40,43,
  	1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,3,1,0,0,0,43,41,1,0,0,0,44,45,
  	6,2,-1,0,45,46,3,6,3,0,46,52,1,0,0,0,47,48,10,2,0,0,48,49,7,1,0,0,49,
  	51,3,6,3,0,50,47,1,0,0,0,51,54,1,0,0,0,52,50,1,0,0,0,52,53,1,0,0,0,53,
  	5,1,0,0,0,54,52,1,0,0,0,55,56,3,8,4,0,56,57,5,20,0,0,57,58,3,6,3,0,58,
  	61,1,0,0,0,59,61,3,8,4,0,60,55,1,0,0,0,60,59,1,0,0,0,61,7,1,0,0,0,62,
  	64,7,0,0,0,63,62,1,0,0,0,63,64,1,0,0,0,64,65,1,0,0,0,65,66,5,38,0,0,66,
  	67,3,2,1,0,67,68,5,39,0,0,68,82,1,0,0,0,69,71,7,0,0,0,70,69,1,0,0,0,70,
  	71,1,0,0,0,71,72,1,0,0,0,72,82,5,13,0,0,73,75,7,0,0,0,74,73,1,0,0,0,74,
  	75,1,0,0,0,75,76,1,0,0,0,76,82,5,14,0,0,77,79,7,0,0,0,78,77,1,0,0,0,78,
  	79,1,0,0,0,79,80,1,0,0,0,80,82,5,15,0,0,81,63,1,0,0,0,81,70,1,0,0,0,81,
  	74,1,0,0,0,81,78,1,0,0,0,82,9,1,0,0,0,83,89,3,2,1,0,84,85,5,38,0,0,85,
  	86,3,12,6,0,86,87,5,39,0,0,87,89,1,0,0,0,88,83,1,0,0,0,88,84,1,0,0,0,
  	89,90,1,0,0,0,90,96,5,23,0,0,91,97,3,2,1,0,92,93,5,38,0,0,93,94,3,12,
  	6,0,94,95,5,39,0,0,95,97,1,0,0,0,96,91,1,0,0,0,96,92,1,0,0,0,97,174,1,
  	0,0,0,98,104,3,2,1,0,99,100,5,38,0,0,100,101,3,12,6,0,101,102,5,39,0,
  	0,102,104,1,0,0,0,103,98,1,0,0,0,103,99,1,0,0,0,104,105,1,0,0,0,105,111,
  	5,24,0,0,106,112,3,2,1,0,107,108,5,38,0,0,108,109,3,12,6,0,109,110,5,
  	39,0,0,110,112,1,0,0,0,111,106,1,0,0,0,111,107,1,0,0,0,112,174,1,0,0,
  	0,113,119,3,2,1,0,114,115,5,38,0,0,115,116,3,12,6,0,116,117,5,39,0,0,
  	117,119,1,0,0,0,118,113,1,0,0,0,118,114,1,0,0,0,119,120,1,0,0,0,120,126,
  	5,25,0,0,121,127,3,2,1,0,122,123,5,38,0,0,123,124,3,12,6,0,124,125,5,
  	39,0,0,125,127,1,0,0,0,126,121,1,0,0,0,126,122,1,0,0,0,127,174,1,0,0,
  	0,128,134,3,2,1,0,129,130,5,38,0,0,130,131,3,12,6,0,131,132,5,39,0,0,
  	132,134,1,0,0,0,133,128,1,0,0,0,133,129,1,0,0,0,134,135,1,0,0,0,135,141,
  	5,26,0,0,136,142,3,2,1,0,137,138,5,38,0,0,138,139,3,12,6,0,139,140,5,
  	39,0,0,140,142,1,0,0,0,141,136,1,0,0,0,141,137,1,0,0,0,142,174,1,0,0,
  	0,143,149,3,2,1,0,144,145,5,38,0,0,145,146,3,12,6,0,146,147,5,39,0,0,
  	147,149,1,0,0,0,148,143,1,0,0,0,148,144,1,0,0,0,149,150,1,0,0,0,150,156,
  	5,27,0,0,151,157,3,2,1,0,152,153,5,38,0,0,153,154,3,12,6,0,154,155,5,
  	39,0,0,155,157,1,0,0,0,156,151,1,0,0,0,156,152,1,0,0,0,157,174,1,0,0,
  	0,158,164,3,2,1,0,159,160,5,38,0,0,160,161,3,12,6,0,161,162,5,39,0,0,
  	162,164,1,0,0,0,163,158,1,0,0,0,163,159,1,0,0,0,164,165,1,0,0,0,165,171,
  	5,28,0,0,166,172,3,2,1,0,167,168,5,38,0,0,168,169,3,12,6,0,169,170,5,
  	39,0,0,170,172,1,0,0,0,171,166,1,0,0,0,171,167,1,0,0,0,172,174,1,0,0,
  	0,173,88,1,0,0,0,173,103,1,0,0,0,173,118,1,0,0,0,173,133,1,0,0,0,173,
  	148,1,0,0,0,173,163,1,0,0,0,174,11,1,0,0,0,175,176,5,31,0,0,176,177,5,
  	38,0,0,177,178,3,14,7,0,178,179,5,39,0,0,179,186,1,0,0,0,180,181,3,14,
  	7,0,181,182,5,29,0,0,182,183,3,12,6,0,183,186,1,0,0,0,184,186,3,14,7,
  	0,185,175,1,0,0,0,185,180,1,0,0,0,185,184,1,0,0,0,186,13,1,0,0,0,187,
  	188,3,16,8,0,188,189,5,30,0,0,189,190,3,14,7,0,190,193,1,0,0,0,191,193,
  	3,16,8,0,192,187,1,0,0,0,192,191,1,0,0,0,193,15,1,0,0,0,194,195,5,38,
  	0,0,195,196,3,12,6,0,196,197,5,39,0,0,197,201,1,0,0,0,198,201,3,10,5,
  	0,199,201,3,2,1,0,200,194,1,0,0,0,200,198,1,0,0,0,200,199,1,0,0,0,201,
  	17,1,0,0,0,202,203,5,1,0,0,203,204,5,38,0,0,204,205,3,12,6,0,205,206,
  	5,39,0,0,206,207,5,2,0,0,207,208,3,26,13,0,208,219,5,3,0,0,209,210,5,
  	4,0,0,210,211,5,38,0,0,211,212,3,12,6,0,212,213,5,39,0,0,213,214,5,2,
  	0,0,214,215,3,26,13,0,215,216,5,3,0,0,216,218,1,0,0,0,217,209,1,0,0,0,
  	218,221,1,0,0,0,219,217,1,0,0,0,219,220,1,0,0,0,220,227,1,0,0,0,221,219,
  	1,0,0,0,222,223,5,5,0,0,223,224,5,2,0,0,224,225,3,26,13,0,225,226,5,3,
  	0,0,226,228,1,0,0,0,227,222,1,0,0,0,227,228,1,0,0,0,228,19,1,0,0,0,229,
  	230,5,6,0,0,230,231,5,38,0,0,231,232,3,12,6,0,232,233,5,39,0,0,233,234,
  	5,2,0,0,234,235,3,26,13,0,235,236,5,3,0,0,236,21,1,0,0,0,237,238,5,7,
  	0,0,238,239,5,38,0,0,239,240,3,0,0,0,240,241,5,39,0,0,241,267,1,0,0,0,
  	242,243,5,8,0,0,243,244,5,38,0,0,244,245,3,0,0,0,245,246,5,39,0,0,246,
  	267,1,0,0,0,247,248,5,9,0,0,248,249,5,38,0,0,249,250,3,0,0,0,250,251,
  	5,39,0,0,251,267,1,0,0,0,252,253,5,10,0,0,253,254,5,38,0,0,254,255,3,
  	0,0,0,255,256,5,11,0,0,256,257,3,0,0,0,257,258,5,39,0,0,258,267,1,0,0,
  	0,259,260,5,12,0,0,260,261,5,38,0,0,261,262,3,0,0,0,262,263,5,11,0,0,
  	263,264,3,0,0,0,264,265,5,39,0,0,265,267,1,0,0,0,266,237,1,0,0,0,266,
  	242,1,0,0,0,266,247,1,0,0,0,266,252,1,0,0,0,266,259,1,0,0,0,267,23,1,
  	0,0,0,268,269,3,0,0,0,269,270,5,32,0,0,270,305,1,0,0,0,271,272,5,15,0,
  	0,272,273,5,33,0,0,273,274,3,0,0,0,274,275,5,32,0,0,275,305,1,0,0,0,276,
  	277,5,21,0,0,277,278,5,15,0,0,278,305,5,32,0,0,279,280,5,22,0,0,280,281,
  	5,15,0,0,281,305,5,32,0,0,282,283,5,15,0,0,283,284,5,34,0,0,284,285,3,
  	0,0,0,285,286,5,32,0,0,286,305,1,0,0,0,287,288,5,15,0,0,288,289,5,35,
  	0,0,289,290,3,0,0,0,290,291,5,32,0,0,291,305,1,0,0,0,292,293,5,15,0,0,
  	293,294,5,36,0,0,294,295,3,0,0,0,295,296,5,32,0,0,296,305,1,0,0,0,297,
  	298,5,15,0,0,298,299,5,37,0,0,299,300,3,0,0,0,300,301,5,32,0,0,301,305,
  	1,0,0,0,302,305,3,18,9,0,303,305,3,20,10,0,304,268,1,0,0,0,304,271,1,
  	0,0,0,304,276,1,0,0,0,304,279,1,0,0,0,304,282,1,0,0,0,304,287,1,0,0,0,
  	304,292,1,0,0,0,304,297,1,0,0,0,304,302,1,0,0,0,304,303,1,0,0,0,305,25,
  	1,0,0,0,306,307,6,13,-1,0,307,309,3,24,12,0,308,310,5,0,0,1,309,308,1,
  	0,0,0,309,310,1,0,0,0,310,318,1,0,0,0,311,312,10,1,0,0,312,314,3,24,12,
  	0,313,315,5,0,0,1,314,313,1,0,0,0,314,315,1,0,0,0,315,317,1,0,0,0,316,
  	311,1,0,0,0,317,320,1,0,0,0,318,316,1,0,0,0,318,319,1,0,0,0,319,27,1,
  	0,0,0,320,318,1,0,0,0,32,31,41,52,60,63,70,74,78,81,88,96,103,111,118,
  	126,133,141,148,156,163,171,173,185,192,200,219,227,266,304,309,314,318
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  translatorParserStaticData = std::move(staticData);
}

}

translatorParser::translatorParser(TokenStream *input) : translatorParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

translatorParser::translatorParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  translatorParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *translatorParserStaticData->atn, translatorParserStaticData->decisionToDFA, translatorParserStaticData->sharedContextCache, options);
}

translatorParser::~translatorParser() {
  delete _interpreter;
}

const atn::ATN& translatorParser::getATN() const {
  return *translatorParserStaticData->atn;
}

std::string translatorParser::getGrammarFileName() const {
  return "translator.g4";
}

const std::vector<std::string>& translatorParser::getRuleNames() const {
  return translatorParserStaticData->ruleNames;
}

const dfa::Vocabulary& translatorParser::getVocabulary() const {
  return translatorParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView translatorParser::getSerializedATN() const {
  return translatorParserStaticData->serializedATN;
}


//----------------- ExprContext ------------------------------------------------------------------

translatorParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::ExprContext::getRuleIndex() const {
  return translatorParser::RuleExpr;
}

void translatorParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Logic_expr_nodeContext ------------------------------------------------------------------

translatorParser::Logic_exprContext* translatorParser::Logic_expr_nodeContext::logic_expr() {
  return getRuleContext<translatorParser::Logic_exprContext>(0);
}

translatorParser::Logic_expr_nodeContext::Logic_expr_nodeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Logic_expr_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitLogic_expr_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Arth_expr_nodeContext ------------------------------------------------------------------

translatorParser::Arth_exprContext* translatorParser::Arth_expr_nodeContext::arth_expr() {
  return getRuleContext<translatorParser::Arth_exprContext>(0);
}

translatorParser::Arth_expr_nodeContext::Arth_expr_nodeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Arth_expr_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitArth_expr_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Functions_nodeContext ------------------------------------------------------------------

translatorParser::FunctionsContext* translatorParser::Functions_nodeContext::functions() {
  return getRuleContext<translatorParser::FunctionsContext>(0);
}

translatorParser::Functions_nodeContext::Functions_nodeContext(ExprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Functions_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitFunctions_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::ExprContext* translatorParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 0, translatorParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(31);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::Arth_expr_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(28);
      arth_expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::Logic_expr_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(29);
      logic_expr();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<translatorParser::Functions_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(30);
      functions();
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

//----------------- Arth_exprContext ------------------------------------------------------------------

translatorParser::Arth_exprContext::Arth_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::Arth_exprContext::getRuleIndex() const {
  return translatorParser::RuleArth_expr;
}

void translatorParser::Arth_exprContext::copyFrom(Arth_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Term_ADD_SUB_exprContext ------------------------------------------------------------------

translatorParser::Arth_exprContext* translatorParser::Term_ADD_SUB_exprContext::arth_expr() {
  return getRuleContext<translatorParser::Arth_exprContext>(0);
}

translatorParser::TermContext* translatorParser::Term_ADD_SUB_exprContext::term() {
  return getRuleContext<translatorParser::TermContext>(0);
}

tree::TerminalNode* translatorParser::Term_ADD_SUB_exprContext::ADD() {
  return getToken(translatorParser::ADD, 0);
}

tree::TerminalNode* translatorParser::Term_ADD_SUB_exprContext::SUB() {
  return getToken(translatorParser::SUB, 0);
}

translatorParser::Term_ADD_SUB_exprContext::Term_ADD_SUB_exprContext(Arth_exprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Term_ADD_SUB_exprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitTerm_ADD_SUB_expr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Term_nodeContext ------------------------------------------------------------------

translatorParser::TermContext* translatorParser::Term_nodeContext::term() {
  return getRuleContext<translatorParser::TermContext>(0);
}

translatorParser::Term_nodeContext::Term_nodeContext(Arth_exprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Term_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitTerm_node(this);
  else
    return visitor->visitChildren(this);
}

translatorParser::Arth_exprContext* translatorParser::arth_expr() {
   return arth_expr(0);
}

translatorParser::Arth_exprContext* translatorParser::arth_expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  translatorParser::Arth_exprContext *_localctx = _tracker.createInstance<Arth_exprContext>(_ctx, parentState);
  translatorParser::Arth_exprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, translatorParser::RuleArth_expr, precedence);

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
    _localctx = _tracker.createInstance<Term_nodeContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(34);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Term_ADD_SUB_exprContext>(_tracker.createInstance<Arth_exprContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleArth_expr);
        setState(36);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(37);
        _la = _input->LA(1);
        if (!(_la == translatorParser::SUB

        || _la == translatorParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(38);
        term(0); 
      }
      setState(43);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

translatorParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::TermContext::getRuleIndex() const {
  return translatorParser::RuleTerm;
}

void translatorParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Power_nodeContext ------------------------------------------------------------------

translatorParser::PowerContext* translatorParser::Power_nodeContext::power() {
  return getRuleContext<translatorParser::PowerContext>(0);
}

translatorParser::Power_nodeContext::Power_nodeContext(TermContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Power_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitPower_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Power_MUL_DIV_termContext ------------------------------------------------------------------

translatorParser::TermContext* translatorParser::Power_MUL_DIV_termContext::term() {
  return getRuleContext<translatorParser::TermContext>(0);
}

translatorParser::PowerContext* translatorParser::Power_MUL_DIV_termContext::power() {
  return getRuleContext<translatorParser::PowerContext>(0);
}

tree::TerminalNode* translatorParser::Power_MUL_DIV_termContext::MUL() {
  return getToken(translatorParser::MUL, 0);
}

tree::TerminalNode* translatorParser::Power_MUL_DIV_termContext::DIV() {
  return getToken(translatorParser::DIV, 0);
}

translatorParser::Power_MUL_DIV_termContext::Power_MUL_DIV_termContext(TermContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Power_MUL_DIV_termContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitPower_MUL_DIV_term(this);
  else
    return visitor->visitChildren(this);
}

translatorParser::TermContext* translatorParser::term() {
   return term(0);
}

translatorParser::TermContext* translatorParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  translatorParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  translatorParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, translatorParser::RuleTerm, precedence);

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
    _localctx = _tracker.createInstance<Power_nodeContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(45);
    power();
    _ctx->stop = _input->LT(-1);
    setState(52);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Power_MUL_DIV_termContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleTerm);
        setState(47);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(48);
        _la = _input->LA(1);
        if (!(_la == translatorParser::DIV

        || _la == translatorParser::MUL)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(49);
        power(); 
      }
      setState(54);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- PowerContext ------------------------------------------------------------------

translatorParser::PowerContext::PowerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::PowerContext::getRuleIndex() const {
  return translatorParser::RulePower;
}

void translatorParser::PowerContext::copyFrom(PowerContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- POW_nodeContext ------------------------------------------------------------------

translatorParser::FactorContext* translatorParser::POW_nodeContext::factor() {
  return getRuleContext<translatorParser::FactorContext>(0);
}

tree::TerminalNode* translatorParser::POW_nodeContext::POW() {
  return getToken(translatorParser::POW, 0);
}

translatorParser::PowerContext* translatorParser::POW_nodeContext::power() {
  return getRuleContext<translatorParser::PowerContext>(0);
}

translatorParser::POW_nodeContext::POW_nodeContext(PowerContext *ctx) { copyFrom(ctx); }


std::any translatorParser::POW_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitPOW_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Factor_nodeContext ------------------------------------------------------------------

translatorParser::FactorContext* translatorParser::Factor_nodeContext::factor() {
  return getRuleContext<translatorParser::FactorContext>(0);
}

translatorParser::Factor_nodeContext::Factor_nodeContext(PowerContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Factor_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitFactor_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::PowerContext* translatorParser::power() {
  PowerContext *_localctx = _tracker.createInstance<PowerContext>(_ctx, getState());
  enterRule(_localctx, 6, translatorParser::RulePower);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::POW_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(55);
      factor();
      setState(56);
      match(translatorParser::POW);
      setState(57);
      power();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::Factor_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(59);
      factor();
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

//----------------- FactorContext ------------------------------------------------------------------

translatorParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::FactorContext::getRuleIndex() const {
  return translatorParser::RuleFactor;
}

void translatorParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VARIABLE_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::VARIABLE_nodeContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::VARIABLE_nodeContext::ADD() {
  return getToken(translatorParser::ADD, 0);
}

tree::TerminalNode* translatorParser::VARIABLE_nodeContext::SUB() {
  return getToken(translatorParser::SUB, 0);
}

translatorParser::VARIABLE_nodeContext::VARIABLE_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::VARIABLE_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitVARIABLE_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FLOAT_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::FLOAT_nodeContext::FLOAT() {
  return getToken(translatorParser::FLOAT, 0);
}

tree::TerminalNode* translatorParser::FLOAT_nodeContext::ADD() {
  return getToken(translatorParser::ADD, 0);
}

tree::TerminalNode* translatorParser::FLOAT_nodeContext::SUB() {
  return getToken(translatorParser::SUB, 0);
}

translatorParser::FLOAT_nodeContext::FLOAT_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::FLOAT_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitFLOAT_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LBR_expr_RBRContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::LBR_expr_RBRContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::Arth_exprContext* translatorParser::LBR_expr_RBRContext::arth_expr() {
  return getRuleContext<translatorParser::Arth_exprContext>(0);
}

tree::TerminalNode* translatorParser::LBR_expr_RBRContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

tree::TerminalNode* translatorParser::LBR_expr_RBRContext::ADD() {
  return getToken(translatorParser::ADD, 0);
}

tree::TerminalNode* translatorParser::LBR_expr_RBRContext::SUB() {
  return getToken(translatorParser::SUB, 0);
}

translatorParser::LBR_expr_RBRContext::LBR_expr_RBRContext(FactorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::LBR_expr_RBRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitLBR_expr_RBR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- INTEGER_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::INTEGER_nodeContext::INT() {
  return getToken(translatorParser::INT, 0);
}

tree::TerminalNode* translatorParser::INTEGER_nodeContext::ADD() {
  return getToken(translatorParser::ADD, 0);
}

tree::TerminalNode* translatorParser::INTEGER_nodeContext::SUB() {
  return getToken(translatorParser::SUB, 0);
}

translatorParser::INTEGER_nodeContext::INTEGER_nodeContext(FactorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::INTEGER_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitINTEGER_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::FactorContext* translatorParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 8, translatorParser::RuleFactor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::LBR_expr_RBRContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(63);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == translatorParser::SUB

      || _la == translatorParser::ADD) {
        setState(62);
        _la = _input->LA(1);
        if (!(_la == translatorParser::SUB

        || _la == translatorParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(65);
      match(translatorParser::LBR);
      setState(66);
      arth_expr(0);
      setState(67);
      match(translatorParser::RBR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::INTEGER_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(70);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == translatorParser::SUB

      || _la == translatorParser::ADD) {
        setState(69);
        _la = _input->LA(1);
        if (!(_la == translatorParser::SUB

        || _la == translatorParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(72);
      match(translatorParser::INT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<translatorParser::FLOAT_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(74);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == translatorParser::SUB

      || _la == translatorParser::ADD) {
        setState(73);
        _la = _input->LA(1);
        if (!(_la == translatorParser::SUB

        || _la == translatorParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(76);
      match(translatorParser::FLOAT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<translatorParser::VARIABLE_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(78);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == translatorParser::SUB

      || _la == translatorParser::ADD) {
        setState(77);
        _la = _input->LA(1);
        if (!(_la == translatorParser::SUB

        || _la == translatorParser::ADD)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
      }
      setState(80);
      match(translatorParser::VAR);
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

//----------------- CompareContext ------------------------------------------------------------------

translatorParser::CompareContext::CompareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::CompareContext::getRuleIndex() const {
  return translatorParser::RuleCompare;
}

void translatorParser::CompareContext::copyFrom(CompareContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Compare_eq_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Compare_eq_nodeContext::EQ() {
  return getToken(translatorParser::EQ, 0);
}

std::vector<translatorParser::Arth_exprContext *> translatorParser::Compare_eq_nodeContext::arth_expr() {
  return getRuleContexts<translatorParser::Arth_exprContext>();
}

translatorParser::Arth_exprContext* translatorParser::Compare_eq_nodeContext::arth_expr(size_t i) {
  return getRuleContext<translatorParser::Arth_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_eq_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Compare_eq_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Compare_eq_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Compare_eq_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_eq_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Compare_eq_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

translatorParser::Compare_eq_nodeContext::Compare_eq_nodeContext(CompareContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_eq_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_eq_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compare_ge_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Compare_ge_nodeContext::GE() {
  return getToken(translatorParser::GE, 0);
}

std::vector<translatorParser::Arth_exprContext *> translatorParser::Compare_ge_nodeContext::arth_expr() {
  return getRuleContexts<translatorParser::Arth_exprContext>();
}

translatorParser::Arth_exprContext* translatorParser::Compare_ge_nodeContext::arth_expr(size_t i) {
  return getRuleContext<translatorParser::Arth_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_ge_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Compare_ge_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Compare_ge_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Compare_ge_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_ge_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Compare_ge_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

translatorParser::Compare_ge_nodeContext::Compare_ge_nodeContext(CompareContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_ge_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_ge_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compare_le_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Compare_le_nodeContext::LE() {
  return getToken(translatorParser::LE, 0);
}

std::vector<translatorParser::Arth_exprContext *> translatorParser::Compare_le_nodeContext::arth_expr() {
  return getRuleContexts<translatorParser::Arth_exprContext>();
}

translatorParser::Arth_exprContext* translatorParser::Compare_le_nodeContext::arth_expr(size_t i) {
  return getRuleContext<translatorParser::Arth_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_le_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Compare_le_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Compare_le_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Compare_le_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_le_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Compare_le_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

translatorParser::Compare_le_nodeContext::Compare_le_nodeContext(CompareContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_le_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_le_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compare_ne_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Compare_ne_nodeContext::NE() {
  return getToken(translatorParser::NE, 0);
}

std::vector<translatorParser::Arth_exprContext *> translatorParser::Compare_ne_nodeContext::arth_expr() {
  return getRuleContexts<translatorParser::Arth_exprContext>();
}

translatorParser::Arth_exprContext* translatorParser::Compare_ne_nodeContext::arth_expr(size_t i) {
  return getRuleContext<translatorParser::Arth_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_ne_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Compare_ne_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Compare_ne_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Compare_ne_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_ne_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Compare_ne_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

translatorParser::Compare_ne_nodeContext::Compare_ne_nodeContext(CompareContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_ne_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_ne_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compare_ls_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Compare_ls_nodeContext::LS() {
  return getToken(translatorParser::LS, 0);
}

std::vector<translatorParser::Arth_exprContext *> translatorParser::Compare_ls_nodeContext::arth_expr() {
  return getRuleContexts<translatorParser::Arth_exprContext>();
}

translatorParser::Arth_exprContext* translatorParser::Compare_ls_nodeContext::arth_expr(size_t i) {
  return getRuleContext<translatorParser::Arth_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_ls_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Compare_ls_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Compare_ls_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Compare_ls_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_ls_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Compare_ls_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

translatorParser::Compare_ls_nodeContext::Compare_ls_nodeContext(CompareContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_ls_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_ls_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compare_gt_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Compare_gt_nodeContext::GT() {
  return getToken(translatorParser::GT, 0);
}

std::vector<translatorParser::Arth_exprContext *> translatorParser::Compare_gt_nodeContext::arth_expr() {
  return getRuleContexts<translatorParser::Arth_exprContext>();
}

translatorParser::Arth_exprContext* translatorParser::Compare_gt_nodeContext::arth_expr(size_t i) {
  return getRuleContext<translatorParser::Arth_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_gt_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Compare_gt_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Compare_gt_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Compare_gt_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Compare_gt_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Compare_gt_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

translatorParser::Compare_gt_nodeContext::Compare_gt_nodeContext(CompareContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_gt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_gt_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::CompareContext* translatorParser::compare() {
  CompareContext *_localctx = _tracker.createInstance<CompareContext>(_ctx, getState());
  enterRule(_localctx, 10, translatorParser::RuleCompare);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(173);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::Compare_eq_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(88);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(83);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(84);
        match(translatorParser::LBR);
        setState(85);
        logic_expr();
        setState(86);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      setState(90);
      match(translatorParser::EQ);
      setState(96);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
      case 1: {
        setState(91);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(92);
        match(translatorParser::LBR);
        setState(93);
        logic_expr();
        setState(94);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::Compare_ne_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(103);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(98);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(99);
        match(translatorParser::LBR);
        setState(100);
        logic_expr();
        setState(101);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      setState(105);
      match(translatorParser::NE);
      setState(111);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
      case 1: {
        setState(106);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(107);
        match(translatorParser::LBR);
        setState(108);
        logic_expr();
        setState(109);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<translatorParser::Compare_ls_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(118);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(113);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(114);
        match(translatorParser::LBR);
        setState(115);
        logic_expr();
        setState(116);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      setState(120);
      match(translatorParser::LS);
      setState(126);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(121);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(122);
        match(translatorParser::LBR);
        setState(123);
        logic_expr();
        setState(124);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<translatorParser::Compare_le_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(133);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(128);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(129);
        match(translatorParser::LBR);
        setState(130);
        logic_expr();
        setState(131);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      setState(135);
      match(translatorParser::LE);
      setState(141);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(136);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(137);
        match(translatorParser::LBR);
        setState(138);
        logic_expr();
        setState(139);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<translatorParser::Compare_gt_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(148);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(143);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(144);
        match(translatorParser::LBR);
        setState(145);
        logic_expr();
        setState(146);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      setState(150);
      match(translatorParser::GT);
      setState(156);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(151);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(152);
        match(translatorParser::LBR);
        setState(153);
        logic_expr();
        setState(154);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<translatorParser::Compare_ge_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(163);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(158);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(159);
        match(translatorParser::LBR);
        setState(160);
        logic_expr();
        setState(161);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
      setState(165);
      match(translatorParser::GE);
      setState(171);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(166);
        arth_expr(0);
        break;
      }

      case 2: {
        setState(167);
        match(translatorParser::LBR);
        setState(168);
        logic_expr();
        setState(169);
        match(translatorParser::RBR);
        break;
      }

      default:
        break;
      }
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

//----------------- Logic_exprContext ------------------------------------------------------------------

translatorParser::Logic_exprContext::Logic_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::Logic_exprContext::getRuleIndex() const {
  return translatorParser::RuleLogic_expr;
}

void translatorParser::Logic_exprContext::copyFrom(Logic_exprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Negation_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Negation_nodeContext::NOT() {
  return getToken(translatorParser::NOT, 0);
}

tree::TerminalNode* translatorParser::Negation_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::Logic_termContext* translatorParser::Negation_nodeContext::logic_term() {
  return getRuleContext<translatorParser::Logic_termContext>(0);
}

tree::TerminalNode* translatorParser::Negation_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::Negation_nodeContext::Negation_nodeContext(Logic_exprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Negation_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitNegation_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OR_nodeContext ------------------------------------------------------------------

translatorParser::Logic_termContext* translatorParser::OR_nodeContext::logic_term() {
  return getRuleContext<translatorParser::Logic_termContext>(0);
}

tree::TerminalNode* translatorParser::OR_nodeContext::OR() {
  return getToken(translatorParser::OR, 0);
}

translatorParser::Logic_exprContext* translatorParser::OR_nodeContext::logic_expr() {
  return getRuleContext<translatorParser::Logic_exprContext>(0);
}

translatorParser::OR_nodeContext::OR_nodeContext(Logic_exprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::OR_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitOR_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Logic_term_nodeContext ------------------------------------------------------------------

translatorParser::Logic_termContext* translatorParser::Logic_term_nodeContext::logic_term() {
  return getRuleContext<translatorParser::Logic_termContext>(0);
}

translatorParser::Logic_term_nodeContext::Logic_term_nodeContext(Logic_exprContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Logic_term_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitLogic_term_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::Logic_exprContext* translatorParser::logic_expr() {
  Logic_exprContext *_localctx = _tracker.createInstance<Logic_exprContext>(_ctx, getState());
  enterRule(_localctx, 12, translatorParser::RuleLogic_expr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::Negation_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(175);
      match(translatorParser::NOT);
      setState(176);
      match(translatorParser::LBR);
      setState(177);
      logic_term();
      setState(178);
      match(translatorParser::RBR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::OR_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(180);
      logic_term();
      setState(181);
      match(translatorParser::OR);
      setState(182);
      logic_expr();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<translatorParser::Logic_term_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(184);
      logic_term();
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

//----------------- Logic_termContext ------------------------------------------------------------------

translatorParser::Logic_termContext::Logic_termContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::Logic_termContext::getRuleIndex() const {
  return translatorParser::RuleLogic_term;
}

void translatorParser::Logic_termContext::copyFrom(Logic_termContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AND_nodeContext ------------------------------------------------------------------

translatorParser::Logic_factorContext* translatorParser::AND_nodeContext::logic_factor() {
  return getRuleContext<translatorParser::Logic_factorContext>(0);
}

tree::TerminalNode* translatorParser::AND_nodeContext::AND() {
  return getToken(translatorParser::AND, 0);
}

translatorParser::Logic_termContext* translatorParser::AND_nodeContext::logic_term() {
  return getRuleContext<translatorParser::Logic_termContext>(0);
}

translatorParser::AND_nodeContext::AND_nodeContext(Logic_termContext *ctx) { copyFrom(ctx); }


std::any translatorParser::AND_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitAND_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Logic_factor_nodeContext ------------------------------------------------------------------

translatorParser::Logic_factorContext* translatorParser::Logic_factor_nodeContext::logic_factor() {
  return getRuleContext<translatorParser::Logic_factorContext>(0);
}

translatorParser::Logic_factor_nodeContext::Logic_factor_nodeContext(Logic_termContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Logic_factor_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitLogic_factor_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::Logic_termContext* translatorParser::logic_term() {
  Logic_termContext *_localctx = _tracker.createInstance<Logic_termContext>(_ctx, getState());
  enterRule(_localctx, 14, translatorParser::RuleLogic_term);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(192);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::AND_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(187);
      logic_factor();
      setState(188);
      match(translatorParser::AND);
      setState(189);
      logic_term();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::Logic_factor_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(191);
      logic_factor();
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

//----------------- Logic_factorContext ------------------------------------------------------------------

translatorParser::Logic_factorContext::Logic_factorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::Logic_factorContext::getRuleIndex() const {
  return translatorParser::RuleLogic_factor;
}

void translatorParser::Logic_factorContext::copyFrom(Logic_factorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Arth_logic_nodeContext ------------------------------------------------------------------

translatorParser::Arth_exprContext* translatorParser::Arth_logic_nodeContext::arth_expr() {
  return getRuleContext<translatorParser::Arth_exprContext>(0);
}

translatorParser::Arth_logic_nodeContext::Arth_logic_nodeContext(Logic_factorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Arth_logic_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitArth_logic_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LBR_logic_expr_RBRContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::LBR_logic_expr_RBRContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::Logic_exprContext* translatorParser::LBR_logic_expr_RBRContext::logic_expr() {
  return getRuleContext<translatorParser::Logic_exprContext>(0);
}

tree::TerminalNode* translatorParser::LBR_logic_expr_RBRContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::LBR_logic_expr_RBRContext::LBR_logic_expr_RBRContext(Logic_factorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::LBR_logic_expr_RBRContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitLBR_logic_expr_RBR(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Compare_nodeContext ------------------------------------------------------------------

translatorParser::CompareContext* translatorParser::Compare_nodeContext::compare() {
  return getRuleContext<translatorParser::CompareContext>(0);
}

translatorParser::Compare_nodeContext::Compare_nodeContext(Logic_factorContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Compare_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitCompare_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::Logic_factorContext* translatorParser::logic_factor() {
  Logic_factorContext *_localctx = _tracker.createInstance<Logic_factorContext>(_ctx, getState());
  enterRule(_localctx, 16, translatorParser::RuleLogic_factor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::LBR_logic_expr_RBRContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(194);
      match(translatorParser::LBR);
      setState(195);
      logic_expr();
      setState(196);
      match(translatorParser::RBR);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::Compare_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(198);
      compare();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<translatorParser::Arth_logic_nodeContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(199);
      arth_expr(0);
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

//----------------- ElifContext ------------------------------------------------------------------

translatorParser::ElifContext::ElifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::ElifContext::getRuleIndex() const {
  return translatorParser::RuleElif;
}

void translatorParser::ElifContext::copyFrom(ElifContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Elif_nodeContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> translatorParser::Elif_nodeContext::LBR() {
  return getTokens(translatorParser::LBR);
}

tree::TerminalNode* translatorParser::Elif_nodeContext::LBR(size_t i) {
  return getToken(translatorParser::LBR, i);
}

std::vector<translatorParser::Logic_exprContext *> translatorParser::Elif_nodeContext::logic_expr() {
  return getRuleContexts<translatorParser::Logic_exprContext>();
}

translatorParser::Logic_exprContext* translatorParser::Elif_nodeContext::logic_expr(size_t i) {
  return getRuleContext<translatorParser::Logic_exprContext>(i);
}

std::vector<tree::TerminalNode *> translatorParser::Elif_nodeContext::RBR() {
  return getTokens(translatorParser::RBR);
}

tree::TerminalNode* translatorParser::Elif_nodeContext::RBR(size_t i) {
  return getToken(translatorParser::RBR, i);
}

std::vector<translatorParser::ProgContext *> translatorParser::Elif_nodeContext::prog() {
  return getRuleContexts<translatorParser::ProgContext>();
}

translatorParser::ProgContext* translatorParser::Elif_nodeContext::prog(size_t i) {
  return getRuleContext<translatorParser::ProgContext>(i);
}

translatorParser::Elif_nodeContext::Elif_nodeContext(ElifContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Elif_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitElif_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::ElifContext* translatorParser::elif() {
  ElifContext *_localctx = _tracker.createInstance<ElifContext>(_ctx, getState());
  enterRule(_localctx, 18, translatorParser::RuleElif);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    _localctx = _tracker.createInstance<translatorParser::Elif_nodeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(202);
    match(translatorParser::T__0);
    setState(203);
    match(translatorParser::LBR);
    setState(204);
    logic_expr();
    setState(205);
    match(translatorParser::RBR);
    setState(206);
    match(translatorParser::T__1);
    setState(207);
    prog(0);
    setState(208);
    match(translatorParser::T__2);
    setState(219);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(209);
        match(translatorParser::T__3);
        setState(210);
        match(translatorParser::LBR);
        setState(211);
        logic_expr();
        setState(212);
        match(translatorParser::RBR);
        setState(213);
        match(translatorParser::T__1);
        setState(214);
        prog(0);
        setState(215);
        match(translatorParser::T__2); 
      }
      setState(221);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
    setState(227);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(222);
      match(translatorParser::T__4);
      setState(223);
      match(translatorParser::T__1);
      setState(224);
      prog(0);
      setState(225);
      match(translatorParser::T__2);
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

//----------------- WhileContext ------------------------------------------------------------------

translatorParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::WhileContext::getRuleIndex() const {
  return translatorParser::RuleWhile;
}

void translatorParser::WhileContext::copyFrom(WhileContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- While_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::While_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::Logic_exprContext* translatorParser::While_nodeContext::logic_expr() {
  return getRuleContext<translatorParser::Logic_exprContext>(0);
}

tree::TerminalNode* translatorParser::While_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::ProgContext* translatorParser::While_nodeContext::prog() {
  return getRuleContext<translatorParser::ProgContext>(0);
}

translatorParser::While_nodeContext::While_nodeContext(WhileContext *ctx) { copyFrom(ctx); }


std::any translatorParser::While_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitWhile_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::WhileContext* translatorParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 20, translatorParser::RuleWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<translatorParser::While_nodeContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(229);
    match(translatorParser::T__5);
    setState(230);
    match(translatorParser::LBR);
    setState(231);
    logic_expr();
    setState(232);
    match(translatorParser::RBR);
    setState(233);
    match(translatorParser::T__1);
    setState(234);
    prog(0);
    setState(235);
    match(translatorParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionsContext ------------------------------------------------------------------

translatorParser::FunctionsContext::FunctionsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::FunctionsContext::getRuleIndex() const {
  return translatorParser::RuleFunctions;
}

void translatorParser::FunctionsContext::copyFrom(FunctionsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Print_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Print_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::ExprContext* translatorParser::Print_nodeContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::Print_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::Print_nodeContext::Print_nodeContext(FunctionsContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Print_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitPrint_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Sqrt_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Sqrt_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::ExprContext* translatorParser::Sqrt_nodeContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::Sqrt_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::Sqrt_nodeContext::Sqrt_nodeContext(FunctionsContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Sqrt_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitSqrt_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Max_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Max_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

std::vector<translatorParser::ExprContext *> translatorParser::Max_nodeContext::expr() {
  return getRuleContexts<translatorParser::ExprContext>();
}

translatorParser::ExprContext* translatorParser::Max_nodeContext::expr(size_t i) {
  return getRuleContext<translatorParser::ExprContext>(i);
}

tree::TerminalNode* translatorParser::Max_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::Max_nodeContext::Max_nodeContext(FunctionsContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Max_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitMax_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Min_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Min_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

std::vector<translatorParser::ExprContext *> translatorParser::Min_nodeContext::expr() {
  return getRuleContexts<translatorParser::ExprContext>();
}

translatorParser::ExprContext* translatorParser::Min_nodeContext::expr(size_t i) {
  return getRuleContext<translatorParser::ExprContext>(i);
}

tree::TerminalNode* translatorParser::Min_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::Min_nodeContext::Min_nodeContext(FunctionsContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Min_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitMin_node(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Abs_nodeContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::Abs_nodeContext::LBR() {
  return getToken(translatorParser::LBR, 0);
}

translatorParser::ExprContext* translatorParser::Abs_nodeContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::Abs_nodeContext::RBR() {
  return getToken(translatorParser::RBR, 0);
}

translatorParser::Abs_nodeContext::Abs_nodeContext(FunctionsContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Abs_nodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitAbs_node(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::FunctionsContext* translatorParser::functions() {
  FunctionsContext *_localctx = _tracker.createInstance<FunctionsContext>(_ctx, getState());
  enterRule(_localctx, 22, translatorParser::RuleFunctions);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(266);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case translatorParser::T__6: {
        _localctx = _tracker.createInstance<translatorParser::Print_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(237);
        match(translatorParser::T__6);
        setState(238);
        match(translatorParser::LBR);
        setState(239);
        expr();
        setState(240);
        match(translatorParser::RBR);
        break;
      }

      case translatorParser::T__7: {
        _localctx = _tracker.createInstance<translatorParser::Abs_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(242);
        match(translatorParser::T__7);
        setState(243);
        match(translatorParser::LBR);
        setState(244);
        expr();
        setState(245);
        match(translatorParser::RBR);
        break;
      }

      case translatorParser::T__8: {
        _localctx = _tracker.createInstance<translatorParser::Sqrt_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(247);
        match(translatorParser::T__8);
        setState(248);
        match(translatorParser::LBR);
        setState(249);
        expr();
        setState(250);
        match(translatorParser::RBR);
        break;
      }

      case translatorParser::T__9: {
        _localctx = _tracker.createInstance<translatorParser::Max_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(252);
        match(translatorParser::T__9);
        setState(253);
        match(translatorParser::LBR);
        setState(254);
        expr();
        setState(255);
        match(translatorParser::T__10);
        setState(256);
        expr();
        setState(257);
        match(translatorParser::RBR);
        break;
      }

      case translatorParser::T__11: {
        _localctx = _tracker.createInstance<translatorParser::Min_nodeContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(259);
        match(translatorParser::T__11);
        setState(260);
        match(translatorParser::LBR);
        setState(261);
        expr();
        setState(262);
        match(translatorParser::T__10);
        setState(263);
        expr();
        setState(264);
        match(translatorParser::RBR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RowContext ------------------------------------------------------------------

translatorParser::RowContext::RowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::RowContext::getRuleIndex() const {
  return translatorParser::RuleRow;
}

void translatorParser::RowContext::copyFrom(RowContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_sepContext ------------------------------------------------------------------

translatorParser::ExprContext* translatorParser::Expr_sepContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::Expr_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::Expr_sepContext::Expr_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Expr_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitExpr_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- INC_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::INC_sepContext::INC() {
  return getToken(translatorParser::INC, 0);
}

tree::TerminalNode* translatorParser::INC_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::INC_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::INC_sepContext::INC_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::INC_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitINC_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MUL_ASGN_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::MUL_ASGN_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::MUL_ASGN_sepContext::MUL_ASGN() {
  return getToken(translatorParser::MUL_ASGN, 0);
}

translatorParser::ExprContext* translatorParser::MUL_ASGN_sepContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::MUL_ASGN_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::MUL_ASGN_sepContext::MUL_ASGN_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::MUL_ASGN_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitMUL_ASGN_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DEC_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::DEC_sepContext::DEC() {
  return getToken(translatorParser::DEC, 0);
}

tree::TerminalNode* translatorParser::DEC_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::DEC_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::DEC_sepContext::DEC_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::DEC_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitDEC_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ADD_ASGN_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::ADD_ASGN_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::ADD_ASGN_sepContext::ADD_ASGN() {
  return getToken(translatorParser::ADD_ASGN, 0);
}

translatorParser::ExprContext* translatorParser::ADD_ASGN_sepContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::ADD_ASGN_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::ADD_ASGN_sepContext::ADD_ASGN_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::ADD_ASGN_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitADD_ASGN_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ASGN_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::ASGN_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::ASGN_sepContext::ASGN() {
  return getToken(translatorParser::ASGN, 0);
}

translatorParser::ExprContext* translatorParser::ASGN_sepContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::ASGN_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::ASGN_sepContext::ASGN_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::ASGN_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitASGN_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SUB_ASGN_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::SUB_ASGN_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::SUB_ASGN_sepContext::SUB_ASGN() {
  return getToken(translatorParser::SUB_ASGN, 0);
}

translatorParser::ExprContext* translatorParser::SUB_ASGN_sepContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::SUB_ASGN_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::SUB_ASGN_sepContext::SUB_ASGN_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::SUB_ASGN_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitSUB_ASGN_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Elif_sepContext ------------------------------------------------------------------

translatorParser::ElifContext* translatorParser::Elif_sepContext::elif() {
  return getRuleContext<translatorParser::ElifContext>(0);
}

translatorParser::Elif_sepContext::Elif_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Elif_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitElif_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DIV_ASGN_sepContext ------------------------------------------------------------------

tree::TerminalNode* translatorParser::DIV_ASGN_sepContext::VAR() {
  return getToken(translatorParser::VAR, 0);
}

tree::TerminalNode* translatorParser::DIV_ASGN_sepContext::DIV_ASGN() {
  return getToken(translatorParser::DIV_ASGN, 0);
}

translatorParser::ExprContext* translatorParser::DIV_ASGN_sepContext::expr() {
  return getRuleContext<translatorParser::ExprContext>(0);
}

tree::TerminalNode* translatorParser::DIV_ASGN_sepContext::SEP() {
  return getToken(translatorParser::SEP, 0);
}

translatorParser::DIV_ASGN_sepContext::DIV_ASGN_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::DIV_ASGN_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitDIV_ASGN_sep(this);
  else
    return visitor->visitChildren(this);
}
//----------------- While_sepContext ------------------------------------------------------------------

translatorParser::WhileContext* translatorParser::While_sepContext::while_() {
  return getRuleContext<translatorParser::WhileContext>(0);
}

translatorParser::While_sepContext::While_sepContext(RowContext *ctx) { copyFrom(ctx); }


std::any translatorParser::While_sepContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitWhile_sep(this);
  else
    return visitor->visitChildren(this);
}
translatorParser::RowContext* translatorParser::row() {
  RowContext *_localctx = _tracker.createInstance<RowContext>(_ctx, getState());
  enterRule(_localctx, 24, translatorParser::RuleRow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(304);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<translatorParser::Expr_sepContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(268);
      expr();
      setState(269);
      match(translatorParser::SEP);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<translatorParser::ASGN_sepContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(271);
      match(translatorParser::VAR);
      setState(272);
      match(translatorParser::ASGN);
      setState(273);
      expr();
      setState(274);
      match(translatorParser::SEP);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<translatorParser::INC_sepContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(276);
      match(translatorParser::INC);
      setState(277);
      match(translatorParser::VAR);
      setState(278);
      match(translatorParser::SEP);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<translatorParser::DEC_sepContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(279);
      match(translatorParser::DEC);
      setState(280);
      match(translatorParser::VAR);
      setState(281);
      match(translatorParser::SEP);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<translatorParser::ADD_ASGN_sepContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(282);
      match(translatorParser::VAR);
      setState(283);
      match(translatorParser::ADD_ASGN);
      setState(284);
      expr();
      setState(285);
      match(translatorParser::SEP);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<translatorParser::SUB_ASGN_sepContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(287);
      match(translatorParser::VAR);
      setState(288);
      match(translatorParser::SUB_ASGN);
      setState(289);
      expr();
      setState(290);
      match(translatorParser::SEP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<translatorParser::MUL_ASGN_sepContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(292);
      match(translatorParser::VAR);
      setState(293);
      match(translatorParser::MUL_ASGN);
      setState(294);
      expr();
      setState(295);
      match(translatorParser::SEP);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<translatorParser::DIV_ASGN_sepContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(297);
      match(translatorParser::VAR);
      setState(298);
      match(translatorParser::DIV_ASGN);
      setState(299);
      expr();
      setState(300);
      match(translatorParser::SEP);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<translatorParser::Elif_sepContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(302);
      elif();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<translatorParser::While_sepContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(303);
      while_();
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

//----------------- ProgContext ------------------------------------------------------------------

translatorParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t translatorParser::ProgContext::getRuleIndex() const {
  return translatorParser::RuleProg;
}

void translatorParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Mult_line_progContext ------------------------------------------------------------------

translatorParser::ProgContext* translatorParser::Mult_line_progContext::prog() {
  return getRuleContext<translatorParser::ProgContext>(0);
}

translatorParser::RowContext* translatorParser::Mult_line_progContext::row() {
  return getRuleContext<translatorParser::RowContext>(0);
}

tree::TerminalNode* translatorParser::Mult_line_progContext::EOF() {
  return getToken(translatorParser::EOF, 0);
}

translatorParser::Mult_line_progContext::Mult_line_progContext(ProgContext *ctx) { copyFrom(ctx); }


std::any translatorParser::Mult_line_progContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitMult_line_prog(this);
  else
    return visitor->visitChildren(this);
}
//----------------- One_line_progContext ------------------------------------------------------------------

translatorParser::RowContext* translatorParser::One_line_progContext::row() {
  return getRuleContext<translatorParser::RowContext>(0);
}

tree::TerminalNode* translatorParser::One_line_progContext::EOF() {
  return getToken(translatorParser::EOF, 0);
}

translatorParser::One_line_progContext::One_line_progContext(ProgContext *ctx) { copyFrom(ctx); }


std::any translatorParser::One_line_progContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<translatorVisitor*>(visitor))
    return parserVisitor->visitOne_line_prog(this);
  else
    return visitor->visitChildren(this);
}

translatorParser::ProgContext* translatorParser::prog() {
   return prog(0);
}

translatorParser::ProgContext* translatorParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  translatorParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  translatorParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, translatorParser::RuleProg, precedence);

    

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
    _localctx = _tracker.createInstance<One_line_progContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(307);
    row();
    setState(309);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      setState(308);
      match(translatorParser::EOF);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(318);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Mult_line_progContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(311);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(312);
        row();
        setState(314);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
        case 1: {
          setState(313);
          match(translatorParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(320);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool translatorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return arth_exprSempred(antlrcpp::downCast<Arth_exprContext *>(context), predicateIndex);
    case 2: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 13: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool translatorParser::arth_exprSempred(Arth_exprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool translatorParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool translatorParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void translatorParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  translatorParserInitialize();
#else
  ::antlr4::internal::call_once(translatorParserOnceFlag, translatorParserInitialize);
#endif
}

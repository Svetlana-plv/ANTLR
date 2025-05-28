
// Generated from translator.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  translatorLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, INT = 13, FLOAT = 14, 
    VAR = 15, SUB = 16, ADD = 17, DIV = 18, MUL = 19, POW = 20, INC = 21, 
    DEC = 22, EQ = 23, NE = 24, LS = 25, LE = 26, GT = 27, GE = 28, OR = 29, 
    AND = 30, NOT = 31, SEP = 32, ASGN = 33, ADD_ASGN = 34, SUB_ASGN = 35, 
    MUL_ASGN = 36, DIV_ASGN = 37, LBR = 38, RBR = 39, WS = 40
  };

  explicit translatorLexer(antlr4::CharStream *input);

  ~translatorLexer() override;


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


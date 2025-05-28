
// Generated from translator.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  translatorParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, INT = 13, FLOAT = 14, 
    VAR = 15, SUB = 16, ADD = 17, DIV = 18, MUL = 19, POW = 20, INC = 21, 
    DEC = 22, EQ = 23, NE = 24, LS = 25, LE = 26, GT = 27, GE = 28, OR = 29, 
    AND = 30, NOT = 31, SEP = 32, ASGN = 33, ADD_ASGN = 34, SUB_ASGN = 35, 
    MUL_ASGN = 36, DIV_ASGN = 37, LBR = 38, RBR = 39, WS = 40
  };

  enum {
    RuleExpr = 0, RuleArth_expr = 1, RuleTerm = 2, RulePower = 3, RuleFactor = 4, 
    RuleCompare = 5, RuleLogic_expr = 6, RuleLogic_term = 7, RuleLogic_factor = 8, 
    RuleElif = 9, RuleWhile = 10, RuleFunctions = 11, RuleRow = 12, RuleProg = 13
  };

  explicit translatorParser(antlr4::TokenStream *input);

  translatorParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~translatorParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ExprContext;
  class Arth_exprContext;
  class TermContext;
  class PowerContext;
  class FactorContext;
  class CompareContext;
  class Logic_exprContext;
  class Logic_termContext;
  class Logic_factorContext;
  class ElifContext;
  class WhileContext;
  class FunctionsContext;
  class RowContext;
  class ProgContext; 

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Logic_expr_nodeContext : public ExprContext {
  public:
    Logic_expr_nodeContext(ExprContext *ctx);

    Logic_exprContext *logic_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Arth_expr_nodeContext : public ExprContext {
  public:
    Arth_expr_nodeContext(ExprContext *ctx);

    Arth_exprContext *arth_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Functions_nodeContext : public ExprContext {
  public:
    Functions_nodeContext(ExprContext *ctx);

    FunctionsContext *functions();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();

  class  Arth_exprContext : public antlr4::ParserRuleContext {
  public:
    Arth_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Arth_exprContext() = default;
    void copyFrom(Arth_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Term_ADD_SUB_exprContext : public Arth_exprContext {
  public:
    Term_ADD_SUB_exprContext(Arth_exprContext *ctx);

    Arth_exprContext *arth_expr();
    TermContext *term();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Term_nodeContext : public Arth_exprContext {
  public:
    Term_nodeContext(Arth_exprContext *ctx);

    TermContext *term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Arth_exprContext* arth_expr();
  Arth_exprContext* arth_expr(int precedence);
  class  TermContext : public antlr4::ParserRuleContext {
  public:
    TermContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    TermContext() = default;
    void copyFrom(TermContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Power_nodeContext : public TermContext {
  public:
    Power_nodeContext(TermContext *ctx);

    PowerContext *power();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Power_MUL_DIV_termContext : public TermContext {
  public:
    Power_MUL_DIV_termContext(TermContext *ctx);

    TermContext *term();
    PowerContext *power();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  TermContext* term();
  TermContext* term(int precedence);
  class  PowerContext : public antlr4::ParserRuleContext {
  public:
    PowerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    PowerContext() = default;
    void copyFrom(PowerContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  POW_nodeContext : public PowerContext {
  public:
    POW_nodeContext(PowerContext *ctx);

    FactorContext *factor();
    antlr4::tree::TerminalNode *POW();
    PowerContext *power();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Factor_nodeContext : public PowerContext {
  public:
    Factor_nodeContext(PowerContext *ctx);

    FactorContext *factor();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  PowerContext* power();

  class  FactorContext : public antlr4::ParserRuleContext {
  public:
    FactorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FactorContext() = default;
    void copyFrom(FactorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VARIABLE_nodeContext : public FactorContext {
  public:
    VARIABLE_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  FLOAT_nodeContext : public FactorContext {
  public:
    FLOAT_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LBR_expr_RBRContext : public FactorContext {
  public:
    LBR_expr_RBRContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    Arth_exprContext *arth_expr();
    antlr4::tree::TerminalNode *RBR();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INTEGER_nodeContext : public FactorContext {
  public:
    INTEGER_nodeContext(FactorContext *ctx);

    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FactorContext* factor();

  class  CompareContext : public antlr4::ParserRuleContext {
  public:
    CompareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    CompareContext() = default;
    void copyFrom(CompareContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Compare_eq_nodeContext : public CompareContext {
  public:
    Compare_eq_nodeContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *EQ();
    std::vector<Arth_exprContext *> arth_expr();
    Arth_exprContext* arth_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compare_ge_nodeContext : public CompareContext {
  public:
    Compare_ge_nodeContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *GE();
    std::vector<Arth_exprContext *> arth_expr();
    Arth_exprContext* arth_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compare_le_nodeContext : public CompareContext {
  public:
    Compare_le_nodeContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *LE();
    std::vector<Arth_exprContext *> arth_expr();
    Arth_exprContext* arth_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compare_ne_nodeContext : public CompareContext {
  public:
    Compare_ne_nodeContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *NE();
    std::vector<Arth_exprContext *> arth_expr();
    Arth_exprContext* arth_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compare_ls_nodeContext : public CompareContext {
  public:
    Compare_ls_nodeContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *LS();
    std::vector<Arth_exprContext *> arth_expr();
    Arth_exprContext* arth_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compare_gt_nodeContext : public CompareContext {
  public:
    Compare_gt_nodeContext(CompareContext *ctx);

    antlr4::tree::TerminalNode *GT();
    std::vector<Arth_exprContext *> arth_expr();
    Arth_exprContext* arth_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  CompareContext* compare();

  class  Logic_exprContext : public antlr4::ParserRuleContext {
  public:
    Logic_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logic_exprContext() = default;
    void copyFrom(Logic_exprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Negation_nodeContext : public Logic_exprContext {
  public:
    Negation_nodeContext(Logic_exprContext *ctx);

    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *LBR();
    Logic_termContext *logic_term();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OR_nodeContext : public Logic_exprContext {
  public:
    OR_nodeContext(Logic_exprContext *ctx);

    Logic_termContext *logic_term();
    antlr4::tree::TerminalNode *OR();
    Logic_exprContext *logic_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logic_term_nodeContext : public Logic_exprContext {
  public:
    Logic_term_nodeContext(Logic_exprContext *ctx);

    Logic_termContext *logic_term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logic_exprContext* logic_expr();

  class  Logic_termContext : public antlr4::ParserRuleContext {
  public:
    Logic_termContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logic_termContext() = default;
    void copyFrom(Logic_termContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  AND_nodeContext : public Logic_termContext {
  public:
    AND_nodeContext(Logic_termContext *ctx);

    Logic_factorContext *logic_factor();
    antlr4::tree::TerminalNode *AND();
    Logic_termContext *logic_term();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Logic_factor_nodeContext : public Logic_termContext {
  public:
    Logic_factor_nodeContext(Logic_termContext *ctx);

    Logic_factorContext *logic_factor();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logic_termContext* logic_term();

  class  Logic_factorContext : public antlr4::ParserRuleContext {
  public:
    Logic_factorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    Logic_factorContext() = default;
    void copyFrom(Logic_factorContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Arth_logic_nodeContext : public Logic_factorContext {
  public:
    Arth_logic_nodeContext(Logic_factorContext *ctx);

    Arth_exprContext *arth_expr();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LBR_logic_expr_RBRContext : public Logic_factorContext {
  public:
    LBR_logic_expr_RBRContext(Logic_factorContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    Logic_exprContext *logic_expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Compare_nodeContext : public Logic_factorContext {
  public:
    Compare_nodeContext(Logic_factorContext *ctx);

    CompareContext *compare();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  Logic_factorContext* logic_factor();

  class  ElifContext : public antlr4::ParserRuleContext {
  public:
    ElifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ElifContext() = default;
    void copyFrom(ElifContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Elif_nodeContext : public ElifContext {
  public:
    Elif_nodeContext(ElifContext *ctx);

    std::vector<antlr4::tree::TerminalNode *> LBR();
    antlr4::tree::TerminalNode* LBR(size_t i);
    std::vector<Logic_exprContext *> logic_expr();
    Logic_exprContext* logic_expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBR();
    antlr4::tree::TerminalNode* RBR(size_t i);
    std::vector<ProgContext *> prog();
    ProgContext* prog(size_t i);

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ElifContext* elif();

  class  WhileContext : public antlr4::ParserRuleContext {
  public:
    WhileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    WhileContext() = default;
    void copyFrom(WhileContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  While_nodeContext : public WhileContext {
  public:
    While_nodeContext(WhileContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    Logic_exprContext *logic_expr();
    antlr4::tree::TerminalNode *RBR();
    ProgContext *prog();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  WhileContext* while_();

  class  FunctionsContext : public antlr4::ParserRuleContext {
  public:
    FunctionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FunctionsContext() = default;
    void copyFrom(FunctionsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Print_nodeContext : public FunctionsContext {
  public:
    Print_nodeContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Sqrt_nodeContext : public FunctionsContext {
  public:
    Sqrt_nodeContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Max_nodeContext : public FunctionsContext {
  public:
    Max_nodeContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Min_nodeContext : public FunctionsContext {
  public:
    Min_nodeContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Abs_nodeContext : public FunctionsContext {
  public:
    Abs_nodeContext(FunctionsContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FunctionsContext* functions();

  class  RowContext : public antlr4::ParserRuleContext {
  public:
    RowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RowContext() = default;
    void copyFrom(RowContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_sepContext : public RowContext {
  public:
    Expr_sepContext(RowContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INC_sepContext : public RowContext {
  public:
    INC_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *INC();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MUL_ASGN_sepContext : public RowContext {
  public:
    MUL_ASGN_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *MUL_ASGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DEC_sepContext : public RowContext {
  public:
    DEC_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *DEC();
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ADD_ASGN_sepContext : public RowContext {
  public:
    ADD_ASGN_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ADD_ASGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ASGN_sepContext : public RowContext {
  public:
    ASGN_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ASGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  SUB_ASGN_sepContext : public RowContext {
  public:
    SUB_ASGN_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *SUB_ASGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Elif_sepContext : public RowContext {
  public:
    Elif_sepContext(RowContext *ctx);

    ElifContext *elif();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  DIV_ASGN_sepContext : public RowContext {
  public:
    DIV_ASGN_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *DIV_ASGN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  While_sepContext : public RowContext {
  public:
    While_sepContext(RowContext *ctx);

    WhileContext *while_();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RowContext* row();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Mult_line_progContext : public ProgContext {
  public:
    Mult_line_progContext(ProgContext *ctx);

    ProgContext *prog();
    RowContext *row();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  One_line_progContext : public ProgContext {
  public:
    One_line_progContext(ProgContext *ctx);

    RowContext *row();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();
  ProgContext* prog(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool arth_exprSempred(Arth_exprContext *_localctx, size_t predicateIndex);
  bool termSempred(TermContext *_localctx, size_t predicateIndex);
  bool progSempred(ProgContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};


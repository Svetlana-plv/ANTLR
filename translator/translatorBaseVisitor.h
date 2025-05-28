
// Generated from translator.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "translatorVisitor.h"


/**
 * This class provides an empty implementation of translatorVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  translatorBaseVisitor : public translatorVisitor {
public:

  virtual std::any visitArth_expr_node(translatorParser::Arth_expr_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogic_expr_node(translatorParser::Logic_expr_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctions_node(translatorParser::Functions_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm_ADD_SUB_expr(translatorParser::Term_ADD_SUB_exprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTerm_node(translatorParser::Term_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPower_node(translatorParser::Power_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPower_MUL_DIV_term(translatorParser::Power_MUL_DIV_termContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPOW_node(translatorParser::POW_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFactor_node(translatorParser::Factor_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLBR_expr_RBR(translatorParser::LBR_expr_RBRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitINTEGER_node(translatorParser::INTEGER_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFLOAT_node(translatorParser::FLOAT_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVARIABLE_node(translatorParser::VARIABLE_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_eq_node(translatorParser::Compare_eq_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_ne_node(translatorParser::Compare_ne_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_ls_node(translatorParser::Compare_ls_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_le_node(translatorParser::Compare_le_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_gt_node(translatorParser::Compare_gt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_ge_node(translatorParser::Compare_ge_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNegation_node(translatorParser::Negation_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOR_node(translatorParser::OR_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogic_term_node(translatorParser::Logic_term_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAND_node(translatorParser::AND_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogic_factor_node(translatorParser::Logic_factor_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLBR_logic_expr_RBR(translatorParser::LBR_logic_expr_RBRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompare_node(translatorParser::Compare_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArth_logic_node(translatorParser::Arth_logic_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElif_node(translatorParser::Elif_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_node(translatorParser::While_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_node(translatorParser::Print_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAbs_node(translatorParser::Abs_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSqrt_node(translatorParser::Sqrt_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMax_node(translatorParser::Max_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMin_node(translatorParser::Min_nodeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr_sep(translatorParser::Expr_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitASGN_sep(translatorParser::ASGN_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitINC_sep(translatorParser::INC_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDEC_sep(translatorParser::DEC_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitADD_ASGN_sep(translatorParser::ADD_ASGN_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSUB_ASGN_sep(translatorParser::SUB_ASGN_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMUL_ASGN_sep(translatorParser::MUL_ASGN_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDIV_ASGN_sep(translatorParser::DIV_ASGN_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElif_sep(translatorParser::Elif_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_sep(translatorParser::While_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMult_line_prog(translatorParser::Mult_line_progContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOne_line_prog(translatorParser::One_line_progContext *ctx) override {
    return visitChildren(ctx);
  }


};


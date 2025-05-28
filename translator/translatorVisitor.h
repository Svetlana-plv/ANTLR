
// Generated from translator.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "translatorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by translatorParser.
 */
class  translatorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by translatorParser.
   */
    virtual std::any visitArth_expr_node(translatorParser::Arth_expr_nodeContext *context) = 0;

    virtual std::any visitLogic_expr_node(translatorParser::Logic_expr_nodeContext *context) = 0;

    virtual std::any visitFunctions_node(translatorParser::Functions_nodeContext *context) = 0;

    virtual std::any visitTerm_ADD_SUB_expr(translatorParser::Term_ADD_SUB_exprContext *context) = 0;

    virtual std::any visitTerm_node(translatorParser::Term_nodeContext *context) = 0;

    virtual std::any visitPower_node(translatorParser::Power_nodeContext *context) = 0;

    virtual std::any visitPower_MUL_DIV_term(translatorParser::Power_MUL_DIV_termContext *context) = 0;

    virtual std::any visitPOW_node(translatorParser::POW_nodeContext *context) = 0;

    virtual std::any visitFactor_node(translatorParser::Factor_nodeContext *context) = 0;

    virtual std::any visitLBR_expr_RBR(translatorParser::LBR_expr_RBRContext *context) = 0;

    virtual std::any visitINTEGER_node(translatorParser::INTEGER_nodeContext *context) = 0;

    virtual std::any visitFLOAT_node(translatorParser::FLOAT_nodeContext *context) = 0;

    virtual std::any visitVARIABLE_node(translatorParser::VARIABLE_nodeContext *context) = 0;

    virtual std::any visitCompare_eq_node(translatorParser::Compare_eq_nodeContext *context) = 0;

    virtual std::any visitCompare_ne_node(translatorParser::Compare_ne_nodeContext *context) = 0;

    virtual std::any visitCompare_ls_node(translatorParser::Compare_ls_nodeContext *context) = 0;

    virtual std::any visitCompare_le_node(translatorParser::Compare_le_nodeContext *context) = 0;

    virtual std::any visitCompare_gt_node(translatorParser::Compare_gt_nodeContext *context) = 0;

    virtual std::any visitCompare_ge_node(translatorParser::Compare_ge_nodeContext *context) = 0;

    virtual std::any visitNegation_node(translatorParser::Negation_nodeContext *context) = 0;

    virtual std::any visitOR_node(translatorParser::OR_nodeContext *context) = 0;

    virtual std::any visitLogic_term_node(translatorParser::Logic_term_nodeContext *context) = 0;

    virtual std::any visitAND_node(translatorParser::AND_nodeContext *context) = 0;

    virtual std::any visitLogic_factor_node(translatorParser::Logic_factor_nodeContext *context) = 0;

    virtual std::any visitLBR_logic_expr_RBR(translatorParser::LBR_logic_expr_RBRContext *context) = 0;

    virtual std::any visitCompare_node(translatorParser::Compare_nodeContext *context) = 0;

    virtual std::any visitArth_logic_node(translatorParser::Arth_logic_nodeContext *context) = 0;

    virtual std::any visitElif_node(translatorParser::Elif_nodeContext *context) = 0;

    virtual std::any visitWhile_node(translatorParser::While_nodeContext *context) = 0;

    virtual std::any visitPrint_node(translatorParser::Print_nodeContext *context) = 0;

    virtual std::any visitAbs_node(translatorParser::Abs_nodeContext *context) = 0;

    virtual std::any visitSqrt_node(translatorParser::Sqrt_nodeContext *context) = 0;

    virtual std::any visitMax_node(translatorParser::Max_nodeContext *context) = 0;

    virtual std::any visitMin_node(translatorParser::Min_nodeContext *context) = 0;

    virtual std::any visitExpr_sep(translatorParser::Expr_sepContext *context) = 0;

    virtual std::any visitASGN_sep(translatorParser::ASGN_sepContext *context) = 0;

    virtual std::any visitINC_sep(translatorParser::INC_sepContext *context) = 0;

    virtual std::any visitDEC_sep(translatorParser::DEC_sepContext *context) = 0;

    virtual std::any visitADD_ASGN_sep(translatorParser::ADD_ASGN_sepContext *context) = 0;

    virtual std::any visitSUB_ASGN_sep(translatorParser::SUB_ASGN_sepContext *context) = 0;

    virtual std::any visitMUL_ASGN_sep(translatorParser::MUL_ASGN_sepContext *context) = 0;

    virtual std::any visitDIV_ASGN_sep(translatorParser::DIV_ASGN_sepContext *context) = 0;

    virtual std::any visitElif_sep(translatorParser::Elif_sepContext *context) = 0;

    virtual std::any visitWhile_sep(translatorParser::While_sepContext *context) = 0;

    virtual std::any visitMult_line_prog(translatorParser::Mult_line_progContext *context) = 0;

    virtual std::any visitOne_line_prog(translatorParser::One_line_progContext *context) = 0;


};


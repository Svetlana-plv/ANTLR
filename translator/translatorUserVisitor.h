#pragma once
#include "antlr4-runtime.h"
#include "translatorVisitor.h"
#include "translatorBaseVisitor.h"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>


class VariableStorage {
private:
	std::unordered_map<std::string, float> variables;

public:
	void set(const std::string& name, float value) {
		variables[name] = value;
	}

	float get(const std::string& name) const {
		auto it = variables.find(name);
		if (it == variables.end()) {
			throw std::runtime_error("Undefined variable: " + name);
		}
		return it->second;
	}

	void print_pair() const {
		for (const auto& pair : variables) {
			std::cout << "Name: " << pair.first << ", Value: " << pair.second << std::endl;
		}
	}

	bool find(const std::string& name) const {
		return variables.find(name) != variables.end();
	}

	void inc(const std::string& name) {
		if (!find(name)) {
			throw std::runtime_error("Undefined variable: " + name);
		}
		variables[name] += 1;
	}

	void dec(const std::string& name) {
		if (!find(name)) {
			throw std::runtime_error("Undefined variable: " + name);
		}
		variables[name] -= 1;
	}

	int size() {
		return variables.size();
	}
};

class  translatorUserVisitor : public translatorBaseVisitor {
public:

	std::vector<float> res;
	VariableStorage variables;
	inline static const float EPS = 0.00000001f;

	//expr
	virtual std::any visitArth_expr_node(translatorParser::Arth_expr_nodeContext* ctx) override {
		std::cout << "Arth_expr_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->arth_expr()));
		return val;
	}

	virtual std::any visitLogic_expr_node(translatorParser::Logic_expr_nodeContext* ctx) override {
		std::cout << "Logic_expr_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->logic_expr()));
		return val;
	}

	// add, sub
	virtual std::any visitTerm_ADD_SUB_expr(translatorParser::Term_ADD_SUB_exprContext* ctx) override {
		std::cout << "Term_ADD_SUB_expr" << std::endl;
		float left = std::any_cast<float>(visit(ctx->arth_expr()));
		float right = std::any_cast<float>(visit(ctx->term()));
		

		auto op = ctx->ADD() ? ctx->ADD() : ctx->SUB();
		std::string opText = op->getText();

		if (opText == "+") {
			return left + right;                     
		}
		return left - right;
	}

	// mul, div
	virtual std::any visitPower_MUL_DIV_term(translatorParser::Power_MUL_DIV_termContext* ctx) override {
		std::cout << "Factor_MUL_DIV_term" << std::endl;
		float left = std::any_cast<float>(visit(ctx->term()));
		float right = std::any_cast<float>(visit(ctx->power()));
		

		auto op = ctx->DIV() ? ctx->DIV() : ctx->MUL();
		std::string opText = op->getText();

		if (opText == "/") {
			if(abs(right) > EPS)
				return left / right;
			else {
				throw std::runtime_error("Can't div by zero!");
			}
		}
		return left * right;
	}

	// term
	virtual std::any visitTerm_node(translatorParser::Term_nodeContext* ctx) override {
		std::cout << "Term_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->term()));
		return val;
	}

	// power
	virtual std::any visitPower_node(translatorParser::Power_nodeContext* ctx) override {
		std::cout << "Power_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->power()));
		return val;
	}

	// factor
	virtual std::any visitPOW_node(translatorParser::POW_nodeContext* ctx) override {
		std::cout << "POW_node" << std::endl;
		float left = std::any_cast<float>(visit(ctx->factor()));
		float right = std::any_cast<float>(visit(ctx->power()));
		return std::pow(left, right);
	}

	virtual std::any visitFactor_node(translatorParser::Factor_nodeContext* ctx) override {
		std::cout << "Factor_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->factor()));
		return val;
	}

	// arith_factor
	virtual std::any visitLBR_expr_RBR(translatorParser::LBR_expr_RBRContext* ctx) override {
		std::cout << "LBR_expr_RBR" << std::endl;
		float val = std::any_cast<float>(visit(ctx->arth_expr()));
		if (ctx->SUB()) {
			val = -val;
		}
		return val;
	}

	virtual std::any visitINTEGER_node(translatorParser::INTEGER_nodeContext* ctx) override {
		std::cout << "INTEGER_node" << std::endl;
		float val = std::stof(ctx->INT()->getText());
		if (ctx->SUB()) {
			val = -val;
		}
		return val;
	}

	virtual std::any visitFLOAT_node(translatorParser::FLOAT_nodeContext* ctx) override {
		std::cout << "FLOAT_node" << std::endl;
		float val = std::stof(ctx->FLOAT()->getText());
		if (ctx->SUB()) {
			val = -val;
		}
		return val;
	}

	virtual std::any visitVARIABLE_node(translatorParser::VARIABLE_nodeContext* ctx) override {
		std::cout << "VARIABLE_node" << std::endl;
		std::string name = ctx->VAR()->getText();
		float val = variables.get(name);
		if (ctx->SUB()) {
			val = -val;
		}
		return val;
	}

	// Boolean

	// compare

	virtual std::any visitCompare_eq_node(translatorParser::Compare_eq_nodeContext* ctx) override {
		std::cout << "Compare_eq_node" << std::endl;
		float left;
		float right;
		auto left_arth = ctx->arth_expr(0);
		auto right_arth = ctx->arth_expr(1);

		if (left_arth) {
			left= std::any_cast<float>(visit(ctx->arth_expr(0)));
		}
		else {
			left = std::any_cast<float>(visit(ctx->logic_expr(0)));
		}

		if (right_arth) {
			right = std::any_cast<float>(visit(ctx->arth_expr(1)));
		}
		else {
			right = std::any_cast<float>(visit(ctx->logic_expr(1)));
		}

		if (abs(right-left) > EPS)
			return 0.0f;
		else {
			return 1.0f;
		}
	}

	virtual std::any visitCompare_ne_node(translatorParser::Compare_ne_nodeContext* ctx) override {
		std::cout << "Compare_ne_node" << std::endl;
		float left;
		float right;
		auto left_arth = ctx->arth_expr(0);
		auto right_arth = ctx->arth_expr(1);

		if (left_arth) {
			left = std::any_cast<float>(visit(ctx->arth_expr(0)));
		}
		else {
			left = std::any_cast<float>(visit(ctx->logic_expr(0)));
		}

		if (right_arth) {
			right = std::any_cast<float>(visit(ctx->arth_expr(1)));
		}
		else {
			right = std::any_cast<float>(visit(ctx->logic_expr(1)));
		}

		if (abs(right - left) > EPS)
			return 1.0f;
		else {
			return 0.0f;
		}
	}

	virtual std::any visitCompare_ls_node(translatorParser::Compare_ls_nodeContext* ctx) override {
		std::cout << "Compare_ls_node" << std::endl;
		float left;
		float right;
		auto left_arth = ctx->arth_expr(0);
		auto right_arth = ctx->arth_expr(1);

		if (left_arth) {
			left = std::any_cast<float>(visit(ctx->arth_expr(0)));
		}
		else {
			left = std::any_cast<float>(visit(ctx->logic_expr(0)));
		}

		if (right_arth) {
			right = std::any_cast<float>(visit(ctx->arth_expr(1)));
		}
		else {
			right = std::any_cast<float>(visit(ctx->logic_expr(1)));
		}

		if (left < right) return 1.0f;
		return 0.0f;
	}

	virtual std::any visitCompare_le_node(translatorParser::Compare_le_nodeContext* ctx) override {
		std::cout << "Compare_le_node" << std::endl;
		float left;
		float right;
		auto left_arth = ctx->arth_expr(0);
		auto right_arth = ctx->arth_expr(1);

		if (left_arth) {
			left = std::any_cast<float>(visit(ctx->arth_expr(0)));
		}
		else {
			left = std::any_cast<float>(visit(ctx->logic_expr(0)));
		}

		if (right_arth) {
			right = std::any_cast<float>(visit(ctx->arth_expr(1)));
		}
		else {
			right = std::any_cast<float>(visit(ctx->logic_expr(1)));
		}

		if (left <= right) return 1.0f;
		return 0.0f;
	}

	virtual std::any visitCompare_gt_node(translatorParser::Compare_gt_nodeContext* ctx) override {
		std::cout << "Compare_gt_node" << std::endl;
		float left;
		float right;
		auto left_arth = ctx->arth_expr(0);
		auto right_arth = ctx->arth_expr(1);

		if (left_arth) {
			left = std::any_cast<float>(visit(ctx->arth_expr(0)));
		}
		else {
			left = std::any_cast<float>(visit(ctx->logic_expr(0)));
		}

		if (right_arth) {
			right = std::any_cast<float>(visit(ctx->arth_expr(1)));
		}
		else {
			right = std::any_cast<float>(visit(ctx->logic_expr(1)));
		}

		if (left > right) return 1.0f;
		return 0.0f;
	}

	virtual std::any visitCompare_ge_node(translatorParser::Compare_ge_nodeContext* ctx) override {
		std::cout << "Compare_ge_node" << std::endl;
		float left;
		float right;
		auto left_arth = ctx->arth_expr(0);
		auto right_arth = ctx->arth_expr(1);

		if (left_arth) {
			left = std::any_cast<float>(visit(ctx->arth_expr(0)));
		}
		else {
			left = std::any_cast<float>(visit(ctx->logic_expr(0)));
		}

		if (right_arth) {
			right = std::any_cast<float>(visit(ctx->arth_expr(1)));
		}
		else {
			right = std::any_cast<float>(visit(ctx->logic_expr(1)));
		}

		if (left >= right) return 1.0f;
		return 0.0f;
	}

	//logic_expr
	
	virtual std::any visitNegation_node(translatorParser::Negation_nodeContext* ctx) override {
		std::cout << "Negation_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->logic_term()));
		if (abs(val) > EPS)
			return 0.0f;
		else {
			return 1.0f;
		}
	}

	virtual std::any visitOR_node(translatorParser::OR_nodeContext* ctx) override {
		std::cout << "OR_node" << std::endl;
		float left = std::any_cast<float>(visit(ctx->logic_term()));
		float right = std::any_cast<float>(visit(ctx->logic_expr()));
		if (left || right) return 1.0f;
		return 0.0f;
	}

	virtual std::any visitLogic_term_node(translatorParser::Logic_term_nodeContext* ctx) override {
		std::cout << "Logic_term_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->logic_term()));
		return val;
	}

	// logic_term

	virtual std::any visitAND_node(translatorParser::AND_nodeContext* ctx) override {
		std::cout << "AND_node" << std::endl;
		float left = std::any_cast<float>(visit(ctx->logic_factor()));
		float right = std::any_cast<float>(visit(ctx->logic_term()));

		if (left && right) return 1.0f;
		return 0.0f;
	}

	virtual std::any visitLogic_factor_node(translatorParser::Logic_factor_nodeContext* ctx) override {
		std::cout << "Logic_term_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->logic_factor()));
		return val;
	}

	// logic_factor

	virtual std::any visitLBR_logic_expr_RBR(translatorParser::LBR_logic_expr_RBRContext* ctx) override {
		std::cout << "LBR_logic_expr_RBR" << std::endl;
		float val = std::any_cast<float>(visit(ctx->logic_expr()));
		return val;
	}

	virtual std::any visitCompare_node(translatorParser::Compare_nodeContext* ctx) override {
		std::cout << "Compare_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->compare()));
		return val;
	}

	virtual std::any visitArth_logic_node(translatorParser::Arth_logic_nodeContext* ctx) override {
		std::cout << "Arth_logic_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->arth_expr()));
		return val;
	}

	// elif
	virtual std::any visitElif_node(translatorParser::Elif_nodeContext* ctx) override {
		std::cout << "Elif_node" << std::endl;

		size_t i = 0;

		auto condition = std::any_cast<float>(visit(ctx->logic_expr(i)));

		// if
		if (std::abs(condition) > EPS) {
			return std::any_cast<float>(visit(ctx->prog(i)));
		}
		i++;
		
		// elif
		size_t elif_count = ctx->logic_expr().size();
		for (; i < elif_count; ++i) {
			condition = std::any_cast<float>(visit(ctx->logic_expr(i)));
			if (std::abs(condition) > EPS) {
				return visit(ctx->prog(i));
			}
		}

		// else
		if (ctx->prog(i+1)) {
			return visit(ctx->prog(elif_count + 1));
		}

		return 0.0f;
	}

	//while
	virtual std::any visitWhile_node(translatorParser::While_nodeContext* ctx) override {
		std::cout << "While_node" << std::endl;
		while (std::any_cast<float>(visit(ctx->logic_expr()))) {
			std::any_cast<float>(visit(ctx->prog()));
		}
		return 1.0f;
	}

	// functions
	virtual std::any visitPrint_node(translatorParser::Print_nodeContext* ctx) override {
		std::cout << "Print_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->expr()));
		res.push_back(val);
		return val;
	}

	virtual std::any visitAbs_node(translatorParser::Abs_nodeContext* ctx) override {
		std::cout << "ABS_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->expr()));
		return std::abs(val);
	}

	virtual std::any visitSqrt_node(translatorParser::Sqrt_nodeContext* ctx) override {
		std::cout << "Sqrt_node" << std::endl;
		float val = std::any_cast<float>(visit(ctx->expr()));
		return std::sqrt(val);
	}

	virtual std::any visitMax_node(translatorParser::Max_nodeContext* ctx) override {
		std::cout << "Max_node" << std::endl;
		float left = std::any_cast<float>(visit(ctx->expr(0)));
		float right = std::any_cast<float>(visit(ctx->expr(1)));
		return std::max(left, right);
	}

	virtual std::any visitMin_node(translatorParser::Min_nodeContext* ctx) override {
		std::cout << "Min_node" << std::endl;
		float left = std::any_cast<float>(visit(ctx->expr(0)));
		float right = std::any_cast<float>(visit(ctx->expr(1)));
		return std::min(left, right);
	}


	// expr sep
	virtual std::any visitExpr_sep(translatorParser::Expr_sepContext* ctx) override {
		std::cout << "Expr_sep" << std::endl;
		float val = std::any_cast<float>(visit(ctx->expr()));
		//res.push_back(val);
		return val;
	}

	// Assign
	virtual std::any visitASGN_sep(translatorParser::ASGN_sepContext* ctx) override {
		std::cout << "ASGN_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		float val = std::any_cast<float>(visit(ctx->expr()));
		variables.set(name, val);
		return val;
	}

	virtual std::any visitADD_ASGN_sep(translatorParser::ADD_ASGN_sepContext* ctx) override {
		std::cout << "ADD_ASGN_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		float val = std::any_cast<float>(visit(ctx->expr()));
		float res = val + variables.get(name);
		variables.set(name, res);
		return res;
	}

	virtual std::any visitSUB_ASGN_sep(translatorParser::SUB_ASGN_sepContext* ctx) override {
		std::cout << "SUB_ASGN_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		float val = std::any_cast<float>(visit(ctx->expr()));
		float res = variables.get(name) - val;
		variables.set(name, res);
		return res;
	}

	virtual std::any visitMUL_ASGN_sep(translatorParser::MUL_ASGN_sepContext* ctx) override {
		std::cout << "MUL_ASGN_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		float val = std::any_cast<float>(visit(ctx->expr()));
		float res = val * variables.get(name);
		variables.set(name, res);
		return res;
	}

	virtual std::any visitDIV_ASGN_sep(translatorParser::DIV_ASGN_sepContext* ctx) override {
		std::cout << "DIV_ASGN_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		float val = std::any_cast<float>(visit(ctx->expr()));
		float res;
		if (abs(val) > EPS)
			res = variables.get(name) / val;
		else {
			throw std::runtime_error("Can't div by zero!");
		}
		variables.set(name, res);
		return res;
	}

	// inc, dec
	virtual std::any visitINC_sep(translatorParser::INC_sepContext* ctx) override {
		std::cout << "INC_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		variables.inc(name);
		return variables.get(name);
	}

	virtual std::any visitDEC_sep(translatorParser::DEC_sepContext* ctx) override {
		std::cout << "DEC_sep" << std::endl;
		std::string name = ctx->VAR()->getText();
		variables.dec(name);
		return variables.get(name);
	}



	// row
	virtual std::any visitMult_line_prog(translatorParser::Mult_line_progContext* ctx) override {
		std::cout << "Mult_line_prog" << std::endl;
		std::any_cast<float>(visit(ctx->prog()));
		float val = std::any_cast<float>(visit(ctx->row()));
		return val;
	}

	virtual std::any visitOne_line_prog(translatorParser::One_line_progContext* ctx) override {
		std::cout << "One_line_prog" << std::endl;
		float val = std::any_cast<float>(visit(ctx->row()));
		return val;
	}

};
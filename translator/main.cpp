#include <string>
#include <sstream>

#include "translatorLexer.h"
#include "translatorVisitor.h"
#include "translatorParser.h"
#include "translatorUserVisitor.h"

std::string print() {
	return "print(25);";
}

std::string one_expr() {
	return "9- 2 * (1 + 2) / 1 ;";
}

std::string mult_expr() {
	return "9- 2 * (1 + 2) / 1 ;   10 * 20 / 10;    30 - 40;";
}

std::string integer() {
	return "9;";
}

std::string boolean() {
	return "a=1; b=2; c=3; d=c; e=0; f=5; print((1==1)||(2==1));    print(!( (a + b) > (c * d) ));    print(a == b || c == d && e == e);  print((a == b || c == d) && e == f);";
}

std::string assign() {
	return "a=2; b=3; c=a+b; a+=10;";
}

std::string program() { 
	return "a=2;  b=3;  c=a*4;  a+=10;  f=34/(7-5)*5;  d=(12-4*(3+4) + 34/(7-5)*5);  print(d);  c-=3;  b*=0; print(a); ++a; print(a); --a; print(a);";
}

std::string bool_cmp() {
	return "print((12!=13 || 0) == (5 && 0));";
}

std::string elif() {
	return "i=4; if(i==1){print(1);} elif(i==2){print(2);} else{print(0);}";
}

std::string while_() {
	return "i=0; while(i<4){print(i); ++i;}";
}

std::string expr() {
	return "34/2*5;";
}

std::string power() {
	return "a=2^3;";
}



int main() {

	std::string expression = while_();
	std::stringstream stream(expression);

	antlr4::ANTLRInputStream input(stream);
	translatorLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	translatorParser parser(&tokens);
	translatorUserVisitor visitor;
	visitor.visit(parser.prog());

	std::cout << std::endl;
	std::cout << "Result:" << std::endl;

	int i = 0;
	for (int var : visitor.res) {
		std::cout << i << ": " << var << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << "Variables:" << std::endl;
	visitor.variables.print_pair();

	return 0;
}
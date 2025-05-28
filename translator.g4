grammar translator;

INT: '0' | [1-9][0-9]*;  // Запрещает 012, разрешает 0, 1, 10 и т.д.

FLOAT: INT '.' [0-9]*  // 3.14, 10.0 (без ведущих нулей)
     | '.' [0-9]+         // .7, .1415
     ;
VAR: [a-zA-Z_][a-zA-Z0-9_]*;  // Имена переменных (начинаются с буквы или _)

SUB: '-';
ADD: '+';
DIV: '/';
MUL: '*';
POW: '^';
INC: '++';
DEC: '--';

EQ: '==';
NE: '!=';
LS: '<';
LE: '<=';
GT: '>';
GE: '>=';

OR: '||';
AND: '&&';
NOT: '!';

SEP: ';';

ASGN: '=';  // Для присваивания
ADD_ASGN: '+=';
SUB_ASGN: '-=';
MUL_ASGN: '*=';
DIV_ASGN: '/=';

LBR: '(';
RBR: ')';

WS: [ \t\r\n]->skip;

expr: arth_expr		# arth_expr_node
		| logic_expr		# logic_expr_node
		| functions 	#functions_node
;		

arth_expr: arth_expr (ADD|SUB)  term   # term_ADD_SUB_expr
    | term                   # term_node
;

term: term (MUL|DIV) power  # power_MUL_DIV_term
    | power 				 # power_node
;

power: factor POW power # POW_node
		| factor		# factor_node
;                           

factor: (ADD|SUB)? LBR arth_expr RBR         # LBR_expr_RBR
		| (ADD|SUB)? INT                # INTEGER_node
		| (ADD|SUB)? FLOAT              # FLOAT_node
		| (ADD|SUB)? VAR             	# VARIABLE_node  // Добавлена поддержка переменных
;

compare: (arth_expr | LBR logic_expr RBR) EQ (arth_expr | LBR logic_expr RBR)	# compare_eq_node
		| (arth_expr | LBR logic_expr RBR) NE (arth_expr | LBR logic_expr RBR)	# compare_ne_node
		| (arth_expr | LBR logic_expr RBR) LS (arth_expr | LBR logic_expr RBR)	# compare_ls_node
		| (arth_expr | LBR logic_expr RBR) LE (arth_expr | LBR logic_expr RBR)	# compare_le_node
		| (arth_expr | LBR logic_expr RBR) GT (arth_expr | LBR logic_expr RBR)	# compare_gt_node
		| (arth_expr | LBR logic_expr RBR) GE (arth_expr | LBR logic_expr RBR)	# compare_ge_node
;


logic_expr: NOT LBR logic_term RBR    # negation_node
			| logic_term OR logic_expr # OR_node
			| logic_term		# logic_term_node	
;

logic_term: logic_factor AND logic_term  					# AND_node
				| logic_factor		# logic_factor_node
;

logic_factor: LBR logic_expr RBR	# LBR_logic_expr_RBR
				| compare	# compare_node
				| arth_expr	# arth_logic_node
;

elif: 'if' LBR logic_expr RBR '{' prog '}' ('elif' LBR logic_expr RBR '{' prog '}')* ('else' '{' prog '}')? # elif_node
;

while: 'while' LBR logic_expr RBR '{' prog '}' # while_node
;

functions: 'print' LBR expr RBR		# print_node
			| 'abs' LBR expr RBR	# abs_node
			| 'sqrt' LBR expr RBR	# sqrt_node
			| 'max' LBR expr ',' expr RBR	# max_node
			| 'min' LBR expr ',' expr RBR	# min_node
;

row: expr SEP                	# expr_sep
	| VAR ASGN expr SEP        # ASGN_sep    // присваивание
	| INC VAR SEP				# INC_sep
	| DEC VAR SEP				# DEC_sep
	| VAR ADD_ASGN expr SEP		# ADD_ASGN_sep
	| VAR SUB_ASGN expr SEP		# SUB_ASGN_sep
	| VAR MUL_ASGN expr SEP		# MUL_ASGN_sep
	| VAR DIV_ASGN expr SEP		# DIV_ASGN_sep
	| elif						# elif_sep
	| while						# while_sep
;

prog: row EOF?               # one_line_prog
    | prog row EOF?          # mult_line_prog
;

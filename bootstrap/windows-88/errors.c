/* voc 1.95 [2016/11/11]. Bootstrapping compiler for address size 8, alignment 8. xtspaSfF */

#define SHORTINT INT8
#define INTEGER  INT16
#define LONGINT  INT32
#define SET      UINT32

#include "SYSTEM.h"

typedef
	CHAR errors_string[128];


export errors_string errors_errors[350];





export void *errors__init(void)
{
	__DEFMOD;
	__REGMOD("errors", 0);
/* BEGIN */
	__MOVE("undeclared identifier", errors_errors[0], 22);
	__MOVE("multiply defined identifier", errors_errors[1], 28);
	__MOVE("illegal character in number", errors_errors[2], 28);
	__MOVE("illegal character in string", errors_errors[3], 28);
	__MOVE("identifier does not match procedure name", errors_errors[4], 41);
	__MOVE("comment not closed", errors_errors[5], 19);
	errors_errors[6][0] = 0x00;
	errors_errors[7][0] = 0x00;
	errors_errors[8][0] = 0x00;
	__MOVE("'=' expected", errors_errors[9], 13);
	errors_errors[10][0] = 0x00;
	errors_errors[11][0] = 0x00;
	__MOVE("type definition starts with incorrect symbol", errors_errors[12], 45);
	__MOVE("factor starts with incorrect symbol", errors_errors[13], 36);
	__MOVE("statement starts with incorrect symbol", errors_errors[14], 39);
	__MOVE("declaration followed by incorrect symbol", errors_errors[15], 41);
	__MOVE("MODULE expected", errors_errors[16], 16);
	errors_errors[17][0] = 0x00;
	__MOVE("'.' missing", errors_errors[18], 12);
	__MOVE("',' missing", errors_errors[19], 12);
	__MOVE("':' missing", errors_errors[20], 12);
	errors_errors[21][0] = 0x00;
	__MOVE("')' missing", errors_errors[22], 12);
	__MOVE("']' missing", errors_errors[23], 12);
	__MOVE("'}' missing", errors_errors[24], 12);
	__MOVE("OF missing", errors_errors[25], 11);
	__MOVE("THEN missing", errors_errors[26], 13);
	__MOVE("DO missing", errors_errors[27], 11);
	__MOVE("TO missing", errors_errors[28], 11);
	errors_errors[29][0] = 0x00;
	__MOVE("'(' missing", errors_errors[30], 12);
	errors_errors[31][0] = 0x00;
	errors_errors[32][0] = 0x00;
	errors_errors[33][0] = 0x00;
	__MOVE("':=' missing", errors_errors[34], 13);
	__MOVE("',' or OF expected", errors_errors[35], 19);
	errors_errors[36][0] = 0x00;
	errors_errors[37][0] = 0x00;
	__MOVE("identifier expected", errors_errors[38], 20);
	__MOVE("';' missing", errors_errors[39], 12);
	errors_errors[40][0] = 0x00;
	__MOVE("END missing", errors_errors[41], 12);
	errors_errors[42][0] = 0x00;
	errors_errors[43][0] = 0x00;
	__MOVE("UNTIL missing", errors_errors[44], 14);
	errors_errors[45][0] = 0x00;
	__MOVE("EXIT not within loop statement", errors_errors[46], 31);
	__MOVE("illegally marked identifier", errors_errors[47], 28);
	errors_errors[48][0] = 0x00;
	errors_errors[49][0] = 0x00;
	__MOVE("expression should be constant", errors_errors[50], 30);
	__MOVE("constant not an integer", errors_errors[51], 24);
	__MOVE("identifier does not denote a type", errors_errors[52], 34);
	__MOVE("identifier does not denote a record type", errors_errors[53], 41);
	__MOVE("result type of procedure is not a basic type", errors_errors[54], 45);
	__MOVE("procedure call of a function", errors_errors[55], 29);
	__MOVE("assignment to non-variable", errors_errors[56], 27);
	__MOVE("pointer not bound to record or array type", errors_errors[57], 42);
	__MOVE("recursive type definition", errors_errors[58], 26);
	__MOVE("illegal open array parameter", errors_errors[59], 29);
	__MOVE("wrong type of case label", errors_errors[60], 25);
	__MOVE("inadmissible type of case label", errors_errors[61], 32);
	__MOVE("case label defined more than once", errors_errors[62], 34);
	__MOVE("illegal value of constant", errors_errors[63], 26);
	__MOVE("more actual than formal parameters", errors_errors[64], 35);
	__MOVE("fewer actual than formal parameters", errors_errors[65], 36);
	__MOVE("element types of actual array and formal open array differ", errors_errors[66], 59);
	__MOVE("actual parameter corresponding to open array is not an array", errors_errors[67], 61);
	__MOVE("control variable must be integer", errors_errors[68], 33);
	__MOVE("parameter must be an integer constant", errors_errors[69], 38);
	__MOVE("pointer or VAR record required as formal receiver", errors_errors[70], 50);
	__MOVE("pointer expected as actual receiver", errors_errors[71], 36);
	__MOVE("procedure must be bound to a record of the same scope", errors_errors[72], 54);
	__MOVE("procedure must have level 0", errors_errors[73], 28);
	__MOVE("procedure unknown in base type", errors_errors[74], 31);
	__MOVE("invalid call of base procedure", errors_errors[75], 31);
	__MOVE("this variable (field) is read only", errors_errors[76], 35);
	__MOVE("object is not a record", errors_errors[77], 23);
	__MOVE("dereferenced object is not a variable", errors_errors[78], 38);
	__MOVE("indexed object is not a variable", errors_errors[79], 33);
	__MOVE("index expression is not an integer", errors_errors[80], 35);
	__MOVE("index out of specified bounds", errors_errors[81], 30);
	__MOVE("indexed variable is not an array", errors_errors[82], 33);
	__MOVE("undefined record field", errors_errors[83], 23);
	__MOVE("dereferenced variable is not a pointer", errors_errors[84], 39);
	__MOVE("guard or test type is not an extension of variable type", errors_errors[85], 56);
	__MOVE("guard or testtype is not a pointer", errors_errors[86], 35);
	__MOVE("guarded or tested variable is neither a pointer nor a VAR-parameter record", errors_errors[87], 75);
	__MOVE("open array not allowed as variable, record field or array element", errors_errors[88], 66);
	errors_errors[89][0] = 0x00;
	errors_errors[90][0] = 0x00;
	errors_errors[91][0] = 0x00;
	__MOVE("operand of IN not an integer, or not a set", errors_errors[92], 43);
	__MOVE("set element type is not an integer", errors_errors[93], 35);
	__MOVE("operand of & is not of type BOOLEAN", errors_errors[94], 36);
	__MOVE("operand of OR is not of type BOOLEAN", errors_errors[95], 37);
	__MOVE("operand not applicable to (unary) +", errors_errors[96], 36);
	__MOVE("operand not applicable to (unary) -", errors_errors[97], 36);
	__MOVE("operand of ~ is not of type BOOLEAN", errors_errors[98], 36);
	__MOVE("ASSERT fault", errors_errors[99], 13);
	__MOVE("incompatible operands of dyadic operator", errors_errors[100], 41);
	__MOVE("operand type inapplicable to *", errors_errors[101], 31);
	__MOVE("operand type inapplicable to /", errors_errors[102], 31);
	__MOVE("operand type inapplicable to DIV", errors_errors[103], 33);
	__MOVE("operand type inapplicable to MOD", errors_errors[104], 33);
	__MOVE("operand type inapplicable to +", errors_errors[105], 31);
	__MOVE("operand type inapplicable to -", errors_errors[106], 31);
	__MOVE("operand type inapplicable to = or #", errors_errors[107], 36);
	__MOVE("operand type inapplicable to relation", errors_errors[108], 38);
	__MOVE("overriding method must be exported", errors_errors[109], 35);
	__MOVE("operand is not a type", errors_errors[110], 22);
	__MOVE("operand inapplicable to (this) function", errors_errors[111], 40);
	__MOVE("operand is not a variable", errors_errors[112], 26);
	__MOVE("incompatible assignment", errors_errors[113], 24);
	__MOVE("string too long to be assigned", errors_errors[114], 31);
	__MOVE("parameter doesn't match", errors_errors[115], 24);
	__MOVE("number of parameters doesn't match", errors_errors[116], 35);
	__MOVE("result type doesn't match", errors_errors[117], 26);
	__MOVE("export mark doesn't match with forward declaration", errors_errors[118], 51);
	__MOVE("redefinition textually precedes procedure bound to base type", errors_errors[119], 61);
	__MOVE("type of expression following IF, WHILE, UNTIL or ASSERT is not BOOLEAN", errors_errors[120], 71);
	__MOVE("called object is not a procedure (or is an interrupt procedure)", errors_errors[121], 64);
	__MOVE("actual VAR-parameter is not a variable", errors_errors[122], 39);
	__MOVE("type of actual parameter is not identical with that of formal VAR-parameter", errors_errors[123], 76);
	__MOVE("type of result expression differs from that of procedure", errors_errors[124], 57);
	__MOVE("type of case expression is neither INTEGER nor CHAR", errors_errors[125], 52);
	__MOVE("this expression cannot be a type or a procedure", errors_errors[126], 48);
	__MOVE("illegal use of object", errors_errors[127], 22);
	__MOVE("unsatisfied forward reference", errors_errors[128], 30);
	__MOVE("unsatisfied forward procedure", errors_errors[129], 30);
	__MOVE("WITH clause does not specify a variable", errors_errors[130], 40);
	__MOVE("LEN not applied to array", errors_errors[131], 25);
	__MOVE("dimension in LEN too large or negative", errors_errors[132], 39);
	__MOVE("SYSTEM not imported", errors_errors[135], 20);
	__MOVE("key inconsistency of imported module", errors_errors[150], 37);
	__MOVE("incorrect symbol file", errors_errors[151], 22);
	__MOVE("symbol file of imported module not found", errors_errors[152], 41);
	__MOVE("object or symbol file not opened (disk full\?)", errors_errors[153], 46);
	__MOVE("recursive import not allowed", errors_errors[154], 29);
	__MOVE("generation of new symbol file not allowed", errors_errors[155], 42);
	__MOVE("parameter file not found", errors_errors[156], 25);
	__MOVE("syntax error in parameter file", errors_errors[157], 31);
	__MOVE("not yet implemented", errors_errors[200], 20);
	__MOVE("lower bound of set range greater than higher bound", errors_errors[201], 51);
	__MOVE("set element greater than MAX(SET) or less than 0", errors_errors[202], 49);
	__MOVE("number too large", errors_errors[203], 17);
	__MOVE("product too large", errors_errors[204], 18);
	__MOVE("division by zero", errors_errors[205], 17);
	__MOVE("sum too large", errors_errors[206], 14);
	__MOVE("difference too large", errors_errors[207], 21);
	__MOVE("overflow in arithmetic shift", errors_errors[208], 29);
	__MOVE("case range too large", errors_errors[209], 21);
	__MOVE("too many cases in case statement", errors_errors[213], 33);
	__MOVE("illegal value of parameter (0 <= p < 256)", errors_errors[218], 42);
	__MOVE("machine registers cannot be accessed", errors_errors[219], 37);
	__MOVE("illegal value of parameter", errors_errors[220], 27);
	__MOVE("too many pointers in a record", errors_errors[221], 30);
	__MOVE("too many global pointers", errors_errors[222], 25);
	__MOVE("too many record types", errors_errors[223], 22);
	__MOVE("too many pointer types", errors_errors[224], 23);
	__MOVE("address of pointer variable too large (move forward in text)", errors_errors[225], 61);
	__MOVE("too many exported procedures", errors_errors[226], 29);
	__MOVE("too many imported modules", errors_errors[227], 26);
	__MOVE("too many exported structures", errors_errors[228], 29);
	__MOVE("too many nested records for import", errors_errors[229], 35);
	__MOVE("too many constants (strings) in module", errors_errors[230], 39);
	__MOVE("too many link table entries (external procedures)", errors_errors[231], 50);
	__MOVE("too many commands in module", errors_errors[232], 28);
	__MOVE("record extension hierarchy too high", errors_errors[233], 36);
	__MOVE("export of recursive type not allowed", errors_errors[234], 37);
	__MOVE("identifier too long", errors_errors[240], 20);
	__MOVE("string too long", errors_errors[241], 16);
	__MOVE("address overflow", errors_errors[242], 17);
	__MOVE("cyclic type definition not allowed", errors_errors[244], 35);
	__MOVE("guarded pointer variable may be manipulated by non-local operations; use auxiliary pointer variable", errors_errors[245], 100);
	__MOVE("implicit type cast", errors_errors[301], 19);
	__MOVE("inappropriate symbol file ignored", errors_errors[306], 34);
	__MOVE("no ELSE symbol after CASE statement sequence may lead to trap", errors_errors[307], 62);
	__MOVE("SYSTEM.VAL result includes memory past end of source variable", errors_errors[308], 62);
	__ENDMOD;
}

#'.'匹配任意字符
#用'\'来转义 | * .

digit [0-9]
letter [A-Za-z]
id ({letter}|_)({letter}|{digit}|_)*
assign_op =
bit_op &|\|
arithmetic_op +|-|\*|/
reserved_word public|private|protected|class|using|namespace|std|
macro #include <{letter}*>
number 1|2|3|4|5|6|7|8|9{digit}
string "(\.|.)*"

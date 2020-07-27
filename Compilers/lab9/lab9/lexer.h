#ifndef LEXER_H
#define LEXER_H

#include <stdio.h>

#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

struct Extra {
  int continued;
  int cur_line;
  int cur_column;
};

void init_scanner(char *input, yyscan_t *scanner, struct Extra *extra);
void destroy_scanner(yyscan_t scanner);


#endif

/* fl-device.c */
void appendString(char *item);
void appendFloat(double num, char bool);
void appendInt(int num, char bool);
void setflag(void);
string *smalloc(void);
namestr *nmalloc(void);
node *omalloc(void);
char *name(node *o);
node *newnode(enum ltype type);
node *sym(char *n);
node *cons(node *head, node *tail);
node *pair(node *head, node *tail);
node *func(node *(*fn)(node *, node *), enum ltype type);
node *lambda(node *args, node *sexp);
node *integer(int num);
node *newcontext(node *bindings);
node *nextarg(node **pargs);
node *fn_car(node *args, node *env);
node *fn_cdr(node *args, node *env);
node *fn_nilp(node *args, node *env);
node *fn_quote(node *args, node *env);
node *fn_cons(node *args, node *env);
node *fn_equal(node *args, node *env);
node *fn_atom(node *args, node *env);
node *fn_cond(node *args, node *env);
node *fn_if(node *args, node *env);
node *fn_lambda(node *args, node *env);
node *fn_label(node *args, node *env);
node *fn_ldefine(node *args, node *env);
node *binary(node *args, int fcn);
node *compare(node *args, int fcn);
node *fn_lessthan(node *args, node *env);
node *fn_greaterthan(node *args, node *env);
node *fn_eq(node *args, node *env);
node *fn_plus(node *args, node *env);
node *fn_minus(node *args, node *env);
node *fn_times(node *args, node *env);
node *fn_divide(node *args, node *env);
node *fn_append(node *args, node *env);
node *fn_concat(node *args, node *env);
node *fn_loop(node *args, node *env);
node *fn_block(node *args, node *env);
node *fn_progn(node *args, node *env);
node *lastcell(node *list);
node *append(node *list, node *obj);
node *concat(node *l1, node *l2);
node *fn_print(node *args, node *env);
node *fn_terpri(node *args, node *env);
void add_pair(node *head, node *tail, node **list);
void print_globals(void);
void init_lisp(void);
void print(node *sexp);
int is_valid_int(char *str);
void skip_whitespace(char **input);
void read_string(char **input, char *buffer);
node *make_symbol(char *buffer);
node *next_token(char **input);
node *read_tokens(char **input);
node *parse_string(char **input);
int length(node *l);
node *assq(char *key, node *list);
node *lookupsym(char *name, node *env);
node *make_env(node *vars, node *vals, node *env);
node *evlambda(node *vals, node *expr, node *env);
node *evform(node *fnode, node *exp, node *env);
node *evsym(node *exp, node *env);
node *eval_list(node *sexp, node *env);
node *eval(node *input, node *env);
void REPL(char *input);
char *readFile(char *fileName);
int coreID(unsigned int *row, unsigned int *col);
void coreInit(void);
int main(void);

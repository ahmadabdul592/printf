#ifndef HEADER
#define HEADER
#include <stdarg.h>

/*macro*/
#define BUF_LENGTH 1024

/*in print1.c*/
int _printf(const char *format, ...);
void error_format(const char *format);
int no_conversation(char);

/*in buffer_function.c*/
char *_flush(char *buffer);
char *fill_buffer(char *buffer, const char *s, int count_c, int s_length);
void print_buffer(char *buffer, int length);

/*in format-handlers.c*/
void fill_format(const char *format);
char *grab_format(const char *s);

/*in helper for conversion check*/
int conversion_char(char *s);
int conversion_string(char *s);

/*in get_validity_func.c*/
int (*get_validity_func(char c))(char *s);

/*in helper conversion check1*/
int conversion_di(char *s);

/*in unihelper.c*/
int _is_digit(char c);
char *_strncpy(char *dest, const char *src, int n);
int _strlen(const char *);
int _isdflag(char *c);

/*in unhelper1.c*/
int give_precision(char *, char);
int give_width(char *, char);
char *get_result(char *, char *, int p, int w, int slen, int flen, int mlen);

/*in get_mstring_func.c*/
char *(*get_mstring_func(char))(char *, va_list vl);

/*in strings.c*/
char *make_char(char *s, va_list vl);
char *make_string(char *s, va_list vl);

/*in decimal.c*/
char *num_string(int n);
char *make_decimal(char *s, va_list vl);

/*unsigned.c*/
int conversion_u(char *s);
char *make_unsigned(char *s, va_list vl);
char *_utoa(unsigned int);

/*octal.c*/
int conversion_o(char *s);
char *make_octal(char *s, va_list vl);
char *octobi(unsigned int, int);

/*binary.c*/
int conversion_b(char *s);
char *make_binary(char *s, va_list vl);

/*hex.c*/
int conversion_h(char *s);
char *make_hex(char *s, va_list vl);
char *hex(unsigned int);
void reverse_array(char *a, int n);

/*heX.c*/
char *make_heX(char *s, va_list vl);
char *heX(unsigned int);

/*structs*/
/**
 * struct valid - check if formattingis valid
 * @type: type
 * @conversation_check: function to check if a conversation string is valid
 */
typedef struct valid
{
	char type;
	int (*conversation_check)(char *);
} valid;

/**
 * struct m_string - valid format
 * @type: type
 * @make_s: make the string
 */
typedef struct m_string
{
	char type;
	char *(*make_s)(char *, va_list);
} m_string;



#endif

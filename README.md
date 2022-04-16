This is a printf function with functionalities of printing characters, strings, octals, hexadecimals (x and X) and a custom binary format.
printf.c is our file that contain printf function.
we created a file for each formatter. Formatter files:
binary.c
chars.c
decimal.c
hex.c
heX.c
octal.c
strings.c
unsigned.c
Also, we created helper files to put universal helper functions. These functions are used multiple times throughout the files. Helper Files:
unihelper.c
unihelper1.c
format-handlers.c
get_mstring_func.c
get_validity_func.c
buffer_functions.c
lastly, we have a manual for the printf man_3_printf

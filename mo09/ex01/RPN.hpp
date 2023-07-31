#pragma once

#include <iostream>
#include <stack>
#include <fstream>
#include <string>

int print_error();
int check_operation(char c);
int check_less_ten(char *s);
int convertToInt(char c);
int do_operation(int f, int s, char c);
int rpn(char *s);
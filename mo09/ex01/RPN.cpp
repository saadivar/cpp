#include "RPN.hpp" 

int print_error()
{
    std::cout << "Error " << std::endl;
    return 0;
}
int check_operation(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/')
        return 1;
    return 0;
}
int check_less_ten(char *s)
{
    if (!check_operation(s[1]) && !std::isspace(s[1]))
        return 0;
    return 1;
}
int convertToInt(char c)
{
    return (c - 48);
}

int do_operation(int f, int s, char c)
{
    if (c == '+')
        return (f + s);
    else if (c == '-')
        return (f - s);
    else if (c == '*')
        return (f * s);
    else if (c == '/')
        return (f / s);
    return 0;
}
int rpn(char *s)
{
    std::stack<int> rpn;

    int i = 0;
    int first;
    int second;
    while (s[i])
    {
        while (std::isspace(s[i]))
            i++;
        if (s[i] == '\0')
            break;
        if (std::isdigit(s[i]))
        {
            if (check_less_ten(s + i))
                rpn.push(convertToInt(s[i]));
            else
                return print_error();
        }
        else if (check_operation(s[i]))
        {
            if (rpn.size() > 1)
            {
                second = rpn.top();
                rpn.pop();
                first = rpn.top();
                rpn.pop();
                if (second == 0 && s[i] == '/')
                    return print_error();
                rpn.push(do_operation(first, second, s[i]));
            }
            else
                return print_error();
        }
        else
            return print_error();
        i++;
    }
    if (rpn.size() == 1)
        std::cout << rpn.top() << std::endl;
    else
    {
        return print_error();
    }
    return 0;
}

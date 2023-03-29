#include "main.h"
char *cap_string(char *string)
{
        int i;

        for (i = 0; i != '\0'; i++)
        {
                if (string[i] > 96 && string[i] < 123)
                {
                        if (!(string[i + 1] == '\0') && !(string[i] == '\n'))
                        {
                                switch (string[i])
                                {
                                case ',':
                                case ';':
                                case '.':
                                case '!':
                                case '?':
                                case '"':
                                case '(':
                                case ')':
                                case '{':
                                case '}':
                                        string[i + 1] -= 32;
                                        break;
                                default:
                                        break;
                                }
                        }
                }
        }
        return (string);
}

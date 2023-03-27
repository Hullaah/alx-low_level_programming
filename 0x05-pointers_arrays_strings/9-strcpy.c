#include "main.h"
/**
 * _strcpy - copys a string
 * @src: where to copy from
 * @dest: where to copy  to
 * Return: The copied string
*/
char *_strcpy(char *dest, char *src)
{
        int i = 0;

       for (; src[i] != '\0'; i++)
       {
                *(dest + i) = *(src + i);
                /*if (src[i + 1] == '\0')
                {
                        *(dest + i + 1) = *(src + i + 1);
                }*/
       }
       
       return dest;
}
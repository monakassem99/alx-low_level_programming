#include "main.h"

/**
 * *_strchr - fill memory with const byte
 * @s: pointer
 * @c: const
 * Return:  pointer to the first occurrence of the character c in the string s, or NULL
 */

char *_strchr(char *s, char c)
{
        int fll;

        for (fll = 0; s[fll] >= '\0'; fll++)
        {
                if (s[fll] == c)
                {
                        return (s + fll);
                }
        }

        return ('\0');
}

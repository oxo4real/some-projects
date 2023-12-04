#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char s[] = "Otkz D zvmizy v amzz kjdio! di ocz wjs wzgjr.";
    char a[strlen(s)];
    for (int j = 0; j < 26; j++)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
            {
                a[i] = (tolower(s[i]) - 97 + j) % 26 + 97;
            }
            else
            {
                a[i] = s[i];
            }
        }
        printf("%s\n\n", a);
    }
    printf("%s", s);
    return 0;
}
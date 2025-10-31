#include <stdio.h>
#include <ctype.h>

#define N 100
#define KEY 13

int main(void)
{
    
    char s[N];
    char *p = &s[0];
    int  count = 0, ch;

    while(p < s + N && ((ch =getchar()) != '\n'))
    {   
        ch = tolower(ch);
        if(ch >= 'a' && ch <= 'z')
        {   
            *p = ch ^ KEY;
            p++;
            count++;
        }
    }   
    *p = '\0';

    printf("%s, count = %d", s, count);

    


}

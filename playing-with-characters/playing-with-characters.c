#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    char s[255];
    char sen[255];

    scanf("%c", &ch);

    scanf("\n");
    scanf("%[^\n]%*c", &s);

    scanf("\n");
    scanf("%[^\n]%*c", &sen);

    printf("%c\n%s\n%s", ch, s, sen);

    


    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>




/*int main()
{
    char test[] = "Test phrase";
    int len = strlen(test);
    int i =0;
    
    printf("Run\n");
    for (i=0; i < len; i++) {
        printf("%c\n", test[i]);
    }
    
    return 0;
} */



//    int uppercase[2][2] = {
//        {1, 0},
//        {2, 0}
//    };
//    
    
//    
//    uppercase['B'][1] = uppercase['B'][1] + 1;

//    int up [0];
//    int low [0];
//    int i;
//    
//    char ch;
//    printf("Enter this phrase- This is a test from  Jupiter. Soon you will see who is from Jupiter!!! May be Dr. D.:\n");
//    //while( (ch = getchar() )!='\n' )
//   // {
//        for (i=0; i<26; i++)
//            printf("A: %d a: %d", up[1], low[1]);
//        up[ch-'A']=up[ch-'A']+1;
//        low[ch-'a']=low[ch-'a']+1;
//   // }





/*void lower(char string[], int count[]);

int main()
{
    char string[100];
    int i, count[26] = {0};
    
    printf("Input a string\n");
    gets(string);
    
    lower(string, count);
    
    printf("Character Count\n");
    
    for(i = 0 ; i < 26 ; i++)
    {
        printf("%c \t  %d\n", i + 'a', count[i]);
    }
    
    for(i = 0 ; i < 26 ; i++)
    {
        printf("%c \t  %d\n", i + 'A', count[i]);
    }
    
    return 0;
}




void lower(char string[], int count[])
{
    int i;
    
    for(i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' )
        {
            count[string[i]-'a']++;
        }
    }
}
*/








void output(int upperCase[], int lowerCase[], int number);


int main(void)
{
    int upper[26] = {0};
    int lower[26] = {0};
    char ch;
    printf("Enter the string:\n");
    while((ch=getchar())!= '\n')
    {
        if ('A' <= ch && ch <= 'Z')
        {
            int index = ch - 'A';
            upper[index]++;
        }
        else if ('a' <= ch && ch <= 'z')
        {
            int index = ch - 'a';
            lower[index]++;
        }
    }
    
    output(upper, lower, 26);
    
    printf("\n\n");
    system("pause");
    return 0;
}


void output(int upperCase[], int lowerCase[], int number)
{
    int i;
    for(i = 0; i < number; i++)
    {
        printf("\n%c:%2d   %c:%2d", i + 'A', upperCase[i], i + 'a', lowerCase[i]);
    }
}





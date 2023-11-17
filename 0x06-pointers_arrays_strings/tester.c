#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";
    
    int result = s1[2];

    
    printf("%d\n", result);
    printf("%d\n", strcmp(s2, s1));
    printf("%d\n", strcmp(s1, s1));
    return (0);
}

#include <stdio.h>
int main()
 {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("'%c' is alphabet\n", ch);
    } else {
        printf("'%c' is not alphabet\n", ch);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>

int main() {
	int i;
    char s[100];
    scanf("%s", s);
    for ( i = 0; i < strlen(s); i++) {
        if (s[i] == '3') {
            s[i] = 'e';
        }
    }
    printf("%s", s);
    return 0;
}

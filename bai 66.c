#include<stdio.h>
#include<string.h>

int main() {
	int i;
	
    char c;
    char s[100];
    scanf("%c", &c);
    scanf("%s", s);
    int count = 0;
    int len = strlen(s);
    for ( i = 0; i < len; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

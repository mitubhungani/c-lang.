#include <stdio.h>
#include <string.h>
int palindrome(char *a) {
    int len = strlen(a),i,j;
    for (i=0;i<len/2;i++) {
        if (a[i]!=a[len-i-1]) {
            return 0;
        }
    }
   
}
int main() {
    char a[100];
    printf("Enter a string: ");
    scanf("%s",&a);
    if (palindrome(a)) {
        printf("%s is a palindrome.\n",a);
    } else {
        printf("%s is not a palindrome.\n",a);
    }
}

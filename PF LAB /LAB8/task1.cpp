 #include <stdio.h>
 #include <string.h>
 int main() 
 {
    char a[] = "Hello";
    char b[20];
    strcpy(a, b);
    printf("Copied string: %s", b);
    return 0;
 }
# include <stdio.h>
int main(void) {
    # include <stdio.h>
    char character_string[] = "tester";
    char *pointer;
    pointer = &character_string[0];
    int counter = 0;

    for(; *pointer!='\0'; ++pointer) {
    printf("%s\n", pointer);
    }
    return 0;
}
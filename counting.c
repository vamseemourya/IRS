#include <stdio.h>
int cnt(){
    int c;
    int blank = 0;
    int tabs = 0;
    int newlines = 0;
    printf("Enter a string: ");
    while ((c = getchar()) != EOF){
        if (c == ' '){
            blank = blank + 1;
        }
        else if (c == '\t'){
            tabs = tabs + 1;
        }
        else if (c == '\n'){
            newlines = newlines + 1;
        }
    }
    printf("Number of blanks: %d\n", blank);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of newlines: %d\n", newlines);
}

int sing_blank(){
    int c;
    int last_c = EOF;
    while((c = getchar()) != EOF){
        if (c != ' ' || last_c != ' '){
            putchar(c);
        }
        last_c = c;
    }
    
}
int main(){
    printf("Enter Ctrl+D to end input.\n");
    cnt();
    sing_blank();
}
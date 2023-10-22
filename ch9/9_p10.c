#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define STR_SIZE 1024

#define EXIT_COMMAND "."
#define DELIM_NAME " "

void shorten_name(char *name) {
    char *tokenized_name = strtok(name, DELIM_NAME);
    int written = 0;
    if (tokenized_name != NULL)
        name[written++] = toupper(*tokenized_name);
    
    while ((tokenized_name = strtok(NULL, DELIM_NAME)) != NULL) {
        name[written++] = toupper(*tokenized_name);
    }
    name[written] = '\0';
}

int main() {
    char str[STR_SIZE];
    
    while (1) {
        printf("영문 이름? ");
        fgets(str, STR_SIZE, stdin);
        str[strlen(str) - 1] = '\0';

        if (strcmp(str, EXIT_COMMAND) == 0)
            break;
        
        shorten_name(str);
        printf("이니셜: %s\n", str);
    }

    return 0;
}

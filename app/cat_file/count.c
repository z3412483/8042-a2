#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void drop_newline(char *in_string)
{
    in_string[strcspn(in_string, "\n")] = 0;
}

void cat_file() 
{
    char ch, file_name[25], str[10];
    FILE *fp;
    int count = 0;

    printf("Enter name of a file you wish to see\n");
    gets(file_name);
    printf("File: '%s'.\n", file_name);
    
    fp = fopen(file_name, "r"); // read mode
    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("The contents of %s file are:\n", file_name);

    while((ch = fgetc(fp)) != EOF)
        printf("%c", ch);

    fclose(fp);
}

int main(int argc, char *argv[]) {
    cat_file();
    return 0;
}

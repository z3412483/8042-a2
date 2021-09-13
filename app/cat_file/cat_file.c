#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void drop_newline(char *in_string)
{
    in_string[strcspn(in_string, "\n")] = 0;
}

int print_file(char *file) {
    char out[1000];
    strcpy(out, file);
    printf("%s", out);
    return 1;
}

void cat_file() 
{
    char file_name[25];
    char *file_contents = NULL;
    FILE *fp;

    printf("Enter name of a file you wish to see\n");
    gets(file_name);
    printf("File: '%s'.\n", file_name);
    
    fp = fopen(file_name, "r"); // read mode
    if (fp == NULL)
    {
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }


    fseek(fp, 0, SEEK_END);
    long fsize = ftell(fp);
    if (fsize == -1) { /* Error */ }

    /* Allocate our buffer to that size. */
    file_contents = malloc(sizeof(char) * (fsize + 1));
    fseek(fp, 0, SEEK_SET);  /* same as rewind(f); */

    printf("File Length: '%ld'.\n", fsize);
    printf("Contents:\n");

    fread(file_contents, sizeof(char), fsize, fp);
    int result = print_file(file_contents);
    // while((ch = fgetc(fp)) != EOF)
    //     printf("%c", ch);

    fclose(fp);
}

int main(int argc, char *argv[]) {
    cat_file();
    printf("\n-----\nPress Enter Key to Close\n");  
    getchar();
    return 0;
}

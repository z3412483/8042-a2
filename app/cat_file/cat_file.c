#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void drop_newline(char *in_string)
{
    in_string[strcspn(in_string, "\n")] = 0;
}

void cat_file() 
{
    char ch, file_name[25], file_contents[1000];
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


    fseek(fp, 0, SEEK_END);
    long fsize = ftell(fp);
    fseek(fp, 0, SEEK_SET);  /* same as rewind(f); */

    printf("File Length: '%d'.\n", fsize);
    printf("Contents:\n");

    fread(file_contents, 1, fsize, fp);
    printf("%s", file_contents);
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

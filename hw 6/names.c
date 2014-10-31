//chris
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void read_names(FILE* fp, int size, char** surname, char** first, char* middle_init);
void sort(int size, char** surname, char** first, char* middle_init);
void write_names(FILE* fp2, int size, char** surname, char** first, char* middle_init);
void free_memory(int size, char** surname, char** first, char* middle_init);
int main(int argc, char* argv[])
{
FILE* fp = fopen(argv[1], "r");
FILE* fp2 = fopen(argv[2], "w");
int size;
char **surname, **first, *middle_init;
fscanf(fp, "%d\n", &size);
middle_init = (char*)malloc(size * sizeof(char));
first = (char**)malloc(size * sizeof(char*));
surname = (char**)malloc(size * sizeof(char*));
read_names(fp, size, surname, first, middle_init);
sort(size, surname, first, middle_init);
write_names(fp2, size, surname, first, middle_init);
free_memory(size, surname, first, middle_init);
fclose(fp);
fclose(fp2);
return 0;
} //main
void read_names(FILE* fp, int size, char** surname, char** first, char* middle_init)
{
char temp[80];
int i;
for(i = 0; i < size; i++)
{
surname[i] = (char*)malloc(16*sizeof(char));
first[i] = (char*)malloc(16*sizeof(char));
fgets(temp, 80, fp);
strncpy(surname[i], strtok(temp, ", ."), 15);
strncpy(first[i], strtok(NULL, ", ."), 10);
middle_init[i] = *(strtok(NULL, ", ."));
} //for
} //read_names
void sort(int size, char** surname, char** first, char* middle_init)
{
char *temp, *temp2, temp3;
int i, j;
for(i = 0; i < size; i++)
{
temp = surname[i];
temp2 = first[i];
temp3 = middle_init[i];
for(j = i - 1; j >= 0 && strcmp(temp,surname[j]) < 0; --j)
{
surname[j+1] = surname[j];
first[j+1] = first[j];
middle_init[j+1] = middle_init[j];
} //for
surname[j + 1] = temp;
first[j + 1] = temp2;
middle_init[j + 1] = temp3;
printf("swapped %s for %s\n", surname[i], temp);
} //for
} //sort
void write_names(FILE* fp2, int size, char** surname, char** first, char* middle_init)
{
int i;
for(i = 0; i < size; i++)
{
fprintf(fp2, "%-16s\t%-11s\t%-3c\n", surname[i], first[i], middle_init[i]);
} //for
} //write_names
void free_memory(int size, char** surname, char** first, char* middle_init)
{
int i;
for(i = 0; i < size; i++)
{
free(first[i]);
free(surname[i]);
} //for
free(first);
free(surname);
free(middle_init);
}//freememory

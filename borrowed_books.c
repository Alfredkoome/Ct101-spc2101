/*
Name:Alfred Koome
 Adm:ct101/G/26551/25
 discription:a c program for a school librian
 */
#include<stdio.h>
int main() {
    char textbook[50];
    FILE *fptr;
    fptr=fopen("C:\\Users\\USER\\Documents\\Ct101-spc2101.borrowed_books.txt","a");

    if (fptr==NULL) {
        printf("could not open file\n");
        return 1;
    }
    printf("Enter the name of the text book borrowed:");
    scanf("%49s",textbook);
    fprintf(fptr,"the book borrowed was:%s\n",textbook);
    fclose(fptr);
    printf("the results as beeing displayed in the borrowed_book.txt file");
    return 0;

}

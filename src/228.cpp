#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define LINE_BUF_SIZE 2048

typedef struct
{
    char isbn[11]; // 10 digits isbn
    char name[LINE_BUF_SIZE];
    char author[LINE_BUF_SIZE];
    char publisher[LINE_BUF_SIZE];
    int year;
} book_record_t;

typedef struct
{
            //指向一个存放所有图书数据的数组。
            //特别注意：函数调用时，本数组并未分配空间，需要你根据读入的数据合理地动态分配空间
            book_record_t * data;
            int size; //图书库中记录的条数（即数组元素的个数)
} book_manager_t;

//____qcodep____//

void freadline(char* s, FILE* fp)
{
    fgets(s, 2010, fp);
    int len = strlen(s);
    if (s[len-1] == '\n')
        s[len-1] = '\0';
    else 
        fgetc(fp);
}

int book_manager_load(book_manager_t * mgr, char * file_name)
{
    FILE* fp;
    if ((fp = fopen(file_name,"r")) == NULL)
        return -1;
    else{
        int n;

        fscanf(fp, "%d", &n);

        mgr->data = (book_record_t*)malloc(n*sizeof(book_record_t));

        mgr->size = n;

        fgetc(fp);
        fgetc(fp);

        book_record_t* bp = mgr->data;

        for (int i = 0; i < n; i++){
            freadline(bp->isbn, fp);

            freadline(bp->name, fp);

            freadline(bp->author, fp);

            freadline(bp->publisher, fp);

            fscanf(fp, "%d", &bp->year);
            fgetc(fp);
            fgetc(fp);
            
            bp++;
        }

        fclose(fp);

        return 0;
    }
}
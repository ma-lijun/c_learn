#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char name[100];
    char *description;

    strcpy(name,"zhang san");

    // ��̬�����ڴ�
    description = (char *)malloc(200*sizeof(char));
    if(description == NULL){
        fprintf(stderr, "eroor - unable to allocate required memory \n");
    }
    else{
        strcpy(description, "zhang san a dps student in clase 10th");
    }
    printf("Name =%s\n", name);
    printf("description =%s\n", description);

    // todo ʹ��realloc() ���������ڴ�
   /* ��������Ҫ�洢�����������Ϣ */
   description = (char *) realloc( description, 100 * sizeof(char) );
   if( description == NULL )
   {
      fprintf(stderr, "Error - unable to allocate required memory\n");
   }
   else
   {
      strcat( description, "She is in class 10th");
   }

   printf("Name = %s\n", name );
   printf("Description: %s\n", description );


   /* ʹ�� free() �����ͷ��ڴ� */
   free(description);

    return 0;
}
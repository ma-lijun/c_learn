#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    char name[100];
    char *description;

    strcpy(name,"zhang san");

    // 动态分配内存
    description = (char *)malloc(200*sizeof(char));
    if(description == NULL){
        fprintf(stderr, "eroor - unable to allocate required memory \n");
    }
    else{
        strcpy(description, "zhang san a dps student in clase 10th");
    }
    printf("Name =%s\n", name);
    printf("description =%s\n", description);

    // todo 使用realloc() 重新申请内存
   /* 假设您想要存储更大的描述信息 */
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


   /* 使用 free() 函数释放内存 */
   free(description);

    return 0;
}
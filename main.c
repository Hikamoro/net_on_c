#include "libs.h"
#include "void.h"

int main()
{
    int len1 = 0;
    scanf("%d", &len1);

    for(int i = 0; i < len1;i++){
        printf("# ");
    }
    printf("\n");
    for (int i = 0; i < len1;i++){
        f(len1);
        printf("\n");
    }
    for(int i = 0; i < len1;i++){
        printf("# ");
    }
    printf("\n");
    system("pause");
    return 0;
}
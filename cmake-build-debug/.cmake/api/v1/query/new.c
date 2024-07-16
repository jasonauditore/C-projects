#include <stdio.h>
int main()
{
    char c;
    char text;
    FILE *fp;
    fp = fopen("Input.txt", "w");
    while((c=getchar())!=EOF){
        fwrite(gets,230,1,fp);

    }
    fclose(fp);
}
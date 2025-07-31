#include<stdio.h>
#include<unistd.h>
int main()
{
    int a=fork();
    printf("Hello\n");
    printf("a is  %d\n", a);
    printf("my pid is %d\n",getpid());
    printf("My parent pid is %d\n",getppid());
    int b=fork();
    printf("World\n");
    printf("b is  %d\n", b);
    printf("my pid is %d\n",getpid());
    printf("My parent pid is %d\n",getppid());
    return 0;
}
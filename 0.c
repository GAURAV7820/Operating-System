#include<stdio.h>
#include<unistd.h>
int main(){
pid_t ptd=fork();
if(ptd<0){
printf("fork failed");
}
else if(ptd==0){

printf("hello world from child");
}
else{
printf("hello world from parent");
}
return 0;
}


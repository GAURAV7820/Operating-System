#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {

        printf("Parent: child's PID is %d\n", pid);
    } else if (pid == 0) {

        printf("Child: my PID is %d\n", getpid());
    } else {
  
        perror("fork failed");
    }

    return 0;
}

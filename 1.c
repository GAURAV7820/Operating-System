//write a program in c to input an array of integers than create a child process of this parent process using for loop child process should compute sum of odd numbers in the given input array an parent process computes sum of even numbers in the array print the computed sum in each process with there process id.
#include<stdio.h>
#include<unistd.h>
int main()
{
	int n;
	printf("Enter the number of elements: \n"); 
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	pid_t  pid=fork();
	if(pid==-1)
	{
		printf("Error in fork\n");
	}
	else if(pid==0)
	{
		int sumodd=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2!=0)
				sumodd+=arr[i];
		}
		printf("Child process PID:%d odd sum:%d\n",getpid(),sumodd);
	}
	else
	{
		int sumeven=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
				sumeven+=arr[i];
		}
		printf("Parent process PID:%d even sum:%d\n",getpid(),sumeven);
	}
	return 0;
}

#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	int count = 0;
	printf("只有爸爸会叫儿子\n");
	pid = fork();	//fork一个进程
	if(pid == 0) {               //pid为0,
		printf("this is child process, pid is %d\n",getpid());//getpid返回的是当前进程的PID
		count+=2;
		printf("count = %d\n",count);
	} else if(pid > 0) {
		printf("this is father process, pid is %d\n",getpid());
		count++;
		printf("count = %d\n",count);
	} else {
		fprintf(stderr,"ERROR:fork() failed!\n");
	}
	return 0;
}


//内容解释：https://blog.csdn.net/weixin_42300090/article/details/116704134

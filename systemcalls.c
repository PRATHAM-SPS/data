#include<stdio.h>
#include <unistd.h>
#include<string.h>
#include<fcntl.h>
int main()
{
	char data[64];
	printf("getuid : %d \n",getuid());
	printf("geteuid : %d \n",geteuid());
	printf("getgid : %d \n",getgid());
	printf("getegid : %d \n",getegid());
	int fd = open("/home/shraddha/SYCALL.txt", O_CREAT | O_RDWR | O_APPEND);
	printf("fd : %d\n", fd);
	int read1 = read(fd,data,64);
	printf("%d\n",read1);
	int w = write(fd,"smita",strlen("smita"));
	close(fd);
}

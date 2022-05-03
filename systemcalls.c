#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
        int n, fd, fd1;
        char buf[30];
        fd=open("text.txt", O_RDONLY);
        n=read(fd, buf, 20);
        fd1=open("target", O_CREAT|O_WRONLY,0642);
        write(fd1, buf, n);
}


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
        printf("PID of exp.c= %d\n", getpid());
        char *args[]={"Hello","C", "Programming", NULL};
        execv("./hello",args);
        printf("Back to exp.c");
        return 0;
}


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
        printf("We are in hello.c\n");
        printf("PID of hello.c= %d\n", getpid());
        return 0;
}

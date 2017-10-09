#include <apue.h>
#include <fcntl.h>



int main(int argc,char *argv[]) {

    //open file
    open(argv[0],O_RDWR|O_APPEND);

    openat(AT_FDCWD,"",O_RDWR|O_APPEND);

    //创建文件
    int fileno = openat(AT_FDCWD,"createfile.txt",
           O_RDWR|O_CREAT|O_TRUNC);
    close(fileno);

    return 0;
}
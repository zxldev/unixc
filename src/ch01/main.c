#include <apue.h>
#include <errno.h>


void error(char *argv[]){
   fprintf(stderr,"EACCES %s\n",strerror(EADV));
    errno = ENOENT;
    perror(argv[0]);
}

void userinfo(){
    fprintf(stdout,"uid:%d,gid:%d\n",getuid(),
            getgid());
}

int main(int argc,char *argv[]) {
    error(argv);
    userinfo();
    return 0;
}
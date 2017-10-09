#include <apue.h>
#include <dirent.h>


int lsdir(int argc,char *argv[]){
    DIR *dp;
    struct dirent *dirp;
    if( argc!=2){
        err_quit("useage : ls directory_name");
    }
    if((dp = opendir(argv[1]))==NULL){
        err_sys("cannot open %s",argv[1]);
    }
    while((dirp=readdir(dp))!=NULL){
        printf("%s\n",dirp->d_name);
    }
    return 0;
}

int main(int argc,char *argv[]) {
    lsdir(argc,argv);
    return 0;
}
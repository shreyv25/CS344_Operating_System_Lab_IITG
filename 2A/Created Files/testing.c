#include "types.h"
#include "stat.h"
#include "user.h"

int main(){
    int retime, rutime, stime;
    for(int i=0;i<5;i++){
        int a = fork();
        int pid  = wait2(&retime, &rutime, &stime);
        if(pid==-1) cout<<"no children \n";
        printf("%d %d %d \n", retime, rutime, stime);
    }
    return 0;
}


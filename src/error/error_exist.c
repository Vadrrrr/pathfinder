#include "pathfinder.h"

void error_exist(int argc,char **argv) {
    char buf[1];
    int handle , bytes;
    int flen = 0;
    if((handle = open(argv[1],O_RDONLY)) == -1){
        write(2,"error: file ",12);
        write(2,argv[1],mx_strlen(argv[1]));
        write(2," does not exist\n",16);
        exit(1);
    }
    for(; read(handle,buf,1); flen++);
    if( flen <= 0) {
        write(2,"error: file ",13);
        write(2,argv[1],mx_strlen(argv[1]));
        write(2," is empty\n",11);
        exit(1);
    }
}

#include "pathfinder.h"

void invalid(int argc,char **argv) {
    char buf[1];
    int handle , by;
    int flen = 0;
    handle = open(argv[1],O_RDONLY);
    for(; by = read(handle,buf,1); flen++);
    for(int i =0; by[i] != '\n'; i++){
        if(!mx_isdigit(by[i]));
    }
}

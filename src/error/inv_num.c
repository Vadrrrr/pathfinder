#include "pathfinder.h"

void inv_num(int argc) {
    if (argc > 2 || argc == 1) {
        write (2,"usage: ./pathfinder [filename]\n",31);
        exit(1);
    }
}

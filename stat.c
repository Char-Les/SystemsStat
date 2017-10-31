#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
/*
  Charles Weng
  Systems - 4
  HW 8 - I need information, STAT
*/

void getmeta(char * path) {
  struct stat stats;
  stat(path, &stats);
  printf("--------%s's meta data---------\n", path);

  // print size
  printf("size: %lu\n", stats.st_size);

  // permissions
  printf("permissions: %o\n", stats.st_mode);

  // time
  printf("time: %s \n", ctime(&stats.st_atime));
}

int main() {
  getmeta("makefile");
  getmeta("stat.exe");
  return 0;
}

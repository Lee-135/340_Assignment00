// chris lee; z1821464

#include <iostream>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

using namespace std;

int main(int argc, char* argv[]) {

        int fd;
        int open(const char *pathname, int flags);
        fd = open(*pathname, O_RDWR | O_CREAT, 0755); //to read or write and create a file if it doesnt exist
        if(fd == -1) {
                perror(*pathname);  //so the errors will show up if there are any
        }

        ssize_t read(int fd, void *buf, size_t count);  //to read the size of the open file

        int close(int fd);  //to close the file

        return 0;
}

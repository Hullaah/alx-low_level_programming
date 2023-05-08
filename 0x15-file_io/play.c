#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
        char *name = "bola";
        int fd = open("hello", O_RDONLY | O_CREAT | O_TRUNC, S_IWUSR | S_IRUSR);
        int writ = write(fd, name, 4);
        printf("%d\n", writ);
}

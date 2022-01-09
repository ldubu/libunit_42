#include "../get_next_line.h"
#include "../../libft42/libft.h"

int main(void)
{
    int res;

    write(1, "Test empty file\n", 17);
    int     fd = open("Files/empty_line.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 19);
    printf("fd = %d\n", fd);
    res = test_compare(fd, NULL);
    return (res);
}
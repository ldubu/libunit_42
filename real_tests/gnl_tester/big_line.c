#include "../get_next_line.h"
#include "../../libft42/libft.h"

int main(void)
{
    int res;

    write(1, "Test big line file\n", 20);
    int     fd = open("Files/big_line_1047300c.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 18);
    printf("fd = %d\n", fd);
  
    printf("%d\n", res);
    return (0);
}
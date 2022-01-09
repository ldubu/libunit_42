#include "../get_next_line.h"
#include "../../libft42/libft.h"

int main(void)
{
    int res;

    write(1, "Test first empty file\n", 23);
    int     fd = open("Files/first_empty_line.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 18);
    printf("fd = %d\n", fd);
    res = test_compare(fd, NULL);
    printf("resultat du test L1= %d\n", res);
    res = test_compare(fd, "Qu'est-ce que le Lorem Ipsum?\n");
    printf("resultat du test L2= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L3= %d\n", res);
    return (res);
}
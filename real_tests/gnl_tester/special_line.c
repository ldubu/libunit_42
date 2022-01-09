#include "../get_next_line.h"
#include "../../libft42/libft.h"

int test_compare(int fd, char *valeur_attendue)
{
    char *str;

    str = get_next_line(fd);
    printf("%s\n", str);
    if (valeur_attendue == NULL)
    {
        if (str == NULL)
        {
            free(str);
            return (0);
        }
        else
        {
            free(str);
            return (-1);
        }  
    }
    if (ft_strncmp(valeur_attendue, str, ft_strlen(str)) == 0)
    {
        free(str);
        return (0);
    }
    else
    {
        free(str);
        return (-1);
    }
}

int main(void)
{
    int res;

    write(1, "Test special_line file\n", 24);
    int     fd = open("Files/special_line.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 19);
    printf("fd = %d\n", fd);
    res = test_compare(fd, "\\");
    printf("resultat du test L1= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L2= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L3= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L4= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L5= %d\n", res);
    close(fd);
    return (res);
}
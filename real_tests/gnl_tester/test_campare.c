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

#include "../../framework/framework.h"
#include "../../libft/libft.h"
int	basic_test(void);
int ft_strlen_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Basic test", &basic_test);
	printf("%s\n", testlist->name);
	printf("%d\n", testlist->f());
	return(1);
}

int main(void)
{
	ft_strlen_launcher();
	return (0);
}
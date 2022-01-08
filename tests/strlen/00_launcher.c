#include "../../framework/framework.h"
#include "../../libft42/libft.h"
int	basic_test(void);
int ft_strlen_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Basic test", &basic_test);
	ft_output(&testlist, -1, "STRLEN");
	return(1);
}

int main(void)
{
	ft_strlen_launcher();
	return (0);
}
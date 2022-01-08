#include "../../framework/framework.h"
#include "../../libft42/libft.h"
int	basic_test(void);
int ft_strlen_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Basic test", &basic_test);
	launch_test(&testlist, "STRLEN");
	return(1);
}

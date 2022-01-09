#include "../../framework/framework.h"
#include "../../libft42/libft.h"
#include "dumb_function.h"
int ft_strlen_launcher(void)
{
	t_unit_test	*testlist;

	load_test(&testlist, "Test OK", &test_ok);
	load_test(&testlist, "Test KO", &test_ko);
	launch_test(&testlist, "STRLEN");
	return(1);
}

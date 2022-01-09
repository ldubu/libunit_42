/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 18:40:23 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:43:59 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include <unistd.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/wait.h>
# include "../libft42/libft.h"

typedef struct unit_test
{
	char				*name;
	int					(*f)(void);
	struct unit_test	*next;
}	t_unit_test;

int			ft_output(t_unit_test **testlist, int result, char *function_test);
void		ft_lstadd_back(t_unit_test **alst, t_unit_test *new);
void		ft_lstdelone(t_unit_test *lst, void (*del)(char *));
void		load_test(t_unit_test **testlist, char *test_name,
				int (*test_function)(void));
void		ft_delst(char *temp);

t_unit_test	*ft_lstlast(t_unit_test *lst);

int			launch_test(t_unit_test **testlist, char *function_name);
int			read_signal(int status);
int			ft_affiche(int success, int nbr);

#endif
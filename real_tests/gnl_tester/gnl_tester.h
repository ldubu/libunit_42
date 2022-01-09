/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:33:43 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 21:05:11 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_TESTER_H
# define GNL_TESTER_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "../get_next_line.h"
# include "../../libft/libft.h"
# include "../../framework/framework.h"

# ifndef PATH_NAME
#  define PATH_NAME "/mnt/nfs/homes/ldubuche/Documents/Rushes/Libunit/libunit_42/real_tests/gnl_tester/Files/"
# endif

int	test_compare(int fd, char *valeur_attendue);
int	multiple_lines(void);
int	special_line(void);
int	big_line(void);
int	test_empty(void);
int	test_first_empty(void);
int	multiple_nl(void);
int	no_nl_line(void);
int	one_nl(void);
int	multiple_call(void);
int	basic_test(void);
int	basic_test_end_nl(void);
int	wrong_fd(void);
int	tabulation(void);
int	fichier_sh(void);
int	test_0(void);
int	test_empty(void);

#endif
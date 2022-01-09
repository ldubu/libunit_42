/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:33:43 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 18:06:33 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_TESTER_H
# define GNL_TESTER_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "../get_next_line.h"
# include "../../libft42/libft.h"
# include "../../framework/framework.h"

int test_compare(int fd, char *valeur_attendue);
int multiple_lines(void);
int special_line(void);
int big_line(void);
int test_empty(void);
int test_first_empty(void);
int	multiple_nl(void);
int	no_nl_line(void);
int	one_nl(void);
int	multiple_call(void);
int	basic_test(void)

#endif
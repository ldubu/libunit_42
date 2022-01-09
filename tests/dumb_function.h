/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dumb_function.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 09:54:12 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 10:36:24 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMB_FUNCTION_H
# define DUMB_FUNCTION_H

# include <string.h>
# include <stdlib.h>

int		test_ok(void);
char	*dumb_function(char *str);
int		test_ko(void);
int		test_sigsegv(void);

#endif
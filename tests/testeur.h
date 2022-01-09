/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeur.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:27:03 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 15:27:19 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTEUR_H
# define TESTEUR_H

# include <stdlib.h>
# include <stdio.h>
# include <sys/wait.h>

int		sigsegv_launcher(void);
int		dumb_launcher(void);
int		buserror_launcher(void);

char	*ft_sigsegv(char *str);
char	*dumb_function(char *str, int len);
int		ft_buserror(void);

#endif
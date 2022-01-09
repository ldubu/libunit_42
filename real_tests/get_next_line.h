/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:40:15 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/09 13:13:18 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef FD_MAX
#  define FD_MAX 256 //rechercher pk 256 !!!
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const*s2);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
char	*free_str(char *str);

#endif
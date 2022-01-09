/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:36:29 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 16:50:19 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int special_line(void)
{
    int res;

    write(1, "Test special_line file\n", 24);
    int     fd = open("Files/special_line.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 19);
    printf("fd = %d\n", fd);
    res = test_compare(fd, "\\");
    printf("resultat du test L1= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L2= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L3= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L4= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L5= %d\n", res);
    close(fd);
    return (res);
}
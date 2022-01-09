/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_first_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lberrada <lberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:52:43 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 16:53:04 by lberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int test_first_empty(void)
{
    int res;

    write(1, "Test first empty file\n", 23);
    int     fd = open("Files/first_empty_line.txt", O_RDONLY);
    if (fd <= 0)
        write(1, "fail to open file\n", 18);
    printf("fd = %d\n", fd);
    res = test_compare(fd, NULL);
    printf("resultat du test L1= %d\n", res);
    res = test_compare(fd, "Qu'est-ce que le Lorem Ipsum?\n");
    printf("resultat du test L2= %d\n", res);
    res = test_compare(fd, NULL);
    printf("resultat du test L3= %d\n", res);
    return (res);
}
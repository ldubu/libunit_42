/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_signal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:29:37 by ldubuche          #+#    #+#             */
/*   Updated: 2022/01/08 17:30:42 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

int read_signal(int status)
{
    int retour;
    if (WIFEXITED(status))
        retour = WEXITSTATUS(status);
    else if (WIFSIGNALED(status))
        retour = WTERMSIG(status);
    else 
        retour = -1;
    return (retour);
}
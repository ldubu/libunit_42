/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_multiple_lines.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldubuche <laura.dubuche@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 16:36:29 by lberrada          #+#    #+#             */
/*   Updated: 2022/01/09 21:00:27 by ldubuche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

int	multiple_lines(void)
{
	int	res;
	int	fd;

	fd = open(PATH_NAME"multiple_lines.txt", O_RDONLY);
	if (fd <= 0)
		write(1, "fail to open file\n", 18);
	res = test_compare(fd, "Lorem ipsum dolor sit amet. Et nulla voluptate in Quis voluptatem At debitis culpa est atque ducimus quo laboriosam enim cum dolore velit et voluptatem necessitatibus! Nam architecto nihil qui labore tenetur eos illo quia ab dolore ullam id dolorum eligendi qui labore porro. Vel sunt galisum sed vitae dignissimos et error doloremque.\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, "\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, "Qui repellat ipsum aut iure accusantium galisum neque. In dolor voluptas est cupiditate quos aut voluptas accusamus in eius expedita vel atque illum non corporis soluta At cumque esse.\n");
	if (res == -1)
		return (-1);
	res = test_compare(fd, "Eum iste distinctio eos pariatur totam qui modi enim qui optio ipsam eos fugiat porro et maiores quia ea praesentium inventore. Eum recusandae explicabo aut deleniti velit non nobis molestias At omnis earum est deserunt reiciendis non omnis facere. At suscipit aperiam et cupiditate dolores aut quam odit non numquam nulla ut nesciunt omnis est placeat provident.");
	if (res == -1)
		return (-1);
	close(fd);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duzun <davut@uzun.ist>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 02:39:21 by duzun             #+#    #+#             */
/*   Updated: 2022/11/25 23:12:15 by duzun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// c ile belirtilen stringi fd ile belirtilen alana yazar (dosya, ekran vb.)

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

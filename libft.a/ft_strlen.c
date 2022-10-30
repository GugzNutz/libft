/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:17:17 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/10/30 14:18:06 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_strlen(char *s)
{
	int	a;

	a = 0;
	while (s[a])
	{
		a++;
	}
	return (a);
}
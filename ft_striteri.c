/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:39:37 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/14 11:59:09 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	if (s != NULL && f != NULL)
	{
		while (i < len)
		{
			/*takes the adress of each character of the string and pass it into the function f
			https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea*/
			f(i, &s[i]);
			i++;
		}
	}
}

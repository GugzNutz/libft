/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:44:26 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/03 09:44:39 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int ft_toupper(int c)
{
    if((c >= 'a' && c <= 'z'))
    return (c - 32);
    else
    return (c);
}
/*int main()
{
    printf("%d", ft_toupper(97));
    return (0);   
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:16:45 by gfilipe-          #+#    #+#             */
/*   Updated: 2022/11/02 12:20:59 by gfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/nfs/homes/gfilipe-/Desktop/libft.a/libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c >= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
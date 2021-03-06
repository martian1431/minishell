/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:34:05 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/06 13:23:35 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < (n - 1))
			i++;
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}

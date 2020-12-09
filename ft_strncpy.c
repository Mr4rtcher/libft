/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:00:07 by jabilbo           #+#    #+#             */
/*   Updated: 2019/09/18 20:19:51 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	while (i < len)
		s1[i++] = '\0';
	return (s1);
}

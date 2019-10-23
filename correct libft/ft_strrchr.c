/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktabit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:58:43 by ktabit            #+#    #+#             */
/*   Updated: 2019/10/21 17:39:46 by ktabit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*t;

	i = 0;
	t = 0;
	while (*s != '\0')
	{
		if (*s == (char)c)
			t = (char *)s;
		s++;
	}
	if (c == '\0')
		return (char *)s;
	return (t);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 07:25:46 by lemon             #+#    #+#             */
/*   Updated: 2016/11/23 07:28:45 by lemon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	char	*temp;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	temp = dest;
	while (*str)
		*(temp++) = *(str++);
	*temp = '\0';
	return (dest);
}

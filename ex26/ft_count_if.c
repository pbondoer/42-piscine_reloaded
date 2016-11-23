/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 07:43:43 by lemon             #+#    #+#             */
/*   Updated: 2016/11/23 07:45:23 by lemon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int		i;

	i = 0;
	while (*tab)
		if (f(*(tab++)) == 1)
			i++;
	return (i);
}
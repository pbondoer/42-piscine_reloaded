/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 06:54:29 by lemon             #+#    #+#             */
/*   Updated: 2016/11/23 06:54:51 by lemon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}
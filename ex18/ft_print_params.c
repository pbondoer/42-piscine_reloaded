/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 06:59:02 by lemon             #+#    #+#             */
/*   Updated: 2016/11/23 08:25:26 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	while (++i < argc)
	{
		str = argv[i];
		while (*str)
			ft_putchar(*str++);
		ft_putchar('\n');
	}
}

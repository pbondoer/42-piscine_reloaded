/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_param.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemon <pierre@bondoer.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 07:17:46 by lemon             #+#    #+#             */
/*   Updated: 2016/11/23 08:25:59 by pbondoer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while ((!*s1 && !*s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putendl(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

void	ft_str_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_str_sort(int count, char **str)
{
	int		swapped;
	int		i;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (++i < count)
		{
			if (ft_strcmp(str[i - 1], str[i]) > 0)
			{
				ft_str_swap(str[i - 1], str[i]);
				swapped = 1;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	argc--;
	argv++;
	ft_str_sort(argc, argv);
	while (argc--)
		ft_putendl(*(argv++));
}

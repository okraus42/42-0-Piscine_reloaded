/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:42:21 by okraus            #+#    #+#             */
/*   Updated: 2025/05/22 19:57:44 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	(void)write(1, &c, 1);
// }

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	(void)argc;
	j = 0;
	while (argv[++j])
	{
		i = 0;
		while (argv[j][i])
			ft_putchar(argv[j][i++]);
		ft_putchar('\n');
	}
	return (0);
}

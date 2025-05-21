/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <okraus@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:00:49 by okraus            #+#    #+#             */
/*   Updated: 2025/05/21 18:36:52 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			++count;
		++i;
	}
	return (count);
}

// #include <stdio.h>

// int	ft_test(char *s)
// {
// 	if (*s == 'h')
// 		return (1);
// 	return (0);
// }

// int	main(void)
// {
// 	const char	*tab[] = {"hi", "hello", "holla", "oi", "ahoy", NULL};
// 	printf("%i\n", ft_count_if((char **)tab, &ft_test));
// 	return (0);
// }

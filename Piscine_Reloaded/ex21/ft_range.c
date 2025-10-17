/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:56:35 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 17:52:14 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

/* int	main(void)
{
	int	min = 2;
	int max = 7;
	int x = 0;
	int *arr = ft_range(min, max);
	while (arr[x])
	{
		printf("%d\n", arr[x]);
		x++;
	}
	free (arr);
	return (0);
} */

int	*ft_range(int min, int max)
{
	int	*arr;
	int	x;

	x = 0;
	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	while (x < (max - min))
	{
		arr[x] = x + min;
		x++;
	}
	return (arr);
}

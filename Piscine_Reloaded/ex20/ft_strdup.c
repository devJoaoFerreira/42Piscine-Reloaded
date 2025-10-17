/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:01:55 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 17:52:00 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);

/* int	main(void)
{
	char *src = "ola";
	char *dup = ft_strdup(src);
	printf("%s\n%s",src, dup);
	free (dup);
	return (0);
} */

char	*ft_strdup(char *src)
{
	int		x;
	int		y;
	char	*dup;

	x = 0;
	while (src[x] != '\0')
		x++;
	dup = malloc(sizeof(char) * (x + 1));
	if (dup == NULL)
		return (NULL);
	y = 0;
	while (y <= x)
	{
		dup[y] = src[y];
		y++;
	}
	return (dup);
}

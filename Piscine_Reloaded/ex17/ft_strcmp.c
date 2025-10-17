/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:38:56 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/13 17:46:00 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

/* int	main(void)
{
	char	s1[] = "12";
	char	s2[] = "123";
	printf("%d", ft_strcmp(s1, s2));
	return (0);
} */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while (s1[x] && s2[x])
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x ++;
	}
	return (s1[x] - s2[x]);
}

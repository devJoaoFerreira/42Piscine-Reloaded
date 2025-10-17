/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovo-fe <jnovo-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:41:34 by jnovo-fe          #+#    #+#             */
/*   Updated: 2025/10/14 17:51:41 by jnovo-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_argcmp(char *s1, char *s2);
void	ft_putstr(char **argv);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	char	*t;

	x = 1;
	while (x < argc)
	{
		y = 1;
		while (y < argc)
		{
			if (ft_argcmp(argv[x], argv[y]) < 0)
			{
				t = argv[y];
				argv[y] = argv[x];
				argv[x] = t;
			}
			y++;
		}
		x++;
	}
	ft_putstr(argv);
	return (0);
}

int	ft_argcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] == s2[a] && s1[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}

void	ft_putstr(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

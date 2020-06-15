/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmondino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 20:52:46 by jmondino          #+#    #+#             */
/*   Updated: 2018/08/22 09:34:34 by jmondino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int index;

	index = 0;
	while (tab[index])
	{
		if (f(tab[index]))
			return (1);
		index++;
	}
	return (0);
}
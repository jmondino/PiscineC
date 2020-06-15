/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmondino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 00:25:30 by jmondino          #+#    #+#             */
/*   Updated: 2018/08/14 15:56:43 by jmondino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *arc)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' || arc[j] != '\0')
	{
		dest[i] = arc[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
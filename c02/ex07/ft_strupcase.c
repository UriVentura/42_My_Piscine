/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <oventura@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:16:40 by oventura          #+#    #+#             */
/*   Updated: 2021/04/21 17:09:32 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*str1;

	str1 = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str - 32);
		str++;
	}
	str = str1;
	return (str);
}
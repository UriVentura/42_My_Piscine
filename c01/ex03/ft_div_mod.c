/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oventura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:43:10 by oventura          #+#    #+#             */
/*   Updated: 2021/04/15 12:43:08 by oventura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod (int a, int b, int *div, int *mod)
{	
	*div = (a / b);
	*mod = (a % b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skadogam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 11:28:14 by skadogam          #+#    #+#             */
/*   Updated: 2018/11/07 11:28:17 by skadogam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_rra(void)
{
	write(1, "rra\n", 4);
}

void	put_rrb(void)
{
	write(1, "rrb\n", 4);
}

void	put_rrr(void)
{
	write(1, "rrr\n", 4);
}

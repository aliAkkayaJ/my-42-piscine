/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:25:58 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/11 14:01:28 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{   
    int i;

    i = 2;
    if( nb <= 1)
        return (0);
    while(i <= (nb / 2))
    {
        if(!(nb % i))
            return (0);
        else
            i++;
    }
    return (1);
}

int ft_find_next_prime(int nb)
{   
    if( nb < 2)
        return (2);
    while ( nb >= 2)
    {
        if(ft_is_prime(nb) == 1)
            return (nb);
        nb++;
    }
    return (0);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_find_next_prime(-2));
}
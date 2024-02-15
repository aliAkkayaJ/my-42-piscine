/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:28:11 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/11 14:01:28 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if(nb < 0)
        return 0;
    if (nb <= 1)
        return 1;
    return (nb * ft_recursive_factorial(nb-1));
}


#include <stdio.h>
int main()
{
    printf("%d",ft_recursive_factorial(0));
    return 0;
}
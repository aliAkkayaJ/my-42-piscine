/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:18:28 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/11 14:01:28 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{   
    if(power < 0)
        return (0);
    if(power == 0)
        return 1;
    else 
        return (nb * ft_recursive_power(nb, (power - 1)));
}


#include <stdio.h>
int main()
{
    printf("%d",ft_recursive_power(2,21));
    return 0;
}
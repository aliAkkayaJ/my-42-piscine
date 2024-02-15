/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:44:09 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/07 14:42:35 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int sign;
    int answer;

    sign = 1;
    answer = 0;
    i = 0;

    while(str[i] == ' ' || str[i] == '\f'|| str[i] == '\n' 
        || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'  )
    {
        i++;
    }
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = sign * -1;
        i++;
    }

    while(str[i] >= '0' && str[i]<='9')
    {
        answer = (answer * 10) + (str[i] - '0');
        i++;
    }
    
    return (answer * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
 
    printf("%s",av[0]);

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:40:31 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 18:43:32 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int ft_str_is_printable(char *str)
{
    int     i;
    i = 0;
    
    while(str[i] != '\0')
    {
        if (str[i] >= ' ' && str[i] <= '~' ) 
            i++;
        else
            return 0;
    }
    return 1;
}

int main(){
    int a;
    char str[]="4324234";
    a= ft_str_is_printable(str);
    printf("snc: %d ",a);
    return 0;
}
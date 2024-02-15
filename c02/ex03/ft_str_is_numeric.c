/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:40:31 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 18:13:03 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int ft_str_is_numeric(char *str){
    int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9' ) 
        {
            i++;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main(){
    int a;
    char str[]="123";
    a= ft_str_is_numeric(str);
    printf("snc: %d ",a);
    return 0;
}
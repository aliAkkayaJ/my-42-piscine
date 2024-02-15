/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:40:31 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 18:13:03 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int ft_str_is_uppercase(char *str){
    int     i;

    i = 0;
    
    while(str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z' ) 
            i++;
        else
            return 0;
    }
    return 1;
}

int main(){
    int a;
    char str[]="ASSADASD";
    a= ft_str_is_uppercase(str);
    printf("snc: %d ",a);
    return 0;
}
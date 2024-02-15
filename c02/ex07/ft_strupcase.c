/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:40:31 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 18:43:32 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char *ft_strupcase(char *str)
{
    unsigned int i;
    
    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}

int main(){
    char *returnin;
    char str[]="Ali asdad";
    returnin = ft_strupcase(str);
    printf("snc: %s ",returnin);
    
    return 0;
}
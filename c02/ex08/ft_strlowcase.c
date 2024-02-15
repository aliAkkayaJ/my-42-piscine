/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:40:31 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/03 21:47:48 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char *ft_strlowcase(char *str){
    unsigned int i;
    i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z'){
        str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int main(){
    char *returnin;
    char str[]="asdli aDSADAad";
    returnin = ft_strlowcase(str);
    printf("snc: %s ",returnin);
    
    return 0;
}
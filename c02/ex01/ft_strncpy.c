/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:31:20 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 19:12:55 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    unsigned int i;

    i = 0;
    while(src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n) //kalanı null ile tamamlıyor. ama şartı n kadar olma şartı.
    {
        dest[i] = '\0';
        i++;
    }
        
    return (dest);

}

int main(){
    char dest[] = "akkaya";
    char src[] = "ali";
    
    //strncpy(dest,src,10);  overflow
    ft_strncpy(dest,src,6);
    printf("%s",dest);

    return 0;
}
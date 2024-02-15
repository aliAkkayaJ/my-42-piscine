/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:09:30 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 16:08:26 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strcpy(char *dest, char *src)
{
    int     i;
    i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // eğer sec'nin boyutu küçük olduğunda "aliaya" olmaması için sonuna null ekleyip bitirdilk
    return (dest);
}

int main(){
    char dest[] = "akkaya";
    char src[] = "ali";
    
    ft_strcpy(dest,src);
     printf("%s",dest);

    return 0;
}
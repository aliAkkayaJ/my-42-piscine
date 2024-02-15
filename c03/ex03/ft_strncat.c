/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:17:11 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/07 18:43:00 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    } 
    while(src[j] != '\0' && j < nb){
        dest[i+j] = src[j];
        j++;
    }
    dest[i+j] = '\0';
    return (dest);
}
#include <stdio.h>
int main()
{
    char src[20] = "ali";
    char dest[20] = "akkaya";

    printf("%s",ft_strncat(dest,src,5));
}
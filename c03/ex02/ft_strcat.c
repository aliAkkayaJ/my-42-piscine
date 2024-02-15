/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:00:37 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/07 18:45:13 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while(dest[i] != '\0')
    {
        i++;
    } 
    while(src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

#include <stdio.h>
int main()
{
    char src[20] = "ali";
    char dest[20] = "akkaya";

    printf("%s",ft_strcat(dest,src));
}
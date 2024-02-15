/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:30:38 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/07 20:08:49 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
    unsigned int    i;

    i = 0;
    while(s1[i] == s2[i] && s1[i] && s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

#include <stdio.h>
int main()
{
    char s1[20] = " ali0";
    char s2[20] = " ali1";

    printf("%d",ft_strcmp(s1,s2));
}
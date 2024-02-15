/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:34:05 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/03 22:23:04 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
    int i = 0;
    while(str[i]!='\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(){
    char str[]="STDOUT";
    ft_putstr(str);
    return 0;
}
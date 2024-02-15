/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:33:47 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/03 22:23:04 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int     i;
    int     temp;
    i = 0;
    while(i<size/2)
    {
        temp = tab[i];
        tab[i] = tab[size-i-1];
        tab[size-i-1] = temp;
        i++;
    }
}


int main(){
    int arr[]={1,2,3,4,5};
    ft_rev_int_tab(arr,5);
    printf("%d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4]);
    return 0;
}
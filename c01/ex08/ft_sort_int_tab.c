/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 16:44:35 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/03 22:23:04 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int     i;
    int     swap;
    while(size>0)
    {
        i = 0;
        while(i<size-1)
        {
            if(tab[i] > tab[i+1])
            {
                swap = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = swap;
            }else{
                i++;
            }
        }
       size--;
    }
}


int main(){
    int arr[]={3,42,5,7,9,5};
    ft_sort_int_tab(arr,6);
    printf("%d %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5]);
    return 0;
}
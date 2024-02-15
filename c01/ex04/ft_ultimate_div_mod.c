/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:04:23 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/01 19:31:09 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 void ft_ultimate_div_mod(int *a, int *b)
 {
    int temp;
    temp = *a / *b;
    *b = *a % *b;
    *a = temp;

 }
 int main(){
    int a,b;
    
    a=12;
    b=4;

ft_ultimate_div_mod(&a,&b);
printf("a:%d b:%d ",a,b);
    return 0;
 }
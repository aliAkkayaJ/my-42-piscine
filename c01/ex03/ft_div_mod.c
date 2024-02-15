/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:04:23 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/03 22:23:04 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 void ft_div_mod(int a, int b, int *div, int *mod)
 {  
    if(b==0)
    {
        return 0;
    }
    *div = a / b;
    *mod = a % b;
    
 }

 int main(){
    int a,b;
    int div_result,mod_result;
    a=12;
    b=0;

ft_div_mod(a,b,&div_result,&mod_result);
printf("a:%d b:%d div: %d mod: %d",a,b,div_result,mod_result);
    return 0;
 }
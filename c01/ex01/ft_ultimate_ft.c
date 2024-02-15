/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:07:56 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/03 22:23:04 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}
 #include <stdio.h>
int main(){
    int num = 32;
    int *str1=&num;
    int **str2=&str1;
    int ***str3=&str2;
    int ****str4=&str3;
    int *****str5=&str4;
    int ******str6=&str5;
    int *******str7=&str6;
    int ********str8=&str7;
    int *********str9=&str8;

    ft_ultimate_ft(str9);
    printf("sayı: %d",num);

    return 0;
}
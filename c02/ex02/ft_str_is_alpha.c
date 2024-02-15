/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:23:28 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/05 18:13:03 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_str_is_alpha(char *str){
	int	i;
	i = 0;
	
	while(str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) 
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return (1);
}

int main(){
	int a;
	char str[]="";
	a= ft_str_is_alpha(str);
	printf("snc: %d ",a);
	return 0;
}
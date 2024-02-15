/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 14:34:17 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/07 19:10:55 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i; //ana dizinde gezinmek için
	int	j;  //alt diizinde gezinmek için

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0') //to_find karakterlerini tek tek karşıalştırır.
			j++;
		if (to_find[j] == '\0')     //yani tamamen eşleşirse str+i , alt dizenin başlangıç adersini 
			return (str + i);
		i++;    
		j = 0;
	}
	return (0);
}

#include <stdio.h>
int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "9";
	printf("%s", ft_strstr(str, find));
}
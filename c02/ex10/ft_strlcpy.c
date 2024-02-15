/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 22:13:36 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/06 12:13:36 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//src'yi dst dizisine kopyalar ve dst'nin sonuna null ekler. ayrıca src'nşn boyutu dest den büyükse dest'in sonuna null ekler ve size'ı bozmaz

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;

	while (src[count] != '\0')
		count++;

	if (size != 0)
	{	
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count); //src'nin boyut dönüyor.
}

int main(void)
{
    char src[] = "ali12345";
	char dest[] = "akkaya ";
	printf("%d | %s", ft_strlcpy(dest, src, 3), dest);
	
    return 0;
}
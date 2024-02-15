/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliakkay <aliakkay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:32:03 by aliakkay          #+#    #+#             */
/*   Updated: 2024/02/06 12:16:39 by aliakkay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcapitalize(char *str){
    unsigned int    i;
    int             new_word;  // new word yeni kelimeye geçtiğini gösteriyor. bunun ilk harfine bakıyorsun

    i = 0;
    new_word = 1;
    while(str[i] != '\0')
    {
        if(new_word == 1 && str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        else if(new_word == 0 && str[i] >= 'A' && str[i] <=  'Z')
            str[i] = str[i]+  32;
            
        if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') //noktalama iaşreti,boşluk ise new word olabilir
			new_word = 1;
		else  //karakter harf ise 
			new_word = 0;
        i++;
    }
    return str;
}

int main(){
    char str[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf("snc: %s ",str);

    return 0;
}
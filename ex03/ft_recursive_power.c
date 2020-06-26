/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 11:47:12 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/26 15:04:33 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb)
{
   int y;
	if (nb == 0)
	   return 0;
     else (y >= 1)
	 return 1 * 2(y - 1);	 

}

int main()

{
   int a;
   int y = 5;
	printf("2%d\n", (a,y));
	printf("2%d\n", a);
	return 0;
}



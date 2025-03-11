/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:03:35 by maximeianni       #+#    #+#             */
/*   Updated: 2025/01/17 11:52:51 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

bool	is_a_letter(char c)
{
	if (c <= 'z' && c >= 'a')
		return true;
	return false ;
}
void    print_upper(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (is_a_letter(str[i]) == true)
    		str[i] -= 32;
		std::cout << str[i];
		i++;
	}
	return ;
}
int main(int argc, char **argv)
{
	int  i;
   
	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	while (i < argc)
		print_upper(argv[i++]);
	return (0);
}
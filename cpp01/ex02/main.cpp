/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 12:43:08 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 13:08:42 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *string_PTR = &str;
    std::string &string_REF = str;
    
    std::cout << "----- Memory adresses : ------" << std::endl;
    std::cout << "Address of str :" << &str << std::endl;
    std::cout << "Address de PTR :" << string_PTR << std::endl;
    std::cout << "Address de REF :" << &string_REF << std::endl;
    
    std::cout << "\n----- Value : ------" << std::endl;
    std::cout << "Value of STR : " << str << std::endl;
    std::cout << "Value pointed by PTR : " << *string_PTR << std::endl;
    std::cout << "Value pointed by REF : " << string_REF << std::endl;
    
}
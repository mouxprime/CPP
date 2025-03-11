/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximeianni <maximeianni@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:33:35 by maximeianni       #+#    #+#             */
/*   Updated: 2025/02/05 15:28:36 by maximeianni      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

void	Contact::fill_new_contact()
{
		std::string input;
		
		std::cout << "Name\n";
		std::getline(std::cin, input) >> input;
		set_lastname(input);
		std::cout << "First name\n";
		std::getline(std::cin, input) >> input;
		set_firstname(input);
		std::cout << "Surname\n";
		std::getline(std::cin, input) >> input;
		set_surname(input);
		std::cout << "Number\n";
		std::getline(std::cin, input) >> input;
		set_phonenumber(input);
		std::cout << "Darkest Secret ?\n";
		std::getline(std::cin, input) >> input;
}
int main()
{
    std::string input;
    Repertoire R1;
    int contact_number = 0;
    int is_full;
    is_full = 0;

    (void)is_full;
    std::cout << "Bienvenue dans votre repertoire !\n";
    while (1)
    {
        std::cout << "Entrez une commande\n";
        std::cin >> input;
        if (contact_number == 8)
        {
            std::cout << "Le repertoire est plein. Overwriting from the beginning.\n";
            contact_number = 0;
            is_full = 1;
        }
        if (input == "ADD")
        {
            R1.create_contact(contact_number);
            contact_number++;
        }
        else if (input == "SEARCH")  
            R1.check_args_and_print(input, contact_number);
        else if (input == "EXIT")
            break;
        else
            std::cout << "les commandes suivantes sont disponibles : \n-ADD\n-SEARCH\n-EXIT\n";
    }
    is_full = 0;
    return (0);
}

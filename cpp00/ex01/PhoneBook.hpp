/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 16:33:37 by maximeianni       #+#    #+#             */
/*   Updated: 2025/02/13 11:18:50 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cstdlib>


class Contact
{
	private:
		std::string last_name;
		std::string first_name;
		std::string surname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		// Setters - permettent de set les differentes valeurs
		void	set_lastname(const std::string& str){
			last_name = str;}
		void	set_firstname(const std::string& str){
			first_name = str;}
		void	set_surname(const std::string& str){
			surname = str;}
		void	set_phonenumber(const std::string& str){
			phone_number = str;}
		void	set_darkestsecret(const std::string& str){
			darkest_secret = str;}
		// Fonctions_utils
		void	fill_new_contact();
		void	print_contact(Contact *contact[8]);
};

class Repertoire
{
    private:
        Contact contact[8];
		int		is_full;

    public:
        Repertoire() : is_full(0) {}
        void create_contact(int contact_number)
		{
    	Contact new_contact;
    	new_contact.fill_new_contact();
    	contact[contact_number] = new_contact;
    	std::cout << "Contact number = " << contact_number + 1 << std::endl;
		if (contact_number == 7)
			is_full = 1;
		}
		void check_args_and_print(std::string input, int contact_number)
		{
			while (1)
			{
				std::cout << "\n\n\t-Please enter a contact_number between 1 and 8.\n"
						  << "\t-You can quit the search function by typing 'q'\n"
						  << "\t-You can print all contacts by typing 'all'\n\n";
				std::cin >> input;
				if (input == "all")
					print_all_contacts(contact_number);
				if (input == "q")
					break ;
				if (input > "0" && input < "9")
					print_one_contact(input);
			}		
				return ;
		}
		
		void print_one_contact(const std::string &input)
		{
    		int index = std::atoi(input.c_str()) - 1;
    		if (index >= 0 && index < 8 && !contact[index].first_name.empty())
    		{
        		std::cout << std::setw(10) << std::right << index + 1 << " | "
                  << std::setw(10) << std::right << contact[index].first_name << " | "
                  << std::setw(10) << std::right << contact[index].last_name << " | "
                  << std::setw(10) << std::right << contact[index].surname << std::endl;
    		}
    		else
        		std::cout << "Invalid contact index or contact does not exist." << std::endl;
		}

        void print_all_contacts(int contact_number)
        {
            int i = 0;
            std::cout << std::setw(10) << std::right << "Index" << " | "
                      << std::setw(10) << std::right << "First Name" << " | "
                      << std::setw(10) << std::right << "Last Name" << " | "
                      << std::setw(10) << std::right << "Nickname" << std::endl;
			if (is_full == 1)
			{
				while (i < 8 && !contact[i].first_name.empty())
            	{
            	    std::cout << std::setw(10) << std::right << i + 1 << " | "
            	              << std::setw(10) << std::right << contact[i].first_name << " | "
        			            << std::setw(10) << std::right << contact[i].last_name << " | "
                    	      << std::setw(10) << std::right << contact[i].surname << std::endl;
                i++;
            	}
			}
			else
			{
            	while (i < contact_number && !contact[i].first_name.empty())
            	{
                	std::cout << std::setw(10) << std::right << i + 1 << " | "
                 	         << std::setw(10) << std::right << contact[i].first_name << " | "
                 	         << std::setw(10) << std::right << contact[i].last_name << " | "
                 	         << std::setw(10) << std::right << contact[i].surname << std::endl;
               		 i++;
            	}
			}
        }
};

#endif

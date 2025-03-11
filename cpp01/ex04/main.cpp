/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:16:43 by mianni            #+#    #+#             */
/*   Updated: 2025/02/21 13:36:49 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	treat_args(std::string& file_name, std::string s1, std::string s2)
{
	std::string line_read;
	size_t pos;

	std::ifstream input(file_name.c_str()); // ouverture du infile
	if (!input){
		std::cout << "Error when the program tryed to open the file" << std::endl;
		return ; }
	std::string new_string = file_name + ".replace";
	std::ofstream new_file(new_string.c_str()); // creation du file
	if (!new_file) {
		std::cout << "Error while creating the new file." << std::endl;
		return; }
	while (std::getline(input, line_read)) // lecture du file
	{
		pos = line_read.find(s1); // recherche de la sous-chaine
		if (pos != std::string::npos) // si sous chaine trouvee
		{
			while (line_read.find(s1) != std::string::npos) // recursive de recherche de s1
			{
				pos = line_read.find(s1);
				line_read.erase(pos, s1.size());
				line_read.insert(pos, s2);
			}
		}
		new_file << line_read << std::endl;
	}
}
int	main(int argc, char **argv)
{
    if (argc != 4)
	{
		std::cout << "Error, [arg1.txt], [arg2.str], [arg3.str]" << std::endl;
        return (0);
	}
	std::string arg1 = argv[1];
	std::string arg2 = argv[2];
	std::string arg3 = argv[3];
	if ((arg2.empty() || arg3.empty()) || arg2 == arg3)
	{
		std::cout << "Error, [arg1.txt], [arg2.str], [arg3.str]" << std::endl;
		return (0);
	}
	
    treat_args(arg1, arg2, arg3);
	return (1);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:36:11 by mianni            #+#    #+#             */
/*   Updated: 2025/02/06 11:50:47 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie(void);
	~Zombie(void);
    Zombie(std::string name);
	void	announce(void) const;
	void	setName(std::string name);

private:
	std::string	_name;
};

Zombie* zombieHorde(int N, std::string name);


#endif

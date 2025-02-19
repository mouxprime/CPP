/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:36:11 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 11:48:52 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string _name;
        
    public:
            Zombie();
            Zombie(std::string name);
            ~Zombie();
            void announce(void) const;
    void setName(std::string name);
};
    void randomChump(std::string name);
    Zombie* zombieHorde( int N, std::string name );

#endif
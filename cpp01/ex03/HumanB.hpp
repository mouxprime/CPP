/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:34:11 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 17:34:11 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack();
        void setName(std::string);
        std::string get_name(void);
        void setWeapon(Weapon& w);
    
    private:
        std::string _name;
        Weapon *_Weapon2;
};

#endif
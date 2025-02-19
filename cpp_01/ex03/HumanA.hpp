/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:34:16 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 17:34:16 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

class HumanA
{
    public:
        HumanA(std::string name, Weapon& W);
        ~HumanA();
        Weapon &Weapon1;
        void    attack();
        std::string get_name(void);
    
    private:
        std::string _name;
};
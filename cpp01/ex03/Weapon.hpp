/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mianni <mianni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 17:33:57 by mianni            #+#    #+#             */
/*   Updated: 2025/02/13 17:33:57 by mianni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#pragma once

class Weapon
{
    private:
        std::string _type;

    public:
        Weapon();
        Weapon(std::string _type);
        ~Weapon();
        std::string getType() const;
        void setType(std::string _type);
};
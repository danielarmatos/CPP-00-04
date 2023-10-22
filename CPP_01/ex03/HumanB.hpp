/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:45:47 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:45:48 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon      *weapon;

public:
    HumanB();
    HumanB(const std::string &name);
    ~HumanB(void);

    void    attack(void);
    void    setWeapon(Weapon &weapon);
};

#endif

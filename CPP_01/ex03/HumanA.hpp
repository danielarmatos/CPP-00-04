/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dreis-ma <dreis-ma@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 20:45:31 by dreis-ma          #+#    #+#             */
/*   Updated: 2023/10/17 20:45:32 by dreis-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
private:
    std::string name;
    Weapon      *weapon;

public:
    HumanA();
    HumanA(const std::string &name, Weapon &weapon);
    ~HumanA(void);

    void        attack(void);
};

#endif

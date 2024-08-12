/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe@student.42porto.com <jofilipe>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:33:21 by jofilipe@st       #+#    #+#             */
/*   Updated: 2024/08/12 20:54:12 by jofilipe@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
	name = "Default";
	idx = 0;
}

Character::Character(std::string charName) {
	std::cout << "Character " << charName << " constructor called" << std::endl;
	name = charName;
	idx = 0;
}

Character::Character(const Character &idemName) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = idemName;
}

Character &Character::operator=(const Character &copyChar) {
	std::cout << "Character copy operator called" << std::endl;
	if (this != &copyChar) {
		this->name = copyChar.name;
		this->idx = copyChar.idx;
	}
	return *this;
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
}
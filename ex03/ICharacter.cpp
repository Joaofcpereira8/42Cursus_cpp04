/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:03:47 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:03:48 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(): name("Default"), idx(0) {
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(std::string charName): name(charName), idx(0) {
	std::cout << "ICharacter " << charName << " constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &sameChar) {
	std::cout << "ICharacter copy constructor called" << std::endl;
	*this = sameChar;
}

ICharacter &ICharacter::operator=(const ICharacter &copyChar) {
	std::cout << "ICharacter copy operator called" << std::endl;
	if (this != &copyChar) {
		this->name = copyChar.name;
		this->idx = copyChar.idx;
	}
	return *this;
}

ICharacter::~ICharacter() {
	std::cout << "ICharacter destructor called" << std::endl;
}

std::string ICharacter::getName() const {
	return name;
}

void ICharacter::equip(AMateria *m) {
	this->idx++;
}

void ICharacter::unequip(int idx) {
	int x = idx;
	this->idx - x;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:06:10 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:06:11 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): name("cure") {
	std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &idemCure) {
	std::cout << "Cure copy constructor called" << std::endl;
	*this = idemCure;
}

Cure &Cure::operator=(const Cure &copyCure) {
	std::cout << "Cure copy operator called" << std::endl;
	if (this != &copyCure)
		*this = copyCure;
	return *this;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure *Cure::clone() const {
	Cure* newCure = new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
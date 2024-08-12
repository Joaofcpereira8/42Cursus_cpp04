/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:58:45 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 15:58:46 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(const std::string &type) {
	matType = type;
	std::cout << matType << " AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &idemMateria) {
	*this = idemMateria;
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copyMateria) {
	std::cout << "AMateria copy operator called" << std::endl;
	if (this != &copyMateria)
		*this = copyMateria;
	return *this;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

std::string AMateria::getType() const {
	return matType;
}

AMateria *AMateria::clone() const {
	AMateria* materia = new AMateria();
}

void AMateria::use(ICharacter &target) {
	std::cout << target << "used a materia" << std::endl;
}
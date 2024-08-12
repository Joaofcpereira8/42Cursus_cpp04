/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:47:07 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/09 16:47:08 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &ani): type(ani.type) {
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &ani) {
	std::cout << "Animal copy operator called" << std::endl;
	if (this != &ani)
		type = ani.type;
	return *this;
}

void AAnimal::makeSound() const{
	std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const{
	return type;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called" << std::endl;
}
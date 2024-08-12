/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:05:56 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:05:57 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): name("ice") {
	std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &idemIce) {
	std::cout << "Ice copy constructor called" << std::endl;
	*this = idemIce;
}

Ice &Ice::operator=(const Ice &copyIce) {
	std::cout << "Ice copy operator called" << std::endl;
	if (this != &copyIce)
		*this = copyIce;
	return *this;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice *Ice::clone() const {
	Ice* newIce = new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}
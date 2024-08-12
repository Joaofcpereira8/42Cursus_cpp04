/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:26:12 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 12:26:13 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &miniWrongCat) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	type = miniWrongCat.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copyWrongCat) {
	std::cout << "WrongCat copy operator called" << std::endl;
	if (this != &copyWrongCat)
		*this = copyWrongCat;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "WrongCat sound" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:49:20 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/09 15:49:21 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat &miniCat) {
	type = miniCat.type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copyCat) {
	std::cout << "Cat copy operator called" << std::endl;
	if (this != &copyCat)
		*this = copyCat;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Miau Miau" << std::endl;
}
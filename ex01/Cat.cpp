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
	std::cout << YELLOW <<"Cat constructor called" << RESET << std::endl;
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &miniCat) {
	*this = miniCat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copyCat) {
	std::cout << "Cat copy operator called" << std::endl;
	if (this != &copyCat)
		*this = copyCat;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << GREEN << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const{
	std::cout << YELLOW << "Miau Miau" << RESET << std::endl;
}
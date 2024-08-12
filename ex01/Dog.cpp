/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:49:18 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/09 15:49:19 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << BLUE << "Dog constructor called" << RESET << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &miniDog) {
	*this = miniDog;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copyDog) {
	std::cout << "Dog copy operator called" << std::endl;
	if (this != &copyDog)
		*this = copyDog;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof Woof" << std::endl;
}
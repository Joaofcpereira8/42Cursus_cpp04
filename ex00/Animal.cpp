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

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &ani): type(ani.type) {
	std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &ani) {
	std::cout << "Copy operator called" << std::endl;
	if (this != &ani)
		type = ani.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 14:13:03 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/13 14:45:17 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << MAGENTA << "Brain constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &neurons) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = neurons;
}

Brain &Brain::operator=(const Brain &copyNeurons) {
	std::cout << "Brain copy operator called" << std::endl;
	if (this != &copyNeurons) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = copyNeurons.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << MAGENTA << "Brain destructor called" << RESET << std::endl;
}

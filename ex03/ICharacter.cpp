/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:03:47 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:03:48 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(): name("Default"), idx(0) {
	std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(std::string charName): name(charName), idx(0) {
	std::cout << "ICharacter " << charName << " constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &sameChar) {
	*this = sameChar;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:49:23 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/13 14:52:18 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected:
		std::string	type;
	public:
		Animal();
		Animal(const Animal& ani);
		Animal &operator=(const Animal& ani);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound(void) const;
};

#endif //ANIMAL_HPP

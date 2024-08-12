/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:49:23 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/09 15:49:24 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal(const AAnimal& ani);
		AAnimal &operator=(const AAnimal& ani);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound(void) const = 0;
};

#endif //ANIMAL_HPP
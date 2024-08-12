/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 16:30:47 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/09 16:30:48 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal {
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog& miniDog);
		Dog &operator=(const Dog& copyDog);
		~Dog();
		void makeSound() const;
};

#endif //DOG_HPP
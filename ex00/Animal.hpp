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
		~Animal();
};

#endif //ANIMAL_HPP
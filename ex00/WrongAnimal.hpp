/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:25:49 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 12:26:05 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wrongAni);
	WrongAnimal &operator=(const WrongAnimal& wrongAni);
	~WrongAnimal();
	void makeSound(void) const;
};

#endif //WRONGANIMAL_HPP
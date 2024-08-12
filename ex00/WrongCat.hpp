/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:26:21 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 12:26:22 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
public:
	WrongCat();
	WrongCat(const WrongCat& miniWrongCat);
	WrongCat &operator=(const WrongCat& copyWrongCat);
	~WrongCat();
	void makeSound() const;
};

#endif //WRONGCAT_HPP
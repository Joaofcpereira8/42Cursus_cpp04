/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:49:26 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/09 15:49:27 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal {
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& miniCat);
		Cat &operator=(const Cat& copyCat);
		~Cat();
		void makeSound() const;
};

#endif //CAT_HPP
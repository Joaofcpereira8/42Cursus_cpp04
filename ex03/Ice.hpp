/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:05:50 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:05:51 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice: public AMateria{
	private:
		std::string name;
	public:
		Ice();
		Ice(const Ice& idemIce);
		Ice &operator=(const Ice& copyIce);
		~Ice();

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif //ICE_HPP
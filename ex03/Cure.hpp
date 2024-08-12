/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:06:08 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:06:09 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria{
	private:
		std::string name;
	public:
		Cure();
		Cure(const Cure& idemCure);
		Cure &operator=(const Cure& copyCure);
		~Cure();

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif //CURE_HPP
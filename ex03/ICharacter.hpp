/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:03:41 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/12 16:03:42 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class ICharacter{
	protected:
		std::string name;
		int			idx;
	public:
		ICharacter();
		ICharacter(std::string charName);
		ICharacter(const ICharacter& sameChar);
		ICharacter &operator=(const ICharacter& copyChar);
		virtual ~ICharacter();

		virtual std::string const& getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target);
};

#endif
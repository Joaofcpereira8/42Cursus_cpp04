/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe@student.42porto.com <jofilipe>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:27:35 by jofilipe@st       #+#    #+#             */
/*   Updated: 2024/08/12 20:42:50 by jofilipe@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
	public:
		Character();
		Character(std::string charName);
		Character(const Character& idemName);
		Character &operator=(const Character& copyChar);
		~Character();
};

#endif

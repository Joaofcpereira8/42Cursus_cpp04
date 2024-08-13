/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofilipe <jofilipe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 15:49:16 by jofilipe          #+#    #+#             */
/*   Updated: 2024/08/13 14:57:29 by jofilipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* Joli[10];
	int x = 0;

	while(x < 10)
	{
		if (x % 2 == 0)
			Joli[x] = new Cat();
		else
			Joli[x] = new Dog();
		x++;
	}
	x = 0;
	while (x < 10)
	{
		Joli[x]->makeSound();
		x++;
	}
	x = 0;
	while(x < 10)
	{
		delete Joli[x];
		x++;
	}
}

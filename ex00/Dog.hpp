/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:54 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/25 19:49:45 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#pragma once

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog& operator=(const Dog& copy);

		void makeSound() const override;
};
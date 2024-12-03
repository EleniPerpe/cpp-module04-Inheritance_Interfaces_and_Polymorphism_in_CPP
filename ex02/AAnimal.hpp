/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:54 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 16:48:03 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const std::string& type);
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal& operator=(const Animal& copy);
		
		std::string getType(void) const;
		void setType(const std::string& type);

		virtual void makeSound() const = 0;
};


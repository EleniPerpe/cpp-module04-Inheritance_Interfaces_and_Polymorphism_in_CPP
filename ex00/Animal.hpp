/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:54 by eperperi          #+#    #+#             */
/*   Updated: 2024/11/25 18:47:56 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& copy);
		~Animal();
		Animal& operator=(const Animal& copy);	
};
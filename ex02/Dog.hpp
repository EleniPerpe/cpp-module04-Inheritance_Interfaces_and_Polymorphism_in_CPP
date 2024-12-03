/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:54 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 16:49:57 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain* _brain;
		
	public:
		Dog();
		Dog(const Dog& copy);
		~Dog();
		Dog& operator=(const Dog& copy);

		void makeSound() const override;

		const std::string getIdea(size_t index) const;
		void setIdea(size_t index, const std::string& idea);
};
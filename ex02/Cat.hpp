/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:54 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 16:49:49 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;
		
	public:
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat& operator=(const Cat& copy);

		void makeSound() const override;

		const std::string getIdea(size_t index) const;
		void setIdea(size_t index, const std::string& idea);
};
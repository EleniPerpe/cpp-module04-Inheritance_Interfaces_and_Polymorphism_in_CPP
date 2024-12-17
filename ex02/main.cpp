/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:04:44 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/17 10:49:38 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp" 
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
// const Animal* meta = new Animal();
// const Animal* meta1 = new Animal("Animal");
const Animal* d = new Dog();
const Animal* c = new Cat();
std::cout << d->getType() << " " << std::endl;
std::cout << c->getType() << " " << std::endl;
c->makeSound();
d->makeSound();
// meta->makeSound();
// meta1->makeSound();

// delete meta;
// delete meta1;
delete d;
delete c;

return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperperi <eperperi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:04:44 by eperperi          #+#    #+#             */
/*   Updated: 2024/12/03 16:40:32 by eperperi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp" 
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
Animal* animals[100];

for (int i = 0; i < 100; i++)
{
	if (i % 2 == 0)
	{
		animals[i] = new Dog();
		Dog* dog = dynamic_cast<Dog*>(animals[i]);
    	if (dog)
		{
        	dog->setIdea(0, "Dog's idea number " + std::to_string(i + 1));
			std::cout << dog->getIdea(0) << std::endl;
		}
	}
	else
	{
		animals[i] = new Cat();
		Cat* cat = dynamic_cast<Cat*>(animals[i]);
    	if (cat)
		{
        	cat->setIdea(0, "Cat's idea number " + std::to_string(i + 1));
			std::cout << cat->getIdea(0) << std::endl;
		}
	}
}
for (int i = 0; i < 100; i++)
	delete animals[i];
	
return 0;

}

// int main()
// {
//     
//     Cat originalCat;
//     originalCat.setIdea(0, "Original idea");

//     
//     Cat copiedCat = originalCat;

// 
//     originalCat.setIdea(0, "Modified idea");

//    
//     std::cout << "Original Cat's idea: " << originalCat.getIdea(0) << std::endl;
//     std::cout << "Copied Cat's idea: " << copiedCat.getIdea(0) << std::endl;

//     return 0;
// }


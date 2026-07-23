/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 20:36:08 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 20:46:51 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string phrase = "HI THIS IS BRAIN";
	std::string *stringPTR = &phrase;
	std::string &stringREF = phrase;
	
	std::cout << "main string address: "<< &phrase << std::endl;
	std::cout << "pointer string address: "<< stringPTR << std::endl;
	std::cout << "Reference string address: "<< &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value: " << phrase << std::endl;
	std::cout << "Value pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Reference value of stringREF: " << stringREF << std::endl;
	return (0);
}

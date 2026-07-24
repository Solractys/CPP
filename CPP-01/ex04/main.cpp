/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 22:47:17 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/23 23:21:03 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Invalid params" << std::endl;
		return (0);
	}

	std::ifstream input(av[1]);
	if (!input)
	{
		std::cout << "Open file error" << std::endl;
		return (0);
	}
	std::string outfile = std::string(av[1]) + ".replace";
	std::ofstream output(outfile.c_str());
	std::stringstream buffer;
	buffer << input.rdbuf();
	std::string content = buffer.str();
	std::string s1 = std::string (av[2]);
	if (s1 == "")
		return (0);
	std::string s2 = std::string (av[3]);
	size_t pos = content.find(s1);
	while (pos != std::string::npos)
	{
	    content = content.substr(0, pos)
		    + s2
		    + content.substr(pos + s1.length());

	    pos = content.find(s1, pos + s2.length());
	}
	output << content;
	return (0);
}

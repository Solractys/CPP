/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-s <csilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 22:07:52 by csilva-s          #+#    #+#             */
/*   Updated: 2026/07/13 19:32:50 by csilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phone(""), _darkSecret("") {}

Contact::Contact(
	const std::string& firstName,
	const std::string& lastName,
	const std::string& nickname,
	const std::string& phone,
	const std::string&  darkSecret
) : _firstName(firstName), _lastName(lastName),_nickname(nickname), _phone(phone), _darkSecret(darkSecret) {}

Contact::~Contact() {}

std::string	Contact::getFirstName() const { return _firstName; }
std::string	Contact::getLastName() const { return _lastName; }
std::string	Contact::getNickname() const { return _nickname; }
std::string	Contact::getPhone() const { return _phone; }
std::string	Contact::getDarkSecret() const { return _darkSecret; }
int			Contact::getUserId() const { return _Id; }

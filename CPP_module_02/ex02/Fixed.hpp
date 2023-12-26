/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuster- <vfuster-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:04:32 by vfuster-          #+#    #+#             */
/*   Updated: 2023/12/26 10:25:54 by vfuster-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	Fixed(const float floatValue);
	Fixed(const int intValue);
	
	~Fixed();

	// Surcharge operateurs de comparaison
	bool			operator>(const Fixed &other) const;
	bool			operator<(const Fixed &other) const;
	bool			operator>=(const Fixed &other) const;
	bool			operator<=(const Fixed &other) const;
	bool			operator==(const Fixed &other) const;
	bool			operator!=(const Fixed &other) const;

	// Surcharge operateurs arithmetiques
	Fixed			operator+(const Fixed &other) const;
	Fixed			operator-(const Fixed &other) const;
	Fixed			operator*(const Fixed &other) const;
	Fixed			operator/(const Fixed &other) const;

	// Surcharge operateurs incrementation/decrementation
	Fixed			&operator++();
	Fixed			operator++(int);
	Fixed			&operator--();
    Fixed			operator--(int);

	int				getRawBits( void ) const;
	void			setRawBits( int const raw );
	float			toFloat( void ) const;
	int				toInt( void ) const;

	static			Fixed &min(Fixed &a, Fixed &b);
	static const	Fixed &min(const Fixed &a, const Fixed &b);
	static			Fixed &max(Fixed &a, Fixed &b);
	static const	Fixed &max(const Fixed &a, const Fixed &b);

private:
	int					_value;
	static const int 	_fractionalBits;

friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif
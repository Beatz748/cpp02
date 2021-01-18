# include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;	
}

Fixed::Fixed(Fixed &right)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = right;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" <<  std::endl;
	return (value);
}

Fixed& Fixed::operator=(Fixed &right)
{
	std::cout << "Assignation operator called" << std::endl;
	value = right.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

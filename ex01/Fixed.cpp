# include "Fixed.hpp"

Fixed::Fixed()
{
	value_ = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	value_ = raw;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value_);
}

Fixed& Fixed::operator=(Fixed &right)
{
	std::cout << "Assignation operator called" << std::endl;
	value_ = right.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed &right)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = right;
}

Fixed::operator<<
{
}

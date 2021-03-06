# include "Fixed.hpp"

Fixed::Fixed()
{
	value_ = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const raw)
{
	std::cout << "Int constructor called" << std::endl;
	value_ = raw << bits_;
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

Fixed& Fixed::operator=(const Fixed &right)
{
	std::cout << "Assignation operator called" << std::endl;
	value_ = right.value_;
	return (*this);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	value_ = roundf(val * (1 << bits_));
}

Fixed::Fixed(const Fixed &right)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = right;
}

float Fixed::toFloat(void) const
{
	return (((float)(value_) / (1 << bits_)));
}

int Fixed::toInt(void) const
{
	return ((int)(value_ >> bits_));
}

std::ostream& operator<<(std::ostream& stream, Fixed const& fixed)
{
	stream << fixed.toFloat();
	return stream;
}

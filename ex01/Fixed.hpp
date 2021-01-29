#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>
class	Fixed
{
	private:
		int					value_;
		static const int	bits_ = 8;
	public:
		Fixed(void);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed(void);
		Fixed(const Fixed &right);
		Fixed& operator=(const Fixed &right);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float toFloat(void) const;
};

std::ostream& operator<<(std::ostream& stream, Fixed const& right);

#endif

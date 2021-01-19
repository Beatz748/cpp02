#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>

class	Fixed
{
	private:
		int					value_;
		static const int	bits_ = 8;
	public:
		Fixed();
		Fixed(const int val)
		~Fixed();
		Fixed(Fixed &right);
		Fixed& operator=(Fixed &right);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif

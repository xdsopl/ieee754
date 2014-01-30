/*
ieee754 - some functions missing from c
Written in 2014 by <Ahmet Inan> <xdsopl@googlemail.com>
To the extent possible under law, the author(s) have dedicated all copyright and related and neighboring rights to this software to the public domain worldwide. This software is distributed without any warranty.
You should have received a copy of the CC0 Public Domain Dedication along with this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
*/

#ifndef IEEE754_H
#define IEEE754_H

#define minqNaN (0)
#define minsNaN (1)
#define minqNaNf (0)
#define minsNaNf (1)

#define maxqNaN (0x7ffffffffffff)
#define maxsNaN (0x7ffffffffffff)
#define maxqNaNf (0x3fffff)
#define maxsNaNf (0x3fffff)

double long_long_to_double(long long ll)
{
	union {
		long long ll;
		double d;
	} c;
	c.ll = ll;
	return c.d;
}

float int_to_float(int i)
{
	union {
		int i;
		float f;
	} c;
	c.i = i;
	return c.f;
}

long long double_to_long_long(double d)
{
	union {
		double d;
		long long ll;
	} c;
	c.d = d;
	return c.ll;
}

int float_to_int(float f)
{
	union {
		float f;
		int i;
	} c;
	c.f = f;
	return c.i;
}

// minsNaNf <= payload <= maxsNaNf
float sNaNf(int payload)
{
	return int_to_float(0x7f800000 | payload);
}

// minsNaN <= payload <= maxsNaN
double sNaN(long long payload)
{
	return long_long_to_double(0x7ff0000000000000 | payload);
}

// minqNaNf <= payload <= maxqNaNf
float qNaNf(int payload)
{
	return int_to_float(0x7fc00000 | payload);
}

// minqNaN <= payload <= maxqNaN
double qNaN(long long payload)
{
	return long_long_to_double(0x7ff8000000000000 | payload);
}

int pNaNf(float nan)
{
	return 0x3fffff & float_to_int(nan);
}

long long pNaN(double nan)
{
	return 0x7ffffffffffff & double_to_long_long(nan);
}

int issNaNf(float val)
{
	return ((0x7fc00000 & float_to_int(val)) == 0x7f800000) && 0 < pNaNf(val);
}

int issNaN(double val)
{
	return ((0x7ff8000000000000 & double_to_long_long(val)) == 0x7ff0000000000000) && 0 < pNaN(val);
}

int isqNaNf(float val)
{
	return ((0x7fc00000 & float_to_int(val)) == 0x7fc00000);
}

int isqNaN(double val)
{
	return ((0x7ff8000000000000 & double_to_long_long(val)) == 0x7ff8000000000000);
}

#endif


/*
ieee754 - some functions missing from c
Written in 2014 by <Ahmet Inan> <xdsopl@googlemail.com>
To the extent possible under law, the author(s) have dedicated all copyright and related and neighboring rights to this software to the public domain worldwide. This software is distributed without any warranty.
You should have received a copy of the CC0 Public Domain Dedication along with this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
*/

#include "ieee754.h"
#include <stdio.h>

int main()
{
	float qfa = qNaNf(13);
	float qfb = 3.0f * qfa;
	float qfc = 5.0f + qfa;
	float qfd = -qfa;
	fprintf(stderr, "%f %d %f %d %f %d %f %d\n", qfa, pNaNf(qfa), qfb, pNaNf(qfb), qfc, pNaNf(qfc), qfd, pNaNf(qfd));

	double qda = qNaN(13);
	double qdb = 3.0 * qda;
	double qdc = 5.0 + qda;
	double qdd = -qda;
	fprintf(stderr, "%f %lld %f %lld %f %lld %f %lld\n", qda, pNaN(qda), qdb, pNaN(qdb), qdc, pNaN(qdc), qdd, pNaN(qdd));

	float sfa = sNaNf(13);
	float sfb = 3.0f * sfa;
	float sfc = 5.0f + sfa;
	float sfd = -sfa;
	fprintf(stderr, "%f %d %f %d %f %d %f %d\n", sfa, pNaNf(sfa), sfb, pNaNf(sfb), sfc, pNaNf(sfc), sfd, pNaNf(sfd));

	double sda = sNaN(13);
	double sdb = 3.0 * sda;
	double sdc = 5.0 + sda;
	double sdd = -sda;
	fprintf(stderr, "%f %lld %f %lld %f %lld %f %lld\n", sda, pNaN(sda), sdb, pNaN(sdb), sdc, pNaN(sdc), sdd, pNaN(sdd));

	return 0;
}


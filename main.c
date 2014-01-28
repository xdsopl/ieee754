/*
ieee754 - some functions missing from c
Written in 2014 by <Ahmet Inan> <xdsopl@googlemail.com>
To the extent possible under law, the author(s) have dedicated all copyright and related and neighboring rights to this software to the public domain worldwide. This software is distributed without any warranty.
You should have received a copy of the CC0 Public Domain Dedication along with this software. If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
*/

#include "ieee754.h"
#include <stdio.h>
#include <math.h>

int main()
{
	float qfa = qNaNf(13);
	float qfb = 3.0f * qfa;
	float qfc = 5.0f + qfa;
	float qfd = -qfa;
	fprintf(stderr, "%g %d %g %d %g %d %g %d\n", qfa, pNaNf(qfa), qfb, pNaNf(qfb), qfc, pNaNf(qfc), qfd, pNaNf(qfd));

	double qda = qNaN(13);
	double qdb = 3.0 * qda;
	double qdc = 5.0 + qda;
	double qdd = -qda;
	fprintf(stderr, "%g %lld %g %lld %g %lld %g %lld\n", qda, pNaN(qda), qdb, pNaN(qdb), qdc, pNaN(qdc), qdd, pNaN(qdd));

	float sfa = sNaNf(13);
	float sfb = 3.0f * sfa;
	float sfc = 5.0f + sfa;
	float sfd = -sfa;
	fprintf(stderr, "%g %d %g %d %g %d %g %d\n", sfa, pNaNf(sfa), sfb, pNaNf(sfb), sfc, pNaNf(sfc), sfd, pNaNf(sfd));

	double sda = sNaN(13);
	double sdb = 3.0 * sda;
	double sdc = 5.0 + sda;
	double sdd = -sda;
	fprintf(stderr, "%g %lld %g %lld %g %lld %g %lld\n", sda, pNaN(sda), sdb, pNaN(sdb), sdc, pNaN(sdc), sdd, pNaN(sdd));

	fprintf(stderr, "isqNaNf(qfa) = %d issNaNf(qfa) = %d\n", isqNaNf(qfa), issNaNf(qfa));
	fprintf(stderr, "isqNaN(qda) = %d issNaN(qda) = %d\n", isqNaN(qda), issNaN(qda));
	fprintf(stderr, "isqNaNf(sfa) = %d issNaNf(sfa) = %d\n", isqNaNf(sfa), issNaNf(sfa));
	fprintf(stderr, "isqNaN(sda) = %d issNaN(sda) = %d\n", isqNaN(sda), issNaN(sda));

	float inff = INFINITY;
	fprintf(stderr, "isqNaNf(%g) = %d issNaNf(%g) = %d isqNaNf(%g) = %d issNaNf(%g) = %d\n", inff, isqNaNf(inff), inff, issNaNf(inff), -inff, isqNaNf(-inff), -inff, issNaNf(-inff));
	fprintf(stderr, "isqNaNf(%g) = %d issNaNf(%g) = %d isqNaNf(%g) = %d issNaNf(%g) = %d\n", 0.0f, isqNaNf(0.0f), 0.0f, issNaNf(0.0f), -0.0f, isqNaNf(-0.0f), -0.0f, issNaNf(-0.0f));
	fprintf(stderr, "isqNaNf(%g) = %d issNaNf(%g) = %d isqNaNf(%g) = %d issNaNf(%g) = %d\n", 1.0f, isqNaNf(1.0f), 1.0f, issNaNf(1.0f), -1.0f, isqNaNf(-1.0f), -1.0f, issNaNf(-1.0f));

	double inf = INFINITY;
	fprintf(stderr, "isqNaN(%g) = %d issNaN(%g) = %d isqNaN(%g) = %d issNaN(%g) = %d\n", inf, isqNaN(inf), inf, issNaN(inf), -inf, isqNaN(-inf), -inf, issNaN(-inf));
	fprintf(stderr, "isqNaN(%g) = %d issNaN(%g) = %d isqNaN(%g) = %d issNaN(%g) = %d\n", 0.0, isqNaN(0.0), 0.0, issNaN(0.0), -0.0, isqNaN(-0.0), -0.0, issNaN(-0.0));
	fprintf(stderr, "isqNaN(%g) = %d issNaN(%g) = %d isqNaN(%g) = %d issNaN(%g) = %d\n", 1.0, isqNaN(1.0), 1.0, issNaN(1.0), -1.0, isqNaN(-1.0), -1.0, issNaN(-1.0));

	return 0;
}


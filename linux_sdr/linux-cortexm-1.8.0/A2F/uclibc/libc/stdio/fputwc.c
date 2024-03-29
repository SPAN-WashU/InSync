/* Copyright (C) 2004       Manuel Novoa III    <mjn3@codepoet.org>
 *
 * GNU Library General Public License (LGPL) version 2 or later.
 *
 * Dedicated to Toni.  See uClibc/DEDICATION.mjn3 for details.
 */

#include "_stdio.h"

/* libc_hidden_proto(fputwc_unlocked) */

#ifdef __DO_UNLOCKED

wint_t fputwc_unlocked(wchar_t wc, FILE *stream)
{
	return _wstdio_fwrite(&wc, 1, stream) ? wc : WEOF;
}
libc_hidden_def(fputwc_unlocked)

strong_alias(fputwc_unlocked,putwc_unlocked)
#ifndef __UCLIBC_HAS_THREADS__
strong_alias(fputwc_unlocked,fputwc)
strong_alias(fputwc_unlocked,putwc)
#endif

#elif defined __UCLIBC_HAS_THREADS__

wint_t fputwc(wchar_t wc, register FILE *stream)
{
	wint_t retval;
	__STDIO_AUTO_THREADLOCK_VAR;

	__STDIO_AUTO_THREADLOCK(stream);

	retval = fputwc_unlocked(wc, stream);

	__STDIO_AUTO_THREADUNLOCK(stream);

	return retval;
}

strong_alias(fputwc,putwc)

#endif

#ifndef DTR_WATCH_H
#define DTR_WATCH_H

/*
 * This file Copyright (C) Mnemosyne LLC
 *
 * This file is licensed by the GPL version 2. Works owned by the
 * Transmission project are granted a special exemption to clause 2(b)
 * so that the bulk of its code can remain under the MIT license.
 * This exemption does not extend to derived works not owned by
 * the Transmission project.
 *
 * $Id: watch.h 11709 2011-01-19 13:48:47Z jordan $
 */

typedef struct dtr_watchdir dtr_watchdir;

typedef void( dtr_watchdir_callback )( tr_session * session, const char * dir, const char * file, const void *argument );

dtr_watchdir* dtr_watchdir_new( tr_session * session, const char * dir, dtr_watchdir_callback cb, const void *callbackArgument );

void dtr_watchdir_update( dtr_watchdir * w );

void dtr_watchdir_free( dtr_watchdir * w );

#endif

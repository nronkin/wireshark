/* wmem_strutl.h
 * Definitions for the Wireshark Memory Manager String Utilities
 * Copyright 2012, Evan Huus <eapache@gmail.com>
 *
 * $Id$
 *
 * Wireshark - Network traffic analyzer
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __WMEM_STRUTL_H__
#define __WMEM_STRUTL_H__

#include <string.h>

#include <glib.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** @addtogroup wmem
 *  @{
 *    @defgroup wmem-strutl String Utilities
 *
 *    A collection of utility function for operating on C strings with wmem.
 *
 *    @{
 */

WS_DLL_PUBLIC
gchar *
wmem_strdup(wmem_allocator_t *allocator, const gchar *src)
G_GNUC_MALLOC;

WS_DLL_PUBLIC
gchar *
wmem_strndup(wmem_allocator_t *allocator, const gchar *src, const size_t len)
G_GNUC_MALLOC;

WS_DLL_PUBLIC
gchar *
wmem_strdup_printf(wmem_allocator_t *allocator, const gchar *fmt, ...)
G_GNUC_MALLOC G_GNUC_PRINTF(2, 3);

WS_DLL_PUBLIC
gchar *
wmem_strdup_vprintf(wmem_allocator_t *allocator, const gchar *fmt, va_list ap)
G_GNUC_MALLOC;

WS_DLL_PUBLIC
gchar *
wmem_strconcat(wmem_allocator_t *allocator, const gchar *first, ...)
G_GNUC_MALLOC G_GNUC_NULL_TERMINATED;

/**
 * Splits a string into a maximum of max_tokens pieces, using the given
 * delimiter. If max_tokens is reached, the remainder of string is appended
 * to the last token. Consecutive delimiters are treated as a single delimiter.
 */
WS_DLL_PUBLIC
gchar **
wmem_strsplit(wmem_allocator_t *allocator, const gchar *src,
        const gchar *delimiter, int max_tokens);

/**   @}
 *  @} */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __WMEM_STRUTL_H__ */

/*
 * Editor modelines  -  http://www.wireshark.org/tools/modelines.html
 *
 * Local variables:
 * c-basic-offset: 4
 * tab-width: 8
 * indent-tabs-mode: nil
 * End:
 *
 * vi: set shiftwidth=4 tabstop=8 expandtab:
 * :indentSize=4:tabSize=8:noTabs=true:
 */

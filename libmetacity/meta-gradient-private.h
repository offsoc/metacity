/*
 * Copyright (C) 2001 Havoc Pennington, 99% copied from wrlib in
 * WindowMaker, Copyright (C) 1997-2000 Dan Pascu and Alfredo Kojima
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef META_GRADIENT_PRIVATE_H
#define META_GRADIENT_PRIVATE_H

#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gdk/gdk.h>

#include "meta-gradient.h"

G_BEGIN_DECLS

G_GNUC_INTERNAL
GdkPixbuf *meta_gradient_create_simple     (int               width,
                                            int               height,
                                            const GdkRGBA    *from,
                                            const GdkRGBA    *to,
                                            MetaGradientType  style);

G_GNUC_INTERNAL
GdkPixbuf *meta_gradient_create_multi      (int               width,
                                            int               height,
                                            const GdkRGBA    *colors,
                                            int               n_colors,
                                            MetaGradientType  style);

G_GNUC_INTERNAL
GdkPixbuf *meta_gradient_create_interwoven (int               width,
                                            int               height,
                                            const GdkRGBA     colors1[2],
                                            int               thickness1,
                                            const GdkRGBA     colors2[2],
                                            int               thickness2);

G_GNUC_INTERNAL
void       meta_gradient_add_alpha         (GdkPixbuf        *pixbuf,
                                            const guchar     *alphas,
                                            int               n_alphas,
                                            MetaGradientType  type);

G_END_DECLS

#endif
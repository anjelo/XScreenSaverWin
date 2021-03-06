
/* Copyright (c) Mark J. Kilgard, 1994. */

/* This program is freely distributable without licensing fees
   and is provided without guarantee or warrantee expressed or
   implied. This program is -not- in the public domain. */

#if 0
	#if 0   /* for Mesa */
	# include "glutint.h"
	#else   /* for xscreensaver */
	# ifdef HAVE_CONFIG_H
	#  include "config.h"
	# endif
	# ifndef HAVE_COCOA
	#  include <GL/gl.h>
	# endif
	# ifdef HAVE_JWZGLES
	#  include "jwzgles.h"
	# endif /* HAVE_JWZGLES */
	# undef APIENTRY
	# define APIENTRY /**/
	#endif
#endif

#include "xws2win.h"
#include <GL/gl.h>
#undef APIENTRY
#define APIENTRY

#include "glutstroke.h"

void APIENTRY 
glutStrokeCharacter(GLUTstrokeFont font, int c)
{
  const StrokeCharRec *ch;
  const StrokeRec *stroke;
  const CoordRec *coord;
  StrokeFontPtr fontinfo;
  int i, j;

  fontinfo = (StrokeFontPtr) font;

  if (c < 0 || c >= fontinfo->num_chars)
    return;
  ch = &(fontinfo->ch[c]);
  if (ch) {
    for (i = ch->num_strokes, stroke = ch->stroke;
      i > 0; i--, stroke++) {
      glBegin(GL_LINE_STRIP);
      for (j = stroke->num_coords, coord = stroke->coord;
        j > 0; j--, coord++) {
        glVertex2f(coord->x, coord->y);
      }
      glEnd();
    }
    glTranslatef(ch->right, 0.0, 0.0);
  }
}

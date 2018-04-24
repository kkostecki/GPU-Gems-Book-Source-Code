
// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:36 2004)
// 
// Sylvain Lefebvre - 2002 - Sylvain.Lefebvre@imag.fr
// --------------------------------------------------------
#include "glux_no_redefine.h"
#include "glux_ext_defs.h"
#include "gluxLoader.h"
#include "gluxPlugin.h"
// --------------------------------------------------------
//         Plugin creation
// --------------------------------------------------------

#ifndef __GLUX_GL_NV_vertex_array_range__
#define __GLUX_GL_NV_vertex_array_range__

GLUX_NEW_PLUGIN(GL_NV_vertex_array_range);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_VERTEX_ARRAY_RANGE_NV
#  define GL_VERTEX_ARRAY_RANGE_NV 0x851D
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_LENGTH_NV
#  define GL_VERTEX_ARRAY_RANGE_LENGTH_NV 0x851E
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_VALID_NV
#  define GL_VERTEX_ARRAY_RANGE_VALID_NV 0x851F
#endif
#ifndef GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV
#  define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_POINTER_NV
#  define GL_VERTEX_ARRAY_RANGE_POINTER_NV 0x8521
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glFlushVertexArrayRangeNV
typedef void (APIENTRYP PFNGLUXFLUSHVERTEXARRAYRANGENVPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glVertexArrayRangeNV
typedef void (APIENTRYP PFNGLUXVERTEXARRAYRANGENVPROC) (GLsizei length, const GLvoid *pointer);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glFlushVertexArrayRangeNV
extern PFNGLUXFLUSHVERTEXARRAYRANGENVPROC glFlushVertexArrayRangeNV;
#endif
#ifndef __GLUX__GLFCT_glVertexArrayRangeNV
extern PFNGLUXVERTEXARRAYRANGENVPROC glVertexArrayRangeNV;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
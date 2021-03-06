// --------------------------------------------------------
#ifndef WIN32

// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:33 2004)
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

#ifndef __GLUX_GLX_EXT_import_context__
#define __GLUX_GLX_EXT_import_context__

GLUX_NEW_PLUGIN(GLX_EXT_import_context);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GLX_SHARE_CONTEXT_EXT
#  define GLX_SHARE_CONTEXT_EXT 0x800A
#endif
#ifndef GLX_VISUAL_ID_EXT
#  define GLX_VISUAL_ID_EXT 0x800B
#endif
#ifndef GLX_SCREEN_EXT
#  define GLX_SCREEN_EXT 0x800C
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glXGetCurrentDisplayEXT
typedef Display * (APIENTRYP PFNXGLUXGETCURRENTDISPLAYEXTPROC) (void);
#endif
#ifndef __GLUX__GLFCT_glXQueryContextInfoEXT
typedef int (APIENTRYP PFNXGLUXQUERYCONTEXTINFOEXTPROC) (Display *dpy, GLXContext context, int attribute, int *value);
#endif
#ifndef __GLUX__GLFCT_glXGetContextIDEXT
typedef GLXContextID (APIENTRYP PFNXGLUXGETCONTEXTIDEXTPROC) (const GLXContext context);
#endif
#ifndef __GLUX__GLFCT_glXImportContextEXT
typedef GLXContext (APIENTRYP PFNXGLUXIMPORTCONTEXTEXTPROC) (Display *dpy, GLXContextID contextID);
#endif
#ifndef __GLUX__GLFCT_glXFreeContextEXT
typedef void (APIENTRYP PFNXGLUXFREECONTEXTEXTPROC) (Display *dpy, GLXContext context);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glXGetCurrentDisplayEXT
extern PFNXGLUXGETCURRENTDISPLAYEXTPROC glXGetCurrentDisplayEXT;
#endif
#ifndef __GLUX__GLFCT_glXQueryContextInfoEXT
extern PFNXGLUXQUERYCONTEXTINFOEXTPROC glXQueryContextInfoEXT;
#endif
#ifndef __GLUX__GLFCT_glXGetContextIDEXT
extern PFNXGLUXGETCONTEXTIDEXTPROC glXGetContextIDEXT;
#endif
#ifndef __GLUX__GLFCT_glXImportContextEXT
extern PFNXGLUXIMPORTCONTEXTEXTPROC glXImportContextEXT;
#endif
#ifndef __GLUX__GLFCT_glXFreeContextEXT
extern PFNXGLUXFREECONTEXTEXTPROC glXFreeContextEXT;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------
#endif
// --------------------------------------------------------


// --------------------------------------------------------
// Generated by glux perl script (Wed Mar 31 17:19:34 2004)
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

#ifndef __GLUX_GL_ARB_texture_compression__
#define __GLUX_GL_ARB_texture_compression__

GLUX_NEW_PLUGIN(GL_ARB_texture_compression);
// --------------------------------------------------------
//           Extension conditions
// --------------------------------------------------------
// --------------------------------------------------------
//           Extension defines
// --------------------------------------------------------
#ifndef GL_COMPRESSED_ALPHA_ARB
#  define GL_COMPRESSED_ALPHA_ARB 0x84E9
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ARB
#  define GL_COMPRESSED_LUMINANCE_ARB 0x84EA
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ALPHA_ARB
#  define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#endif
#ifndef GL_COMPRESSED_INTENSITY_ARB
#  define GL_COMPRESSED_INTENSITY_ARB 0x84EC
#endif
#ifndef GL_COMPRESSED_RGB_ARB
#  define GL_COMPRESSED_RGB_ARB 0x84ED
#endif
#ifndef GL_COMPRESSED_RGBA_ARB
#  define GL_COMPRESSED_RGBA_ARB 0x84EE
#endif
#ifndef GL_TEXTURE_COMPRESSION_HINT_ARB
#  define GL_TEXTURE_COMPRESSION_HINT_ARB 0x84EF
#endif
#ifndef GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB
#  define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#endif
#ifndef GL_TEXTURE_COMPRESSED_ARB
#  define GL_TEXTURE_COMPRESSED_ARB 0x86A1
#endif
#ifndef GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB
#  define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#endif
#ifndef GL_COMPRESSED_TEXTURE_FORMATS_ARB
#  define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3
#endif
// --------------------------------------------------------
//           Extension gl function typedefs
// --------------------------------------------------------
#ifndef __GLUX__GLFCT_glCompressedTexImage3DARB
typedef void (APIENTRYP PFNGLUXCOMPRESSEDTEXIMAGE3DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glCompressedTexImage2DARB
typedef void (APIENTRYP PFNGLUXCOMPRESSEDTEXIMAGE2DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glCompressedTexImage1DARB
typedef void (APIENTRYP PFNGLUXCOMPRESSEDTEXIMAGE1DARBPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glCompressedTexSubImage3DARB
typedef void (APIENTRYP PFNGLUXCOMPRESSEDTEXSUBIMAGE3DARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glCompressedTexSubImage2DARB
typedef void (APIENTRYP PFNGLUXCOMPRESSEDTEXSUBIMAGE2DARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glCompressedTexSubImage1DARB
typedef void (APIENTRYP PFNGLUXCOMPRESSEDTEXSUBIMAGE1DARBPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
#endif
#ifndef __GLUX__GLFCT_glGetCompressedTexImageARB
typedef void (APIENTRYP PFNGLUXGETCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint level, GLvoid *img);
#endif
// --------------------------------------------------------
//           Extension gl functions
// --------------------------------------------------------
namespace glux {
#ifndef __GLUX__GLFCT_glCompressedTexImage3DARB
extern PFNGLUXCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB;
#endif
#ifndef __GLUX__GLFCT_glCompressedTexImage2DARB
extern PFNGLUXCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB;
#endif
#ifndef __GLUX__GLFCT_glCompressedTexImage1DARB
extern PFNGLUXCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB;
#endif
#ifndef __GLUX__GLFCT_glCompressedTexSubImage3DARB
extern PFNGLUXCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB;
#endif
#ifndef __GLUX__GLFCT_glCompressedTexSubImage2DARB
extern PFNGLUXCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB;
#endif
#ifndef __GLUX__GLFCT_glCompressedTexSubImage1DARB
extern PFNGLUXCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB;
#endif
#ifndef __GLUX__GLFCT_glGetCompressedTexImageARB
extern PFNGLUXGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB;
#endif
} // namespace glux
// --------------------------------------------------------
#endif
// --------------------------------------------------------

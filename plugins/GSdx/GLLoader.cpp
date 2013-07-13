/*
 *	Copyright (C) 2011-2013 Gregory hainaut
 *	Copyright (C) 2007-2009 Gabest
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with GNU Make; see the file COPYING.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA USA.
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "stdafx.h"
#include "GLLoader.h"
#include "GSdx.h"

#ifndef ENABLE_GLES
PFNGLACTIVETEXTUREPROC                 gl_ActiveTexture               = NULL;
PFNGLBLENDCOLORPROC                    gl_BlendColor                  = NULL;
PFNGLATTACHSHADERPROC                  gl_AttachShader                = NULL;
PFNGLBINDBUFFERPROC                    gl_BindBuffer                  = NULL;
PFNGLBINDBUFFERBASEPROC                gl_BindBufferBase              = NULL;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC   gl_BindFragDataLocationIndexed = NULL;
PFNGLBINDFRAMEBUFFERPROC               gl_BindFramebuffer             = NULL;
PFNGLBINDSAMPLERPROC                   gl_BindSampler                 = NULL;
PFNGLBINDVERTEXARRAYPROC               gl_BindVertexArray             = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC         gl_BlendEquationSeparate       = NULL;
PFNGLBLENDFUNCSEPARATEPROC             gl_BlendFuncSeparate           = NULL;
PFNGLBLITFRAMEBUFFERPROC               gl_BlitFramebuffer             = NULL;
PFNGLBUFFERDATAPROC                    gl_BufferData                  = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC        gl_CheckFramebufferStatus      = NULL;
PFNGLCLEARBUFFERFVPROC                 gl_ClearBufferfv               = NULL;
PFNGLCLEARBUFFERIVPROC                 gl_ClearBufferiv               = NULL;
PFNGLCOMPILESHADERPROC                 gl_CompileShader               = NULL;
PFNGLCOPYIMAGESUBDATANVPROC            gl_CopyImageSubDataNV          = NULL;
PFNGLCREATEPROGRAMPROC                 gl_CreateProgram               = NULL;
PFNGLCREATESHADERPROC                  gl_CreateShader                = NULL;
PFNGLCREATESHADERPROGRAMVPROC          gl_CreateShaderProgramv        = NULL;
PFNGLDELETEBUFFERSPROC                 gl_DeleteBuffers               = NULL;
PFNGLDELETEFRAMEBUFFERSPROC            gl_DeleteFramebuffers          = NULL;
PFNGLDELETEPROGRAMPROC                 gl_DeleteProgram               = NULL;
PFNGLDELETESAMPLERSPROC                gl_DeleteSamplers              = NULL;
PFNGLDELETESHADERPROC                  gl_DeleteShader                = NULL;
PFNGLDELETEVERTEXARRAYSPROC            gl_DeleteVertexArrays          = NULL;
PFNGLDETACHSHADERPROC                  gl_DetachShader                = NULL;
PFNGLDRAWBUFFERSPROC                   gl_DrawBuffers                 = NULL;
PFNGLDRAWELEMENTSBASEVERTEXPROC        gl_DrawElementsBaseVertex      = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC       gl_EnableVertexAttribArray     = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC       gl_FramebufferRenderbuffer     = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC          gl_FramebufferTexture2D        = NULL;
PFNGLGENBUFFERSPROC                    gl_GenBuffers                  = NULL;
PFNGLGENFRAMEBUFFERSPROC               gl_GenFramebuffers             = NULL;
PFNGLGENSAMPLERSPROC                   gl_GenSamplers                 = NULL;
PFNGLGENVERTEXARRAYSPROC               gl_GenVertexArrays             = NULL;
PFNGLGETBUFFERPARAMETERIVPROC          gl_GetBufferParameteriv        = NULL;
PFNGLGETDEBUGMESSAGELOGARBPROC         gl_GetDebugMessageLogARB       = NULL;
PFNGLGETFRAGDATAINDEXPROC              gl_GetFragDataIndex            = NULL;
PFNGLGETFRAGDATALOCATIONPROC           gl_GetFragDataLocation         = NULL;
PFNGLGETPROGRAMINFOLOGPROC             gl_GetProgramInfoLog           = NULL;
PFNGLGETPROGRAMIVPROC                  gl_GetProgramiv                = NULL;
PFNGLGETSHADERIVPROC                   gl_GetShaderiv                 = NULL;
PFNGLGETSTRINGIPROC                    gl_GetStringi                  = NULL;
PFNGLISFRAMEBUFFERPROC                 gl_IsFramebuffer               = NULL;
PFNGLLINKPROGRAMPROC                   gl_LinkProgram                 = NULL;
PFNGLMAPBUFFERPROC                     gl_MapBuffer                   = NULL;
PFNGLMAPBUFFERRANGEPROC                gl_MapBufferRange              = NULL;
PFNGLPROGRAMPARAMETERIPROC             gl_ProgramParameteri           = NULL;
PFNGLSAMPLERPARAMETERFPROC             gl_SamplerParameterf           = NULL;
PFNGLSAMPLERPARAMETERIPROC             gl_SamplerParameteri           = NULL;
PFNGLSHADERSOURCEPROC                  gl_ShaderSource                = NULL;
PFNGLUNIFORM1IPROC                     gl_Uniform1i                   = NULL;
PFNGLUNMAPBUFFERPROC                   gl_UnmapBuffer                 = NULL;
PFNGLUSEPROGRAMSTAGESPROC              gl_UseProgramStages            = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC          gl_VertexAttribIPointer        = NULL;
PFNGLVERTEXATTRIBPOINTERPROC           gl_VertexAttribPointer         = NULL;
PFNGLTEXSTORAGE2DPROC                  gl_TexStorage2D                = NULL;
PFNGLBUFFERSUBDATAPROC                 gl_BufferSubData               = NULL;
// GL 4.1
PFNGLBINDPROGRAMPIPELINEPROC           gl_BindProgramPipeline         = NULL;
PFNGLGENPROGRAMPIPELINESPROC           gl_GenProgramPipelines         = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC        gl_DeleteProgramPipelines      = NULL;
PFNGLGETPROGRAMPIPELINEIVPROC          gl_GetProgramPipelineiv        = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC       gl_ValidateProgramPipeline     = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC     gl_GetProgramPipelineInfoLog   = NULL;
// NO GL4.1
PFNGLUSEPROGRAMPROC                    gl_UseProgram                  = NULL;
PFNGLGETSHADERINFOLOGPROC              gl_GetShaderInfoLog            = NULL;
PFNGLPROGRAMUNIFORM1IPROC              gl_ProgramUniform1i            = NULL;
// NO GL4.2
PFNGLGETUNIFORMBLOCKINDEXPROC          gl_GetUniformBlockIndex        = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC           gl_UniformBlockBinding         = NULL;
PFNGLGETUNIFORMLOCATIONPROC            gl_GetUniformLocation          = NULL;
#endif

namespace GLLoader {

	bool fglrx_buggy_driver = false;
	bool nvidia_buggy_driver = false;

	bool found_GL_ARB_separate_shader_objects = false;
	bool found_GL_ARB_shading_language_420pack = false;
	bool found_GL_ARB_texture_storage = false;
	bool found_geometry_shader = true;
	bool found_GL_NV_copy_image = false;
	bool found_GL_ARB_copy_image = false;
	bool found_only_gl30	= false;
	bool found_GL_ARB_gpu_shader5 = false;

    bool check_gl_version(uint32 major, uint32 minor) {

		const GLubyte* s = glGetString(GL_VERSION);
		if (s == NULL) return false;

		const char* vendor = (const char*)glGetString(GL_VENDOR);
		fprintf(stderr, "Supported Opengl version: %s on GPU: %s. Vendor: %s\n", s, glGetString(GL_RENDERER), vendor);

		// Name change but driver is still bad!
		if (strstr(vendor, "ATI") || strstr(vendor, "Advanced Micro Devices"))
			fglrx_buggy_driver = true;
		if (strstr(vendor, "NVIDIA Corporation"))
			nvidia_buggy_driver = true;

		GLuint dot = 0;
		while (s[dot] != '\0' && s[dot] != '.') dot++;
		if (dot == 0) return false;

		GLuint major_gl = s[dot-1]-'0';
		GLuint minor_gl = s[dot+1]-'0';

#ifndef ENABLE_GLES
		if ( (major_gl < 3) || ( major_gl == 3 && minor_gl < 2 ) ) {
			fprintf(stderr, "Geometry shaders are not supported. Required openGL3.2\n");
			found_geometry_shader = false;
		}
#ifdef _LINUX
		if (nvidia_buggy_driver) {
			fprintf(stderr, "Buggy driver detected. Geometry shaders will be disabled\n");
			found_geometry_shader = false;
		}
#endif
		if (theApp.GetConfig("override_geometry_shader", -1) != -1) {
			found_geometry_shader = !!theApp.GetConfig("override_geometry_shader", -1);
			fprintf(stderr, "Override geometry shaders detection\n");
		}
		if ( (major_gl == 3) && minor_gl < 3) {
			// Opensource driver spotted
			found_only_gl30 = true;
		}
#else
		found_geometry_shader = false;
#endif
		if ( (major_gl < major) || ( major_gl == major && minor_gl < minor ) ) {
			fprintf(stderr, "OPENGL %d.%d is not supported\n", major, minor);
			return false;
		}

        return true;
    }

	bool check_gl_supported_extension() {
		int max_ext = 0;
		glGetIntegerv(GL_NUM_EXTENSIONS, &max_ext);

		if (gl_GetStringi && max_ext) {
			for (GLint i = 0; i < max_ext; i++) {
				string ext((const char*)gl_GetStringi(GL_EXTENSIONS, i));
				if (ext.compare("GL_ARB_separate_shader_objects") == 0) {
					if (!fglrx_buggy_driver) found_GL_ARB_separate_shader_objects = true;
					else fprintf(stderr, "Buggy driver detected, GL_ARB_separate_shader_objects will be disabled\n");
				}
				if (ext.compare("GL_ARB_shading_language_420pack") == 0) found_GL_ARB_shading_language_420pack = true;
				if (ext.compare("GL_ARB_texture_storage") == 0) found_GL_ARB_texture_storage = true;
				if (ext.compare("GL_NV_copy_image") == 0) found_GL_NV_copy_image = true;
				// Replace previous extensions (when driver will be updated)
				if (ext.compare("GL_ARB_copy_image") == 0) found_GL_ARB_copy_image = true;
				if (ext.compare("GL_ARB_gpu_shader5") == 0) found_GL_ARB_gpu_shader5 = true;
#ifdef ENABLE_GLES
				fprintf(stderr, "DEBUG ext: %s\n", ext.c_str());
#endif
			}
		}

#ifndef ENABLE_GLES
		if (!found_GL_ARB_separate_shader_objects) {
			fprintf(stderr, "INFO: GL_ARB_separate_shader_objects is not supported\n");
		}
		if (!found_GL_ARB_shading_language_420pack) {
			fprintf(stderr, "INFO: GL_ARB_shading_language_420pack is not supported\n");
		}
		if (!found_GL_ARB_texture_storage) {
			fprintf(stderr, "FATAL: GL_ARB_texture_storage is not supported\n");
			return false;
		}
		if (!found_GL_ARB_gpu_shader5) {
			fprintf(stderr, "INFO: GL_ARB_gpu_shader5 is not supported\n");
		}


		if (theApp.GetConfig("override_GL_ARB_shading_language_420pack", -1) != -1) {
			found_GL_ARB_shading_language_420pack = !!theApp.GetConfig("override_GL_ARB_shading_language_420pack", -1);
			fprintf(stderr, "Override GL_ARB_shading_language_420pack detection\n");
		}
		if (theApp.GetConfig("override_GL_ARB_separate_shader_objects", -1) != -1) {
			found_GL_ARB_separate_shader_objects = !!theApp.GetConfig("override_GL_ARB_separate_shader_objects", -1);
			fprintf(stderr, "Override GL_ARB_separate_shader_objects detection\n");
		}
		if (theApp.GetConfig("override_GL_ARB_copy_image", -1) != -1) {
			// Same extension so override both
			found_GL_ARB_copy_image = !!theApp.GetConfig("override_GL_ARB_copy_image", -1);
			found_GL_NV_copy_image = !!theApp.GetConfig("override_GL_ARB_copy_image", -1);
			fprintf(stderr, "Override GL_ARB_copy_image detection\n");
			fprintf(stderr, "Override GL_NV_copy_image detection\n");
		}
#endif

		return true;
	}
}

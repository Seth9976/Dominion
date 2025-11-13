// 函数: sub_700370
// 地址: 0x700370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
uint32_t edi
uint32_t var_14 = edi
int32_t* eax = sub_706a30(arg1 + 0x424c)
int32_t arg_1c
bool cond:0 = arg_1c == 1
uint32_t arg_8
uint32_t width = arg_8
uint32_t height = arg3
eax[0x4d] = arg2
uint32_t eax_1
eax_1.b = cond:0
eax[0x50].b = eax_1.b
int32_t eax_2 = 1
*eax = 0
eax[1] = 2
__builtin_memcpy(&eax[0x3a], 
    "\x2f\x81\x00\x00\x2f\x81\x00\x00\x2f\x81\x00\x00\x00\x26\x00\x00\x00\x26\x00\x00", 0x14)
eax[0x3f] = 0
int32_t edx = *(arg1 + 0x5040)

while (true)
    if (width s<= edx && height s<= edx)
        eax[0x51] = eax_2
        int32_t eax_3 = arg_1c
        uint32_t width_1
        
        if (eax_3 == 4)
            width_1 = 1
            (*__glewGenRenderbuffers)(width_1, &eax[0x39])
            int32_t var_18_1 = eax[0x39]
            width_1 = 0x8d41
            (*__glewBindRenderbuffer)(width_1, var_18_1)
            uint32_t height_1 = height
            width_1 = width
            (*__glewRenderbufferStorage)(0x8d41)
            return eax[0x52]
        
        uint32_t* esp_1
        
        if (eax_3 != 6)
            if (eax_3 == 5)
                void* eax_18 = data_cf65b8
                char const* const var_18_6
                char* ecx_2
                
                if (*(eax_18 + 0x1c) s<= 0)
                    var_18_6 = "OpenGLInterface::CreateTextureBuffer"
                    width_1 = 0x68c
                    ecx_2 = "gAppInterface->mMultisamples > 0"
                label_700800:
                    sub_63b870(eax_18, &data_801800, ecx_2, 
                        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", width_1, var_18_6)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t* params = &arg_1c
                width_1 = 0x8ca6
                glGetIntegerv(width_1, params)
                width_1 = 1
                (*__glewGenFramebuffers)(width_1, &eax[0x38])
                int32_t var_18_8 = eax[0x38]
                width_1 = 0x8d40
                (*__glewBindFramebuffer)(width_1, var_18_8)
                width_1 = 1
                (*__glewGenRenderbuffers)(width_1, &eax[0x39])
                int32_t var_18_10 = eax[0x39]
                width_1 = 0x8d41
                (*__glewBindRenderbuffer)(width_1, var_18_10)
                void* eax_23 = data_cf65b8
                width_1 = width
                (*__glewRenderbufferStorageMultisample)(0x8d41, *(eax_23 + 0x1c), 0x8058, width_1, 
                    height)
                int32_t var_18_12 = 0
                width_1 = 0x8d41
                (*__glewBindRenderbuffer)(width_1, var_18_12)
                int32_t var_18_13 = eax[0x39]
                width_1 = 0x8d41
                (*__glewFramebufferRenderbuffer)(0x8d40, 0x8ce0, width_1, var_18_13)
                eax_18 = (*__glewCheckFramebufferStatus)(0x8d40)
                
                if (eax_18 == 0x8cd5)
                    goto label_7005bc
                
                var_18_6 = "OpenGLInterface::CreateTextureBuffer"
                width_1 = 0x6c4
                ecx_2 = "status == GL_FRAMEBUFFER_COMPLETE"
                goto label_700800
            
            uint32_t* textures = &arg_8
            width_1 = 1
            glGenTextures(width_1, textures)
            bool cond:1_1 = arg_1c != 1
            int32_t* eax_28 = eax
            uint32_t texture = arg_8
            void* ecx_3 = data_147ded4
            *eax_28 = texture
            uint32_t target
            
            if (cond:1_1)
                if (*(ecx_3 + 0x40a8) != texture)
                    *(ecx_3 + 0x40a8) = texture
                    
                    if (*(ecx_3 + 0x40a4) != 0)
                        *(ecx_3 + 0x40a4) = 0
                        (*__glewActiveTexture)(0x84c0)
                    
                    width_1 = 0xde1
                    glBindTexture(width_1, texture)
                    eax_28 = eax
                
                target = 0xde1
            else
                if (*(ecx_3 + 0x4168) != texture)
                    *(ecx_3 + 0x4168) = texture
                    
                    if (*(ecx_3 + 0x40a4) != 0)
                        *(ecx_3 + 0x40a4) = 0
                        (*__glewActiveTexture)(0x84c0)
                    
                    width_1 = 0x8513
                    glBindTexture(width_1, texture)
                    eax_28 = eax
                
                target = 0x8513
            
            int32_t param2 = eax_28[0x3e]
            width_1 = 0x2800
            glTexParameteri(target, width_1, param2)
            int32_t param2_1 = eax[0x3d]
            width_1 = 0x2801
            glTexParameteri(target, width_1, param2_1)
            int32_t param2_2 = eax[0x3a]
            width_1 = 0x2802
            glTexParameteri(target, width_1, param2_2)
            int32_t param2_3 = eax[0x3b]
            width_1 = 0x2803
            glTexParameteri(target, width_1, param2_3)
            int32_t param2_4 = eax[0x3c]
            width_1 = 0x8072
            glTexParameteri(target, width_1, param2_4)
            esp_1 = &var_14
            int32_t eax_35 = arg_1c
            
            if (eax_35 != 0 && eax_35 != 1)
                if (eax_35 != 3)
                    char const* const var_18_24 = "OpenGLInterface::CreateTextureBuffer"
                    width_1 = 0x710
                    sub_63b870(eax_35, &data_801800, "Halt", 
                        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", width_1, var_18_24)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t* params_1 = &arg_1c
                width_1 = 0x8ca6
                glGetIntegerv(width_1, params_1)
                width_1 = 1
                (*__glewGenFramebuffers)(width_1, &eax[0x38])
                int32_t var_18_21 = eax[0x38]
                width_1 = 0x8d40
                (*__glewBindFramebuffer)(width_1, var_18_21)
                void* eax_38 = sub_6ff830(arg4)
                int32_t pixels = 0
                width_1 = *(eax_38 + 0xc)
                glTexImage2D(target, 0, *(eax_38 + 4), width, height, 0, *(eax_38 + 8), width_1, 
                    pixels)
                int32_t var_18_22 = 0
                width_1 = arg_8
                (*__glewFramebufferTexture2D)(0x8d40, 0x8ce0, 0xde1, width_1, var_18_22)
                int32_t eax_41 = (*__glewCheckFramebufferStatus)(0x8d40)
                
                if (eax_41 != 0x8cd5)
                    char const* const var_18_26 = "OpenGLInterface::CreateTextureBuffer"
                    width_1 = 0x709
                    sub_63b870(eax_41, &data_801800, "status == GL_FRAMEBUFFER_COMPLETE", 
                        "C:\x\ax2017\Engine\OpenGLGraphics.cpp", width_1, var_18_26)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
            label_7005bc:
                int32_t var_18_15 = arg_1c
                width_1 = 0x8d40
                esp_1 = &width_1
                (*__glewBindFramebuffer)()
        else
            void* eax_9 = data_cf65b8
            
            if (*(eax_9 + 0x1c) s<= 0)
                char const* const var_18_25 = "OpenGLInterface::CreateTextureBuffer"
                width_1 = 0x673
                sub_63b870(eax_9, &data_801800, "gAppInterface->mMultisamples > 0", 
                    "C:\x\ax2017\Engine\OpenGLGraphics.cpp", width_1, var_18_25)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            width_1 = 1
            (*__glewGenRenderbuffers)(width_1, &eax[0x39])
            int32_t var_18_3 = eax[0x39]
            width_1 = 0x8d41
            (*__glewBindRenderbuffer)(width_1, var_18_3)
            void* eax_12 = data_cf65b8
            width_1 = width
            (*__glewRenderbufferStorageMultisample)(0x8d41, *(eax_12 + 0x1c), 0x81a5, width_1, 
                height)
            int32_t var_18_5 = 0
            width_1 = 0x8d41
            esp_1 = &width_1
            (*__glewBindRenderbuffer)()
        
        *esp_1
        esp_1[1]
        esp_1[2]
        return eax[0x52]
    
    width u>>= 1
    height u>>= 1
    eax_2 += 1

// 函数: sub_6ffb60
// 地址: 0x6ffb60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7724e5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result_1 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** Next_1
struct _EXCEPTION_REGISTRATION_RECORD** Next_3 = Next_1
char const* const var_3c_1
int32_t var_38
char const* const var_34_1
char* ecx

if (Next_3 != 0)
    result_1 = zx.d(Next_3.w)
    
    if (result_1 u>= *(arg1 + 0x4250))
    label_6ffebf:
        var_34_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
        var_38 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_3c_1 = "C:\x\ax2017\Engine\DataArray.h"
    else
        result_1 = *(arg1 + 0x424c) + result_1 * 0x14c
        struct _EXCEPTION_REGISTRATION_RECORD** result = result_1
        
        if (result_1[0x52] != Next_3)
            goto label_6ffebf
        
        if (result_1[4] == 0)
            struct _EXCEPTION_REGISTRATION_RECORD* texture = *result_1
            result_1 = (*__glewUnmapBuffer)(0x88ec)
            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = arg2
            
            if (result_2 == 0)
                sub_69fd50(result_1, "!Null\Null", &Next_1, 3)
                struct _EXCEPTION_REGISTRATION_RECORD** result_4 = result_2
                char* Next_2 = Next_1
                char* const Next_4 = &data_801800
                
                if (Next_2 != 0)
                    Next_4 = Next_2
                
                result_1 = sub_69f030(Next_4, result_2 + 3)
                result_2 = result_1
                int32_t var_8_1 = 1
                
                if (data_cf65bc != 0)
                    result_1 = Next_1
                    
                    if (result_1 != 0 && *result_1 != 0)
                        result_1 = sub_63d4e0(&Next_1)
                        int32_t temp3_1 = result_1[1]
                        result_1[1] -= 1
                        
                        if (temp3_1 == 1)
                            result_1 = sub_64c080(result_1, &result_1[3][2])
                            Next_1 = &data_801800
                
                int32_t var_8_2 = 0xffffffff
                goto label_6ffc86
            
            if (result_2[1] == 3)
            label_6ffc86:
                struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_2
                
                if (*result_2 == 0)
                    sub_69f4a0(result_1, 0, result_2, 1)
                
                struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *result_2
                result_2[7] = &result_2[7]->Next + 1
                int32_t var_8_3 = 2
                struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_5->Next->Next
                Next_1 = Next
                int32_t ebx_2 = Next->__offset(0x10).d * arg4 + arg3
                int32_t var_38_1
                char* ecx_7
                
                if (ebx_2 s< Next->__offset(0x3c).d)
                    int32_t* ebx_4 = (ebx_2 << 4) + Next->__offset(0x48).d
                    int32_t edi_2 = result[0x51]
                    uint32_t width = divu.dp.d(0:(Next->Next), edi_2) u>> arg3.b
                    
                    if (width u< 1)
                        width = 1
                    
                    uint32_t height = divu.dp.d(0:(Next_1[1]), edi_2) u>> arg3.b
                    
                    if (height u< 1)
                        height = 1
                    
                    void* eax_13 = sub_6ff830(Next_1[6])
                    Next = Next_1[7]
                    
                    if (Next == 0)
                        void* ecx_9 = data_147ded4
                        struct _EXCEPTION_REGISTRATION_RECORD* texture_1 = texture
                        
                        if (*(ecx_9 + 0x40a8) != texture_1)
                            *(ecx_9 + 0x40a8) = texture_1
                            
                            if (*(ecx_9 + 0x40a4) != 0)
                                *(ecx_9 + 0x40a4) = 0
                                (*__glewActiveTexture)(0x84c0)
                                texture_1 = texture
                            
                            glBindTexture(0xde1, texture_1)
                        
                        switch (Next_1[6] - 0xd)
                            case 0, 1, 2, 3, 4, 5, 8
                                (*__glewCompressedTexImage2D)(0xde1, arg3, *(eax_13 + 4), width, 
                                    height, 0, *ebx_4, 0)
                            default
                                glTexImage2D(0xde1, arg3, *(eax_13 + 4), width, height, 0, 
                                    *(eax_13 + 8), *(eax_13 + 0xc), nullptr)
                        
                        if (*(data_cf65b8 + 0x21) != 0 && Next_1[6] s< 0x6f)
                            (*__glewGenerateMipmap)(0xde1)
                        
                    label_6ffe82:
                        (*__glewBindBuffer)(0x88ec, 0)
                        result[0x36] = 0
                        
                        if (result_2 != 0)
                            result_2[7] -= 1
                        
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
                    
                    if (Next == 1)
                        void* eax_26 = data_147ded4
                        
                        if (*(eax_26 + 0x4168) != texture)
                            *(eax_26 + 0x4168) = texture
                            
                            if (*(eax_26 + 0x40a4) != 0)
                                *(eax_26 + 0x40a4) = 0
                                (*__glewActiveTexture)(0x84c0)
                            
                            glBindTexture(0x8513, texture)
                        
                        glTexImage2D(*((arg4 << 2) + &data_800a58), arg3, *(eax_13 + 4), width, 
                            height, 0, *(eax_13 + 8), *(eax_13 + 0xc), nullptr)
                        goto label_6ffe82
                    
                    char const* const var_34_5 = "OpenGLInterface::UnlockTextureBuffer"
                    var_38_1 = 0x5f0
                    ecx_7 = "Halt"
                else
                    char const* const var_34_2 = "OpenGLInterface::UnlockTextureBuffer"
                    var_38_1 = 0x5c4
                    ecx_7 = "imageIndex < pTextureData->imageCount"
                
                sub_63b870(Next, &data_801800, ecx_7, "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 
                    var_38_1, "OpenGLInterface::UnlockTextureBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            var_34_1 = "DefAutoLock::DefAutoLock"
            var_38 = 0x19
            var_3c_1 = "C:\x\ax2017\Engine\DefLoad.h"
            ecx = "assetPtr && assetPtr->assetType == assetType"
        else
            var_34_1 = "OpenGLInterface::UnlockTextureBuffer"
            var_38 = 0x5b5
            var_3c_1 = "C:\x\ax2017\Engine\OpenGLGraphics.cpp"
            ecx = "bufferData->mIsLoading == 0"
else
    var_34_1 = "DataArray<struct OpenGLBufferData>::DataArrayGet"
    var_38 = 0x6c
    ecx = "id != DATAID_NULL"
    var_3c_1 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(result_1, &data_801800, ecx, var_3c_1, var_38, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

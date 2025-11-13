// 函数: sub_6a0670
// 地址: 0x6a0670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_fullpath@D@@YAPADQADQBDIH1H@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t performanceCount_10 = arg3
int32_t performanceCount_12 = performanceCount_10
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t performanceCount_1 = performanceCount
char* const ebx = &data_801800
int32_t performanceCount_2 = performanceCount_1
int32_t var_48
int32_t var_40 = var_48
int32_t performanceCount_6
int32_t performanceCount_3
int32_t performanceCount_4

if (performanceCount_10 != 0)
    if (*(performanceCount_10 + 4) != 3)
        sub_63b870(performanceCount_1, &data_801800, 
            "assetPtr && assetPtr->assetType == assetType", "C:\x\ax2017\Engine\DefLoad.h", 0x19, 
            "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    performanceCount_4 = performanceCount_10
    performanceCount_6 = performanceCount_4
else
    sub_69fd50(performanceCount_1, "!Null\Null", &performanceCount_3, 3)
    int32_t performanceCount_13 = performanceCount_10
    int32_t performanceCount_7 = performanceCount_3
    char* const performanceCount_15 = &data_801800
    
    if (performanceCount_7 != 0)
        performanceCount_15 = performanceCount_7
    
    performanceCount_1 = sub_69f030(performanceCount_15, performanceCount_10 + 3)
    performanceCount_4 = performanceCount_1
    performanceCount_6 = performanceCount_4
    int32_t var_8_1 = 1
    
    if (data_cf65bc != performanceCount_10)
        performanceCount_1 = performanceCount_3
        
        if (performanceCount_1 != 0 && *performanceCount_1 != 0)
            performanceCount_1 = sub_63d4e0(&performanceCount_3)
            int32_t temp0_1 = *(performanceCount_1 + 4)
            *(performanceCount_1 + 4) -= 1
            
            if (temp0_1 == 1)
                performanceCount_1 =
                    sub_64c080(performanceCount_1, *(performanceCount_1 + 0xc) + 0x10)
                performanceCount_3 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    performanceCount_10 = performanceCount_4

int32_t performanceCount_5 = performanceCount_4

if (*performanceCount_10 == 0)
    sub_69f4a0(performanceCount_1, 0, performanceCount_10, 1)

int32_t* eax_3 = *performanceCount_10
*(performanceCount_10 + 0x1c) += 1
int32_t* eax_4 = *eax_3
int32_t var_8_3 = 2
int32_t performanceCount_14 = *eax_4
int32_t performanceCount_18 = performanceCount_14
int32_t edi_2 = *(performanceCount_14 + 0x10) * arg4 + arg5
int32_t var_78
char const* const ecx_5

if (edi_2 s< *(performanceCount_14 + 0x3c))
    uint32_t edx_5 = *performanceCount_14 u>> arg5.b
    uint32_t* edi_4 = (edi_2 << 4) + *(performanceCount_14 + 0x48)
    
    if (edx_5 u< 1)
        edx_5 = 1
    
    uint32_t eax_6 = *(performanceCount_14 + 4) u>> arg5.b
    int32_t* ecx_6 = data_147b070
    
    if (eax_6 u< 1)
        eax_6 = 1
    
    int32_t var_18 = 1
    int32_t performanceCount_17
    performanceCount_14 =
        (*(*ecx_6 + 0x18))(performanceCount_12, arg2, arg5, arg4, &performanceCount_17, &var_18)
    int32_t performanceCount_8 = performanceCount_14
    performanceCount_3 = performanceCount_8
    
    if (performanceCount_8 != 0)
        performanceCount_14 = eax_4[6]
        int32_t performanceCount_20
        
        if (performanceCount_14 == 0 || *performanceCount_14 == 0)
            performanceCount_14 = performanceCount_18
            
            if (*(performanceCount_14 + 0x14) != 8)
                int32_t edx_12 = *(performanceCount_14 + 0x18)
                
                if (edx_12 - 0xd u> 8)
                label_6a09de:
                    performanceCount_14 = performanceCount_17
                    
                    if (performanceCount_14 != 0)
                        int32_t performanceCount_11 = performanceCount_8
                        uint32_t var_5c_1 = edx_5
                        uint32_t var_58_1 = eax_6
                        int32_t performanceCount_16 = performanceCount_14
                        int32_t var_50_1 = edx_12
                        char* eax_17 = sub_687730(*edi_4)
                        sub_69f3e0(eax_17, eax_17, performanceCount_12, 0, *edi_4, edi_4[2])
                        performanceCount_20 = performanceCount_12
                        
                        if (sub_6ab1b0(performanceCount_18, &performanceCount_11, 
                                *(performanceCount_18 + 0x14), eax_17, *edi_4, var_18) == 0)
                            char* eax_20 = *(performanceCount_20 + 0x20)
                            char* const ecx_24 = &data_801800
                            
                            if (eax_20 != 0)
                                ecx_24 = eax_20
                            
                            char* const var_74_16 = ecx_24
                            sub_63b5f0("Failed to read texture %s")
                        
                        if (eax_17 != 0)
                            _aligned_free(eax_17)
                        
                        goto label_6a0858
                    
                    char const* const var_74_18 = "TextureLoad"
                    var_78 = 0x1a4
                    ecx_5 = "destPitch != 0"
                else
                    performanceCount_14 = zx.d(*(edx_12 + 0x6a0ac3))
                    
                    switch (performanceCount_14)
                        case 0
                            if (var_18 == 1)
                                performanceCount_20 = performanceCount_12
                                sub_69f3e0(performanceCount_14, performanceCount_8, 
                                    performanceCount_20, 0, *edi_4, edi_4[2])
                                goto label_6a0858
                            
                            char const* const var_74_13 = "TextureLoad"
                            var_78 = 0x19f
                            ecx_5 = "divisor == 1"
                        case 1
                            goto label_6a09de
            else if (var_18 != 1)
                char const* const var_74_8 = "TextureLoad"
                var_78 = 0x173
                ecx_5 = "divisor == 1"
            else if (performanceCount_17 != 0)
                uint32_t ecx_14 = sub_6a9570(edx_5, *(performanceCount_14 + 0x18))
                uint32_t var_3c_2 = ecx_14
                
                if (performanceCount_17 != ecx_14)
                    int32_t performanceCount_21 = performanceCount_18
                    int32_t edx_9 = 0
                    int32_t var_2c_2 = 0
                    int32_t i = 0
                    
                    if (*(performanceCount_21 + 4) s> 0)
                        int32_t performanceCount_19 = performanceCount_12
                        int32_t performanceCount_9 = performanceCount_3
                        
                        do
                            sub_69f3e0(performanceCount_21, performanceCount_9, 
                                performanceCount_19, edx_9, ecx_14, edi_4[2])
                            performanceCount_21 = performanceCount_18
                            i += 1
                            ecx_14 = var_3c_2
                            edx_9 = var_2c_2 + ecx_14
                            performanceCount_9 += performanceCount_17
                            performanceCount_19 = performanceCount_12
                            var_2c_2 = edx_9
                        while (i s< *(performanceCount_21 + 4))
                        
                        performanceCount_4 = performanceCount_6
                        ebx = &data_801800
                    
                    goto label_6a0852
                
                performanceCount_14 = *edi_4
                
                if (ecx_14 * eax_6 == performanceCount_14)
                    performanceCount_20 = performanceCount_12
                    sub_69f3e0(performanceCount_14, performanceCount_3, performanceCount_20, 0, 
                        performanceCount_14, edi_4[2])
                    goto label_6a0858
                
                char const* const var_74_10 = "TextureLoad"
                var_78 = 0x17a
                ecx_5 = "mipHeight * sourcePitch == pImage->imageSize"
            else
                char const* const var_74_9 = "TextureLoad"
                var_78 = 0x174
                ecx_5 = "destPitch != 0"
        else
            if (var_18 == 1)
                uint32_t count = sub_6a9660(performanceCount_18, *(performanceCount_18 + 4), 
                    *performanceCount_18, *(performanceCount_18 + 0x18))
                memcpy(performanceCount_3, *(performanceCount_14 + 0xc), count)
            label_6a0852:
                performanceCount_20 = performanceCount_12
            label_6a0858:
                
                if (sub_64b4d0(&performanceCount_2) s> 0x64)
                    char* eax_12 = *(performanceCount_20 + 0x20)
                    
                    if (eax_12 != 0)
                        ebx = eax_12
                    
                    uint32_t var_74_6 = sub_64b4d0(&performanceCount_2)
                    char* const var_78_3 = ebx
                    sub_63b5f0("slow loading texture %s %d ms")
                
                int32_t result = (*(*data_147b070 + 0x1c))(performanceCount_20, arg2, arg5, arg4)
                
                if (performanceCount_4 != 0)
                    *(performanceCount_4 + 0x1c) -= 1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            char const* const var_74_4 = "TextureLoad"
            var_78 = 0x16d
            ecx_5 = "divisor == 1"
    else
        char const* const var_74_3 = "TextureLoad"
        var_78 = 0x167
        ecx_5 = "pBits"
else
    char const* const var_74_1 = "TextureLoad"
    var_78 = 0x15c
    ecx_5 = "imageIndex < pTextureData->imageCount"

sub_63b870(performanceCount_14, &data_801800, ecx_5, "C:\x\ax2017\Engine\Texture.cpp", var_78, 
    "TextureLoad")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

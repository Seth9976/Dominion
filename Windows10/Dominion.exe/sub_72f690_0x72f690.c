// 函数: sub_72f690
// 地址: 0x72f690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772755
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2
int32_t* ecx
int32_t result_1 = sub_72f3e0(ecx)
int32_t result = result_1
char* var_14
int32_t result_2
int32_t result_3

if (result_1 != 0)
    if (*(result_1 + 4) != 3)
        sub_63b870(result_1, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result_2 = result_1
    result_3 = result_1
else
    sub_69fd50(result_1, "!Null\Null", &var_14, 3)
    int32_t var_8_1 = 0
    char* const ecx_2 = &data_801800
    char* eax_3 = var_14
    
    if (eax_3 != 0)
        ecx_2 = eax_3
    
    result_1 = sub_69f030(ecx_2, 3)
    result_2 = result_1
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* ecx_3 = var_14
        
        if (ecx_3 != 0 && *ecx_3 != 0)
            result_1 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(result_1 + 4)
            *(result_1 + 4) -= 1
            
            if (temp0_1 == 1)
                result_1 = sub_64c080(result_1, *(result_1 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    result_3 = result_2

int32_t result_4 = result_2

if (*result_3 == 0)
    sub_69f4a0(result_1, 0, result_3, 1)

int32_t* eax_4 = *result_3
*(result_3 + 0x1c) += 1
int32_t* eax_5 = *eax_4
int32_t var_8_4 = 2
int32_t* ebx = *eax_5
char const* const var_68_1
int32_t var_64_1
char const* const var_60_1
int32_t* eax_6
char* ecx_7
int32_t edx_4

if (ebx == 0)
    eax_6 = _aligned_malloc(0x50, 0x10)
    
    if (eax_6 != 0)
        sub_69ca80(eax_6, data_17774e8)
        *eax_5 = eax_6
        int32_t* ecx_10 = *var_18
        
        if (ecx_10[1] != 3)
            sub_63b870(eax_5, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* eax_8 = sub_5af880(ecx_10)
        *eax_6 = **eax_8
        eax_6[1] = *(*eax_8 + 4)
        eax_6[4] = arg3
        int32_t ebx_2 = arg3 * 6
        eax_6[0xf] = ebx_2
        int32_t count = ebx_2 << 4
        eax_6[6] = *(*eax_8 + 0x18)
        int32_t eax_11 = sub_687730(count)
        memset(eax_11, 0, count)
        ebx = eax_6
        edx_4 = arg3
        ebx[0x12] = eax_11
        ebx[5] = 8
        ebx[7] = 1
        ebx[8] = 1
        ebx[9] = 1
        goto label_72f834
    
    var_60_1 = "XMalloc"
    var_64_1 = 0x57
    var_68_1 = "C:\x\ax2017\Engine\xMemory.cpp"
    ecx_7 = "pBuffer"
label_72f9e9:
    sub_63b870(eax_6, &data_801800, ecx_7, var_68_1, var_64_1, var_60_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

edx_4 = arg3
eax_6 = edx_4 * 6

if (ebx[0xf] != eax_6)
    var_60_1 = "TextureMakeCubeMap"
    var_64_1 = 0xaf
    ecx_7 = "pTextureData->imageCount == mips * 6"
label_72f9df:
    var_68_1 = "C:\x\ax2017\Engine\IBLImport.cpp"
    goto label_72f9e9

if (ebx[0x12] == 0)
    var_60_1 = "TextureMakeCubeMap"
    var_64_1 = 0xb0
    ecx_7 = "pTextureData->pImages"
    goto label_72f9df

label_72f834:
int32_t ecx_17 = ebx[1]
int32_t eax_12 = 0
int32_t edi_2 = *ebx
int32_t var_24 = ecx_17
int32_t var_2c_1 = 0

if (edx_4 s> 0)
    int32_t var_1c_2 = edx_4 << 4
    char* edx_6 = var_18
    
    while (true)
        int32_t var_28_2 = 0
        int32_t var_20_1 = eax_12 << 4
        var_14 = edx_6
        
        while (true)
            int32_t ecx_18 = ebx[6]
            int32_t var_48_1 = edi_2
            int32_t var_3c_1 = ecx_18
            int32_t eax_15 = sub_6a9450(ecx_18) * edi_2
            uint32_t _Count = eax_15 * ecx_17
            int32_t var_64_4
            char* ecx_26
            
            if (_Count s<= 0)
                char const* const var_60_6 = "XMalloc"
                var_64_4 = 0x3d
                ecx_26 = "size > 0"
            else if (_Count s>= 0x77359400)
                char const* const var_60_5 = "XMalloc"
                var_64_4 = 0x3e
                ecx_26 = "size < 2000000000"
            else
                _Count = _aligned_malloc(_Count, 0x10)
                
                if (_Count == 0)
                    char const* const var_60_4 = "XMalloc"
                    var_64_4 = 0x57
                    ecx_26 = "pBuffer"
                else
                    int32_t* ecx_19 = data_147b070
                    char* edx_7 = var_14
                    uint32_t _Count_1 = _Count
                    (*(*ecx_19 + 0x84))(*edx_7, &_Count_1)
                    int32_t* edx_9 = ebx[0x12] + var_20_1
                    *edx_9 = eax_15 * ecx_17
                    edx_9[2] = _Count_1
                    int32_t eax_20 = var_28_2 + 1
                    var_14 = &var_14[edx_4 << 2]
                    var_20_1 += var_1c_2
                    ecx_17 = var_24
                    var_28_2 = eax_20
                    
                    if (eax_20 s>= 6)
                        break
                    
                    continue
            
            sub_63b870(_Count, &data_801800, ecx_26, "C:\x\ax2017\Engine\xMemory.cpp", var_64_4, 
                "XMalloc")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t eax_22
        int32_t edx_10
        edx_10:eax_22 = sx.q(ecx_17)
        int32_t eax_25
        int32_t edx_11
        edx_11:eax_25 = sx.q(edi_2)
        ecx_17 = (eax_22 - edx_10) s>> 1
        edx_6 = &var_18[4]
        eax_12 = var_2c_1 + 1
        edi_2 = (eax_25 - edx_11) s>> 1
        var_24 = ecx_17
        var_2c_1 = eax_12
        var_18 = edx_6
        
        if (eax_12 s>= arg3)
            break

if (result_2 != 0)
    *(result_2 + 0x1c) -= 1

fsbase->NtTib.ExceptionList = ExceptionList
return result

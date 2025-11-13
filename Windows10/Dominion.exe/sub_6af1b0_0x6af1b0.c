// 函数: sub_6af1b0
// 地址: 0x6af1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fc55
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_4 = arg3[2] - *arg3
char const* const var_78
int32_t var_74
char const* const var_70
char* ecx_1

if (eax_4 == arg4[1])
    eax_4 = arg3[3] - arg3[1]
    
    if (eax_4 == arg4[2])
        int32_t* var_30
        int32_t* eax_10
        int32_t* edx
        int32_t esi
        
        if (arg2 == 0)
            sub_69fd50(eax_4, "!Null\Null", &var_30, 3)
            int32_t var_8_1 = 0
            char* const ecx_3 = &data_801800
            int32_t* eax_6 = var_30
            
            if (eax_6 != 0)
                ecx_3 = eax_6
            
            int32_t eax_7
            eax_7, edx = sub_69f030(ecx_3, 3)
            esi = eax_7
            int32_t var_8_2 = 1
            
            if (data_cf65bc != 0)
                int32_t* eax_8 = var_30
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_63d4e0(&var_30)
                    int32_t temp1_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                        var_30 = &data_801800
            
            eax_10 = esi
            int32_t var_8_3 = 0xffffffff
            var_30 = eax_10
            goto label_6af2c9
        
        if (*(arg2 + 4) == 3)
            esi = arg2
            var_30 = arg2
            eax_10 = arg2
        label_6af2c9:
            int32_t var_3c = esi
            
            if (*eax_10 == 0)
                edx.b = 0
                sub_69f4a0(eax_10, edx.b, eax_10, 1)
                eax_10 = var_30
            
            eax_10[7] += 1
            int32_t var_8_4 = 2
            int32_t* ecx_7 = ***eax_10
            var_30 = ecx_7
            int32_t var_4c = 0
            int32_t var_48 = 0
            int32_t eax_13 = *ecx_7
            int32_t ecx_8 = ecx_7[1]
            var_4c.o = var_4c.o
            void var_60
            int128_t xmm0_1 = *sub_6c3e30(&var_60, arg3, &var_4c, &var_60)
            int32_t eax_16 = xmm0_1
            var_4c.o = xmm0_1
            int32_t var_74_1
            char const* const ecx_11
            
            if (eax_16 != *arg3)
            label_6af42b:
                char const* const var_70_4 = "Dx11GraphicsInterface::UpdateTextureBuffer"
                var_74_1 = 0x30b
                ecx_11 = "RectIntersect(RectISet(V2I0, textureSize), region) == region"
            else
                eax_16 = eax_13
                
                if (eax_16 != arg3[2])
                    goto label_6af42b
                
                eax_16 = var_48
                
                if (eax_16 != arg3[1])
                    goto label_6af42b
                
                eax_16 = ecx_8
                
                if (eax_16 != arg3[3])
                    goto label_6af42b
                
                eax_16 = var_30[6]
                
                if (eax_16 == arg4[4])
                    int32_t* eax_19 = sub_6b2ec0(arg1 + 0x38, sub_6a0f60(arg2))
                    int32_t var_2c = *arg3
                    int32_t var_28 = arg3[1]
                    int32_t* eax_21 = *(arg1 + 8)
                    int32_t var_20 = arg3[2]
                    int32_t var_24 = 0
                    int32_t var_1c = arg3[3]
                    int32_t var_18 = 1
                    uint32_t result =
                        (*(*eax_21 + 0xc0))(eax_21, eax_19[7], 0, &var_2c, *arg4, arg4[3], 0)
                    
                    if (esi != 0)
                        *(esi + 0x1c) -= 1
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    CookieCheckFunction(result)
                    return result
                
                char const* const var_70_2 = "Dx11GraphicsInterface::UpdateTextureBuffer"
                var_74_1 = 0x30c
                ecx_11 = "pTextureData->texFormat == data.format"
            
            sub_63b870(eax_16, &data_801800, ecx_11, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 
                var_74_1, "Dx11GraphicsInterface::UpdateTextureBuffer")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        var_70 = "DefAutoLock::DefAutoLock"
        var_74 = 0x19
        var_78 = "C:\x\ax2017\Engine\DefLoad.h"
        ecx_1 = "assetPtr && assetPtr->assetType == assetType"
    else
        var_70 = "Dx11GraphicsInterface::UpdateTextureBuffer"
        var_74 = 0x305
        var_78 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
        ecx_1 = "RectIHeight(region) == data.height"
else
    var_70 = "Dx11GraphicsInterface::UpdateTextureBuffer"
    var_74 = 0x304
    var_78 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
    ecx_1 = "RectIWidth(region) == data.width"

sub_63b870(eax_4, &data_801800, ecx_1, var_78, var_74, var_70)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

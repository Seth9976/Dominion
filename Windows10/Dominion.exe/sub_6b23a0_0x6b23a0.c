// 函数: sub_6b23a0
// 地址: 0x6b23a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_18 = arg2
void* eax_3 = data_cf65b8
int64_t var_44 = 0
int32_t* result_2 = *(eax_3 + 0x1c)
int32_t ecx_1 = *(eax_3 + 0x18)
int64_t var_30 = 0
int32_t var_28 = 0
int32_t var_c = 0
int32_t var_1c = 2
int32_t var_34 = 0x57
int32_t var_3c = 0
int32_t var_38 = 1
int32_t var_20 = 0x20
int32_t var_14 = 1
int32_t var_10 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_60 = 0x57
int32_t var_5c = 4
var_44:4.d = ecx_1
int32_t var_24 = 0
int32_t edi = *(eax_3 + 0x14)
var_44.d = edi
int32_t* result

if (result_2 s<= 1)
    result = 1
else
    result = result_2
    int32_t var_5c_1 = 6

int32_t* result_1 = result
*(arg1 + 0x60) = result
int32_t ebx
ebx.b = result_2 s> 1
int32_t ecx_2
ecx_2.b = result_2 s> 1
char const* const var_78_1
int32_t var_74
char const* const var_70
char* ecx_4

if (*(arg1 + 0x10) == 0)
    *(arg1 + 0x10) = sub_6a1230(result, ecx_1, edi, 1, (ecx_2 << 1) + 3, 0)
    result = sub_6b2e00(arg1 + 0x38)
    *result = 2
    int32_t* ecx_7 = *(arg1 + 0x10)
    
    if (ecx_7[1] == 3)
        void* eax_5 = sub_5af880(ecx_7)
        void* edi_2 = &result[7]
        void* var_48_2 = &result[0xc]
        *(eax_5 + 8) = result[0x92]
        void* ecx_9 = data_cf65b8
        
        if (*(ecx_9 + 0x20) != 0)
            int32_t eax_6 =
                sub_6a1230(eax_5, *(ecx_9 + 0x18), *(ecx_9 + 0x14), 0x50, (ebx << 1) + 4, 0)
            ecx_9 = data_cf65b8
            *(arg1 + 0x14) = eax_6
        
        int32_t eax_7 = var_14
        
        if (*(ecx_9 + 0x22) != 0)
            eax_7 = 0
        
        int32_t var_14_1 = eax_7
        result = (*(*arg3 + 0x28))(arg3, *(arg1 + 4), &var_44, arg1 + 0xc)
        
        if (result s>= 0)
            int32_t* eax_9 = *(arg1 + 0xc)
            result = (*(*eax_9 + 0x24))(eax_9, 0, 0x87c808, edi_2)
            
            if (result s>= 0)
                int32_t* eax_10 = *(arg1 + 4)
                result = (*(*eax_10 + 0x24))(eax_10, *edi_2, &var_60, var_48_2)
                
                if (result s>= 0)
                    CookieCheckFunction(result)
                    return result
                
                var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
                var_74 = 0x9f2
            else
                var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
                var_74 = 0x9ef
        else
            var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
            var_74 = 0x9ec
        
        ecx_4 = "SUCCEEDED(hr)"
        var_78_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
    else
        var_70 = "TextureGetDef"
        var_74 = 0x89
        var_78_1 = "C:\x\ax2017\Engine\Texture.h"
        ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
else
    var_70 = "Dx11GraphicsInterface::GraphicsInterfaceAttachSwapChain"
    var_74 = 0x9d0
    ecx_4 = "mainBackBufferAsset == NULL"
    var_78_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"

sub_63b870(result, &data_801800, ecx_4, var_78_1, var_74, var_70)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

// 函数: sub_6b0a60
// 地址: 0x6b0a60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
RECT rect
BOOL result = GetClientRect(*(data_147b078 + 0x24), &rect)
int32_t right = rect.right
int32_t bottom = rect.bottom

if (right != 0 && bottom != 0)
    int32_t* ecx = *(arg1 + 0x10)
    
    if (ecx != 0)
        char const* const var_44_1
        int32_t var_40_1
        char const* const var_3c_4
        char* ecx_8
        
        if (ecx[1] != 3)
        label_6b0c1b:
            var_3c_4 = "TextureGetDef"
            var_40_1 = 0x89
            var_44_1 = "C:\x\ax2017\Engine\Texture.h"
            ecx_8 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
        label_6b0c34:
            sub_63b870(result, &data_801800, ecx_8, var_44_1, var_40_1, var_3c_4)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        BOOL* eax_3 = sub_5af880(ecx)
        result = *eax_3
        
        if (*result != right || *(result + 4) != bottom)
            int32_t* ecx_1 = *(arg1 + 8)
            (*(*ecx_1 + 0x84))(ecx_1, 0, 0, 0)
            struct _EXCEPTION_REGISTRATION_RECORD** eax_5 = sub_6a0f60(*(arg1 + 0x10))
            int32_t* eax_6 = sub_6b2ec0(data_147b078 + 0x38, eax_5)
            int32_t* ecx_5 = eax_6[0xc]
            (*(*ecx_5 + 8))(ecx_5)
            int32_t* eax_8 = eax_6[7]
            eax_6[0xc] = 0
            (*(*eax_8 + 8))(eax_8)
            eax_6[7] = 0
            int32_t* eax_9 = *(arg1 + 0xc)
            int32_t edx_2
            result, edx_2 = (*(*eax_9 + 0x34))(eax_9, 0, 0, 0, 0, 0)
            
            if (result == 0x887a0005 || result == 0x887a0007)
                sub_6b09d0(result, edx_2, arg1, result)
                noreturn
            
            if (result s< 0)
                var_3c_4 = "Dx11GraphicsInterface::ResizeWindow"
                var_40_1 = 0x604
                var_44_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
                ecx_8 = "SUCCEEDED(hr)"
                goto label_6b0c34
            
            int32_t* eax_10 = *(arg1 + 0xc)
            result = (*(*eax_10 + 0x24))(eax_10, 0, 0x87c808, &eax_6[7])
            
            if (result s< 0)
                var_3c_4 = "Dx11GraphicsInterface::ResizeWindow"
                var_40_1 = 0x607
                var_44_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
                ecx_8 = "SUCCEEDED(hr)"
                goto label_6b0c34
            
            **eax_3 = right
            *(*eax_3 + 4) = bottom
            int32_t* eax_13 = *(arg1 + 4)
            result = (*(*eax_13 + 0x24))(eax_13, eax_6[7], 0, &eax_6[0xc])
            
            if (result s< 0)
                var_3c_4 = "Dx11GraphicsInterface::ResizeWindow"
                var_40_1 = 0x60d
                var_44_1 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
                ecx_8 = "SUCCEEDED(hr)"
                goto label_6b0c34
            
            int32_t* ecx_12 = *(arg1 + 0x14)
            
            if (ecx_12 != 0)
                if (ecx_12[1] != 3)
                    goto label_6b0c1b
                
                int32_t** eax_14 = sub_5af880(ecx_12)
                sub_6a10a0(eax_14)
                **eax_14 = right
                result = *eax_14
                *(result + 4) = bottom

CookieCheckFunction(result)
return result

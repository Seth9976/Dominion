// 函数: sub_6962c0
// 地址: 0x6962c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = *(arg4 + 4)

if (edx u> 0x25)
    int32_t __saved_ebp
    sub_63b870(__security_cookie ^ &__saved_ebp, &data_801800, 
        "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
        "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 0xc3, "AssetTypeGetInfo")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* ebx = *((edx << 5) + data_147b07c + 0x1c)

if (*(arg4 + 0x10) != 0)
    goto label_6963e8

int32_t _Buffer
int32_t var_18
int32_t var_10
int32_t eax_3

if (sub_696240(arg2, &var_18).b != 0 && var_10 == 1 && fseek(*arg2, arg2[1], 0) == 0
        && fread(&_Buffer, 0xa8, 1, *arg2) == 1)
    arg2[1] += 0xa8
    int32_t var_bc
    
    if (var_bc == *(ebx + 0x18))
        int32_t _Buffer_1 = _Buffer
        
        if (_Buffer_1 u> 0x25)
            sub_63b870(var_bc, &data_801800, "assetType >= 0 && assetType < ASSET_TYPE_COUNT", 
                "C:\x\ax2017\Engine\AssetTypeRegistry.cpp", 0xc3, "AssetTypeGetInfo")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* ecx_5 = (_Buffer_1 << 5) + data_147b07c
        int32_t var_b8
        
        if ((*(ecx_5 + 0x18) & 1) != 0 || var_b8 == *(ecx_5 + 0x14))
            int32_t var_b4
            *(arg4 + 0x10) = var_b4
            int32_t var_b0
            *(arg4 + 0x14) = var_b0
            int32_t var_ac
            *(arg4 + 0x18) = var_ac
        label_6963e8:
            uint32_t _ElementSize_1 = *(arg4 + 0x18)
            uint32_t _ElementSize = _ElementSize_1
            
            if (_ElementSize_1 == 0)
                _ElementSize_1 = *(arg4 + 0x14)
                _ElementSize = _ElementSize_1
            
            int32_t* eax_11 = sub_687730(_ElementSize_1 + 0x10)
            
            if (fseek(*arg2, *(arg4 + 0x10), 0) == 0)
                eax_3 = fread(&eax_11[4], _ElementSize, 1, *arg2)
                
                if (eax_3 == 1
                        && sub_695870(eax_3, &eax_11[4], &eax_11[4], ebx, nullptr, _ElementSize).b
                        != 0)
                    *arg3 = eax_11
                    *eax_11 = &eax_11[4]
                    *(*arg3 + 8) = 1
                    *(*arg3 + 0xc) = ebx
                    *(*arg3 + 4) = 0
                    uint32_t eax_14
                    eax_14.b = 1
                    CookieCheckFunction(eax_14)
                    return eax_14
            
            if (eax_11 != 0)
                _aligned_free(eax_11)
                uint32_t eax_15
                eax_15.b = 0
                CookieCheckFunction(eax_15)
                return eax_15
        else
            char* eax_7 = *(arg4 + 0x20)
            char* const ecx_6 = &data_801800
            
            if (eax_7 != 0)
                ecx_6 = eax_7
            
            char* const var_dc_3 = ecx_6
            sub_63b5f0("Can't load pack asset because hash doesn't match '%s'")
    else
        char* eax_5 = *(arg4 + 0x20)
        char* const ecx_1 = &data_801800
        
        if (eax_5 != 0)
            ecx_1 = eax_5
        
        char* const var_dc_2 = ecx_1
        sub_63b5f0("Can't load pack asset because version doesn't match '%s'")

eax_3.b = 0
CookieCheckFunction(eax_3)
return eax_3

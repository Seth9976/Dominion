// 函数: sub_56de40
// 地址: 0x56de40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result = arg2 - 0x13
int32_t* var_48 = arg2

if (result u<= 0xe)
    void* esi_1 = nullptr
    int128_t var_40
    __builtin_memset(&var_40, 0, 0x20)
    
    if (arg2 s>= 0x48)
        sub_591930()
        arg2 = var_48
    
    void* eax_4 = (arg2 << 4) + arg1
    int32_t i = *(eax_4 + 0x152c)
    int128_t var_30
    
    if (i == 0)
    label_56df2c:
        result = arg1
        int32_t ecx_1 = *(result + 0x1504)
        
        if (esi_1 != 0)
            if (ecx_1 != 3 && ecx_1 != 5 && ecx_1 != 4 && ecx_1 != 6)
                int32_t eax_7
                eax_7.b = i != 0
                ecx_1.b = ecx_1 == 2
                sub_61b1b0(eax_7, 2, ecx_1.b, 0xffffffff, 0, arg2, var_30.d, var_30:4.d, 
                    var_30:8.d, var_30:0xc.d, eax_7, 0, 0, 0)
                result = arg1
            
            ecx_1 = *(result + 0x1504)
            
            if (ecx_1 != 3 && ecx_1 != 5 && ecx_1 != 4 && ecx_1 != 6)
                result.b = i != 0
                ecx_1.b = ecx_1 == 2
                result = sub_61b1b0(result, 3, ecx_1.b, 0xffffffff, 0, var_48, var_40.d, 
                    var_40:4.d, var_40:8.d, var_40:0xc.d, result, nullptr, nullptr, nullptr)
        else if (ecx_1 != 3 && ecx_1 != 5 && ecx_1 != 4 && ecx_1 != 6)
            ecx_1.b = ecx_1 == 2
            result = sub_61b1b0(result, esi_1 + 2, ecx_1.b, 0xffffffff, 0, arg2, esi_1, esi_1, 
                esi_1, esi_1, esi_1, esi_1, esi_1, esi_1)
    else
        if (arg2 u> 0x48)
            sub_63b870(eax_4, &data_801800, "IsGlobalPile(where)", 
                "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x1730, "UpdateSplitPileInfo")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (arg2 s>= 0x48)
            sub_591930()
        
        result = *(eax_4 + 0x1524)
        
        if (result != 0x91c && result != 0xc0a && result != 0x923)
            do
                uint32_t eax_5 = zx.d(i.w)
                
                if (eax_5 u>= 0x320)
                    sub_591930()
                
                int32_t ecx = *(&var_30 + (esi_1 << 2))
                void* edx_1 = eax_5 * 0x64 + arg1
                int32_t eax_6 = *(edx_1 + 0x1a4c)
                
                if (ecx == 0)
                    *(&var_30 + (esi_1 << 2)) = eax_6
                else if (ecx != eax_6)
                    esi_1 += 1
                    
                    if (esi_1 s>= 4)
                        break
                    
                    *(&var_30 + (esi_1 << 2)) = eax_6
                
                *(&var_40 + (esi_1 << 2)) += 1
                i = *(edx_1 + 0x1aa4)
            while (i != 0)
            
            arg2 = var_48
            goto label_56df2c

CookieCheckFunction(result)
return result

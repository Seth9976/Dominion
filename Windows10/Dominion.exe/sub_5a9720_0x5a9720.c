// 函数: sub_5a9720
// 地址: 0x5a9720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = data_cc8dc0

if (result == 0)
label_5a9926:
    sub_63b870(result, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int128_t var_1c
void arg_4

if (*(result + 0x3c) != 6)
    int32_t i = 0
    
    if (*(arg1 + 0xeffbc) s> 0)
        void* edi_1 = arg1 + 0x8ffd8
        
        do
            int32_t ecx_3 = 0
            int32_t eax_3 = *(edi_1 - 4) * 3
            int32_t var_24[0x2]
            
            if (not(*(arg1 + (eax_3 << 2) + 8) f<= 0))
                ecx_3 = 1
                float xmm1_2 = *(arg1 + (eax_3 << 2) + 4) * 1024f
                var_24[0] = *(arg1 + (eax_3 << 2)) * 1024f
                var_24[1] = xmm1_2
            
            int32_t eax_5 = *edi_1 * 3
            var_20
            
            if (not(*(arg1 + (eax_5 << 2) + 8) f<= 0))
                float xmm1_4 = *(arg1 + (eax_5 << 2) + 4) * 1024f
                (&var_24)[ecx_3][0] = *(arg1 + (eax_5 << 2)) * 1024f
                *(&var_20 + (ecx_3 << 3)) = xmm1_4
                ecx_3 += 1
            
            result = *(edi_1 + 4) * 3
            
            if (not(*(arg1 + (result << 2) + 8) f<= 0))
                float xmm1_6 = *(arg1 + (result << 2) + 4) * 1024f
                (&var_24)[ecx_3][0] = *(arg1 + (result << 2)) * 1024f
                *(&var_20 + (ecx_3 << 3)) = xmm1_6
                ecx_3 += 1
            
            if (ecx_3 == 2)
                result = 0
                
                while (true)
                    float xmm1_8 = (&var_24)[result][0] f* 0.0009765625f
                    float xmm0_12 = *(&var_20 + (result << 3)) * 0.0009765625f
                    
                    if (0.0250000004f > xmm1_8)
                        goto label_5a98ec
                    
                    if (xmm1_8 > 1.97500002f)
                        goto label_5a98ec
                    
                    if (0.0250000004f > xmm0_12)
                        goto label_5a98ec
                    
                    if (xmm0_12 > 0.975000024f)
                        goto label_5a98ec
                    
                    result += 1
                    
                    if (result s>= 2)
                        int32_t var_34_1 = var_1c:4.d
                        sub_5a9590(result, &arg_4, &arg_4, 3f, 3f, nullptr, var_24[0], var_24[1], 
                            var_1c.d)
                        result = data_cc8dc0
                        
                        if (result == 0)
                            goto label_5a9926
                        
                        if (*(result + 0x3c) == 5)
                            goto label_5a9766
                        
                        break
            
        label_5a98ec:
            i += 1
            edi_1 += 0xc
        while (i s< *(arg1 + 0xeffbc))
        
        CookieCheckFunction(result)
        return result
else
    var_1c = data_893710
    result = sub_682f00(&var_1c, &arg_4)
label_5a9766:
CookieCheckFunction(result)
return result

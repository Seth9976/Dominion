// 函数: sub_57ee90
// 地址: 0x57ee90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx_2 = arg4 u>> 6 & 0xfff
uint32_t eax_3
int32_t edx
eax_3, edx = sub_5916b0(arg4)

if (ebx_2 == eax_3)
    CookieCheckFunction(0)
    return 0

uint32_t eax_7

if (ebx_2 == 0)
    if ((arg4.b & 0x30) == 0)
        uint32_t edx_4 = arg4 u>> 0x12
        uint32_t ecx_13 = *(arg3 + 0x19b8) - 1
        
        if (edx_4 s< ecx_13)
            ecx_13 = edx_4
        
        if (ecx_13 s>= 0)
            eax_3 = ecx_13 * 0xa8 + 0x3b594 + arg3
            uint32_t temp0_1
            
            do
                if (*eax_3 == edx_4)
                    int32_t eax_16 = ecx_13 * 0xa8
                    uint32_t esi_2 = 0
                    int32_t* ecx_14 = arg5
                    int32_t edx_5 = *(eax_16 + arg3 + 0x3b5dc)
                    
                    if (edx_5 != 0)
                        *ecx_14 = edx_5
                        esi_2 = 1
                    
                    int32_t i = *(eax_16 + arg3 + 0x3b5d8)
                    
                    while (i != 0)
                        ecx_14[esi_2] = i
                        esi_2 += 1
                        uint32_t ebx_4 = zx.d(i.w)
                        
                        if (ebx_4 u>= 0x320)
                            sub_591930()
                        
                        i = *(ebx_4 * 0x64 + arg3 + 0x1aa8)
                        ecx_14 = arg5
                    
                    CookieCheckFunction(esi_2)
                    return esi_2
                
                eax_3 -= 0xa8
                temp0_1 = ecx_13
                ecx_13 -= 1
            while (temp0_1 - 1 s>= 0)
        
        sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
            0xf36, "AbilityGetRegistered")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_7 = sub_590930(eax_3, eax_3, arg3, arg5)
else
    if (sub_5915b0(eax_3, edx, arg3, arg4) != 0xf47 || arg2 == 0xffffffff)
        *arg5 = ebx_2
        CookieCheckFunction(1)
        return 1
    
    int32_t var_c8c[0x321]
    int32_t eax_6 = sub_590990(arg2, arg2, arg3, 0x462, &var_c8c)
    eax_7 = 0
    int32_t esi_1 = 0
    uint32_t var_ca0_1 = 0
    
    if (eax_6 s> 0)
        int32_t edx_2 = eax_6
        int32_t ecx_5 = ebx_2
        
        do
            int32_t ebx_3 = var_c8c[esi_1]
            
            if (ebx_3 != ecx_5)
                uint32_t eax_8 = zx.d(ebx_3.w)
                
                if (eax_8 u>= 0x320)
                    sub_591930()
                
                int32_t eax_10 = *(eax_8 * 0x64 + arg3 + 0x1a4c)
                int32_t eax_11 = ebx_2
                
                if (eax_11 u>= 0x320)
                    sub_591930()
                    eax_11 = ebx_2
                
                edx_2 = eax_6
                eax_7 = var_ca0_1
                
                if (eax_10 == *(eax_11 * 0x64 + arg3 + 0x1a4c))
                    arg5[eax_7] = ebx_3
                    eax_7 += 1
                    var_ca0_1 = eax_7
                
                ecx_5 = ebx_2
            
            esi_1 += 1
        while (esi_1 s< edx_2)
        
        CookieCheckFunction(eax_7)
        return eax_7

CookieCheckFunction(eax_7)
return eax_7

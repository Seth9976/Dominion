// 函数: sub_582eb0
// 地址: 0x582eb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
uint32_t edx
ecx, edx = __chkstk(0x197c)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp

if (arg2 != 0)
    int16_t edx_1 = (*arg1).w
    uint32_t edi_1 = zx.d(edx_1)
    
    if (edi_1 u>= 0x320)
        sub_591930()
        edx_1 = (*arg1).w
    
    int32_t edi_3 = arg8 | 2
    uint32_t ebx_1 = zx.d(edx_1)
    
    if (ecx[edi_1 * 0x19 + 0x694] != 0x3e9)
        edi_3 = arg8
    
    if (ebx_1 u>= 0x320)
        sub_591930()
    
    if (ecx[ebx_1 * 0x19 + 0x694] == 0x451)
        edi_3 |= 2
    
    int32_t eax_5 = edi_3 | 1
    
    if (ecx[0x67b] != 5)
        eax_5 = edi_3
    
    uint32_t edi_4 = 0x30
    
    if (arg5 != 6)
        if (sub_582040(arg5) == 0)
            edi_4 = 0x32
    else
        edi_4 = arg5 + 0x2b
    
    if (arg3 == 0x3eb)
        edi_4 = 0x33
    
    if (ecx[0x67b] != 5 || (arg6 & 4) != 0)
        int32_t ecx_2 = arg7
        
        if ((arg6 & 1) == 0)
            ecx_2 = 0
        
        int32_t eax_8 = ecx[0x541]
        
        if (eax_8 != 3 && eax_8 != 5 && eax_8 != 4 && eax_8 != 6 && ecx[0x540].b == 0)
            int32_t eax_9 = edx
            
            if (edx == ecx[0x673])
                eax_9 = ecx[0x674]
            
            sub_59f9b0(eax_9, edx, ecx, eax_9, edi_4, ecx_2, arg1, arg2, 0, 0, 0, 0)
    
    if ((eax_5.b & 0x20) != 0)
        int32_t eax_10 = ecx[0x541]
        
        if (eax_10 != 3 && eax_10 != 5 && eax_10 != 4 && eax_10 != 6 && ecx[0x540].b == 0)
            int32_t eax_11 = 0xffffffff
            
            if (ecx[0x673] == 0xffffffff)
                eax_11 = ecx[0x674]
            
            int32_t var_2c_2
            __builtin_memset(&var_2c_2, 0, 0x1c)
            int32_t* var_28_2
            int32_t var_24_2
            int32_t var_20_2
            int32_t var_1c_2
            int32_t var_18_2
            int32_t var_14_2
            sub_59f9b0(eax_11, 0xffffffff, ecx, eax_11, 0x3c, var_2c_2, var_28_2, var_24_2, 
                var_20_2, var_1c_2, var_18_2, var_14_2)
    
    void* eax_12 = arg2
    int32_t var_197c = 3
    void* var_1974_1 = eax_12
    int32_t ecx_5
    ecx_5.b = arg5 == 6
    uint32_t var_1930 = 6
    int32_t var_192c_1 = 0xb
    char var_190d_1 = 0
    
    if (eax_5 == 3)
        var_190d_1 = 1
        sub_580700(ecx, &var_1930, ecx_5 + 1, &var_197c, 3, arg1, eax_12, nullptr)
        eax_12 = arg2
    
    uint32_t result = 0
    int32_t edi_5 = 0
    uint32_t result_1 = 0
    int32_t var_190c[0x320]
    
    if (eax_12 s> 0)
        do
            eax_12 = sub_582de0(arg1, arg1[edi_5], ecx, arg3)
            
            if (eax_12.b == 0)
                int128_t* var_1918_1 = arg4
                int32_t ecx_9 = arg1[edi_5]
                int128_t* eax_15 = arg4
                var_190c[result] = ecx_9
                result += 1
                
                if (ecx[0x67b] == 5)
                    if (arg4 == 0xb)
                        eax_15 = 8
                    
                    var_1918_1 = eax_15
                
                eax_12 = sub_582de0(eax_15, ecx_9, ecx, arg3)
                
                if (eax_12.b == 0)
                    int32_t var_c8c
                    int32_t eax_17 = sub_590990(&var_c8c, 0xffffffff, ecx, 5, &var_c8c)
                    
                    if (eax_17 != 0)
                        if (eax_17 != 1)
                            sub_591930()
                        
                        eax_17 = var_c8c
                    
                    if (ecx_9 == eax_17)
                        sub_591930()
                    
                    int32_t ecx_12
                    ecx_12.b = edi_5 == arg2 - 1
                    eax_12 = sub_5822e0(arg2 - 1, edx, ecx, ecx_9, var_1918_1, 0x3ec, 7, 0, 0, 0, 
                        0, ecx_12, nullptr, 0, arg9, arg10)
            
            edi_5 += 1
        while (edi_5 s< arg2)
        
        result_1 = result
    
    bool cond:8_1
    
    if ((eax_5.b & 2) != 0)
        int32_t edx_8 = 0
        cond:8_1 = result == 0
        
        if (result s<= 0)
            goto label_58322b
        
        do
            eax_12 = var_190c[edx_8]
            edx_8 += 1
            ecx[ecx[edx * 0x168c + 0x5d55] + edx * 0x168c + 0x701e] = eax_12
            ecx[edx * 0x168c + 0x5d55] += 1
        while (edx_8 s< result)
        
        goto label_583237
    
    cond:8_1 = result == 0
label_58322b:
    
    if (not(cond:8_1))
    label_583237:
        
        if (edx == 0xffffffff)
            sub_63b870(eax_12, &data_801800, "who != PLAYER_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x33e, "GetPileHead")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* eax_22 = ecx[edx * 0x168c + 0x5cb6]
        
        if (eax_22 != 0)
            uint32_t i = 0
            
            if (ecx[0x34e] s> 0)
                void* ebx_3 = eax_22
                
                do
                    eax_22 = sub_581a00(eax_22, ebx_3, ecx, i, 6)
                    i += 1
                while (i s< ecx[0x34e])
                
                result = result_1
        
        if (var_190d_1 == 0)
            sub_580700(ecx, &var_1930, ecx_5 + 1, &var_197c, eax_5, arg1, arg2, nullptr)
        
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0

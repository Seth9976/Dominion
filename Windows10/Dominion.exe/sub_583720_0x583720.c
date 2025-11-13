// 函数: sub_583720
// 地址: 0x583720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t esi = zx.d(arg4.w)
uint32_t var_4ec = arg4
char var_4e1 = 1

if (esi u>= 0x320)
    sub_591930()

int32_t* var_504 = arg3
void var_420
char eax_6 = sub_5846c0(&var_420, sub_576540(&var_420, arg2, arg3, &var_420), arg3, &var_420, 0x26, 
    arg3[esi * 0x19 + 0x693])
int32_t eax_8
int32_t edx_2

if (eax_6 != 0)
    edx_2:eax_8 = sx.q(arg3[0x679])
    arg3[0x34e]

if (eax_6 == 0 || divs.dp.d(edx_2:eax_8, arg3[0x34e]) s>= 5)
    int32_t ecx_2 = arg3[0x673]
    int32_t esi_2 = arg2
    uint32_t var_4d8 = 0
    void* var_4c4_1 = nullptr
    int32_t eax_10
    
    if (esi_2 == ecx_2)
        eax_10 = arg3[0x674]
    
    int32_t* var_4e0_1
    
    if (esi_2 != ecx_2 || ecx_2 == eax_10)
        var_4e0_1 = arg5
    else
        esi_2 = eax_10
        var_4e0_1 = 0x476
        int32_t var_4c8 = esi_2
        var_4e1 = 0
    
    if (arg7 == 0x476)
    label_583828:
        uint32_t eax_16
        
        if (var_4e0_1 != 0x476)
            eax_16 = zx.d(var_4ec.w)
        else
            int32_t ecx_6 = 0
            void* edx_5 = arg3[var_4ec * 0x19 + 0x692]
            int32_t i = *(edx_5 + 0xa8)
            
            if (i == 0)
            label_58385d:
                var_4e0_1 = 0x3ec
                eax_16 = zx.d(var_4ec.w)
            else
                while (i != 5)
                    ecx_6 += 1
                    i = *(ecx_6 * 0xb4 + edx_5 + 0xa8)
                    
                    if (i == 0)
                        goto label_58385d
                
                var_4e0_1 = *(ecx_6 * 0xb4 + edx_5 + 0xbc)
                eax_16 = zx.d(var_4ec.w)
        
        if (eax_16 u>= 0x320)
            sub_591930()
        
        void* eax_20 = eax_16 * 0x64 + arg3
        void* eax_21 = sub_573400()
        void var_468
        uint32_t eax_23 =
            sub_5834f0(&var_468, esi_2, arg3, &var_468, var_4ec, *(eax_21 + 0x28), *(eax_21 + 0x2c))
        int128_t var_4c0 = *eax_23
        int128_t var_4b0 = *(eax_23 + 0x10)
        int128_t var_4a0 = *(eax_23 + 0x20)
        int128_t var_490 = *(eax_23 + 0x30)
        int64_t var_480 = *(eax_23 + 0x40)
        int32_t eax_27
        
        if (var_4e0_1 != 0x474)
            int32_t eax_28 = arg3[0x541]
            
            if (eax_28 != 3 && eax_28 != 5 && eax_28 != 4 && eax_28 != 6 && arg3[0x540].b == 0)
                eax_27 = esi_2
                
                if (esi_2 == arg3[0x673])
                    eax_27 = arg3[0x674]
                
                int32_t var_504_4 = 0
                int32_t var_508_3 = 0
                int32_t var_514_2 = 1
                sub_59f9b0(eax_27, esi_2, arg3, eax_27, 0x22, arg8, &var_4ec, 1, 0, 0, 0, 0)
        else
            uint32_t eax_24 = zx.d(arg6.w)
            
            if (eax_24 u>= 0x320)
                sub_591930()
            
            int32_t eax_26 = arg3[0x541]
            
            if (eax_26 != 3 && eax_26 != 5 && eax_26 != 4 && eax_26 != 6 && arg3[0x540].b == 0)
                eax_27 = esi_2
                
                if (esi_2 == arg3[0x673])
                    eax_27 = arg3[0x674]
                
                int32_t var_504_3 = 0
                int32_t var_508_2 = 0
                int32_t var_514_1 = 1
                sub_59f9b0(eax_27, esi_2, arg3, eax_27, 0x23, arg8, &var_4ec, 1, 0x474, 
                    arg3[eax_24 * 0x19 + 0x693], 0, 0)
        void* edx_10 = esi_2 * 0x5a30 + arg3
        int32_t eax_29 = esi_2 * 0x168c
        arg3[*(edx_10 + 0x17504) + eax_29 + 0x5d5e] = var_4ec
        uint32_t eax_31 = zx.d(var_4ec.w)
        *(edx_10 + 0x17504) += 1
        
        if (eax_31 u>= 0x320)
            sub_591930()
        
        char var_4e2 = sub_5754f0(eax_31 * 0x64, arg3[eax_31 * 0x19 + 0x693], arg3, 4, 0)
        uint32_t eax_34 = zx.d(var_4ec.w)
        
        if (eax_34 u>= 0x320)
            sub_591930()
        
        char eax_36 = sub_5754f0(eax_34 * 0x64, arg3[eax_34 * 0x19 + 0x693], arg3, 2, 0)
        char ecx_15 = var_4e2
        
        if (ecx_15 != 0)
            *(edx_10 + 0x17508) += 1
        
        if (eax_36 != 0)
            *(edx_10 + 0x1750c) += 1
        
        if (ecx_15 != 0 || eax_36 != 0)
            *(edx_10 + 0x17510) += 1
        
        int32_t eax_37 = arg3[0x67b]
        
        if ((eax_37 == 3 || eax_37 == 2) && arg3[0x676].b != 0 && arg3[0x673] == esi_2)
            arg3[*(edx_10 + 0x1754c) + eax_29 + 0x69de] = var_4ec
            *(edx_10 + 0x1754c) += 1
        
        int32_t eax_39 = arg3[0x67b]
        
        if (eax_39 == 3 || eax_39 == 2)
            *(edx_10 + 0x17534) += 1
        
        uint32_t eax_40 = zx.d(var_4ec.w)
        
        if (eax_40 u>= 0x320)
            sub_591930()
        
        char eax_42 = sub_5754f0(eax_40 * 0x64, arg3[eax_40 * 0x19 + 0x693], arg3, 8, 0)
        uint16_t ecx_19 = var_4ec.w
        
        if (eax_42 != 0)
            *(edx_10 + 0x17538) |= 1
        
        uint32_t eax_44 = zx.d(ecx_19)
        
        if (eax_44 u>= 0x320)
            sub_591930()
            ecx_19 = var_4ec.w
        
        if (arg3[eax_44 * 0x19 + 0x693] == 0x106)
            *(edx_10 + 0x17538) |= 2
        
        if (arg3[esi_2 * 0x168c + 0x5d41] s>= 3)
            arg3[esi_2 * 0x168c + 0x5d4e] |= 8
        
        uint32_t eax_49 = zx.d(ecx_19)
        
        if (eax_49 u>= 0x320)
            sub_591930()
        
        uint32_t ecx_20 = var_4ec
        
        if (arg3[eax_49 * 0x19 + 0x693] != 0xf1c)
            arg3[0x66a] = ecx_20
        
        int32_t eax_51 = arg3[0x541]
        
        if (eax_51 != 4 && eax_51 != 3 && eax_51 != 5)
            arg3[0x34e]
            
            if (divs.dp.d(sx.q(arg3[0x678] - 1), arg3[0x34e]) + 1 s<= 2)
                uint32_t eax_57 = zx.d(ecx_20.w)
                
                if (eax_57 u>= 0x320)
                    sub_591930()
                
                int32_t i_1 = 0
                int32_t eax_59 = arg3[eax_57 * 0x19 + 0x693]
                void* eax_62 = esi_2 * 0xc8 + 0x5eb6c + arg3
                
                do
                    int32_t edx_17 = *eax_62
                    
                    if (edx_17 == eax_59)
                        int32_t eax_66 = esi_2 * 0x19 + i_1
                        arg3[eax_66 * 2 + 0x17adc] += 1
                        break
                    
                    if (edx_17 == 0)
                        int32_t eax_64 = esi_2 * 0x19 + i_1
                        arg3[eax_64 * 2 + 0x17adb] = eax_59
                        arg3[eax_64 * 2 + 0x17adc] = 1
                        break
                    
                    i_1 += 1
                    eax_62 += 8
                while (i_1 s< 0x19)
        
        int32_t* eax_88 = var_4e0_1
        uint32_t var_510_2
        int32_t var_508_4
        char* ecx_22
        void* edx_20
        
        if (eax_88 == 0x474)
            if (arg6 != 0)
                if (arg7 != 0x476)
                    char const* const var_504_6 = "GainCard"
                    var_508_4 = 0x2cef
                    ecx_22 = "fromWhere == WHERE_DEFAULT"
                    goto label_583f02
                
                uint32_t ecx_23 = var_4ec
                uint32_t eax_67 = zx.d(ecx_23.w)
                
                if (eax_67 u>= 0x320)
                    sub_591930()
                    ecx_23 = var_4ec
                
                char* var_504_7 = &var_4e2
                var_510_2 = 0
                sub_5820c0(eax_67 * 0x64, esi_2, arg3, ecx_23, arg3[eax_67 * 0x19 + 0x694], arg6, 
                    arg10, 0, 0, 0, 1, nullptr)
                edx_20 = eax_20
                goto label_583cee
            
            char const* const var_504_5 = "GainCard"
            var_508_4 = 0x2cee
            ecx_22 = "whereCard != CARDID_NULL"
            goto label_583f02
        
        var_510_2 = &var_4e2
        sub_5822e0(eax_88, esi_2, arg3, var_4ec, arg10, eax_88, nullptr, 0, 0, 0, 0, 0, var_510_2, 
            0, var_4d8, var_4c4_1)
        edx_20 = eax_20
        eax_88 = var_4e0_1
        
        if (*(edx_20 + 0x1a50) != eax_88)
            char const* const var_504_10 = "GainCard"
            var_508_4 = 0x2cf5
            ecx_22 = "card.where == where"
        label_583f02:
            sub_63b870(eax_88, &data_801800, ecx_22, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 
                var_508_4, "GainCard")
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
    label_583cee:
        int32_t ecx_25 = *(edx_20 + 0x1a54)
        *(edx_20 + 0x1a58) = *(edx_20 + 0x1a50)
        *(edx_20 + 0x1a5c) = ecx_25
        
        if (*(arg3 + 0x127d) != 0)
            uint16_t ecx_26 = var_4ec.w
            uint32_t eax_70 = zx.d(ecx_26)
            var_4d8 = eax_70
            
            if (eax_70 u>= 0x320)
                sub_591930()
                ecx_26 = var_4ec.w
                eax_70 = var_4d8
            
            uint32_t eax_72
            
            if (arg3[eax_70 * 0x19 + 0x693] != 0x103)
                eax_72 = zx.d(ecx_26)
                var_4d8 = eax_72
                
                if (eax_72 u>= 0x320)
                    sub_591930()
                    eax_72 = var_4d8
            
            if (arg3[eax_70 * 0x19 + 0x693] == 0x103 || arg3[eax_72 * 0x19 + 0x693] == 0x601)
                int32_t i_3 = 0
                
                if (arg3[esi_2 * 0x168c + 0x5d41] - 1 s> 0)
                    void* ecx_29 = esi_2 * 0x5a30 + 0x17578 + arg3
                    void* var_4e8_8 = ecx_29
                    int32_t i_2
                    
                    do
                        uint32_t ecx_30 = zx.d((*ecx_29).w)
                        var_4d8 = ecx_30
                        
                        if (ecx_30 u>= 0x320)
                            sub_591930()
                            ecx_30 = var_4d8
                        
                        void* eax_83 = ecx_30 * 0x64 + 0x1a4c + arg3
                        var_4d8 = eax_83
                        
                        if (*eax_83 == 0x103)
                        label_583df9:
                            int32_t var_504_8 = 0
                            int32_t var_508_5 = 0xffffffff
                            sub_571fa0(eax_83, esi_2, arg3, 0x601, 4, 0x476, nullptr, 0, var_510_2, 
                                0)
                        else
                            if (ecx_30 u>= 0x320)
                                sub_591930()
                                eax_83 = var_4d8
                            
                            if (*eax_83 == 0x601)
                                goto label_583df9
                        
                        i_2 = i_3 + 1
                        ecx_29 = var_4e8_8 + 4
                        i_3 = i_2
                        var_4e8_8 = ecx_29
                    while (i_2 s< *(esi_2 * 0x5a30 + 0x17504 + arg3) - 1)
        
        sub_583350(arg3)
        int32_t esi_3 = 1
        
        if (var_4e2 != 0)
            esi_3 = 2
        
        var_4d8 = 8
        int32_t var_4d4 = 0x13
        sub_580700(esi_3, &var_4d8, esi_3, &var_4c0, arg9, &var_4ec, 1, nullptr)
        int32_t eax_87
        eax_87.b = var_4e1
        CookieCheckFunction(eax_87)
        return eax_87
    
    if (sub_582de0(arg7, var_4ec, arg3, arg7).b == 0)
        goto label_583828

int32_t eax_9
eax_9.b = 0
CookieCheckFunction(eax_9)
return eax_9

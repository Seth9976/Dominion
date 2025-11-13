// 函数: sub_5782d0
// 地址: 0x5782d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi = arg4
uint32_t esi = zx.d(edi.w)
*arg5 = 0

if (esi u>= 0x320)
    sub_591930()

void* eax_4 = esi * 0x64 + arg3
int32_t eax_5 = *(eax_4 + 0x1a4c)
uint32_t eax_6 = 0

if (arg12 s> 0)
    do
        edi = arg4
        
        if (*(arg11 + (eax_6 << 2)) == eax_5)
            goto label_57869c
        
        eax_6 += 1
    while (eax_6 s< arg12)

if (arg9 == 0)
label_57837a:
    
    if (arg10 == 0)
    label_57839b:
        int32_t ecx_7 = 0
        void* eax_11 = edi * 0x64 + 0x1a48 + arg3
        void* edx_3 = *eax_11
        int32_t i = *(edx_3 + 0xa8)
        uint32_t var_18
        TEB* fsbase
        
        if (i != 0)
            while (i != 4)
                ecx_7 += 1
                i = *(ecx_7 * 0xb4 + edx_3 + 0xa8)
                
                if (i == 0)
                    goto label_57843f
            
            int32_t eax_14 = *(ecx_7 * 0xb4 + edx_3 + 0x14c)
            
            if (eax_14 != 0)
                if (esi u>= 0x320)
                    sub_591930()
                
                int32_t var_1c = edi
                var_18 = *(eax_4 + 0x1a54)
                sub_573050(&var_1c, arg2, arg3, &var_1c)
                char eax_18 = eax_14()
                void* ecx_10 = *fsbase->ThreadLocalStoragePointer
                int32_t eax_19 = *(ecx_10 + 0xf010)
                
                if (eax_19 s<= 0)
                    sub_63b870(eax_19, &data_801800, "cs.numContexts > 0", 
                        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                *(ecx_10 + 0xf010) = eax_19 - 1
                
                if (eax_18 != 0)
                    goto label_57865d
        
    label_57843f:
        void* eax_22 = *eax_11
        int32_t ecx_11 = *(eax_22 + 0x90)
        int32_t var_74_2 = ecx_11
        uint32_t var_60[0x6]
        uint32_t* eax_23 = sub_576c00(&var_60, ecx_11)
        char var_24_2 = (eax_23[4]).b
        int32_t i_1 = 0
        int64_t var_48_1 = (*eax_23).q
        char var_d = 0
        void* ecx_13 = eax_22 + 0xa8
        
        do
            int32_t edx_6 = *ecx_13
            
            if (edx_6 == 0)
                break
            
            if (edx_6 == 3)
                int32_t eax_26 = *(i_1 * 0xb4 + eax_22 + 0xbc)
                
                if (eax_26 != 0)
                    if (esi u>= 0x320)
                        sub_591930()
                    
                    int32_t var_28 = edi
                    int32_t var_24_3 = *(eax_4 + 0x1a54)
                    sub_573050(&var_28, arg2, arg3, &var_28)
                    eax_26(&var_18, &var_d)
                    int128_t* eax_30 = sub_576c00(&var_60, var_18)
                    var_24_2 = (eax_30[1].d).b
                    var_48_1 = (*eax_30).q
                    void* ecx_16 = *fsbase->ThreadLocalStoragePointer
                    int32_t eax_33 = *(ecx_16 + 0xf010)
                    
                    if (eax_33 s<= 0)
                        sub_63b870(eax_33, &data_801800, "cs.numContexts > 0", 
                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    *(ecx_16 + 0xf010) = eax_33 - 1
                
                break
            
            i_1 += 1
            ecx_13 += 0xb4
        while (i_1 s< 8)
        
        uint32_t esi_1 = zx.d(edi.w)
        
        if (esi_1 u>= 0x320)
            sub_591930()
        
        int32_t i_2 = sub_57da30(arg3, *(esi_1 * 0x64 + arg3 + 0x1a4c))
        int32_t ecx_18 = 0
        uint32_t esi_3
        
        if (arg20 s<= 0)
        label_578565:
            esi_3 = var_48_1.d
        else
            while (*(arg19 + (ecx_18 << 2)) != i_2)
                ecx_18 += 1
                
                if (ecx_18 s>= arg20)
                    goto label_578565
            
            esi_3 = 0
        
        if (var_d == 0)
            if (arg13 != 0 && arg13 == i_2)
                bool cond:1_1 = esi_3 - 2 s< 0
                esi_3 -= 2
                
                if (cond:1_1)
                    esi_3 = 0
            
            int32_t i_4 = arg16
            
            if (i_4 s> 0)
                int32_t* eax_38 = arg15
                int32_t* edi_3 = arg14 - eax_38
                int32_t i_3
                
                do
                    if (*(edi_3 + eax_38) == i_2)
                        uint32_t temp1_1 = esi_3
                        esi_3 -= *eax_38
                        bool cond:2_1 = temp1_1 - *eax_38 s< 0
                        var_18 = 0
                        
                        if (cond:2_1)
                            esi_3 = var_18
                    
                    eax_38 = &eax_38[1]
                    i_3 = i_4
                    i_4 -= 1
                while (i_3 != 1)
            
            int32_t ecx_19 = 0
            
            if (arg18 s> 0)
                int32_t eax_39 = arg17
                
                do
                    if (*(eax_39 + (ecx_19 << 2)) == i_2)
                        var_18 = 0
                        bool cond:3_1 = esi_3 - 1 s< 0
                        esi_3 -= 1
                        eax_39 = arg17
                        
                        if (cond:3_1)
                            esi_3 = var_18
                    
                    ecx_19 += 1
                while (ecx_19 s< arg18)
            
            if (arg22 s> 0 && eax_5 != 0 && sub_5754f0(eax_5, eax_5, arg3, 4, 0) != 0)
                uint32_t temp5_1 = esi_3
                esi_3 -= arg22
                
                if (temp5_1 - arg22 s< 0)
                    esi_3 = 0
            
            void* eax_44 = sub_571b30(*(eax_22 + 0x8c), *(arg3 + 0xd48))
            uint32_t ecx_24 = (*(eax_44 + 0x98) & 0x7f000400) | (*(eax_44 + 0x9c) & 0x940)
            
            if (ecx_24 == 0)
                uint32_t temp3_1 = esi_3
                esi_3 -= arg21
                
                if (temp3_1 - arg21 s< 0)
                    esi_3 = ecx_24
        
        if (var_24_2 == 0 && var_48_1:4.d s<= arg8)
            if (esi_3 s<= arg6)
                *arg5 = 0
            label_57865d:
                char* eax_20
                eax_20.b = 1
                CookieCheckFunction(eax_20)
                return eax_20
            
            if (esi_3 s<= arg7 + arg6)
                *arg5 = 1
                char* eax_47
                eax_47.b = 1
                CookieCheckFunction(eax_47)
                return eax_47
    else if (sub_5757f0(eax_6, edi.w, arg3, 4, 0).b == 0)
        goto label_57839b
else
    if (esi u>= 0x320)
        sub_591930()
    
    void* eax_7 = sub_571b30(*(eax_4 + 0x1a4c), *(arg3 + 0xd48))
    eax_6 = *(eax_7 + 0x9c) & 0x940
    
    if (((*(eax_7 + 0x98) & 0x7f000400) | eax_6) != 0)
        goto label_57837a

label_57869c:
eax_6.b = 0
CookieCheckFunction(eax_6)
return eax_6

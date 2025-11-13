// 函数: sub_61bdb0
// 地址: 0x61bdb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
data_c23bf8 = 0
void* eax_2
int32_t edx
eax_2, edx = sub_6053a0()
int32_t var_78_2
char const* const var_74_2
char* ecx_7
void var_60
int128_t var_40

if (eax_2.b == 0)
    int128_t* eax_4 = sub_5de520(&var_60, edx, arg1, &var_60)
    var_40 = *eax_4
    int128_t var_30_1 = eax_4[1]
    int32_t ecx_2 = sub_5cb6e0(arg1 + 0x258, &var_40)
    data_b7fcd0 = 0
    eax_2 = *(arg1 + 0x2c)
    *(arg1 + 0x1b88) = 0
    
    if (eax_2 == 1)
        if (*(arg1 + 0x1bf8) == 5)
            int32_t var_74_1 = 0
            sub_617bb0(eax_2, &data_7ffb14, arg1, nullptr, ecx_2)
        
        uint32_t eax_5 = sub_5cb5a0(arg1)
        CookieCheckFunction(eax_5)
        return eax_5
    
    if (eax_2 == 0)
        int32_t eax_6 = *(arg1 + 0x1bf8)
        int32_t var_74_7
        uint32_t eax_9
        uint32_t ecx_16
        
        if (eax_6 == 0)
            eax_2 = sub_5cc410(eax_6, *(arg1 + 0xa0), *(arg1 + 0x1be0), *(arg1 + 0x1be8), 
                *(arg1 + 0x1bec))
            ecx_16 = eax_2
            
            if (ecx_16 != 0)
                var_74_7 = 1
            label_61bfa1:
                eax_9 = sub_5f2d80(arg1 + 0x1bf0, *(arg1 + 0x98), *(arg1 + 0xa0), ecx_16, 
                    arg1 + 0x1bf0, 0, 0, 0xb, var_74_7)
                
                if (*(arg1 + 0x1be0) == 0x3ea)
                    data_b7fcf0 = 0
                
                CookieCheckFunction(eax_9)
                return eax_9
        else if (eax_6 == 4)
            eax_2 = sub_5cc410(eax_6 - 4, *(arg1 + 0xa0), *(arg1 + 0x1be0), *(arg1 + 0x1be8), 
                *(arg1 + 0x1bec))
            ecx_16 = eax_2
            
            if (ecx_16 != 0)
                var_74_7 = 0
                goto label_61bfa1
        else
            eax_9 = eax_6 - 5
            
            if (eax_6 != 5)
                CookieCheckFunction(eax_9)
                return eax_9
            
            if (data_b80afc != 1 || data_b80b54 s<= 1 || data_b80b08 == 2)
                int32_t var_74_5 = 0
                eax_9 = sub_617bb0(eax_9, &data_7ffb14, arg1, nullptr, ecx_2)
                
                if (eax_9 != 2)
                    CookieCheckFunction(eax_9)
                    return eax_9
            else
                uint32_t var_74_3 = eax_9
                eax_9 = sub_617bb0(eax_9, &data_7ffb14, arg1, eax_9, ecx_2)
            
            eax_2 = sub_5cc410(eax_9, *(arg1 + 0xa0), *(arg1 + 0x1be0), *(arg1 + 0x1be8), 
                *(arg1 + 0x1bec))
            
            if (eax_2 != 0)
                uint32_t eax_11 = sub_5f2d80(arg1 + 0x1bf0, *(arg1 + 0x98), *(arg1 + 0xa0), eax_2, 
                    arg1 + 0x1bf0, 0, 0, 0xb, 0)
                CookieCheckFunction(eax_11)
                return eax_11
    label_61bef4:
        var_74_2 = "DomPileGet"
        var_78_2 = 0x9b0
        ecx_7 = "pPile"
    else
        var_74_2 = "DomDragCardEnd"
        var_78_2 = 0xda4a
        ecx_7 = "gfx.type == DOMGFX_CARD"
else if (*(arg1 + 0x2c) == 0)
    int128_t* eax_14 = sub_5de520(&var_60, edx, arg1, &var_60)
    var_40 = *eax_14
    int128_t var_30_2 = eax_14[1]
    sub_5cb6e0(arg1 + 0x258, &var_40)
    data_b7fcd0 = 0
    *(arg1 + 0x1b88) = 0
    int32_t edi_1 = *(sub_5cba00(data_b7fcf4) + 0x5c)
    eax_2 = *(arg1 + 0x1bf8)
    
    if (eax_2 u<= 5)
        int32_t var_74_10
        
        switch (eax_2)
            case nullptr
                void* edx_11 = 0xffffffff
                bool cond:0_1 = data_b80b08 != 0x3b
                int32_t ecx_27 = *(arg1 + 0x1c00)
                int32_t var_68 = *(arg1 + 0x1bfc)
                int32_t var_64_1 = ecx_27
                
                if (not(cond:0_1))
                    edx_11 = 1
                    var_68 = 0
                    int32_t var_64_2 = 0
                
                sub_61bc40(&var_68, edi_1, arg1, &var_68, edx_11)
                goto label_61c1ec
            case 1
                void* eax_19 = 0xffffffff
                
                if (data_b80b08 == 0x3b)
                    eax_19 = 1
                
                sub_61bc40(eax_19, 0x3ef, arg1, &data_7feed4, eax_19)
                goto label_61c1ec
            case 2
                void* eax_20 = 0xffffffff
                
                if (data_b80b08 == 0x3b)
                    eax_20 = 1
                
                sub_61bc40(eax_20, 0x3f0, arg1, &data_7feed4, eax_20)
                goto label_61c1ec
            case 3
                eax_2 = sub_5cc410(eax_2, *(arg1 + 0xa0), 0x3ea, 0, 0)
                
                if (eax_2 != 0)
                    var_74_10 = 1
                label_61c1da:
                    sub_5f2d80(eax_2, *(arg1 + 0x98), *(arg1 + 0xa0), eax_2, &data_7feed4, 0, 0, 
                        0xb, var_74_10)
                label_61c1e2:
                    data_b7fcf0 = 0
                label_61c1ec:
                    *(arg1 + 0x1bf8) = 4
                    *(arg1 + 0x1c00) = 0
                    *(arg1 + 0x1bfc) = 0
                    CookieCheckFunction(0)
                    return 0
            case 4
                void* eax_16 = sub_5ce6d0(eax_2, *(arg1 + 0x1be0), *(arg1 + 0xa0), 
                    *(arg1 + 0x1be8), *(arg1 + 0x1bec), 0)
                sub_5f2d80(eax_16, *(arg1 + 0x98), *(arg1 + 0xa0), eax_16, arg1 + 0x1bf0, 0, 0, 
                    0xb, 1)
                
                if (*(arg1 + 0x1be0) != 0x3ea)
                    goto label_61c1ec
                
                goto label_61c1e2
            case 5
                eax_2 = sub_5cc410(eax_2, *(arg1 + 0xa0), 0x3ea, 0, 0)
                
                if (eax_2 != 0)
                    var_74_10 = 0
                    goto label_61c1da
        
        goto label_61bef4
    
    var_74_2 = "DomDragCardEnd"
    var_78_2 = 0xdad5
    ecx_7 = "Halt"
else
    var_74_2 = "DomDragCardEnd"
    var_78_2 = 0xda83
    ecx_7 = "gfx.type == DOMGFX_CARD"
sub_63b870(eax_2, &data_801800, ecx_7, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_78_2, 
    var_74_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

// 函数: sub_51db30
// 地址: 0x51db30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* i_3 = arg2
void* i_4 = i_3
int32_t var_70
char const* const var_6c
char* ecx_2

if (*i_3 == 0)
    int32_t ecx_1 = *(i_3 + 4)
    
    if (ecx_1 s>= 3)
        i_3 = (ecx_1 - 3) * 0x9c + 0x790198
        
        if (*i_3 == ecx_1)
            int32_t ecx_3 = *(i_3 + 0x84)
            int32_t eax_4 = *(i_3 + 0x88)
            arg3[1] = eax_4
            int32_t eax_5 = neg.d(eax_4)
            *arg3 = ecx_3
            CookieCheckFunction(neg.d(sbb.d(eax_5, eax_5, eax_4 != 0)) + 1)
            return neg.d(sbb.d(eax_5, eax_5, eax_4 != 0)) + 1
        
        var_6c = "ExpansionCampaignDefGet"
        var_70 = 0x672
        ecx_2 = "retval.exp == exp"
    else
        var_6c = "ExpansionCampaignDefGet"
        var_70 = 0x669
        ecx_2 = "exp >= DOM_EXP_INTRIGUE"
else if (*(i_3 + 0x5018) != 0)
    uint32_t esi_1 = 0
    void* i_2 = nullptr
    int32_t var_54_1 = 0
    int128_t var_1c = zx.o(0)
    int32_t ebx_1 = 0
    int32_t var_2c[0x4]
    
    while (true)
        i_3 = sub_51d8b0(i_3 + 0x5010 + ebx_1, &var_1c + ebx_1)
        int32_t edx_2 = 0
        void* i_5 = i_3
        
        if (i_3 s<= 0)
            i_3 = i_2
        else
            do
                if (esi_1 s>= 4)
                    var_6c = "RollFlavorThemes"
                    var_70 = 0x2f9a
                    ecx_2 = "n < 4"
                    goto label_51ddce
                
                void* i = *(&var_1c + ((var_54_1 + edx_2) << 2))
                i_3 = nullptr
                
                if (esi_1 s<= 0)
                label_51dc43:
                    var_2c[esi_1] = i
                    i_3.b = 1
                    esi_1 += 1
                    
                    if (esi_1 s> 4)
                        var_6c = "RollFlavorThemes"
                        var_70 = 0x2f9c
                        ecx_2 = "n <= 4"
                        goto label_51ddce
                else
                    while (var_2c[i_3] != i)
                        i_3 += 1
                        
                        if (i_3 s>= esi_1)
                            goto label_51dc43
                    
                    i_3.b = 0
                
                if (ebx_1 s>= 0x10)
                    var_6c = "RollFlavorThemes"
                    var_70 = 0x2f9d
                    ecx_2 = "i < 2"
                    goto label_51ddce
                
                if (edx_2 s>= 2)
                    var_6c = "RollFlavorThemes"
                    var_70 = 0x2f9e
                    ecx_2 = "j < 2"
                    goto label_51ddce
                
                edx_2 += 1
                
                if (i_3.b != 0)
                    i = i_2
                
                i_3 = i
                i_2 = i_3
            while (edx_2 s< i_5)
        
        var_54_1 += 2
        ebx_1 += 8
        
        if (ebx_1 s>= 0x10)
            break
        
        i_3 = i_4
    
    if (esi_1 s<= 2)
        memcpy(arg3, &var_2c, esi_1 << 2)
        CookieCheckFunction(esi_1)
        return esi_1
    
    if (esi_1 == 4)
        *arg3 = var_1c.d
        arg3[1] = var_1c:8.d
        CookieCheckFunction(esi_1 - 2)
        return esi_1 - 2
    
    if (esi_1 == 3)
        void* edx_3 = nullptr
        
        if (i_3 != 0)
            *arg3 = i_3
            edx_3 = 1
        
        int128_t var_4c
        int128_t* i_1 = &var_4c
        __builtin_memcpy(&var_4c, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x"
        "00\x00\x01\x00\x00\x00\x01\x00\x00\x00", 
            0x20)
        
        do
            int32_t j = *(&var_1c + ((*(i_1 + 4) + (*i_1 << 1)) << 2))
            
            if (j != 0)
                int32_t eax_17 = 0
                
                if (edx_3 s<= 0)
                label_51dd8a:
                    arg3[edx_3] = j
                    edx_3 += 1
                else
                    while (arg3[eax_17] != j)
                        eax_17 += 1
                        
                        if (eax_17 s>= edx_3)
                            goto label_51dd8a
                
                if (edx_3 == 2)
                    goto label_51dda2
            
            i_1 += 8
            i_3 = &var_2c
        while (i_1 != &var_2c)
        
        if (edx_3 s<= 2)
        label_51dda2:
            CookieCheckFunction(edx_3)
            return edx_3
        
        var_6c = "RollFlavorThemes"
        var_70 = 0x2fc2
        ecx_2 = "nret <= 2"
    else
        var_6c = "RollFlavorThemes"
        var_70 = 0x2fb0
        ecx_2 = "n == 3"
else
    i_3 = sub_51d8b0(i_3 + 0x5010, arg3)
    
    if (i_3 s<= 2)
        CookieCheckFunction(i_3)
        return i_3
    
    var_6c = "RollFlavorThemes"
    var_70 = 0x2f8a
    ecx_2 = "nret <= 2"

label_51ddce:
sub_63b870(i_3, &data_801800, ecx_2, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_70, var_6c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

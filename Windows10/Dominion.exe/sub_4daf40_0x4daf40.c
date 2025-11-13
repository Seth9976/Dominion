// 函数: sub_4daf40
// 地址: 0x4daf40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
void* esi = eax_2 + 0x7654

if (*(eax_2 + 0x7450) != 0)
    *arg1 = eax_2 + 0x7454
    *arg2 = esi
    uint32_t eax_3 = *(eax_2 + 0x7450)
    CookieCheckFunction(eax_3)
    return eax_3

int32_t i = 0
*(eax_2 + 0x7450) = 0
int32_t edi_1 = 0
int32_t var_210[0x81]

if (*(eax_2 + 0x56d8) s> 0)
    void* esi_1 = eax_2 + 0x42dc
    
    do
        int32_t eax_4
        uint32_t edx
        eax_4, edx = _Xtime_get_ticks()
        uint32_t eax_5
        int32_t edx_1
        eax_5, edx_1 = __alldiv(eax_4, edx, 0x989680, 0)
        int32_t temp0_1 = *(esi_1 + 0x18)
        
        if (temp0_1 u>= edx_1 && (temp0_1 u> edx_1 || *(esi_1 + 0x14) u>= eax_5))
            if (*(esi_1 + 4) != 0x63)
                int32_t ecx_5 = *(eax_2 + 0x7450)
                *(eax_2 + 0x7450) = ecx_5 + 1
                *(eax_2 + 0x7454 + (ecx_5 << 2)) = *esi_1
                
                if (esi != 0)
                    *(esi + (ecx_5 << 2)) = *(esi_1 + 4)
            else
                var_210[edi_1] = *esi_1
                edi_1 += 1
        
        i += 1
        esi_1 += 0x28
    while (i s< *(eax_2 + 0x56d8))

int32_t edx_5 = 0

if (edi_1 s> 0)
    if (esi == 0)
        int32_t edx_6 = 0
        
        do
            int32_t ecx_7 = *(eax_2 + 0x7450)
            *(eax_2 + 0x7450) = ecx_7 + 1
            int32_t eax_14 = var_210[edx_6]
            edx_6 += 1
            *(eax_2 + 0x7454 + (ecx_7 << 2)) = eax_14
        while (edx_6 s< edi_1)
    else
        do
            int32_t ecx_6 = *(eax_2 + 0x7450)
            *(eax_2 + 0x7450) = ecx_6 + 1
            int32_t eax_12 = var_210[edx_5]
            edx_5 += 1
            *(eax_2 + (ecx_6 << 2) + 0x7454) = eax_12
            *(esi + (ecx_6 << 2)) = 0x63
        while (edx_5 s< edi_1)

int32_t var_21c
int32_t* esi_3 = &var_21c
var_21c = 3
int32_t var_218 = 0
int32_t ecx_8 = 3
int32_t var_214 = 2
int32_t* var_238_1 = &var_21c

while (true)
    void* var_22c
    int32_t eax_15 = sub_571bc0(ecx_8, &var_22c)
    int32_t var_228_1 = eax_15
    int32_t var_234_1 = 0
    
    if (eax_15 s> 0)
        int32_t* esi_5 = var_22c + 4
        
        do
            int32_t var_230_1
            
            if (*esi_5 != 0)
                int32_t eax_16 = data_bf23b8
                eax_15 = eax_16
                int32_t temp2_1
                
                if (eax_16 != 0)
                    temp2_1 = eax_15
                    eax_15 -= 1
                
                if (eax_16 != 0 && temp2_1 == 1)
                    int32_t* ecx_9 = *SteamInternal_ContextInit(&data_cb4518)
                    eax_15 = (*(*ecx_9 + 0x1c))(esi_5[1])
                    
                    if (eax_15.b != 0 || *esi_5 == 0)
                        goto label_4db125
                else if (*esi_5 == 0)
                label_4db125:
                    var_230_1 = 0xc8
                    goto label_4db12d
            else
                var_230_1 = 0xc7
            label_4db12d:
                int32_t edi_2 = *(eax_2 + 0x7450)
                char const* const var_254_2
                int32_t var_250
                char const* const var_24c_2
                char* ecx_17
                
                if (edi_2 s>= 0x80)
                    var_24c_2 = "ProfileGetEntitlements"
                    var_250 = 0x885
                    var_254_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_17 = "numEntitlements < MAX_PROFILE_ENTITLEMENTS"
                label_4db245:
                    sub_63b870(eax_15, &data_801800, ecx_17, var_254_2, var_250, var_24c_2)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t ecx_10 = 0
                *(eax_2 + 0x7450) = edi_2 + 1
                eax_15 = 0
                
                while (true)
                    if (eax_15 u>= 0x28d4)
                        var_24c_2 = "DomDLCGrantsEntitlement"
                        var_250 = 0xdb
                        var_254_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
                        ecx_17 = "Halt"
                        goto label_4db245
                    
                    if (*(eax_15 + &data_78087c) == esi_5[-1])
                        *(eax_2 + (edi_2 << 2) + 0x7454) = *(ecx_10 * 0x10c + &data_780878)
                        
                        if (eax_2 != 0xffff89ac)
                            *(eax_2 + 0x7654 + (edi_2 << 2)) = var_230_1
                        
                        break
                    
                    ecx_10 += 1
                    eax_15 += 0x10c
            esi_5 = &esi_5[0x11]
            eax_15 = var_234_1 + 1
            var_234_1 = eax_15
        while (eax_15 s< var_228_1)
        
        esi_3 = var_238_1
    
    esi_3 = &esi_3[1]
    var_238_1 = esi_3
    
    if (esi_3 == &var_210)
        break
    
    ecx_8 = *esi_3

int32_t i_1 = 0

if (*(eax_2 + 0x7450) s> 0)
    void* edi_3 = eax_2 + 0x7454
    
    do
        *edi_3
        sub_4e4d60(i_1)
        i_1 += 1
        edi_3 += 4
    while (i_1 s< *(eax_2 + 0x7450))

*arg1 = eax_2 + 0x7454
*arg2 = eax_2 + 0x7654
uint32_t eax_27 = *(eax_2 + 0x7450)
CookieCheckFunction(eax_27)
return eax_27

// 函数: sub_513740
// 地址: 0x513740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* ecx = *(sub_573400() + 4)
*(ecx + 0xd38)
int32_t eax_5 = divs.dp.d(sx.q(*(ecx + 0x19e0) - 1), *(ecx + 0xd38))
int32_t var_38
char const* const ecx_1

if (eax_5 s>= 0)
    int32_t esi_1 = 0
    int32_t* eax_7 = *(eax + 4) + 0x1654
    int32_t ecx_2 = 0x13
    
    while (*eax_7 != 0)
        ecx_2 += 1
        esi_1 += 1
        eax_7 = &eax_7[4]
        
        if (ecx_2 s>= 0x21)
            break
    
    int32_t ecx_3 = *(sub_573400() + 0x5c)
    int16_t edx_2 = -1
    int16_t var_24_1 = -1
    int16_t var_1c_1 = -1
    
    if (ecx_3 != 0)
        edx_2 = ecx_3.w
        var_24_1 = (ecx_3 s>> 0x10).w
        var_1c_1 = edx_2
    
    int32_t ebx_1 = sx.d(edx_2)
    uint32_t eax_13
    
    while (true)
        eax_13 = sub_63ed10(*(eax + 4), esi_1)
        
        if (eax_13 != sx.d(var_24_1))
            if (eax_13 != ebx_1)
                break
    
    void* eax_15 = sub_5136e0(ebx_1)
    void* eax_16 = sub_5136e0(sx.d(var_24_1))
    void* eax_17 = sub_5136e0(eax_13)
    void* esi_3
    
    if (var_1c_1 == 0xffff)
        esi_3 = eax
    else
        esi_3 = eax
        sub_571680(eax_17, 0x1c, *(esi_3 + 4), 0xffffffff, 0x14, 0x37, eax_15, nullptr, nullptr, 0, 
            0, 0, 0, 0)
    
    void* eax_18 = sub_571680(eax_17, 0x1b, *(esi_3 + 4), 0xffffffff, 0x14, 0x37, eax_17, nullptr, 
        nullptr, 0, 0, 0, 0, 0)
    
    if (var_24_1 != 0xffff)
        eax_18 = sub_571680(eax_18, 0x1c, *(esi_3 + 4), 0xffffffff, 0x14, 0x38, eax_16, nullptr, 
            nullptr, 0, 0, 0, 0, 0)
    
    if (var_1c_1 != 0xffff)
        sub_571680(eax_18, 0x1b, *(esi_3 + 4), 0xffffffff, 0x14, 0x38, eax_15, nullptr, nullptr, 0, 
            0, 0, 0, 0)
    
    if (var_24_1 == 0xffff)
        return sub_513680(ebx_1 << 0x10 | eax_13)
    
    int32_t* ecx_15 = *(esi_3 + 4)
    eax_5 = ecx_15[mods.dp.d(sx.q(eax_5), 0x14) + 0x3ee]
    
    if (eax_5 != 0)
        sub_5716d0(sub_513470(eax_5, sx.d(var_24_1) + 0x13, ecx_15, eax_5), 0x42, *(esi_3 + 4), 
            0xffffffff, 0, nullptr, 0, eax_5, eax_16, 0, 0)
        return sub_513680(ebx_1 << 0x10 | eax_13)
    
    char const* const var_34_3 =
        "Twist_Typhoon::<lambda_256f91d79dff3daf972f4a6977b4d70f>::operator ()"
    var_38 = 0x1661
    ecx_1 = "whatTo != CARD_NONE"
else
    char const* const var_34_1 =
        "Twist_Typhoon::<lambda_256f91d79dff3daf972f4a6977b4d70f>::operator ()"
    var_38 = 0x1634
    ecx_1 = "currentTurn - TURN_OFFSET >= 0"

sub_63b870(eax_5, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_38, "Twist_Typhoon::<lambda_256f91d79dff3daf972f4a6977b4d70f>::operator ()")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

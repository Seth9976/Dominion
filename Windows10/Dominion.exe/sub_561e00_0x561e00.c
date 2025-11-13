// 函数: sub_561e00
// 地址: 0x561e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
uint32_t ebx_1

if ((arg2 & 1) == 0)
    ebx_1 = 0
else
    ebx_1 = sub_56b780()

void* eax_12

if (arg4 != 0)
label_561ed1:
    int32_t var_cac_1 = 0xc
    void var_c98
    uint32_t eax_11 = sub_588db0(&var_c98, *(eax_2 + 0xc), *(eax_2 + 4), arg3, 0x3ea, 0, 0, 0, 
        nullptr, &var_c98, ebx_1)
    
    if (arg4 != 0)
        CookieCheckFunction(eax_11)
        return eax_11
    
    eax_12 = sub_573400()
    int32_t ecx_8 = *(eax_12 + 0xc)
    
    if (ecx_8 != 0xffffffff)
        eax_11 = *(eax_12 + 4)
        int32_t ecx_9 = ecx_8 * 0x5a30
        *(ecx_9 + eax_11 + 0x17558) |= 4
        CookieCheckFunction(eax_11)
        return eax_11
else
    if (sub_561d80(sub_56b800()) == 0)
        goto label_561ed1
    
    if (arg3 != 0)
        uint32_t eax_6 = sub_573400()
        sub_590760(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0, arg3, ebx_1, 0)
    
    if (*eax_2 == 2)
        void* edx_1 = *(eax_2 + 4)
        *(edx_1 + (*(edx_1 + 0x19b0) << 2) + 0x38fe8) = *(eax_2 + 0x10)
        void* eax_8 = *(eax_2 + 4)
        *(eax_8 + 0x19b0) += 1
    
    eax_12 = sub_573400()
    int32_t ecx_3 = *(eax_12 + 0xc)
    
    if (ecx_3 != 0xffffffff)
        uint32_t eax_9 = *(eax_12 + 4)
        int32_t ecx_4 = ecx_3 * 0x5a30
        *(ecx_4 + eax_9 + 0x17558) |= 1
        CookieCheckFunction(eax_9)
        return eax_9

sub_63b870(eax_12, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

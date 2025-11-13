// 函数: sub_53bd80
// 地址: 0x53bd80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
int32_t ecx_1 = *(eax_3 + 0xc)

if (ecx_1 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_2 = ecx_1 * 0x5a30
*(ecx_2 + eax_4 + 0x17558) |= 2
void var_8
int32_t eax_6 = sub_568780(&var_8, edx_1, 0x3ea, &var_8)
int32_t var_14_1 = 0
void arg_c80
int32_t* result = sub_53b010(eax_6, 0x3ea, __builtin_memcpy(&arg_c80, eax_6, 0xc84), 0xbf)

if (result != 0)
    void* eax_7
    int32_t ecx_4
    eax_7, ecx_4 = sub_573400()
    uint32_t esi_2 = zx.d(result.w)
    int32_t edi_1 = *(eax_7 + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_8 = esi_2 * 0x64
    int32_t var_14_2 = ecx_4
    int32_t var_18_1 = 0
    result = sub_568960(eax_8, *(eax_8 + edi_1 + 0x1a4c), 0x462, 0)
    
    if (result s<= 1)
        sub_561af0(result, 0, 3, 0)
        result = sub_56e9c0(1)

CookieCheckFunction(result)
return result

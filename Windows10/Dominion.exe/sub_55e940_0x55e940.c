// 函数: sub_55e940
// 地址: 0x55e940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3 = sub_573400()
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
void* eax_5 = sub_573400()
int32_t var_14_1 = 0xc
void var_8
uint32_t eax_6 = sub_588db0(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 3, 0x3ee, 1, *(eax_5 + 0x28), 
    *(eax_5 + 0x2c), *(eax_5 + 0x30), &var_8, 0)
uint32_t arg_c78 = eax_6
int32_t arg_c80[0x320]
__builtin_memcpy(&arg_c80, &var_8, 0xc84)
uint32_t eax_7 = sub_56ab80(eax_6, 0x3ee, &arg_c80, 0x3b, 7)
int32_t eax_8 = arg1
int32_t ecx_5 = 0

if (eax_8 s> 0)
    do
        if (arg_c80[ecx_5] == eax_7)
            arg1 = eax_8 - 1
            eax_8 = arg_c80[eax_8 - 1]
            arg_c80[ecx_5] = eax_8
            break
        
        ecx_5 += 1
    while (ecx_5 s< eax_8)

void* result = sub_56acc0(eax_8, 0x3ee, &arg_c80, 0xe, 0, 5)
int32_t edi = arg1
int32_t ecx_7 = 0

if (edi s> 0)
    do
        if (arg_c80[ecx_7] == result)
            result = arg_c80[edi - 1]
            arg_c80[ecx_7] = result
            edi -= 1
            break
        
        ecx_7 += 1
    while (ecx_7 s< edi)

int32_t esi_1 = 0

if (edi s> 0)
    do
        result = sub_5695c0(result, 0x3ee, arg_c80[esi_1], 0xb)
        esi_1 += 1
    while (esi_1 s< edi)

CookieCheckFunction(result)
return result

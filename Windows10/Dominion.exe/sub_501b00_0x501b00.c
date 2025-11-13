// 函数: sub_501b00
// 地址: 0x501b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
int32_t var_1c = __chkstk(0x1998)
void var_10
sub_561e00(__security_cookie ^ &var_10, 0, 4, 0)
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 1, 0, 0)
void* eax_3
int32_t edx_1
eax_3, edx_1 = sub_573400()
int32_t ecx_2 = *(eax_3 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(eax_3 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_4 + 0x17558) |= 2
void arg_70
int32_t eax_6 = sub_568780(&arg_70, edx_1, 0x3ea, &arg_70)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0xe6.o
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_6, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* eax_7
int32_t edx_3
eax_7, edx_3 = sub_563c40(&arg_38, 0xe, 0)

if (eax_7 != 0)
    var_4 = nullptr
    void* eax_8 = sub_573400()
    uint32_t edi_1 = zx.d(eax_7.w)
    int32_t eax_9 = *(eax_8 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    edx_3 = sub_582d10(eax_9, *(edi_1 * 0x64 + eax_9 + 0x1a70), *(eax_8 + 4), eax_7, 0x3ea, 0xb, 
        0x3eb, 4, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, nullptr, 
        var_4)

int32_t eax_11 = sub_568780(&arg_70, edx_3, 0x3ea, &arg_70)
__builtin_memset(&arg_c, 0, 0x2c)
arg_38 = 0xe7.o
__builtin_memcpy(&arg_cf8, eax_11, 0xc84)
arg_48 = arg1.o
arg_58 = arg2.o
uint32_t result = sub_563c40(&arg_38, 0xe, 0)

if (result != 0)
    var_4 = 0xffffffff
    void* eax_12 = sub_573400()
    uint32_t edi_3 = zx.d(result.w)
    int32_t* eax_13 = *(eax_12 + 4)
    
    if (edi_3 u>= 0x320)
        sub_591930()
    
    result = sub_582d10(eax_13, eax_13[edi_3 * 0x19 + 0x69c], *(eax_12 + 4), result, 0x3ea, 0xb, 
        0x3eb, 2, *(eax_12 + 0x28), *(eax_12 + 0x2c), *(eax_12 + 0x30), 0, 0, nullptr, 0, var_4, 
        nullptr)

CookieCheckFunction(result)
return result

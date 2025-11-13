// 函数: sub_4fb270
// 地址: 0x4fb270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebp
void* var_4 = ebp
__chkstk(0x1998)
__security_cookie
sub_56d1f0()
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 2, 1, 0, 0)
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
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
*(ecx_2 + eax_4 + 0x17558) |= 8
int128_t arg_38 = 0x8c.o
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t arg_70
void arg_cf8
__builtin_memcpy(&arg_cf8, sub_568780(&arg_70, edx_1, 0x3ea, &arg_70), 0xc84)
int32_t* result = sub_563c40(&arg_38, 0x12, 0)

if (result != 0)
    var_4 = nullptr
    void* eax_7 = sub_573400()
    uint32_t edi_1 = zx.d(result.w)
    int32_t eax_8 = *(eax_7 + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    uint32_t eax_9 = sub_582d10(eax_8, *(edi_1 * 0x64 + eax_8 + 0x1a70), *(eax_7 + 4), result, 
        0x3ea, 0xb, 0x455, 4, *(eax_7 + 0x28), *(eax_7 + 0x2c), *(eax_7 + 0x30), 0, 0, nullptr, 0, 
        nullptr, var_4)
    arg_70 = 0
    result = sub_56bd60(eax_9, &arg_70, sub_4fb460, 1, 0)

CookieCheckFunction(result)
return result

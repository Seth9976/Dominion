// 函数: sub_54bf50
// 地址: 0x54bf50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
__chkstk(0x1998)
__security_cookie
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
*(ecx_2 + eax_4 + 0x17558) |= 8
void arg_70
int32_t eax_6 = sub_568780(&arg_70, edx_1, 0x3ec, &arg_70)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0x116.o
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_6, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* eax_7 = sub_563c40(&arg_38, 0x34, 0)
void* var_4 = nullptr
void* eax_8 = sub_573400()
int32_t eax_9 = *(eax_8 + 4)
uint32_t eax_10 = zx.d(eax_7.w)

if (eax_10 u>= 0x320)
    sub_591930()

uint32_t result = sub_582d10(eax_9, *(eax_10 * 0x64 + eax_9 + 0x1a70), *(eax_8 + 4), eax_7, 0x3ec, 
    0xb, 0x3eb, 2, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, 0xffffffff, 
    var_4)
CookieCheckFunction(result)
return result

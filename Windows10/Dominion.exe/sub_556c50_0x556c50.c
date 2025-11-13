// 函数: sub_556c50
// 地址: 0x556c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1998)
__security_cookie
void* eax_2 = sub_573400()
sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 2, 0, 0)
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
void arg_70
int32_t eax_6 = sub_568780(&arg_70, edx_1, 0x3ec, &arg_70)
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x2c)
int128_t arg_38 = 0xb4.o
void arg_cf8
__builtin_memcpy(&arg_cf8, eax_6, 0xc84)
int128_t arg_48 = arg1.o
int128_t arg_58 = arg2.o
int32_t* eax_7
int32_t ecx_3
eax_7, ecx_3 = sub_563c40(&arg_38, 0xe, 0)

if (eax_7 == 0)
    int32_t var_1c_2 = ecx_3
    uint32_t eax_11 = sub_561e00(eax_7, 0, 1, 0)
    CookieCheckFunction(eax_11)
    return eax_11

void* __saved_ebp = nullptr
void* eax_8 = sub_573400()
uint32_t edi_1 = zx.d(eax_7.w)
int32_t eax_9 = *(eax_8 + 4)

if (edi_1 u>= 0x320)
    sub_591930()

uint32_t eax_10 = sub_582d10(eax_9, *(edi_1 * 0x64 + eax_9 + 0x1a70), *(eax_8 + 4), eax_7, 0x3ec, 
    0xb, 0x3ea, 3, *(eax_8 + 0x28), *(eax_8 + 0x2c), *(eax_8 + 0x30), 0, 0, nullptr, 0, nullptr, 
    __saved_ebp)
CookieCheckFunction(eax_10)
return eax_10

// 函数: sub_504cf0
// 地址: 0x504cf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1988)
__security_cookie
void arg_60
void arg_ce8
__builtin_memcpy(&arg_ce8, sub_568780(&arg_60, memset(&arg_ce8, 0, 0xc84), 0x44d, &arg_60), 0xc84)
void* eax_4 = sub_573400()
int32_t ecx_1 = arg3

if (sub_583fc0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1000) s< ecx_1)
    void* eax_6 = sub_573400()
    ecx_1 = sub_583fc0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0x1000)

int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0xbd.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
__builtin_memcpy(&arg_ce8, 
    sub_563960(&arg_60, 0, &arg_ce8, &arg_60, ecx_1, 0x10, &arg_28, 0xe, 0, 0), 0xc84)

if (arg3 != 0)
    void* eax_11 = sub_573400()
    uint32_t eax_12 = sub_56b780()
    sub_594010(eax_12, *(eax_11 + 0xc), *(eax_11 + 4), eax_12, arg3)
    uint32_t eax_14 =
        sub_566140(sub_561f60(neg.d(arg3), 0), 0x44d, &arg_ce8, 0x44f, 4, 0, 0xb, nullptr, nullptr)
    CookieCheckFunction(eax_14)
    return eax_14

void* eax_10 = sub_5734e0()

if (*(eax_10 + 0x34) == arg3)
    *(eax_10 + 0x34) = 1
    CookieCheckFunction(eax_10)
    return eax_10

sub_63b870(eax_10, &data_801800, "c.didNothing == 0", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Allies.cpp", 0x773, "SetDidNothing")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

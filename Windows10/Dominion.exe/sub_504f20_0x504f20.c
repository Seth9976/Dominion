// 函数: sub_504f20
// 地址: 0x504f20
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

if (sub_583fc0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1000) * 2 s< ecx_1)
    void* eax_7 = sub_573400()
    ecx_1 = sub_583fc0(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), 0x1000) * 2

int32_t arg_4
__builtin_memset(&arg_4, 0, 0x24)
var_4.q = 0
int128_t arg_28 = 0xf8.o
int128_t arg_38 = arg1.o
int128_t arg_48 = arg2.o
__builtin_memcpy(&arg_ce8, 
    sub_563960(&arg_60, 0, &arg_ce8, &arg_60, ecx_1, 0x10, &arg_28, 0xe, 0, 0), 0xc84)

if (arg3 != 0)
    int32_t eax_14
    int32_t edx_3
    edx_3:eax_14 = sx.q(arg3 + 1)
    int32_t edi_1 = (eax_14 - edx_3) s>> 1
    void* eax_16 = sub_573400()
    uint32_t eax_17 = sub_56b780()
    sub_594010(eax_17, *(eax_16 + 0xc), *(eax_16 + 4), eax_17, edi_1)
    uint32_t eax_19 =
        sub_566140(sub_561f60(neg.d(edi_1), 0), 0x44d, &arg_ce8, 0x3ec, 4, 0, 0xb, nullptr, nullptr)
    CookieCheckFunction(eax_19)
    return eax_19

void* eax_12 = sub_5734e0()

if (*(eax_12 + 0x34) == 0)
    *(eax_12 + 0x34) = 1
    CookieCheckFunction(eax_12)
    return eax_12

sub_63b870(eax_12, &data_801800, "c.didNothing == 0", 
    "C:\x\ax2017\Jams\Dominion\code\DomCards_Allies.cpp", 0x773, "SetDidNothing")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

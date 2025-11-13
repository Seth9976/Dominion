// 函数: sub_587410
// 地址: 0x587410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t edi_1 = arg5 & 2

if (edi_1 == 0)
    arg3[0x67b] = 3
    sub_5749d0(arg3, arg2)

uint32_t eax_2 = zx.d(arg4.w)

if (eax_2 u>= 0x320)
    sub_591930()

void* eax_4 = sub_571b30(arg3[eax_2 * 0x19 + 0x693], arg3[0x352])
int32_t eax_6 = *(eax_4 + 0x9c) & 0x940
int32_t ecx_3 = (*(eax_4 + 0x98) & 0x7f000400) | eax_6

if (ecx_3 == 0)
    uint32_t eax_8 = zx.d(not.b((arg5 u>> 1).b)) & 1
    uint32_t var_18_1 = eax_8
    return sub_585010(eax_8, arg2, arg3, arg4.b)

if (edi_1 == 0)
    int32_t var_18 = ecx_3
    return sub_584b10(eax_6, arg2, arg3, arg4, edi_1.b)

sub_63b870(eax_6, &data_801800, "!(flags & BUYFLAG_BLACK_MARKET)", 
    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x3331, "BuyCardRegular")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

// 函数: sub_572560
// 地址: 0x572560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t* result = sub_572350(arg1, arg4, arg3, arg5)
uint32_t eax_1 = zx.d(arg2.w)

if (eax_1 u>= 0x320)
    sub_591930()

void* edx_2 = eax_1 * 0x64 + arg3

if (arg4 != 0x451 && (*(edx_2 + 0x1a50) != 0x451 || arg4 != 0x3e9))
    int32_t ecx = *(arg3 + 0x19ac)
    *(arg3 + 0x19ac) = ecx + 1
    *(edx_2 + 0x1a54) = ecx

*(edx_2 + 0x1a50) = arg4
*(edx_2 + 0x1aa4) = 0

if (arg5 != 0xffffffff)
    *(edx_2 + 0x1a74) = arg5

*(edx_2 + 0x1a70) = arg5
*(edx_2 + 0x1a78) = arg5
int32_t var_1c
char* ecx_1

if (*result == 0)
    *result = arg2
    
    if (*(edx_2 + 0x1aa4) == 0)
        return result
    
    char const* const var_18_2 = "CardAddTail"
    var_1c = 0x425
    ecx_1 = "card.next == CARDID_NULL"
else
    char const* const var_18_1 = "CardAddTail"
    var_1c = 0x422
    ecx_1 = "tailId == CARDID_NULL"

sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", var_1c, 
    "CardAddTail")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

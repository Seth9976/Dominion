// 函数: sub_591310
// 地址: 0x591310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
void* eax_1 = sub_5768a0(arg3)
*(eax_1 + 0x14) = 0xffffffff
*eax_1 = 3
*(eax_1 + 0x4c) = 0
int32_t ecx = *arg5
*(eax_1 + 0x20) = arg5[1]
*(eax_1 + 0x1c) = ecx

if (arg2 != arg4)
    *(eax_1 + 4) = 2

int32_t eax_2 = arg8

if (eax_2 == 0)
    eax_2 = 0
else if (*arg5 != 0)
    sub_63b870(eax_2, &data_801800, "source.which == CARDID_NULL", 
        "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x4c29, "GainTurn")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(eax_1 + 0x24) = eax_2
int32_t ecx_1 = *arg6
*(eax_1 + 0x48) = arg6[1]
*(eax_1 + 0x58) = arg7
*(eax_1 + 0x44) = ecx_1
*(eax_1 + 0x50) = arg2
*(eax_1 + 0x54) = arg4
*(eax_1 + 0x70) = 0
*(eax_1 + 0x74) = 0
*(eax_1 + 0x7c) = 0
void* result = *(arg3 + 0x1504)

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

ecx_1.b = result == 2
return sub_61b1b0(result, 0x1b, ecx_1.b, arg2, 0, nullptr, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

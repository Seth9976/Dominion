// 函数: sub_56c1b0
// 地址: 0x56c1b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()

if (*eax != 2)
    sub_591930()

void* result = sub_5768a0(*(eax + 4))
*(result + 0x14) = *(eax + 0xc)
*(result + 0x18) = 0xffffffff
int32_t edx = *(eax + 0x10)
int32_t ecx_2 = *(eax + 0x14)
*(result + 0x1c) = edx
*(result + 0x20) = ecx_2

if (edx == 0)
    sub_63b870(result, &data_801800, "ability.which.which != CARDID_NULL", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x12c8, "ThisTurnRepeated")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_3 = *(eax + 0x20)
*(result + 0x44) = *(eax + 0x1c)
*(result + 0x48) = ecx_3
*(result + 0x28) = *(eax + 0x24)
*(result + 0x50) = arg3
*(result + 0x58) = arg4
*(result + 0x60) = arg5
*(result + 0x54) = arg2
*(result + 0x84) = arg6
*result = 1
*(result + 0x4c) = 2
*(result + 0x70) = 0
*(result + 0x74) = 0
*(result + 0x7c) = 0
int32_t ecx_4 = *(eax + 0x2c)
*(result + 0x38) = *(eax + 0x28)
*(result + 0x3c) = ecx_4
return result

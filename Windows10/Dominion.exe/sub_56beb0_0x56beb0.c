// 函数: sub_56beb0
// 地址: 0x56beb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t edx
eax, edx = sub_573400()
int32_t eax_1 = *eax
int32_t var_8
uint32_t eax_5
uint32_t ebx

if (eax_1 != 2)
    if (eax_1 != 3)
        sub_63b870(eax_1, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
            0x1253, "NextTimeThisTurn")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    uint32_t eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_5916d0(eax_1, edx, *(eax + 4), *(eax + 0x10))
    ebx = eax_6
    var_8 = edx_1
    eax_5 = sub_5915b0(eax_6, edx_1, *(eax + 4), *(eax + 0x10))
else
    ebx = *(eax + 0x10)
    uint32_t esi_1 = zx.d(ebx.w)
    var_8 = *(eax + 0x14)
    int32_t eax_3 = *(eax + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    eax_5 = *(esi_1 * 0x64 + eax_3 + 0x1a4c)

void* eax_7 = sub_5768a0(*(eax + 4))
int32_t ecx_4 = *(eax + 0xc)
*(eax_7 + 0x20) = var_8
*(eax_7 + 0x24) = eax_5
*(eax_7 + 0x14) = ecx_4
*(eax_7 + 0x18) = 0xffffffff
*(eax_7 + 0x1c) = ebx
int32_t ecx_5 = *(eax + 0x1c)
*(eax_7 + 0x48) = *(eax + 0x20)
*(eax_7 + 0x44) = ecx_5
*(eax_7 + 0x28) = *(eax + 0x24)
*eax_7 = 5
*(eax_7 + 4) = 2
*(eax_7 + 0x10) = *(eax + 0x38)
*(eax_7 + 0x54) = arg2
*(eax_7 + 0x50) = arg3
*(eax_7 + 0x58) = arg4
*(eax_7 + 0x60) = arg5
*(eax_7 + 0x84) = arg7
*(eax_7 + 0x4c) = 2
*(eax_7 + 0x5c) = 0
*(eax_7 + 0x70) = 0
*(eax_7 + 0x74) = 0
*(eax_7 + 0x7c) = 0
return sub_56b8e0(eax_7 + 0x78, eax_7 + 0x70, *(eax + 4), eax_7 + 0x74, eax_7 + 0x78, arg6)

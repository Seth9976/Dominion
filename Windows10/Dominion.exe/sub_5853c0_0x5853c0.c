// 函数: sub_5853c0
// 地址: 0x5853c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
void* eax = sub_5734e0()
*(eax + 0x24) = arg5
sub_578d00(eax, arg2, arg3, arg4, 3, arg5, nullptr)
void* eax_1 = sub_571b30(arg5, *(arg3 + 0xd48))
int32_t eax_2

if ((*(eax_1 + 0x98) & 0x10000000) == 0)
    int32_t i = *(eax_1 + 0xa8)
    int32_t ecx_5 = 0
    
    if (i == 0)
    label_5854be:
        sub_63b870(i, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x2f07, 
            "GetReplacementFn")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    while (i != 9)
        ecx_5 += 1
        i = *(ecx_5 * 0xb4 + eax_1 + 0xa8)
        
        if (i == 0)
            goto label_5854be
    
    eax_2 = *(ecx_5 * 0xb4 + eax_1 + 0xbc)
else
    eax_2 = *(eax_1 + 0xa0)

eax_2()
uint32_t result = arg4
uint32_t esi_1 = zx.d(result.w)

if (esi_1 u>= 0x320)
    result = sub_591930()

int32_t edi_1 = esi_1 * 0x64

if (*(edi_1 + arg3 + 0x1a50) == 0x3e9)
    if (esi_1 u>= 0x320)
        sub_591930()
    
    result = *(arg3 + 0x1a08)
    int32_t ecx_6 = *(edi_1 + arg3 + 0x1a54)
    *(arg3 + (result << 3) + 0x39c68) = arg4
    *(arg3 + (result << 3) + 0x39c6c) = ecx_6
    *(arg3 + 0x1a08) += 1

return result

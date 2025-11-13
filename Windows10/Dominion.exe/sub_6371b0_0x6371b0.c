// 函数: sub_6371b0
// 地址: 0x6371b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg5
int32_t eax_1 = *ecx + 0x258

if (eax_1 != arg1)
    sub_63b870(eax_1, &data_801800, "&callback.gfx->move == this", 
        "C:\x\ax2017\Jams\Dominion\code\CardMotion.h", 0xf0, 
        "MoveComponent<struct DomLoc,struct DomMoveCallback>::QueueMove")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t edx = *(arg1 + 0x17c0)
int32_t esi = edx - 1

if (esi s>= 0)
    int32_t ecx_1 = edx
    void* edi_3 = esi * 0xb0 + 0x248 + arg1
    int32_t temp1_1
    
    do
        edx = ecx_1
        
        if (*edi_3 != 3)
            break
        
        if (ecx_1 == 1)
            sub_633aa0(arg1 + 0x250, edx.b)
        
        edi_3 -= 0xb0
        edx = *(arg1 + 0x17c0) - 1
        temp1_1 = esi
        esi -= 1
        *(arg1 + 0x17c0) = edx
        ecx_1 = edx
    while (temp1_1 - 1 s>= 0)
    ecx = arg5

if (edx == 0)
    return sub_6372f0(arg1, arg2, arg3, arg4, ecx)

void var_b4
__builtin_memcpy(&var_b4, arg2, 0x88)
int32_t var_2c = arg3
int32_t var_28 = arg4
int128_t var_24 = *arg5
int64_t var_14 = *(arg5 + 0x10)
int64_t var_c = 0

if (edx == 0x20)
    __builtin_memcpy(arg1 + 0x17c0, &var_b4, 0xb0)
    return arg5

__builtin_memcpy(edx * 0xb0 + 0x1c0 + arg1, &var_b4, 0xb0)
*(arg1 + 0x17c0) += 1
return arg5

// 函数: sub_623940
// 地址: 0x623940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_61cd10(arg3, arg5)

if ((arg9 & 2) == 0)
    int32_t eax = arg3[0x541]
    
    if (eax != 3 && eax != 5 && eax != 4 && eax != 6 && arg3[0x540].b == 0)
        int32_t eax_1 = arg5
        
        if (arg5 == arg3[0x673])
            eax_1 = arg3[0x674]
        
        sub_59f9b0(eax_1, arg5, arg3, eax_1, 0, 0, nullptr, 0, arg3[0x687], 0, 0, 0)

void* eax_2 = sub_573400()
int32_t ecx_1 = arg3[0x687]
int32_t edx_3 = arg9.d | 8
bool cond:0 = *(eax_2 + 0x6c) == 0
arg3[0x687] = ecx_1 + 1

if (cond:0)
    edx_3 = arg9.d

arg3[8] = ecx_1
arg3[0x1b] = arg4
arg3[9] = 5
arg3[0x1c] = arg5
int32_t ecx_3 = arg2[1]
arg3[0x1d] = *arg2
arg3[0x1e] = ecx_3
arg9.d = edx_3
*(arg3 + 0x30) = *arg7
*(arg3 + 0x40) = arg7[1]
int128_t xmm0_2 = arg7[2]
arg3[0x18] = arg8
*(arg3 + 0x50) = xmm0_2
arg3[0x19] = 0
arg3[0x20] = 0
arg3[0x1f] = arg6
arg3[0x34c] = 0
arg3[0x21] = 0
arg3[0x22] = 0
arg3[0x1a] = edx_3
int32_t eax_9 = arg3[0x541]

if (eax_9 != 6)
    if (eax_9 != 3)
        sub_622940(arg3, &arg3[8])
        
        if (sub_5e9670(sub_4d5db0(sub_4b9480(), arg3[0x1c]), &arg3[8]) == 0)
            sub_6a90e0()
        else if (arg3[9] != 5)
            sub_591930()
    else
        int32_t eax_11 = arg5 << 4
        
        if (*(eax_11 + 0xb80a74) == 0xffffffff)
            sub_63b870(eax_11, &data_801800, "ai.aiLevel != DBAI_NONE", 
                "C:\x\ax2017\Jams\Dominion\code\DomAI.cpp", 0x131, "DomAISimYield")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_4f4440(arg3, &arg3[8])
    
    edx_3 = arg9.d
else
    arg3[0x23] = 0

if ((edx_3.b & 2) == 0)
    int32_t eax_15 = arg3[0x541]
    
    if (eax_15 != 3 && eax_15 != 5 && eax_15 != 4 && eax_15 != 6 && arg3[0x540].b == 0)
        int32_t eax_16 = arg5
        
        if (arg5 == arg3[0x673])
            eax_16 = arg3[0x674]
        
        sub_59f9b0(eax_16, arg5, arg3, eax_16, 1, 0, nullptr, 0, arg3[0x687], arg3[0x22], 0, 0)

return arg3[0x23]

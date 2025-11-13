// 函数: sub_623b70
// 地址: 0x623b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
sub_61cd10(arg3, arg6)
int32_t eax = arg3[0x541]

if (eax != 3 && eax != 5 && eax != 4 && eax != 6 && arg3[0x540].b == 0)
    int32_t eax_1 = arg6
    
    if (arg6 == arg3[0x673])
        eax_1 = arg3[0x674]
    
    sub_59f9b0(eax_1, arg6, arg3, eax_1, 0, 0, nullptr, 0, arg3[0x687], 0, 0, 0)

int32_t edi = 8

if (*(sub_573400() + 0x6c) == 0)
    edi = 0

int32_t ecx_1 = arg3[0x687]
arg3[0x687] = ecx_1 + 1
arg3[9] = arg4
arg3[8] = ecx_1
*(arg3 + 0x30) = *arg10
*(arg3 + 0x40) = arg10[1]
int128_t xmm0_2 = arg10[2]
arg3[0x18] = arg11
arg3[0x1b] = arg5
*(arg3 + 0x50) = xmm0_2
arg3[0xa] = 0
arg3[0x19] = 0
int32_t eax_8 = *arg2
int32_t ecx_3 = arg2[1]
arg3[0x1c] = arg6
arg3[0x1d] = eax_8
arg3[0x1e] = ecx_3
memcpy(&arg3[0x24], arg7, arg8 << 2)
int32_t eax_10 = arg9
arg3[0x23] = arg8
arg3[0x1f] = 1
arg3[0x20] = eax_10
arg3[0x34c] = 0
arg3[0x21] = 0
arg3[0x22] = 0
arg3[0x1a] = edi
int32_t ecx_5 = arg3[0x541]
char const* const var_20_1
int32_t var_1c_1
char const* const var_18_1
char* ecx_6

if (ecx_5 != 6)
    if (ecx_5 != 3)
        sub_622940(arg3, &arg3[8])
        
        if (sub_5e9670(sub_4d5db0(sub_4b9480(), arg3[0x1c]), &arg3[8]) == 0)
            sub_6a90e0()
        else if (arg4 != arg3[9])
            sub_591930()
        
        goto label_623d44
    
    eax_10 = arg3[0x1c] << 4
    
    if (*(eax_10 + 0xb80a74) != 0xffffffff)
        sub_4f4440(arg3, &arg3[8])
        goto label_623d44
    
    var_18_1 = "DomAISimYield"
    var_1c_1 = 0x131
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomAI.cpp"
    ecx_6 = "ai.aiLevel != DBAI_NONE"
    goto label_623dcb

if (eax_10 != 0)
    var_18_1 = "DomNotifyYieldTypes"
    var_1c_1 = 0xe8c8
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_6 = "yld.minChoices == 0"
label_623dcb:
    sub_63b870(eax_10, &data_801800, ecx_6, var_20_1, var_1c_1, var_18_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

arg3[0x23] = 0
label_623d44:
memmove(arg7, &arg3[0x24], arg3[0x23] << 2)
int32_t eax_19 = arg3[0x541]

if (eax_19 != 3 && eax_19 != 5 && eax_19 != 4 && eax_19 != 6 && arg3[0x540].b == 0)
    int32_t eax_20 = arg6
    
    if (arg6 == arg3[0x673])
        eax_20 = arg3[0x674]
    
    sub_59f9b0(eax_20, arg6, arg3, eax_20, 1, 0, nullptr, 0, arg3[0x687], arg3[0x22], 0, 0)

return arg3[0x23]

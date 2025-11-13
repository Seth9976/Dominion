// 函数: sub_6236a0
// 地址: 0x6236a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
sub_61cd10(arg3, arg5)
int32_t eax = arg3[0x541]

if (eax != 3 && eax != 5 && eax != 4 && eax != 6 && arg3[0x540].b == 0)
    int32_t eax_1 = arg5
    
    if (arg5 == arg3[0x673])
        eax_1 = arg3[0x674]
    
    sub_59f9b0(eax_1, arg5, arg3, eax_1, 0, 0, nullptr, 0, arg3[0x687], 0, 0, 0)

int32_t edi = 8

if (*(sub_573400() + 0x6c) == 0)
    edi = 0

int32_t ecx_1 = arg3[0x687]
arg3[0x687] = ecx_1 + 1
arg3[8] = ecx_1
arg3[9] = 3
*(arg3 + 0x30) = *arg10
*(arg3 + 0x40) = arg10[1]
*(arg3 + 0x50) = arg10[2]
int32_t ecx_3 = arg2[1]
arg3[0x1d] = *arg2
arg3[0x1b] = arg4
arg3[0x1c] = arg5
arg3[0x1e] = ecx_3
arg3[0x18] = 0x31
arg3[0x19] = 0
arg3[0x24] = *arg6
arg3[0x23] = 1
arg3[0x1f] = 0xffffffff
arg3[0x20] = 0xffffffff
memcpy(&arg3[0x344], arg8, arg9 << 2)
arg3[0x34c] = arg9
arg3[0x21] = 0
arg3[0x22] = 0
arg3[0x1a] = edi
int32_t eax_11 = arg3[0x541]
char const* const var_20_1
int32_t var_1c_1
char const* const var_18_1
char* ecx_4

if (eax_11 != 6)
    if (eax_11 != 3)
        sub_622940(arg3, &arg3[8])
        
        if (sub_5e9670(sub_4d5db0(sub_4b9480(), arg3[0x1c]), &arg3[8]) == 0)
            sub_6a90e0()
        else if (arg3[9] != 3)
            sub_591930()
        
        goto label_62387e
    
    eax_11 = arg3[0x1c] << 4
    
    if (*(eax_11 + 0xb80a74) != 0xffffffff)
        sub_4f4440(arg3, &arg3[8])
        goto label_62387e
    
    var_18_1 = "DomAISimYield"
    var_1c_1 = 0x131
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomAI.cpp"
    ecx_4 = "ai.aiLevel != DBAI_NONE"
    goto label_62391b

if (arg3[0x20] != 0)
    var_18_1 = "DomNotifyYieldWheres"
    var_1c_1 = 0xe80d
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_4 = "yld.minChoices == 0"
label_62391b:
    sub_63b870(eax_11, &data_801800, ecx_4, var_20_1, var_1c_1, var_18_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

arg3[0x23] = 0
label_62387e:
memmove(arg6, &arg3[0x24], arg3[0x23] << 2)
memmove(arg7, &arg3[0x348], arg3[0x23] << 2)
int32_t result = arg3[0x541]

if (result == 3 || result == 5 || result == 4 || result == 6 || arg3[0x540].b != 0)
    return result

int32_t eax_22 = arg5

if (arg5 == arg3[0x673])
    eax_22 = arg3[0x674]

return sub_59f9b0(eax_22, arg5, arg3, eax_22, 1, 0, nullptr, 0, arg3[0x687], arg3[0x22], 0, 0)

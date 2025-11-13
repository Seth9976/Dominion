// 函数: sub_623df0
// 地址: 0x623df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

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
arg3[9] = 4
int32_t ecx_3 = arg2[1]
arg3[0x1d] = *arg2
arg3[0x1b] = arg4
arg3[0x1c] = arg5
arg3[0x1e] = ecx_3
int128_t xmm0 = *arg10
arg3[0x18] = 0x30
arg3[0x19] = 0
*(arg3 + 0x30) = xmm0
*(arg3 + 0x40) = arg10[1]
*(arg3 + 0x50) = arg10[2]
memcpy(&arg3[0x24], arg6, arg7 << 2)
arg3[0x23] = arg7
arg3[0x1f] = arg8
arg3[0x20] = arg9
arg3[0x34c] = 0
arg3[0x21] = 0
arg3[0x22] = 0
arg3[0x1a] = edi
int32_t eax_9 = arg3[0x541]
char const* const var_24_1
int32_t var_20_1
char const* const var_1c_1
char* ecx_6

if (eax_9 != 6)
    if (eax_9 != 3)
        sub_622940(arg3, &arg3[8])
        
        if (sub_5e9670(sub_4d5db0(sub_4b9480(), arg3[0x1c]), &arg3[8]) == 0)
            sub_6a90e0()
        else if (arg3[9] != 4)
            sub_591930()
        
        goto label_623fc2
    
    eax_9 = arg3[0x1c] << 4
    
    if (*(eax_9 + 0xb80a74) != 0xffffffff)
        sub_4f4440(arg3, &arg3[8])
        goto label_623fc2
    
    var_1c_1 = "DomAISimYield"
    var_20_1 = 0x131
    var_24_1 = "C:\x\ax2017\Jams\Dominion\code\DomAI.cpp"
    ecx_6 = "ai.aiLevel != DBAI_NONE"
    goto label_624049

if (arg9 s> 1)
    var_1c_1 = "DomNotifyYieldOptions"
    var_20_1 = 0xe906
    var_24_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_6 = "yld.minChoices <= 1"
label_624049:
    sub_63b870(eax_9, &data_801800, ecx_6, var_24_1, var_20_1, var_1c_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

int32_t eax_10
eax_10.b = arg9 != 0
arg3[0x23] = eax_10
label_623fc2:
memmove(arg6, &arg3[0x24], arg3[0x23] << 2)
int32_t eax_18 = arg3[0x541]

if (eax_18 != 3 && eax_18 != 5 && eax_18 != 4 && eax_18 != 6 && arg3[0x540].b == 0)
    int32_t eax_19 = arg5
    
    if (arg5 == arg3[0x673])
        eax_19 = arg3[0x674]
    
    sub_59f9b0(eax_19, arg5, arg3, eax_19, 1, 0, nullptr, 0, arg3[0x687], arg3[0x22], 0, 0)

return arg3[0x23]

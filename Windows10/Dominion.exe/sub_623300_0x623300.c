// 函数: sub_623300
// 地址: 0x623300
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
int32_t var_8_1 = arg3
sub_61cd10(arg3, arg5)

if ((arg14 & 2) == 0)
    int32_t eax = arg3[0x541]
    
    if (eax != 3 && eax != 5 && eax != 4 && eax != 6 && arg3[0x540].b == 0)
        int32_t eax_1 = arg5
        
        if (arg5 == arg3[0x673])
            eax_1 = arg3[0x674]
        
        sub_59f9b0(eax_1, arg5, arg3, eax_1, 0, 0, nullptr, 0, arg3[0x687], 0, 0, 0)

TEB* fsbase

if (*(*fsbase->ThreadLocalStoragePointer + 0xf010) != 0 && *(sub_573400() + 0x6c) != 0)
    arg14.d |= 8

int32_t ecx_1 = arg3[0x687]
arg3[0x687] = ecx_1 + 1
arg3[9] = arg6
arg3[8] = ecx_1
int32_t ebx_1 = arg7
*(arg3 + 0x30) = *arg12
*(arg3 + 0x40) = arg12[1]
int128_t xmm0_2 = arg12[2]
arg3[0xa] = arg11
*(arg3 + 0x50) = xmm0_2
int32_t ecx_2 = arg2[1]
arg3[0x1d] = *arg2
arg3[0x18] = arg13
arg3[0x19] = arg15
arg3[0x1b] = arg4
arg3[0x1c] = arg5
arg3[0x1e] = ecx_2
memcpy(&arg3[0x24], ebx_1, arg8 << 2)
bool cond:0 = arg3[0x1d] != 2
arg3[0x1f] = arg9
arg3[0x20] = arg10
int32_t eax_17 = arg14.d
arg3[0x23] = arg8
arg3[0x34c] = 0
arg3[0x21] = 0
arg3[0x22] = 0
arg3[0x1a] = eax_17
char const* const var_20_1
int32_t var_1c_1
char const* const var_18_1
char* ecx_4

if (cond:0 || arg3[0x1e] != 0)
    int32_t ecx_5 = var_8_1
    int32_t eax_18 = *(ecx_5 + 0x1504)
    
    if (eax_18 == 6)
        arg3[0x23] = 0
    label_6234fb:
        int32_t eax_24 = arg3[0xc]
        
        if (eax_24 != 0x96 && eax_24 != 0x12f && eax_24 != 0x8d)
            int32_t edx_6 = arg3[9]
            int32_t ecx_10
            
            if (edx_6 == 0xb || edx_6 == 0xa)
                ecx_10 = *(ecx_5 + 0x1504)
            
            if ((edx_6 != 0xb && edx_6 != 0xa) || ecx_10 == 1 || ecx_10 == 2)
                if (eax_24 != 2 || arg3[0xf] == 0)
                    if (arg3[0x23] s> 0)
                        int32_t eax_27 = 0
                        int32_t edx_9 = 0
                        
                        if (arg8 s> 0)
                            while (true)
                                if (*(ebx_1 + (eax_27 << 2)) == arg3[edx_9 + 0x24])
                                    edx_9 += 1
                                    
                                    if (edx_9 s>= arg3[0x23])
                                        goto label_6235d3
                                    
                                    eax_27 = 0
                                else
                                    eax_27 += 1
                                    
                                    if (eax_27 s>= arg8)
                                        break
                        
                        sub_591930()
                else if (arg3[0x23] s> 0)
                    int32_t eax_25 = 0
                    int32_t edx_7 = 0
                    
                    if (arg8 s> 0)
                        while (true)
                            if (*(ebx_1 + (eax_25 << 2)) == arg3[edx_7 + 0x24])
                                edx_7 += 1
                                
                                if (edx_7 s>= arg3[0x23])
                                    goto label_6235d3
                                
                                eax_25 = 0
                            else
                                eax_25 += 1
                                
                                if (eax_25 s>= arg8)
                                    break
                    
                    int32_t i = 0
                    
                    do
                        int32_t esi_2 = arg3[0xf]
                        int32_t edx_8 = 0
                        
                        if (esi_2 s<= 0)
                        label_623591:
                            sub_591930()
                        else
                            int16_t* ecx_12 = arg3[0xd]
                            
                            while (arg3[i + 0x24] != zx.d(*ecx_12))
                                edx_8 += 1
                                ecx_12 = &ecx_12[2]
                                
                                if (edx_8 s>= esi_2)
                                    goto label_623591
                        
                        i += 1
                    while (i s< arg3[0x23])
                    
                    ebx_1 = arg7
        
    label_6235d3:
        int32_t eax_28 = arg3[0x23]
        
        if (eax_28 s> 0)
            memmove(ebx_1, &arg3[0x24], eax_28 << 2)
        
        if ((arg14 & 2) == 0)
            int32_t ecx_14 = *(var_8_1 + 0x1504)
            
            if (ecx_14 != 3 && ecx_14 != 5 && ecx_14 != 4 && ecx_14 != 6
                    && *(var_8_1 + 0x1500) == 0)
                int32_t ecx_15 = arg5
                
                if (arg5 == *(var_8_1 + 0x19cc))
                    ecx_15 = *(var_8_1 + 0x19d0)
                
                sub_59f9b0(var_8_1, arg5, var_8_1, ecx_15, 1, 0, nullptr, 0, *(var_8_1 + 0x1a1c), 
                    arg3[0x22], 0, 0)
        
        return arg3[0x23]
    
    if (eax_18 != 3)
        sub_622940(ecx_5, &arg3[8])
        char eax_22 = sub_5e9670(sub_4d5db0(sub_4b9480(), arg3[0x1c]), &arg3[8])
        int32_t eax_23
        
        if (eax_22 != 0)
            eax_23 = arg3[9]
        
        if (eax_22 == 0 || eax_23 == 0)
            sub_6a90e0()
        else
            int32_t ecx_9 = *arg12
            
            if (ecx_9 != 3 && ecx_9 != 2 && ecx_9 != 0xfd)
            label_6234e7:
                
                if (arg6 != eax_23)
                    sub_591930()
            else if (eax_23 != 9 && eax_23 != 0xb && eax_23 != 0xa)
                goto label_6234e7
        
        goto label_6234f8
    
    eax_17 = arg3[0x1c] << 4
    
    if (*(eax_17 + 0xb80a74) != 0xffffffff)
        sub_4f4440(ecx_5, &arg3[8])
    label_6234f8:
        ecx_5 = var_8_1
        goto label_6234fb
    
    var_18_1 = "DomAISimYield"
    var_1c_1 = 0x131
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomAI.cpp"
    ecx_4 = "ai.aiLevel != DBAI_NONE"
else
    var_18_1 = "DomNotifyYield"
    var_1c_1 = 0xe776
    var_20_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_4 = "yld.activeItem.cardID != CARDID_NULL"

sub_63b870(eax_17, &data_801800, ecx_4, var_20_1, var_1c_1, var_18_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

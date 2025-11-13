// 函数: sub_72b700
// 地址: 0x72b700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = 0x80
int32_t var_14 = arg2
int32_t var_c = 0x80
char* ebx = nullptr
int32_t result

while (true)
    if ((arg2 & eax) == 0)
        result = arg4
    else
        int32_t* edi_1 = arg3 + 0x10
        void* var_8_1
        void* ecx
        void* edx
        
        if (*(arg3 + 0x10) == 0)
            ecx = arg3 + 0x20
        label_72b766:
            edx = arg3 + 0x1c
            var_8_1 = ecx
            
            if (*(arg3 + 0xa8) u>= *(arg3 + 0xac))
                return 0
        else
            if ((*(arg3 + 0x18))(*(arg3 + 0x1c)) != 0)
                ecx = arg3 + 0x20
                
                if (*(arg3 + 0x20) == 0)
                    return 0
                
                edi_1 = arg3 + 0x10
                goto label_72b766
            
            edx = arg3 + 0x1c
            var_8_1 = arg3 + 0x20
            ecx = arg3 + 0x20
        
        char* eax_6 = *(arg3 + 0xa8)
        
        if (eax_6 u< *(arg3 + 0xac))
            ecx.b = *eax_6
            result = arg4
            *(arg3 + 0xa8) = &eax_6[1]
            eax = var_c
            ebx[result] = ecx.b
        else if (*ecx == 0)
            result = arg4
            eax = var_c
            ebx[result] = 0
        else
            void* eax_10 = (*edi_1)(*edx, arg3 + 0x28, *(arg3 + 0x24))
            *(arg3 + 0xa8) = arg3 + 0x28
            void* ecx_1
            
            if (eax_10 != 0)
                result = arg4
                *(arg3 + 0xac) = eax_10 + 0x28 + arg3
                char* eax_17 = *(arg3 + 0xa8)
                ecx_1.b = *eax_17
                *(arg3 + 0xa8) = &eax_17[1]
                eax = var_c
                ebx[result] = ecx_1.b
            else
                result = arg4
                *var_8_1 = 0
                *(arg3 + 0xac) = arg3 + 0x29
                *(arg3 + 0x28) = 0
                char* eax_13 = *(arg3 + 0xa8)
                ecx_1.b = *eax_13
                *(arg3 + 0xa8) = &eax_13[1]
                eax = var_c
                ebx[result] = ecx_1.b
    
    ebx = &ebx[1]
    eax s>>= 1
    var_c = eax
    
    if (ebx s>= 4)
        break
    
    arg2 = var_14

return result

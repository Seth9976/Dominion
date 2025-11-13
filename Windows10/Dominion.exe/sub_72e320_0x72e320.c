// 函数: sub_72e320
// 地址: 0x72e320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = arg1 + 0x18
int32_t result

while (true)
    int32_t* var_8_1 = ecx
label_72e334:
    int32_t* edi_1 = arg1 + 0x20
    int32_t* eax_16
    int32_t* ebx_1
    char* edi_2
    
    while (true)
        ebx_1 = arg1 + 0x1c
        int32_t eax_2
        
        if (*(arg1 + 0x10) != 0)
            eax_2, ecx = (*ecx)(*ebx_1)
            
            if (eax_2 != 0 && (*edi_1 == 0 || *(arg1 + 0xa8) u>= *(arg1 + 0xac)))
                goto label_72e434
        else if (*(arg1 + 0xa8) u>= *(arg1 + 0xac))
        label_72e434:
            edi_2 = arg2
            eax_16 = var_8_1
            break
        
        edi_2 = arg2
        eax_2.b = *edi_2
        
        if (eax_2.b != 0x20 && eax_2.b != 9 && eax_2.b != 0xa && eax_2.b != 0xb && eax_2.b != 0xc
                && eax_2.b != 0xd)
            eax_16 = arg1 + 0x18
            ebx_1 = arg1 + 0x1c
            break
        
        char* eax_3 = *(arg1 + 0xa8)
        edi_1 = arg1 + 0x20
        
        if (eax_3 u< *(arg1 + 0xac))
            ecx.b = *eax_3
            *(arg1 + 0xa8) = &eax_3[1]
            *arg2 = ecx.b
            ecx = arg1 + 0x18
            var_8_1 = ecx
        else if (*edi_1 == 0)
            *arg2 = 0
            ecx = arg1 + 0x18
            var_8_1 = ecx
        else
            int32_t eax_7 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            char ecx_1
            
            if (eax_7 != 0)
                *(arg1 + 0xac) = eax_7 + 0x28 + arg1
                ecx_1 = *(arg1 + 0x28)
                *(arg1 + 0xa8) = arg1 + 0x29
                *arg2 = ecx_1
                ecx = arg1 + 0x18
                var_8_1 = ecx
            else
                *edi_1 = eax_7
                *(arg1 + 0xac) = arg1 + 0x29
                *(arg1 + 0x28) = 0
                ecx_1 = *(arg1 + 0x28)
                *(arg1 + 0xa8) = arg1 + 0x29
                *arg2 = ecx_1
                ecx = arg1 + 0x18
                var_8_1 = ecx
    
    if (*(arg1 + 0x10) == 0)
    label_72e457:
        result = *(arg1 + 0xa8)
        
        if (result u>= *(arg1 + 0xac))
            break
    else
        result = (*eax_16)(*ebx_1)
        
        if (result != 0)
            if (*(arg1 + 0x20) == 0)
                break
            
            goto label_72e457
    
    if (*edi_2 != 0x23)
        break
    
    void* edi_3 = arg1 + 0xac
    void* ebx_3 = arg1 + 0xa8
    
    while (true)
        void* var_10_1 = edi_3
        
        if (*(arg1 + 0x10) == 0)
        label_72e4b5:
            ecx = arg1 + 0x18
            var_8_1 = ecx
            
            if (*ebx_3 u>= *var_10_1)
                goto label_72e334
        else
            var_8_1 = arg1 + 0x18
            
            if ((*(arg1 + 0x18))(*(arg1 + 0x1c)) != 0)
                if (*(arg1 + 0x20) == 0)
                    ecx = var_8_1
                    break
                
                edi_3 = arg1 + 0xac
                goto label_72e4b5
            
            ecx = var_8_1
        
        char* eax_22
        eax_22.b = *arg2
        
        if (eax_22.b == 0xa)
            goto label_72e334
        
        if (eax_22.b == 0xd)
            goto label_72e334
        
        char* eax_23 = *(arg1 + 0xa8)
        ebx_3 = arg1 + 0xa8
        
        if (eax_23 u< *edi_3)
            ecx.b = *eax_23
            *ebx_3 = &eax_23[1]
            *arg2 = ecx.b
        else if (*(arg1 + 0x20) == 0)
            *arg2 = 0
        else
            void* eax_28 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
            *ebx_3 = arg1 + 0x28
            
            if (eax_28 != 0)
                *edi_3 = eax_28 + 0x28 + arg1
            else
                *(arg1 + 0x20) = eax_28
                *edi_3 = arg1 + 0x29
                *(arg1 + 0x28) = 0
            
            char* eax_32 = *ebx_3
            edi_3 = arg1 + 0xac
            void* ecx_2
            ecx_2.b = *eax_32
            *ebx_3 = &eax_32[1]
            ebx_3 = arg1 + 0xa8
            *arg2 = ecx_2.b

return result

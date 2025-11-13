// 函数: sub_72d5c0
// 地址: 0x72d5c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = nullptr
char* eax = *(arg1 + 0xa8)
void* edi = arg1 + 0x20
void* var_8 = edi
void* ebx

if (eax u>= *(arg1 + 0xac))
    if (*edi == 0)
        ebx.b = 0
    else
        void* eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_3 != 0)
            *(arg1 + 0xac) = eax_3 + 0x28 + arg1
            ebx.b = *(arg1 + 0x28)
            *(arg1 + 0xa8) = arg1 + 0x29
        else
            *edi = eax_3
            *(arg1 + 0xac) = arg1 + 0x29
            *(arg1 + 0x28) = 0
            ebx.b = *(arg1 + 0x28)
            *(arg1 + 0xa8) = arg1 + 0x29
    
    var_8 = edi
else
    ebx.b = *eax
    *(arg1 + 0xa8) = &eax[1]

while (true)
    if (*(arg1 + 0x10) == 0)
    label_72d669:
        
        if (*(arg1 + 0xa8) u>= *(arg1 + 0xac))
            break
    else if ((*(arg1 + 0x18))(*(arg1 + 0x1c)) != 0)
        if (*edi == 0)
            break
        
        goto label_72d669
    
    if (ebx.b == 0xa)
        break
    
    char* ecx = var_c
    ecx[arg2] = ebx.b
    var_c = &ecx[1]
    
    if (ecx == 0x3fe)
        while (true)
            void* var_8_1
            void* ecx_2
            
            if (*(arg1 + 0x10) == 0)
                ecx_2 = arg1 + 0x20
            label_72d745:
                var_8_1 = ecx_2
                
                if (*(arg1 + 0xa8) u>= *(arg1 + 0xac))
                    break
            else
                if ((*(arg1 + 0x18))(*(arg1 + 0x1c)) != 0)
                    ecx_2 = arg1 + 0x20
                    
                    if (*(arg1 + 0x20) == 0)
                        break
                    
                    goto label_72d745
                
                var_8_1 = arg1 + 0x20
                ecx_2 = arg1 + 0x20
            
            char* eax_31 = *(arg1 + 0xa8)
            
            if (eax_31 u>= *(arg1 + 0xac))
                if (*ecx_2 == 0)
                    continue
                else
                    void* eax_26
                    eax_26, ecx_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                    *(arg1 + 0xa8) = arg1 + 0x28
                    
                    if (eax_26 != 0)
                        *(arg1 + 0xac) = eax_26 + 0x28 + arg1
                    else
                        *var_8_1 = 0
                        *(arg1 + 0xac) = arg1 + 0x29
                        *(arg1 + 0x28) = 0
                    
                    eax_31 = *(arg1 + 0xa8)
            
            ecx_2.b = *eax_31
            *(arg1 + 0xa8) = &eax_31[1]
            
            if (ecx_2.b == 0xa)
                break
        
        break
    
    char* eax_13 = *(arg1 + 0xa8)
    
    if (eax_13 u< *(arg1 + 0xac))
        ebx.b = *eax_13
        *(arg1 + 0xa8) = &eax_13[1]
    else if (*(arg1 + 0x20) == 0)
        ebx.b = 0
    else
        void* eax_16 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_16 != 0)
            *(arg1 + 0xac) = eax_16 + 0x28 + arg1
            ebx.b = *(arg1 + 0x28)
            edi = var_8
            *(arg1 + 0xa8) = arg1 + 0x29
        else
            *(arg1 + 0x20) = eax_16
            *(arg1 + 0xac) = arg1 + 0x29
            *(arg1 + 0x28) = 0
            ebx.b = *(arg1 + 0x28)
            edi = var_8
            *(arg1 + 0xa8) = arg1 + 0x29

*(var_c + arg2) = 0
return arg2

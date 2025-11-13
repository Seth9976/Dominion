// 函数: sub_594ea0
// 地址: 0x594ea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = arg3
int32_t* var_24 = arg2
int32_t* var_14 = ebx
uint32_t eax_2 = (arg2 - ebx) & 0xfffffffc
int32_t* var_10

if (eax_2 s<= 0x80)
label_594f48:
    int32_t* var_20 = arg5
    
    if (ebx != arg2)
        int32_t* edi_3 = &ebx[1]
        var_10 = edi_3
        
        if (edi_3 != arg2)
            do
                uint32_t esi_1 = *edi_3
                void* var_18_1 = edi_3
                
                if (sub_593b90(&var_20, esi_1, *ebx) == 0)
                    void* esi_2 = &edi_3[-1]
                    
                    if (sub_593b90(&var_20, esi_1, edi_3[-1]) != 0)
                        void* edi_6 = var_18_1
                        char i
                        
                        do
                            *edi_6 = *esi_2
                            edi_6 = esi_2
                            uint32_t var_34_8 = *(esi_2 - 4)
                            esi_2 -= 4
                            i = sub_593b90(&var_20, esi_1, var_34_8)
                        while (i != 0)
                        ebx = var_14
                        var_18_1 = edi_6
                        edi_3 = var_10
                    
                    eax_2 = esi_1
                    *var_18_1 = eax_2
                else
                    uint32_t count = edi_3 - ebx
                    eax_2 = memmove(edi_3 - count + 4, ebx, count)
                    *ebx = esi_1
                
                edi_3 = &edi_3[1]
                var_10 = edi_3
            while (edi_3 != var_24)
else
    int32_t edi_1 = arg4
    
    while (true)
        if (edi_1 s<= 0)
            int32_t edx_3 = arg2 - ebx
            int32_t ecx_9 = edx_3 s>> 2
            int32_t var_18_2 = ecx_9
            int32_t i_1 = ecx_9 s>> 1
            
            while (i_1 s> 0)
                int32_t* eax_14 = ebx[i_1 - 1]
                i_1 -= 1
                var_10 = eax_14
                int32_t* var_34_5 = arg5
                eax_2 = sub_597190(&var_10, i_1, ebx, ecx_9, &var_10)
                ecx_9 = var_18_2
            
            if (ecx_9 s< 2)
                break
            
            int32_t i_2
            
            do
                var_10 = *(ebx + edx_3 - 4)
                *(ebx + edx_3 - 4) = *ebx
                int32_t* var_34_6 = arg5
                int32_t eax_19 = (edx_3 - 4) s>> 2
                sub_597190(eax_19, 0, ebx, eax_19, &var_10)
                edx_3 -= 4
                i_2 = edx_3 & 0xfffffffc
            while (i_2 s>= 8)
            
            return i_2
        
        sub_5962b0(eax_2, ebx, &var_10, arg2, arg5)
        edi_1 = (edi_1 s>> 1) + (edi_1 s>> 2)
        int32_t* var_c
        
        if (((var_10 - ebx) & 0xfffffffc) s>= ((var_24 - var_c) & 0xfffffffc))
            sub_594ea0(edi_1, arg5)
            arg2 = var_10
            var_24 = arg2
        else
            sub_594ea0(edi_1, arg5)
            ebx = var_c
            arg2 = var_24
            var_14 = ebx
        
        eax_2 = (arg2 - ebx) & 0xfffffffc
        
        if (eax_2 s<= 0x80)
            goto label_594f48
return eax_2

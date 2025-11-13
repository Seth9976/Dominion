// 函数: sub_5947f0
// 地址: 0x5947f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg2
int32_t* ebx = arg3
int32_t* var_8 = edi
int32_t* var_20 = ebx
void* eax_2 = (edi - ebx) & 0xfffffffc

if (eax_2 s<= 0x80)
label_594883:
    int32_t var_24 = arg5
    
    if (ebx != edi)
        eax_2 = &ebx[1]
        void* var_c_1 = eax_2
        
        if (eax_2 != edi)
            uint32_t count = 4
            
            do
                void* var_10_1 = eax_2
                uint32_t eax_10 = *eax_2
                
                if (sub_58d360(&var_24, eax_10, *ebx) == 0)
                    void* edi_3 = var_c_1
                    uint32_t eax_24 = zx.d(eax_10.w)
                    int32_t ecx_10 = eax_24 * 0x64
                    uint32_t var_30_1 = eax_24
                    int32_t var_1c_1 = ecx_10
                    
                    while (true)
                        int32_t edx_4 = *(edi_3 - 4)
                        edi_3 -= 4
                        int32_t var_18_2 = edx_4
                        
                        if (eax_24 u>= 0x320)
                            sub_591930()
                            edx_4 = var_18_2
                            ecx_10 = var_1c_1
                        
                        int32_t ecx_11 = *(ecx_10 + arg5 + 0x1a4c)
                        uint32_t eax_25 = zx.d(edx_4.w)
                        
                        if (eax_25 u>= 0x320)
                            sub_591930()
                            edx_4 = var_18_2
                        
                        int32_t temp0_1 = *(eax_25 * 0x64 + arg5 + 0x1a4c)
                        
                        if (ecx_11 s< temp0_1)
                            break
                        
                        if (ecx_11 s<= temp0_1 && eax_10 s>= edx_4)
                            break
                        
                        void* ecx_12 = var_10_1
                        var_10_1 = edi_3
                        *ecx_12 = *edi_3
                        eax_24 = var_30_1
                        ecx_10 = var_1c_1
                    
                    edi = var_8
                    *var_10_1 = eax_10
                    ebx = var_20
                else
                    memmove(var_c_1 - count + 4, ebx, count)
                    *ebx = eax_10
                
                count += 4
                eax_2 = var_c_1 + 4
                var_c_1 = eax_2
            while (eax_2 != edi)
else
    int32_t esi_1 = arg4
    
    while (true)
        if (esi_1 s<= 0)
            int32_t edi_1 = edi - ebx
            eax_2 = edi_1 s>> 2
            int32_t i = eax_2 s>> 1
            
            while (i s> 0)
                int32_t* eax_17 = ebx[i - 1]
                i -= 1
                var_20 = eax_17
                sub_596c20(&var_20, i, ebx, eax_2, &var_20, arg5)
            
            if (eax_2 s< 2)
                break
            
            int32_t i_1
            
            do
                var_20 = *(ebx + edi_1 - 4)
                *(ebx + edi_1 - 4) = *ebx
                int32_t eax_22 = (edi_1 - 4) s>> 2
                sub_596c20(eax_22, 0, ebx, eax_22, &var_20, arg5)
                edi_1 -= 4
                i_1 = edi_1 & 0xfffffffc
            while (i_1 s>= 8)
            
            return i_1
        
        int32_t* var_34
        sub_5957f0(eax_2, ebx, &var_34, edi, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        int32_t* var_30
        
        if (((var_34 - ebx) & 0xfffffffc) s>= ((edi - var_30) & 0xfffffffc))
            sub_5947f0(esi_1, arg5)
            edi = var_34
            var_8 = edi
        else
            sub_5947f0(esi_1, arg5)
            ebx = var_30
            var_20 = ebx
        
        eax_2 = (edi - ebx) & 0xfffffffc
        
        if (eax_2 s<= 0x80)
            goto label_594883

return eax_2

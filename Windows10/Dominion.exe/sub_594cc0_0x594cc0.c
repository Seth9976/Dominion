// 函数: sub_594cc0
// 地址: 0x594cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t* ebx = arg2
int16_t* edi = arg3
int16_t* var_c = ebx
void* eax_2 = (ebx - edi) & 0xfffffffe
int16_t* eax_15
int16_t* var_1c

if (eax_2 s<= 0x40)
label_594d47:
    eax_15 = arg5
    int16_t* var_10 = eax_15
    
    if (edi != ebx)
        int16_t* ebx_1 = &edi[1]
        var_1c = ebx_1
        
        if (ebx_1 != var_c)
            int16_t* esi_3 = edi
            int16_t* var_18_1 = edi
            
            do
                uint32_t var_8 = zx.d(*ebx_1)
                int16_t* var_14_1 = ebx_1
                
                if (sub_596040(&var_10, &var_8, edi) == 0)
                    if (sub_596040(&var_10, &var_8, var_18_1).b != 0)
                        int16_t* ebx_4 = var_14_1
                        int16_t eax_23
                        
                        do
                            *ebx_4 = *esi_3
                            ebx_4 = esi_3
                            esi_3 -= 2
                            eax_23 = sub_596040(&var_10, &var_8, esi_3)
                        while (eax_23.b != 0)
                        var_14_1 = ebx_4
                        ebx_1 = var_1c
                    
                    eax_15 = var_14_1
                    esi_3 = var_18_1
                    *eax_15 = var_8.w
                else
                    uint32_t count = ebx_1 - edi
                    eax_15 = memmove(ebx_1 - count + 2, edi, count)
                    *edi = var_8.w
                
                ebx_1 = &ebx_1[1]
                esi_3 = &esi_3[1]
                var_1c = ebx_1
                var_18_1 = esi_3
            while (ebx_1 != var_c)
else
    int32_t esi_1 = arg4
    
    while (true)
        if (esi_1 s<= 0)
            int32_t ebx_2 = ebx - edi
            eax_15 = ebx_2 s>> 1
            int32_t i = eax_15 s>> 1
            
            while (i s> 0)
                uint32_t eax_17 = zx.d(edi[i - 1])
                i -= 1
                int16_t* var_30_5 = arg5
                var_1c = eax_17
                sub_596ef0(&var_1c, i, edi, eax_15, &var_1c)
            
            if (eax_15 s< 2)
                break
            
            int32_t i_1
            
            do
                var_1c = zx.d(*(edi + ebx_2 - 2))
                uint32_t eax_19
                eax_19.w = *edi
                *(edi + ebx_2 - 2) = eax_19.w
                int16_t* var_30_6 = arg5
                int32_t eax_21 = (ebx_2 - 2) s>> 1
                sub_596ef0(eax_21, 0, edi, eax_21, &var_1c)
                ebx_2 -= 2
                i_1 = ebx_2 & 0xfffffffe
            while (i_1 s>= 4)
            
            return i_1
        
        int16_t* var_20
        sub_5960e0(eax_2, edi, &var_20, ebx, arg5)
        esi_1 = (esi_1 s>> 1) + (esi_1 s>> 2)
        
        if (((var_20 - edi) & 0xfffffffe) s>= ((ebx - var_1c) & 0xfffffffe))
            sub_594cc0(esi_1, arg5)
            ebx = var_20
            var_c = ebx
        else
            sub_594cc0(esi_1, arg5)
            edi = var_1c
        
        eax_2 = (ebx - edi) & 0xfffffffe
        
        if (eax_2 s<= 0x40)
            goto label_594d47
return eax_15

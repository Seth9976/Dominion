// 函数: sub_5aeef0
// 地址: 0x5aeef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg5
int32_t edx = arg6
int32_t* esi = arg3
int64_t* edi = arg4

if (ebx s< edx)
    int32_t eax_2 = ebx * 0xc
    int32_t var_10_1 = eax_2
    
    do
        void* ecx = eax_2 + esi
        int32_t edx_1 = edx - ebx
        int32_t eax_3 = ebx
        int64_t* ebx_1 = ecx
        
        if (edx_1 s< ebx)
            eax_3 = edx_1
        
        void* eax_5 = ecx + eax_3 * 0xc
        
        while (true)
            int32_t ecx_1 = esi[1]
            void* edx_3
            
            if (*(ebx_1 + 4) != 0xa)
                if (ecx_1 != 0xa)
                label_5aefd0:
                    edx_3 = edi + 0xc
                    int32_t ecx_7
                    ecx_7.b = *(arg7 + *ebx_1 * 0xc + 0x14) + 0f > *(arg7 + *esi * 0xc + 0x14) + 0f
                    
                    if (ecx_7.b == 0)
                        goto label_5aef72
                    
                    goto label_5af003
                
                edx_3 = edi + 0xc
            label_5af003:
                *edi = *ebx_1
                int32_t ecx_8 = ebx_1[1].d
                ebx_1 += 0xc
                edi[1].d = ecx_8
                edi = edx_3
                
                if (ebx_1 == eax_5)
                    uint32_t count = ecx - esi
                    memmove(edi, esi, count)
                    edi += count
                    break
            else
                if (ecx_1 == 0xa)
                    int32_t ecx_2 = esi[2]
                    
                    if (ebx_1[1].d s< 6)
                        if (ecx_2 s< 6)
                            goto label_5aefd0
                        
                        goto label_5aef6b
                    
                    if (ecx_2 s>= 6)
                        goto label_5aefd0
                    
                    edx_3 = edi + 0xc
                    goto label_5af003
                
            label_5aef6b:
                edx_3 = edi + 0xc
            label_5aef72:
                *edi = *esi
                int32_t ecx_3 = esi[2]
                esi = &esi[3]
                edi[1].d = ecx_3
                edi = edx_3
                
                if (esi == ecx)
                    uint32_t count_1 = eax_5 - ebx_1
                    memmove(edi, ebx_1, count_1)
                    edi += count_1
                    break
        
        edx = edx_1 - eax_3
        ebx = arg5
        esi = eax_5
        eax_2 = var_10_1
    while (ebx s< edx)

return memmove(edi, esi, arg2 - esi)

// 函数: sub_638210
// 地址: 0x638210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = arg2
int32_t* edi = arg3
int32_t* var_8 = esi
int32_t* var_c = edi
int128_t* i = esi - edi
int128_t var_44

if (i s>= 0x318)
    int32_t* ecx = arg5
    int32_t ebx_1 = arg4
    
    do
        if (ebx_1 s<= 0)
            void* j_1 = esi - edi
            i = j_1 s/ 0x18
            int32_t j = i s>> 1
            
            if (j s> 0)
                void* ebx_5 = &edi[j * 6]
                
                do
                    int128_t xmm0_4 = *(ebx_5 - 0x18)
                    ebx_5 -= 0x18
                    j -= 1
                    int32_t* var_58_3 = ecx
                    var_44 = xmm0_4
                    int64_t var_34_2 = *(ebx_5 + 0x10)
                    sub_639560(&var_44, j, edi, i, &var_44)
                    ecx = arg5
                while (j s> 0)
            
            if (i s< 2)
                goto label_6384ce
            
            void* esi_7 = &var_8[-6]
            int32_t eax_20
            
            do
                eax_20 = j_1 s/ 0x18
                
                if (eax_20 s>= 2)
                    int32_t* var_58_4 = ecx
                    var_44 = *esi_7
                    int64_t var_34_3 = *(esi_7 + 0x10)
                    *esi_7 = *edi
                    int32_t eax_24 = (esi_7 - edi) s/ 0x18
                    *(esi_7 + 0x10) = *(edi + 0x10)
                    eax_20 = sub_639560(eax_24, 0, edi, eax_24, &var_44)
                
                void* ebx_6 = esi_7
                esi_7 -= 0x18
                ecx = arg5
                j_1 = ebx_6 - edi
            while (j_1 s>= 0x30)
            
            return eax_20
        
        int32_t* var_14
        sub_638c00(i, edi, &var_14, esi, ecx)
        ebx_1 = (ebx_1 s>> 1) + (ebx_1 s>> 2)
        int32_t* var_10
        
        if ((var_14 - edi) s/ 0x18 s>= (esi - var_10) s/ 0x18)
            sub_638210(ebx_1, arg5)
            esi = var_14
            var_8 = esi
        else
            sub_638210(ebx_1, arg5)
            edi = var_10
            esi = var_8
            var_c = edi
        
        ecx = arg5
        i = esi - edi
    while (i s>= 0x318)

if (edi != esi)
    int128_t* i_2 = &edi[6]
    int128_t* i_3 = i_2
    
    while (i_2 != var_8)
        int128_t xmm0_1 = *i_2
        int128_t* i_1 = i_2
        int64_t xmm1_1 = i_2[1].q
        int32_t ebx_3 = xmm0_1
        var_44 = xmm0_1
        int32_t var_34_1 = xmm1_1.d
        int32_t temp0_1 = *edi
        
        if (ebx_3 s< temp0_1)
        label_638496:
            uint32_t count = i_2 - edi
            i = memmove(i_2 - count + 0x18, edi, count)
            *edi = xmm0_1
            *(edi + 0x10) = xmm1_1
        else
            int32_t ecx_8 = var_44:0xc.d
            int32_t eax_10 = var_44:8.d
            
            if (ebx_3 s<= temp0_1)
                int32_t temp1_1 = edi[3]
                
                if (ecx_8 u< temp1_1)
                    goto label_638496
                
                if (ecx_8 u<= temp1_1)
                    if (eax_10 u< edi[2])
                        goto label_638496
                    
                    int32_t temp4_1 = edi[3]
                    
                    if (ecx_8 u<= temp4_1 && (ecx_8 u< temp4_1 || eax_10 u<= edi[2])
                            && var_34_1 u< edi[4])
                        goto label_638496
            
            i = i_2
            
            while (true)
                i -= 0x18
                int32_t temp2_1 = *i
                
                if (ebx_3 s>= temp2_1)
                    if (ebx_3 s> temp2_1)
                        break
                    
                    int32_t esi_4 = *(i + 0xc)
                    int32_t ecx_9 = *(i + 8)
                    int32_t temp3_1 = var_44:0xc.d
                    
                    if (temp3_1 u>= esi_4)
                        if (temp3_1 u> esi_4)
                            break
                        
                        if (var_44:8.d u>= ecx_9)
                            int32_t temp5_1 = var_44:0xc.d
                            
                            if (temp5_1 u> esi_4)
                                break
                            
                            if (temp5_1 u>= esi_4 && var_44:8.d u> ecx_9)
                                break
                            
                            if (var_34_1 u>= i[1].d)
                                break
                
                *i_1 = *i
                i_1[1].q = i[1].q
                i_1 = i
            
            edi = var_c
            i_2 = i_3
            *i_1 = xmm0_1
            i_1[1].q = xmm1_1
        
        i_2 += 0x18
        i_3 = i_2

label_6384ce:
return i

// 函数: sub_70d2c0
// 地址: 0x70d2c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_10 = arg3
int32_t* result
int32_t ecx
int32_t edi_1

if (arg4 == 0)
    int32_t* result_2
    result_2, ecx = sub_752440(sub_708970(arg2, arg5))
    char* eax_15 = *arg2
    result = result_2
    ecx.b = *eax_15
    int32_t edi_3 = zx.d(ecx.b) & 0x7f
    *arg2 = &eax_15[1]
    arg4 = edi_3
    
    if (ecx.b s< 0)
        ecx.b = eax_15[1]
        *arg2 = &eax_15[2]
        edi_3 |= (zx.d(ecx.b) & 0x7f) << 7
        arg4 = edi_3
        
        if (ecx.b s< 0)
            ecx.b = eax_15[2]
            *arg2 = &eax_15[3]
            edi_3 |= (zx.d(ecx.b) & 0x7f) << 0xe
            arg4 = edi_3
            
            if (ecx.b s< 0)
                ecx.b = eax_15[3]
                *arg2 = &eax_15[4]
                edi_3 |= (zx.d(ecx.b) & 0x7f) << 0x15
                arg4 = edi_3
                
                if (ecx.b s< 0)
                    ecx.b = eax_15[4]
                    *arg2 = &eax_15[5]
                    edi_3 |= zx.d(ecx.b) << 0x1c
                    arg4 = edi_3
    
    if (edi_3 s> 0)
        int32_t i
        
        do
            char* eax_28 = *arg2
            ecx.b = *eax_28
            int32_t edx_10 = zx.d(ecx.b) & 0x7f
            *arg2 = &eax_28[1]
            
            if (ecx.b s< 0)
                ecx.b = eax_28[1]
                *arg2 = &eax_28[2]
                edx_10 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = eax_28[2]
                    *arg2 = &eax_28[3]
                    edx_10 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_28[3]
                        *arg2 = &eax_28[4]
                        edx_10 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_28[4]
                            *arg2 = &eax_28[5]
                            edx_10 |= zx.d(ecx.b) << 0x1c
            
            int32_t* edi_8 = result_2[1]
            int32_t eax_43 = *(*(arg5 + 0x24) + (edx_10 << 2))
            int32_t eax_44 = *edi_8
            
            if (eax_44 == edi_8[1])
                int32_t eax_45 = int.d(_mm_cvtepi32_ps(zx.o(eax_44)) * 1.75f)
                
                if (eax_45 s< 8)
                    eax_45 = 8
                
                edi_8[1] = eax_45
                edi_8[2] = realloc(edi_8[2], eax_45 << 2)
            
            *(edi_8[2] + (*edi_8 << 2)) = eax_43
            *edi_8 += 1
            i = arg4
            arg4 -= 1
        while (i != 1)
    
    char* eax_49 = *arg2
    ecx.b = *eax_49
    int32_t edi_10 = zx.d(ecx.b) & 0x7f
    *arg2 = &eax_49[1]
    arg4 = edi_10
    
    if (ecx.b s< 0)
        ecx.b = eax_49[1]
        *arg2 = &eax_49[2]
        edi_10 |= (zx.d(ecx.b) & 0x7f) << 7
        arg4 = edi_10
        
        if (ecx.b s< 0)
            ecx.b = eax_49[2]
            *arg2 = &eax_49[3]
            edi_10 |= (zx.d(ecx.b) & 0x7f) << 0xe
            arg4 = edi_10
            
            if (ecx.b s< 0)
                ecx.b = eax_49[3]
                *arg2 = &eax_49[4]
                edi_10 |= (zx.d(ecx.b) & 0x7f) << 0x15
                arg4 = edi_10
                
                if (ecx.b s< 0)
                    ecx.b = eax_49[4]
                    *arg2 = &eax_49[5]
                    edi_10 |= zx.d(ecx.b) << 0x1c
                    arg4 = edi_10
    
    if (edi_10 s> 0)
        int32_t i_1
        
        do
            char* eax_62 = *arg2
            ecx.b = *eax_62
            int32_t edx_17 = zx.d(ecx.b) & 0x7f
            *arg2 = &eax_62[1]
            
            if (ecx.b s< 0)
                ecx.b = eax_62[1]
                *arg2 = &eax_62[2]
                edx_17 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = eax_62[2]
                    *arg2 = &eax_62[3]
                    edx_17 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_62[3]
                        *arg2 = &eax_62[4]
                        edx_17 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_62[4]
                            *arg2 = &eax_62[5]
                            edx_17 |= zx.d(ecx.b) << 0x1c
            
            int32_t* edi_15 = result_2[2]
            int32_t eax_77 = *(*(arg5 + 0x50) + (edx_17 << 2))
            int32_t eax_78 = *edi_15
            
            if (eax_78 == edi_15[1])
                int32_t eax_79 = int.d(_mm_cvtepi32_ps(zx.o(eax_78)) * 1.75f)
                
                if (eax_79 s< 8)
                    eax_79 = 8
                
                edi_15[1] = eax_79
                edi_15[2] = realloc(edi_15[2], eax_79 << 2)
            
            *(edi_15[2] + (*edi_15 << 2)) = eax_77
            *edi_15 += 1
            i_1 = arg4
            arg4 -= 1
        while (i_1 != 1)
    
    char* eax_83 = *arg2
    ecx.b = *eax_83
    int32_t edi_17 = zx.d(ecx.b) & 0x7f
    *arg2 = &eax_83[1]
    arg4 = edi_17
    
    if (ecx.b s< 0)
        ecx.b = eax_83[1]
        *arg2 = &eax_83[2]
        edi_17 |= (zx.d(ecx.b) & 0x7f) << 7
        arg4 = edi_17
        
        if (ecx.b s< 0)
            ecx.b = eax_83[2]
            *arg2 = &eax_83[3]
            edi_17 |= (zx.d(ecx.b) & 0x7f) << 0xe
            arg4 = edi_17
            
            if (ecx.b s< 0)
                ecx.b = eax_83[3]
                *arg2 = &eax_83[4]
                edi_17 |= (zx.d(ecx.b) & 0x7f) << 0x15
                arg4 = edi_17
                
                if (ecx.b s< 0)
                    ecx.b = eax_83[4]
                    *arg2 = &eax_83[5]
                    edi_17 |= zx.d(ecx.b) << 0x1c
                    arg4 = edi_17
    
    if (edi_17 s> 0)
        int32_t i_2
        
        do
            char* eax_96 = *arg2
            ecx.b = *eax_96
            int32_t edx_24 = zx.d(ecx.b) & 0x7f
            *arg2 = &eax_96[1]
            
            if (ecx.b s< 0)
                ecx.b = eax_96[1]
                *arg2 = &eax_96[2]
                edx_24 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = eax_96[2]
                    *arg2 = &eax_96[3]
                    edx_24 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_96[3]
                        *arg2 = &eax_96[4]
                        edx_24 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_96[4]
                            *arg2 = &eax_96[5]
                            edx_24 |= zx.d(ecx.b) << 0x1c
            
            int32_t* edi_22 = result_2[3]
            int32_t eax_111 = *(*(arg5 + 0x58) + (edx_24 << 2))
            int32_t eax_112 = *edi_22
            
            if (eax_112 == edi_22[1])
                int32_t eax_113 = int.d(_mm_cvtepi32_ps(zx.o(eax_112)) * 1.75f)
                
                if (eax_113 s< 8)
                    eax_113 = 8
                
                edi_22[1] = eax_113
                edi_22[2] = realloc(edi_22[2], eax_113 << 2)
            
            *(edi_22[2] + (*edi_22 << 2)) = eax_111
            *edi_22 += 1
            i_2 = arg4
            arg4 -= 1
        while (i_2 != 1)
    
    char* eax_117 = *arg2
    ecx.b = *eax_117
    int32_t edi_24 = zx.d(ecx.b) & 0x7f
    *arg2 = &eax_117[1]
    arg4 = edi_24
    
    if (ecx.b s< 0)
        ecx.b = eax_117[1]
        *arg2 = &eax_117[2]
        edi_24 |= (zx.d(ecx.b) & 0x7f) << 7
        arg4 = edi_24
        
        if (ecx.b s< 0)
            ecx.b = eax_117[2]
            *arg2 = &eax_117[3]
            edi_24 |= (zx.d(ecx.b) & 0x7f) << 0xe
            arg4 = edi_24
            
            if (ecx.b s< 0)
                ecx.b = eax_117[3]
                *arg2 = &eax_117[4]
                edi_24 |= (zx.d(ecx.b) & 0x7f) << 0x15
                arg4 = edi_24
                
                if (ecx.b s< 0)
                    ecx.b = eax_117[4]
                    *arg2 = &eax_117[5]
                    edi_24 |= zx.d(ecx.b) << 0x1c
                    arg4 = edi_24
    
    if (edi_24 s> 0)
        int32_t i_3
        
        do
            char* eax_130 = *arg2
            ecx.b = *eax_130
            int32_t edx_31 = zx.d(ecx.b) & 0x7f
            *arg2 = &eax_130[1]
            
            if (ecx.b s< 0)
                ecx.b = eax_130[1]
                *arg2 = &eax_130[2]
                edx_31 |= (zx.d(ecx.b) & 0x7f) << 7
                
                if (ecx.b s< 0)
                    ecx.b = eax_130[2]
                    *arg2 = &eax_130[3]
                    edx_31 |= (zx.d(ecx.b) & 0x7f) << 0xe
                    
                    if (ecx.b s< 0)
                        ecx.b = eax_130[3]
                        *arg2 = &eax_130[4]
                        edx_31 |= (zx.d(ecx.b) & 0x7f) << 0x15
                        
                        if (ecx.b s< 0)
                            ecx.b = eax_130[4]
                            *arg2 = &eax_130[5]
                            edx_31 |= zx.d(ecx.b) << 0x1c
            
            int32_t* edi_29 = result_2[4]
            int32_t eax_145 = *(*(arg5 + 0x60) + (edx_31 << 2))
            int32_t eax_146 = *edi_29
            
            if (eax_146 == edi_29[1])
                int32_t eax_147 = int.d(_mm_cvtepi32_ps(zx.o(eax_146)) * 1.75f)
                
                if (eax_147 s< 8)
                    eax_147 = 8
                
                edi_29[1] = eax_147
                edi_29[2] = realloc(edi_29[2], eax_147 << 2)
            
            *(edi_29[2] + (*edi_29 << 2)) = eax_145
            *edi_29 += 1
            i_3 = arg4
            arg4 -= 1
        while (i_3 != 1)
    
    char* eax_151 = *arg2
    ecx.b = *eax_151
    edi_1 = zx.d(ecx.b) & 0x7f
    *arg2 = &eax_151[1]
    arg4 = edi_1
    
    if (ecx.b s< 0)
        ecx.b = eax_151[1]
        *arg2 = &eax_151[2]
        edi_1 |= (zx.d(ecx.b) & 0x7f) << 7
        arg4 = edi_1
        
        if (ecx.b s< 0)
            ecx.b = eax_151[2]
            *arg2 = &eax_151[3]
            edi_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
            arg4 = edi_1
            
            if (ecx.b s< 0)
                ecx.b = eax_151[3]
                *arg2 = &eax_151[4]
                edi_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                arg4 = edi_1
                
                if (ecx.b s< 0)
                    ecx.b = eax_151[4]
                    *arg2 = &eax_151[5]
                    edi_1 |= zx.d(ecx.b) << 0x1c
                    arg4 = edi_1
else
    char* eax = *arg2
    int32_t ebx
    ebx.b = *eax
    edi_1 = zx.d(ebx.b) & 0x7f
    *arg2 = &eax[1]
    arg4 = edi_1
    
    if (ebx.b s< 0)
        arg3.b = eax[1]
        *arg2 = &eax[2]
        edi_1 |= (zx.d(arg3.b) & 0x7f) << 7
        arg4 = edi_1
        
        if (arg3.b s< 0)
            arg3.b = eax[2]
            *arg2 = &eax[3]
            edi_1 |= (zx.d(arg3.b) & 0x7f) << 0xe
            arg4 = edi_1
            
            if (arg3.b s< 0)
                arg3.b = eax[3]
                *arg2 = &eax[4]
                edi_1 |= (zx.d(arg3.b) & 0x7f) << 0x15
                arg4 = edi_1
                
                if (arg3.b s< 0)
                    arg3.b = eax[4]
                    *arg2 = &eax[5]
                    edi_1 |= zx.d(arg3.b) << 0x1c
                    arg4 = edi_1
    
    if (edi_1 == 0)
        return 0
    
    int32_t* result_1
    result_1, ecx = sub_752440("default")
    result = result_1

if (edi_1 s> 0)
    int32_t i_4
    
    do
        char* eax_166 = *arg2
        ecx.b = *eax_166
        void* edx_37 = &eax_166[1]
        int32_t ebx_3 = zx.d(ecx.b) & 0x7f
        *arg2 = edx_37
        
        if (ecx.b s< 0)
            ecx.b = *edx_37
            edx_37 += 1
            *arg2 = edx_37
            ebx_3 |= (zx.d(ecx.b) & 0x7f) << 7
            
            if (ecx.b s< 0)
                ecx.b = *edx_37
                edx_37 += 1
                *arg2 = edx_37
                ebx_3 |= (zx.d(ecx.b) & 0x7f) << 0xe
                
                if (ecx.b s< 0)
                    ecx.b = *edx_37
                    edx_37 += 1
                    *arg2 = edx_37
                    ebx_3 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    
                    if (ecx.b s< 0)
                        eax_166.b = *edx_37
                        edx_37 += 1
                        *arg2 = edx_37
                        ebx_3 |= zx.d(eax_166.b) << 0x1c
        
        eax_166.b = *edx_37
        int32_t j_1 = zx.d(eax_166.b) & 0x7f
        *arg2 = edx_37 + 1
        
        if (eax_166.b s< 0)
            ecx.b = *(edx_37 + 1)
            *arg2 = edx_37 + 2
            j_1 |= (zx.d(ecx.b) & 0x7f) << 7
            
            if (ecx.b s< 0)
                ecx.b = *(edx_37 + 2)
                *arg2 = edx_37 + 3
                j_1 |= (zx.d(ecx.b) & 0x7f) << 0xe
                
                if (ecx.b s< 0)
                    ecx.b = *(edx_37 + 3)
                    *arg2 = edx_37 + 4
                    j_1 |= (zx.d(ecx.b) & 0x7f) << 0x15
                    
                    if (ecx.b s< 0)
                        ecx.b = *(edx_37 + 4)
                        *arg2 = edx_37 + 5
                        j_1 |= zx.d(ecx.b) << 0x1c
        
        if (j_1 s> 0)
            int32_t j
            
            do
                char* eax_184 = sub_708970(arg2, arg5)
                void* eax_185
                eax_185, ecx =
                    sub_70c200(eax_184, arg2, var_10, arg2, j_1, result, ebx_3, eax_184, arg5, arg6)
                
                if (eax_185 != 0)
                    sub_7526a0(eax_185, ebx_3, result, eax_184, eax_185)
                
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_4 = arg4
        arg4 -= 1
    while (i_4 != 1)

return result

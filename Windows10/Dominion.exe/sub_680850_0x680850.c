// 函数: sub_680850
// 地址: 0x680850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int64_t* ebx = arg2
int64_t* var_c = ebx
int32_t var_24 = arg5
int64_t* i = ebx + (((arg4 - ebx) s/ 0xc) s>> 1) * 0xc
sub_6812c0(arg4 - 0xc, i, ebx, arg4 - 0xc)
int64_t* edi = i + 0xc

for (; ebx u< i; i -= 0xc)
    int32_t eax_7 = *(i - 4)
    int32_t temp0_1 = i[1].d
    
    if (eax_7 s< temp0_1)
        break
    
    if (eax_7 s> temp0_1)
        break

void* ecx_2 = arg4

if (edi u< ecx_2)
    int32_t edx_3 = i[1].d
    
    do
        int32_t temp1_1 = edi[1].d
        
        if (temp1_1 s< edx_3)
            break
        
        if (temp1_1 s> edx_3)
            break
        
        edi += 0xc
    while (edi u< ecx_2)

int64_t* i_1 = i
int64_t* edx_4 = edi
int64_t* i_2 = i_1

while (true)
    int64_t* var_10_1 = edx_4
    
    while (true)
        if (edx_4 u< ecx_2)
            do
                int32_t eax_8 = i[1].d
                int32_t temp2_1 = edx_4[1].d
                
                if (eax_8 s>= temp2_1)
                    if (eax_8 s> temp2_1)
                        break
                    
                    if (edi != edx_4)
                        int64_t xmm1_1 = *edi
                        int32_t ecx_3 = edi[1].d
                        *edi = *edx_4
                        edi[1].d = edx_4[1].d
                        *edx_4 = xmm1_1
                        edx_4[1].d = ecx_3
                    
                    edi += 0xc
                
                edx_4 += 0xc
            while (edx_4 u< arg4)
            
            i_1 = i_2
            ebx = var_c
            var_10_1 = edx_4
        
        bool cond:2_1 = i_1 != ebx
        
        if (i_1 u> ebx)
            void* ebx_1 = i_1 - 0xc
            
            do
                int32_t ecx_4 = *(ebx_1 + 8)
                int32_t temp3_1 = i[1].d
                
                if (ecx_4 s>= temp3_1)
                    if (ecx_4 s> temp3_1)
                        break
                    
                    i -= 0xc
                    
                    if (i != ebx_1)
                        int64_t xmm1_2 = *i
                        int32_t ecx_5 = i[1].d
                        *i = *ebx_1
                        i[1].d = *(ebx_1 + 8)
                        i_1 = i_2
                        *ebx_1 = xmm1_2
                        *(ebx_1 + 8) = ecx_5
                
                i_1 -= 0xc
                ebx_1 -= 0xc
                i_2 = i_1
            while (var_c u< i_1)
            
            ebx = var_c
            cond:2_1 = i_1 != ebx
            edx_4 = var_10_1
        
        if (not(cond:2_1))
            if (edx_4 == arg4)
                arg3[1] = edi
                *arg3 = i
                return arg3
            
            if (edi != edx_4)
                int64_t xmm1_3 = *i
                int32_t ecx_6 = i[1].d
                *i = *edi
                i[1].d = edi[1].d
                *edi = xmm1_3
                edi[1].d = ecx_6
            
            int32_t ecx_7 = i[1].d
            edi += 0xc
            int64_t xmm1_4 = *i
            *i = *edx_4
            i[1].d = edx_4[1].d
            i += 0xc
            i_1 = i_2
            *edx_4 = xmm1_4
            edx_4[1].d = ecx_7
            edx_4 += 0xc
            ecx_2 = arg4
            break
        
        i_2 = i_1 - 0xc
        
        if (edx_4 != arg4)
            int32_t ecx_10 = edx_4[1].d
            int64_t xmm1_7 = *edx_4
            *edx_4 = *(i_1 - 0xc)
            i_2 = i_1 - 0xc
            edx_4[1].d = *(i_1 - 4)
            edx_4 += 0xc
            i_1 = i_2
            *i_1 = xmm1_7
            i_1[1].d = ecx_10
            ecx_2 = arg4
            break
        
        i -= 0xc
        
        if (i_1 - 0xc != i)
            int64_t xmm1_5 = *(i_1 - 0xc)
            int32_t ecx_8 = *(i_1 - 4)
            *(i_1 - 0xc) = *i
            i_2[1].d = i[1].d
            ebx = var_c
            *i = xmm1_5
            i[1].d = ecx_8
        
        int32_t ecx_9 = i[1].d
        edi -= 0xc
        int64_t xmm1_6 = *i
        *i = *edi
        i[1].d = edi[1].d
        i_1 = i_2
        *edi = xmm1_6
        edi[1].d = ecx_9
        ecx_2 = arg4

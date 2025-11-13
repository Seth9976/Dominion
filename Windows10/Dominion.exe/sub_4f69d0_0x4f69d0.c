// 函数: sub_4f69d0
// 地址: 0x4f69d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_74 = arg5
int64_t* i = &arg2[(((arg4 - arg2) s/ 0xc) s>> 1) * 3]
sub_4f7640(arg4 - 0xc, i, arg2, arg4 - 0xc)
int32_t* edi_1 = i + 0xc
int32_t* var_18 = edi_1

for (; arg2 u< i; i -= 0xc)
    int32_t xmm0_2 = (*(i - 0xc)).d
    
    if (xmm0_2 s< (*i).d)
        break
    
    if ((*i).d s< xmm0_2)
        break

void* ecx_2 = arg4

if (edi_1 u< ecx_2)
    int32_t edx_4 = *i
    
    do
        int32_t temp0_1 = *edi_1
        
        if (temp0_1 s< edx_4)
            break
        
        if (temp0_1 s> edx_4)
            break
        
        edi_1 = &edi_1[3]
    while (edi_1 u< ecx_2)
    
    var_18 = edi_1

int64_t* i_1 = i
int32_t* edx_5 = edi_1
int64_t* i_2 = i_1

while (true)
    int32_t* var_1c_1 = edx_5
    
    while (true)
        if (edx_5 u< ecx_2)
            do
                int32_t eax_9 = *i
                int32_t temp1_1 = *edx_5
                
                if (eax_9 s>= temp1_1)
                    if (eax_9 s> temp1_1)
                        break
                    
                    if (edi_1 == edx_5)
                        edi_1 = &edi_1[3]
                    else
                        int64_t xmm1_1 = *edi_1
                        int32_t ecx_3 = edi_1[2]
                        *edi_1 = *edx_5
                        edi_1[2] = edx_5[2]
                        edi_1 = &edi_1[3]
                        *edx_5 = xmm1_1
                        edx_5[2] = ecx_3
                
                edx_5 = &edx_5[3]
            while (edx_5 u< arg4)
            
            i_1 = i_2
            var_18 = edi_1
            var_1c_1 = edx_5
        
        bool cond:1_1 = i_1 != arg2
        
        if (i_1 u> arg2)
            void* edx_6 = i_1 - 0xc
            
            do
                int32_t ecx_5 = *edx_6
                int32_t temp2_1 = *i
                
                if (ecx_5 s>= temp2_1)
                    if (ecx_5 s> temp2_1)
                        break
                    
                    i -= 0xc
                    
                    if (i != edx_6)
                        int64_t xmm1_2 = *i
                        int32_t ecx_6 = i[1].d
                        *i = *edx_6
                        i[1].d = *(edx_6 + 8)
                        i_1 = i_2
                        *edx_6 = xmm1_2
                        *(edx_6 + 8) = ecx_6
                
                i_1 -= 0xc
                edx_6 -= 0xc
                i_2 = i_1
            while (arg2 u< i_1)
            
            cond:1_1 = i_1 != arg2
            edx_5 = var_1c_1
            edi_1 = var_18
        
        if (not(cond:1_1))
            if (edx_5 == arg4)
                arg3[1] = edi_1
                *arg3 = i
                return arg3
            
            if (edi_1 != edx_5)
                int64_t xmm1_3 = *i
                int32_t ecx_8 = i[1].d
                *i = *edi_1
                i[1].d = edi_1[2]
                *edi_1 = xmm1_3
                edi_1[2] = ecx_8
            
            int32_t ecx_9 = i[1].d
            edi_1 = &edi_1[3]
            int64_t xmm1_4 = *i
            *i = *edx_5
            i[1].d = edx_5[2]
            i += 0xc
            i_1 = i_2
            *edx_5 = xmm1_4
            edx_5[2] = ecx_9
            edx_5 = &edx_5[3]
            ecx_2 = arg4
            var_18 = edi_1
            break
        
        i_2 = i_1 - 0xc
        
        if (edx_5 != arg4)
            int32_t ecx_12 = edx_5[2]
            int64_t xmm1_7 = *edx_5
            *edx_5 = *(i_1 - 0xc)
            i_2 = i_1 - 0xc
            edx_5[2] = *(i_1 - 4)
            edx_5 = &edx_5[3]
            i_1 = i_2
            *i_1 = xmm1_7
            i_1[1].d = ecx_12
            ecx_2 = arg4
            break
        
        i -= 0xc
        
        if (i_1 - 0xc != i)
            int64_t xmm1_5 = *(i_1 - 0xc)
            int32_t ecx_10 = *(i_1 - 4)
            *(i_1 - 0xc) = *i
            i_2[1].d = i[1].d
            edx_5 = var_1c_1
            *i = xmm1_5
            i[1].d = ecx_10
        
        int32_t ecx_11 = i[1].d
        edi_1 -= 0xc
        int64_t xmm1_6 = *i
        var_18 = edi_1
        *i = *edi_1
        i[1].d = edi_1[2]
        i_1 = i_2
        *edi_1 = xmm1_6
        edi_1[2] = ecx_11
        ecx_2 = arg4

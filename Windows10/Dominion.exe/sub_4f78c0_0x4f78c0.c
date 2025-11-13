// 函数: sub_4f78c0
// 地址: 0x4f78c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_24 = arg5
int32_t* edx = &arg2[(arg4 - arg2) s>> 3]
sub_4f72e0(arg4 - 4, edx, arg2, arg4 - 4)
void* edi = &edx[1]
arg5 = edi

if (arg2 u< edx)
    int32_t esi_1 = *edx
    
    do
        int32_t eax_4 = edx[-1]
        
        if (eax_4 s< esi_1)
            break
        
        if (*edx s< eax_4)
            break
        
        edx = &edx[-1]
        esi_1 = eax_4
    while (arg2 u< edx)

void* ecx_2 = arg4

if (edi u< ecx_2)
    int32_t esi_2 = *edx
    
    do
        int32_t temp0_1 = *edi
        
        if (temp0_1 s< esi_2)
            break
        
        if (temp0_1 s> esi_2)
            break
        
        edi += 4
    while (edi u< ecx_2)
    
    arg5 = edi

void* esi_3 = edi
int32_t* ebx_1 = edx
label_4f7934:
int32_t* var_8_1 = ebx_1

while (true)
    void* var_c_1 = esi_3
    
    while (true)
        if (esi_3 u< ecx_2)
            do
                int32_t ecx_3 = *esi_3
                int32_t temp1_1 = *edx
                
                if (temp1_1 s>= ecx_3)
                    if (temp1_1 s> ecx_3)
                        break
                    
                    if (edi == esi_3)
                        edi += 4
                    else
                        int32_t eax_6 = *edi
                        *edi = ecx_3
                        edi += 4
                        *esi_3 = eax_6
                
                esi_3 += 4
            while (esi_3 u< arg4)
            
            ebx_1 = var_8_1
            arg5 = edi
            var_c_1 = esi_3
        
        bool cond:1_1 = ebx_1 != arg2
        
        if (ebx_1 u> arg2)
            void* ecx_4 = &ebx_1[-1]
            
            do
                int32_t eax_8 = *ecx_4
                int32_t temp2_1 = *edx
                
                if (eax_8 s>= temp2_1)
                    if (eax_8 s> temp2_1)
                        break
                    
                    edx -= 4
                    
                    if (edx != ecx_4)
                        int32_t eax_9 = *edx
                        *edx = *ecx_4
                        *ecx_4 = eax_9
                
                ebx_1 -= 4
                ecx_4 -= 4
            while (arg2 u< ebx_1)
            
            cond:1_1 = ebx_1 != arg2
            esi_3 = var_c_1
            edi = arg5
            var_8_1 = ebx_1
        
        if (not(cond:1_1))
            if (esi_3 == arg4)
                arg3[1] = edi
                *arg3 = edx
                return arg3
            
            if (edi != esi_3)
                int32_t ecx_5 = *edx
                *edx = *edi
                *edi = ecx_5
            
            int32_t ecx_6 = *edx
            edi += 4
            *edx = *esi_3
            edx = &edx[1]
            *esi_3 = ecx_6
            esi_3 += 4
            ecx_2 = arg4
            arg5 = edi
            break
        
        ebx_1 = &ebx_1[-1]
        var_8_1 = ebx_1
        
        if (esi_3 != arg4)
            int32_t ecx_9 = *esi_3
            *esi_3 = *ebx_1
            esi_3 += 4
            *ebx_1 = ecx_9
            ecx_2 = arg4
            goto label_4f7934
        
        edx -= 4
        
        if (ebx_1 != edx)
            int32_t ecx_7 = *ebx_1
            *ebx_1 = *edx
            *edx = ecx_7
        
        int32_t ecx_8 = *edx
        edi -= 4
        arg5 = edi
        *edx = *edi
        *edi = ecx_8
        ecx_2 = arg4

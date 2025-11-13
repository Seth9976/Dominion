// 函数: sub_6c3680
// 地址: 0x6c3680
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = &arg2[((arg4 - arg2) s>> 4) * 2]
sub_6c39b0(arg4 - 8, esi, arg2, arg4 - 8, arg5)
int32_t* edi_1 = esi + 8
int32_t* var_8 = edi_1

if (arg2 u< esi)
    do
        if (arg5(esi - 8, esi) != 0)
            break
        
        if (arg5(esi, esi - 8) != 0)
            break
        
        esi -= 8
    while (arg2 u< esi)
    
    edi_1 = var_8

void* eax_9 = arg4

if (edi_1 u< eax_9)
    do
        if (arg5(edi_1, esi) != 0)
            eax_9 = arg4
            break
        
        eax_9 = arg4
        
        if (arg5(esi, edi_1) != 0)
            break
        
        edi_1 = &edi_1[2]
    while (edi_1 u< eax_9)
    
    var_8 = edi_1

int32_t* ecx_1 = esi
int32_t* ebx_1 = edi_1
int32_t* var_c = ecx_1

while (true)
    int32_t* var_14_2 = ebx_1
    
    while (true)
        if (ebx_1 u< eax_9)
            do
                if (arg5(esi, ebx_1) == 0)
                    if (arg5(ebx_1, esi) != 0)
                        break
                    
                    if (edi_1 == ebx_1)
                        edi_1 = &edi_1[2]
                    else
                        int32_t edx_1 = *edi_1
                        int32_t ecx_2 = ebx_1[1]
                        int32_t edi_3 = edi_1[1]
                        *var_8 = *ebx_1
                        var_8[1] = ecx_2
                        ebx_1[1] = edi_3
                        edi_1 = &edi_1[2]
                        *ebx_1 = edx_1
                    
                    var_8 = edi_1
                
                ebx_1 = &ebx_1[2]
            while (ebx_1 u< arg4)
            
            ecx_1 = var_c
            var_14_2 = ebx_1
        
        bool cond:1_1 = ecx_1 != arg2
        
        if (ecx_1 u> arg2)
            int32_t edi_4 = arg5
            int32_t* ebx_2 = &ecx_1[-2]
            int32_t* eax_19
            
            do
                if (edi_4(ebx_2, esi) == 0)
                    if (edi_4(esi, ebx_2) != 0)
                        ecx_1 = var_c
                        eax_19 = arg2
                        break
                    
                    esi -= 8
                    
                    if (esi != ebx_2)
                        int32_t edi_5 = *(esi + 4)
                        int32_t edx_4 = *esi
                        int32_t ecx_3 = ebx_2[1]
                        *esi = *ebx_2
                        *(esi + 4) = ecx_3
                        ebx_2[1] = edi_5
                        edi_4 = arg5
                        *ebx_2 = edx_4
                
                ebx_2 -= 8
                eax_19 = arg2
                ecx_1 = var_c - 8
                var_c = ecx_1
            while (eax_19 u< ecx_1)
            
            ebx_1 = var_14_2
            cond:1_1 = ecx_1 != eax_19
        
        if (not(cond:1_1))
            if (ebx_1 == arg4)
                *arg3 = esi
                arg3[1] = var_8
                return arg3
            
            int32_t* ecx_5 = var_8
            
            if (ecx_5 != ebx_1)
                int32_t eax_20 = *ecx_5
                int32_t edi_6 = *(esi + 4)
                int32_t edx_5 = *esi
                *(esi + 4) = ecx_5[1]
                ecx_5 = var_8
                *esi = eax_20
                *ecx_5 = edx_5
                ecx_5[1] = edi_6
            
            int32_t edi_7 = *(esi + 4)
            int32_t edx_6 = *esi
            var_8 = &ecx_5[2]
            int32_t ecx_8 = ebx_1[1]
            *esi = *ebx_1
            eax_9 = arg4
            *(esi + 4) = ecx_8
            esi += 8
            ecx_1 = var_c
            ebx_1[1] = edi_7
            edi_1 = var_8
            *ebx_1 = edx_6
            ebx_1 = &ebx_1[2]
            break
        
        var_c = &ecx_1[-2]
        
        if (ebx_1 != arg4)
            int32_t eax_26 = ecx_1[-2]
            int32_t edi_10 = ebx_1[1]
            int32_t edx_9 = *ebx_1
            var_c = &ecx_1[-2]
            ebx_1[1] = ecx_1[-1]
            ecx_1 = var_c
            *ebx_1 = eax_26
            ebx_1 = &ebx_1[2]
            eax_9 = arg4
            ecx_1[1] = edi_10
            edi_1 = var_8
            *ecx_1 = edx_9
            break
        
        esi -= 8
        
        if (&ecx_1[-2] != esi)
            int32_t edx_7 = ecx_1[-2]
            int32_t edi_8 = ecx_1[-1]
            int32_t ecx_10 = *(esi + 4)
            *var_c = *esi
            ebx_1 = var_14_2
            var_c[1] = ecx_10
            *esi = edx_7
            *(esi + 4) = edi_8
        
        int32_t edx_8 = *esi
        void* ecx_12 = var_8 - 8
        int32_t edi_9 = *(esi + 4)
        var_8 = ecx_12
        int32_t ecx_13 = *(ecx_12 + 4)
        *esi = *ecx_12
        *(esi + 4) = ecx_13
        ecx_1 = var_c
        var_8[1] = edi_9
        edi_1 = var_8
        *var_8 = edx_8
        eax_9 = arg4

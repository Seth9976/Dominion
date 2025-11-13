// 函数: sub_595280
// 地址: 0x595280
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = &arg2[(arg4 - arg2) s>> 3]
sub_596480(arg4 - 4, esi, arg2, arg4 - 4, arg5)
int32_t* ebx_1 = &esi[1]
int32_t* var_8 = ebx_1

if (arg2 u< esi)
    do
        if (arg5(esi[-1], *esi) != 0)
            break
        
        if (arg5(*esi, esi[-1]) != 0)
            break
        
        esi = &esi[-1]
    while (arg2 u< esi)
    
    ebx_1 = var_8

void* eax_10 = arg4

if (ebx_1 u< eax_10)
    do
        if (arg5(*ebx_1, *esi) != 0)
            eax_10 = arg4
            break
        
        eax_10 = arg4
        
        if (arg5(*esi, *ebx_1) != 0)
            break
        
        ebx_1 = &ebx_1[1]
    while (ebx_1 u< eax_10)
    
    var_8 = ebx_1

int32_t* edi_1 = ebx_1
int32_t* edx_1 = esi
label_595324:
int32_t* var_c_1 = edx_1

while (true)
    int32_t* var_14_2 = edi_1
    
    while (true)
        if (edi_1 u< eax_10)
            do
                if (arg5(*esi, *edi_1) == 0)
                    if (arg5(*edi_1, *esi) != 0)
                        break
                    
                    if (ebx_1 != edi_1)
                        int32_t eax_13 = *ebx_1
                        *ebx_1 = *edi_1
                        *edi_1 = eax_13
                    
                    ebx_1 = &ebx_1[1]
                
                edi_1 = &edi_1[1]
            while (edi_1 u< arg4)
            
            edx_1 = var_c_1
            var_8 = ebx_1
            var_14_2 = edi_1
        
        bool cond:1_1 = edx_1 != arg2
        
        if (edx_1 u> arg2)
            int32_t* ebx_3 = var_c_1
            void* edi_2 = &ebx_3[-1]
            int32_t* eax_18
            
            do
                if (arg5(*edi_2, *esi) == 0)
                    if (arg5(*esi, *edi_2) != 0)
                        eax_18 = arg2
                        break
                    
                    esi -= 4
                    
                    if (esi != edi_2)
                        int32_t eax_17 = *esi
                        *esi = *edi_2
                        *edi_2 = eax_17
                
                eax_18 = arg2
                ebx_3 -= 4
                edi_2 -= 4
            while (eax_18 u< ebx_3)
            
            edi_1 = var_14_2
            var_c_1 = ebx_3
            edx_1 = var_c_1
            cond:1_1 = edx_1 != eax_18
            ebx_1 = var_8
        
        if (not(cond:1_1))
            if (edi_1 == arg4)
                *arg3 = esi
                arg3[1] = ebx_1
                return arg3
            
            if (ebx_1 != edi_1)
                int32_t eax_19 = *esi
                *esi = *ebx_1
                *ebx_1 = eax_19
            
            int32_t eax_20 = *esi
            ebx_1 = &ebx_1[1]
            *esi = *edi_1
            esi = &esi[1]
            *edi_1 = eax_20
            edi_1 = &edi_1[1]
            eax_10 = arg4
            var_8 = ebx_1
            break
        
        edx_1 = &edx_1[-1]
        var_c_1 = edx_1
        
        if (edi_1 != arg4)
            int32_t eax_23 = *edi_1
            *edi_1 = *edx_1
            edi_1 = &edi_1[1]
            *edx_1 = eax_23
            eax_10 = arg4
            goto label_595324
        
        esi -= 4
        
        if (edx_1 != esi)
            int32_t eax_21 = *edx_1
            *edx_1 = *esi
            *esi = eax_21
        
        int32_t eax_22 = *esi
        ebx_1 -= 4
        var_8 = ebx_1
        *esi = *ebx_1
        *ebx_1 = eax_22
        eax_10 = arg4

// 函数: sub_5960e0
// 地址: 0x5960e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg4
int16_t* esi = &arg2[(edi - arg2) s>> 2]
int16_t* eax_3 = edi - 2
sub_596fb0(eax_3, esi, arg2, eax_3, arg5)
int16_t* ebx_1 = &esi[1]
int16_t* var_8 = ebx_1

if (arg2 u< esi)
    do
        if (sub_596040(&arg5, &esi[-1], esi) != 0)
            break
        
        if (sub_596040(&arg5, esi, &esi[-1]) != 0)
            break
        
        esi = &esi[-1]
    while (arg2 u< esi)
    
    ebx_1 = var_8
    edi = arg4

if (ebx_1 u< edi)
    do
        if (sub_596040(&arg5, ebx_1, esi) != 0)
            break
        
        if (sub_596040(&arg5, esi, ebx_1) != 0)
            break
        
        ebx_1 = &ebx_1[1]
    while (ebx_1 u< edi)
    
    var_8 = ebx_1

int16_t* edi_2 = ebx_1
int16_t* edx_1 = esi
label_59617a:
int16_t* var_c_1 = edx_1

while (true)
    int16_t* var_14_1 = edi_2
    
    while (true)
        if (edi_2 u< arg4)
            do
                if (sub_596040(&arg5, esi, edi_2) == 0)
                    if (sub_596040(&arg5, edi_2, esi).b != 0)
                        break
                    
                    if (ebx_1 != edi_2)
                        int16_t ecx_7 = *ebx_1
                        *ebx_1 = *edi_2
                        *edi_2 = ecx_7
                    
                    ebx_1 = &ebx_1[1]
                
                edi_2 = &edi_2[1]
            while (edi_2 u< arg4)
            
            edx_1 = var_c_1
            var_8 = ebx_1
            var_14_1 = edi_2
        
        bool cond:0_1 = edx_1 != arg2
        int16_t* eax_12
        
        if (edx_1 u> arg2)
            int16_t* ebx_3 = var_c_1
            void* edi_3 = &ebx_3[-1]
            
            do
                if (sub_596040(&arg5, edi_3, esi) == 0)
                    if (sub_596040(&arg5, esi, edi_3).b != 0)
                        eax_12 = arg2
                        break
                    
                    esi -= 2
                    
                    if (esi != edi_3)
                        int16_t ecx_10 = *esi
                        *esi = *edi_3
                        *edi_3 = ecx_10
                
                eax_12 = arg2
                ebx_3 -= 2
                edi_3 -= 2
            while (eax_12 u< ebx_3)
            
            edi_2 = var_14_1
            var_c_1 = ebx_3
            edx_1 = var_c_1
            cond:0_1 = edx_1 != eax_12
            ebx_1 = var_8
        
        if (not(cond:0_1))
            if (edi_2 == arg4)
                *arg3 = esi
                arg3[1] = ebx_1
                return arg3
            
            if (ebx_1 != edi_2)
                eax_12.w = *ebx_1
                int16_t ecx_11 = *esi
                *esi = eax_12.w
                *ebx_1 = ecx_11
            
            eax_12.w = *edi_2
            ebx_1 = &ebx_1[1]
            int16_t ecx_12 = *esi
            *esi = eax_12.w
            esi = &esi[1]
            *edi_2 = ecx_12
            edi_2 = &edi_2[1]
            var_8 = ebx_1
            break
        
        edx_1 = &edx_1[-1]
        var_c_1 = edx_1
        
        if (edi_2 != arg4)
            int16_t ecx_15 = *edi_2
            eax_12.w = *edx_1
            *edi_2 = eax_12.w
            edi_2 = &edi_2[1]
            *edx_1 = ecx_15
            goto label_59617a
        
        esi -= 2
        
        if (edx_1 != esi)
            eax_12.w = *esi
            int16_t ecx_13 = *edx_1
            *edx_1 = eax_12.w
            *esi = ecx_13
        
        eax_12.w = ebx_1[-1]
        ebx_1 -= 2
        int16_t ecx_14 = *esi
        *esi = eax_12.w
        var_8 = ebx_1
        *ebx_1 = ecx_14

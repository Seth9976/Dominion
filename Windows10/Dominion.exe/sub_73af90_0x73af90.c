// 函数: sub_73af90
// 地址: 0x73af90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = &arg2[(arg4 - arg2) s>> 3]
sub_73b200(arg4 - 4, esi, arg2, arg4 - 4, arg5)
int32_t* ebx_1 = esi + 4
int32_t* var_8 = ebx_1

if (arg2 u< esi)
    do
        if (arg5(esi - 4, esi) != 0)
            break
        
        if (arg5(esi, esi - 4) != 0)
            break
        
        esi -= 4
    while (arg2 u< esi)
    
    ebx_1 = var_8

void* eax_9 = arg4

if (ebx_1 u< eax_9)
    do
        if (arg5(ebx_1, esi) != 0)
            eax_9 = arg4
            break
        
        eax_9 = arg4
        
        if (arg5(esi, ebx_1) != 0)
            break
        
        ebx_1 = &ebx_1[1]
    while (ebx_1 u< eax_9)
    
    var_8 = ebx_1

int32_t* edi_1 = ebx_1
void* edx_1 = esi
label_73b02c:
void* var_c_1 = edx_1

while (true)
    int32_t* var_14_2 = edi_1
    
    while (true)
        if (edi_1 u< eax_9)
            do
                if (arg5(esi, edi_1) == 0)
                    if (arg5(edi_1, esi) != 0)
                        break
                    
                    if (ebx_1 != edi_1)
                        int32_t ecx_2 = *ebx_1
                        *ebx_1 = *edi_1
                        *edi_1 = ecx_2
                    
                    ebx_1 = &ebx_1[1]
                
                edi_1 = &edi_1[1]
            while (edi_1 u< arg4)
            
            edx_1 = var_c_1
            var_8 = ebx_1
            var_14_2 = edi_1
        
        bool cond:1_1 = edx_1 != arg2
        
        if (edx_1 u> arg2)
            void* ebx_3 = var_c_1
            void* edi_2 = ebx_3 - 4
            int32_t* eax_17
            
            do
                if (arg5(edi_2, esi) == 0)
                    if (arg5(esi, edi_2) != 0)
                        eax_17 = arg2
                        break
                    
                    esi -= 4
                    
                    if (esi != edi_2)
                        int32_t ecx_3 = *esi
                        *esi = *edi_2
                        *edi_2 = ecx_3
                
                eax_17 = arg2
                ebx_3 -= 4
                edi_2 -= 4
            while (eax_17 u< ebx_3)
            
            edi_1 = var_14_2
            var_c_1 = ebx_3
            edx_1 = var_c_1
            cond:1_1 = edx_1 != eax_17
            ebx_1 = var_8
        
        if (not(cond:1_1))
            if (edi_1 == arg4)
                *arg3 = esi
                arg3[1] = ebx_1
                return arg3
            
            if (ebx_1 != edi_1)
                int32_t ecx_4 = *esi
                *esi = *ebx_1
                *ebx_1 = ecx_4
            
            ebx_1 = &ebx_1[1]
            int32_t ecx_5 = *esi
            *esi = *edi_1
            esi += 4
            eax_9 = arg4
            *edi_1 = ecx_5
            edi_1 = &edi_1[1]
            var_8 = ebx_1
            break
        
        edx_1 -= 4
        var_c_1 = edx_1
        
        if (edi_1 != arg4)
            int32_t ecx_8 = *edi_1
            *edi_1 = *edx_1
            edi_1 = &edi_1[1]
            eax_9 = arg4
            *edx_1 = ecx_8
            goto label_73b02c
        
        esi -= 4
        
        if (edx_1 != esi)
            int32_t ecx_6 = *edx_1
            *edx_1 = *esi
            *esi = ecx_6
        
        int32_t eax_21 = ebx_1[-1]
        ebx_1 -= 4
        int32_t ecx_7 = *esi
        *esi = eax_21
        eax_9 = arg4
        var_8 = ebx_1
        *ebx_1 = ecx_7

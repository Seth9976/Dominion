// 函数: sub_595450
// 地址: 0x595450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi_4 = &arg2[(arg4 - arg2) s>> 5]
sub_596750(arg4 - 0x10, esi_4, arg2, arg4 - 0x10, arg5)
int128_t* ebx_1 = esi_4 + 0x10
int128_t* var_8 = ebx_1

if (arg2 u< esi_4)
    do
        if (arg5(esi_4 - 0x10, esi_4) != 0)
            break
        
        if (arg5(esi_4, esi_4 - 0x10) != 0)
            break
        
        esi_4 -= 0x10
    while (arg2 u< esi_4)
    
    ebx_1 = var_8

void* ecx_1 = arg4

if (ebx_1 u< ecx_1)
    do
        if (arg5(ebx_1, esi_4) != 0)
            ecx_1 = arg4
            break
        
        ecx_1 = arg4
        
        if (arg5(esi_4, ebx_1) != 0)
            break
        
        ebx_1 = &ebx_1[1]
    while (ebx_1 u< ecx_1)
    
    var_8 = ebx_1

int128_t* edi_1 = ebx_1
void* eax_7 = esi_4
label_5954ed:
void* var_c_1 = eax_7

while (true)
    int128_t* var_14_2 = edi_1
    
    while (true)
        if (edi_1 u< ecx_1)
            do
                if (arg5(esi_4, edi_1) == 0)
                    if (arg5(edi_1, esi_4) != 0)
                        break
                    
                    if (ebx_1 != edi_1)
                        int128_t xmm1_1 = *ebx_1
                        *ebx_1 = *edi_1
                        *edi_1 = xmm1_1
                    
                    ebx_1 = &ebx_1[1]
                
                edi_1 = &edi_1[1]
            while (edi_1 u< arg4)
            
            eax_7 = var_c_1
            var_8 = ebx_1
            var_14_2 = edi_1
        
        bool cond:0_1 = eax_7 != arg2
        
        if (eax_7 u> arg2)
            void* edi_2 = var_c_1
            void* ebx_3 = edi_2 - 0x10
            
            do
                if (arg5(ebx_3, esi_4) == 0)
                    if (arg5(esi_4, ebx_3) != 0)
                        break
                    
                    esi_4 -= 0x10
                    
                    if (esi_4 != ebx_3)
                        int128_t xmm1_2 = *esi_4
                        *esi_4 = *ebx_3
                        *ebx_3 = xmm1_2
                
                edi_2 -= 0x10
                ebx_3 -= 0x10
            while (arg2 u< edi_2)
            
            var_c_1 = edi_2
            eax_7 = var_c_1
            cond:0_1 = eax_7 != arg2
            edi_1 = var_14_2
        
        ecx_1 = arg4
        
        if (not(cond:0_1))
            if (edi_1 == ecx_1)
                *arg3 = esi_4
                arg3[1] = var_8
                return arg3
            
            if (var_8 != edi_1)
                int128_t xmm1_3 = *esi_4
                *esi_4 = *var_8
                *var_8 = xmm1_3
            
            ebx_1 = &var_8[1]
            int128_t xmm1_4 = *esi_4
            var_8 = ebx_1
            *esi_4 = *edi_1
            esi_4 += 0x10
            *edi_1 = xmm1_4
            edi_1 = &edi_1[1]
            break
        
        eax_7 -= 0x10
        var_c_1 = eax_7
        
        if (edi_1 != ecx_1)
            int128_t xmm1_7 = *edi_1
            ebx_1 = var_8
            *edi_1 = *eax_7
            edi_1 = &edi_1[1]
            *eax_7 = xmm1_7
            goto label_5954ed
        
        esi_4 -= 0x10
        
        if (eax_7 != esi_4)
            int128_t xmm1_5 = *eax_7
            *eax_7 = *esi_4
            *esi_4 = xmm1_5
        
        int128_t xmm1_6 = *esi_4
        ebx_1 = var_8 - 0x10
        var_8 = ebx_1
        *esi_4 = *ebx_1
        *ebx_1 = xmm1_6

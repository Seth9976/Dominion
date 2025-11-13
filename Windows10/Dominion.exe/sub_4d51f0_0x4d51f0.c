// 函数: sub_4d51f0
// 地址: 0x4d51f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi_4 = &arg2[((arg4 - arg2) s>> 6) * 8]
sub_4d5720(arg4 - 0x20, esi_4, arg2, arg4 - 0x20, arg5)
int32_t* ebx_1 = esi_4 + 0x20
int32_t* var_8 = ebx_1

if (arg2 u< esi_4)
    do
        if (arg5(esi_4 - 0x20, esi_4) != 0)
            break
        
        if (arg5(esi_4, esi_4 - 0x20) != 0)
            break
        
        esi_4 -= 0x20
    while (arg2 u< esi_4)
    
    ebx_1 = var_8

void* ecx_2 = arg4

if (ebx_1 u< ecx_2)
    do
        if (arg5(ebx_1, esi_4) != 0)
            ecx_2 = arg4
            break
        
        ecx_2 = arg4
        
        if (arg5(esi_4, ebx_1) != 0)
            break
        
        ebx_1 = &ebx_1[8]
    while (ebx_1 u< ecx_2)
    
    var_8 = ebx_1

int32_t* edi_1 = ebx_1
void* eax_6 = esi_4
int32_t* var_14_2 = edi_1
void* var_c = eax_6

while (true)
    if (edi_1 u< ecx_2)
        do
            if (arg5(esi_4, edi_1) == 0)
                if (arg5(edi_1, esi_4) != 0)
                    break
                
                if (ebx_1 == edi_1)
                    ebx_1 = &ebx_1[8]
                else
                    sub_4d58c0(ebx_1, edi_1)
                    ebx_1 = &ebx_1[8]
            
            edi_1 = &edi_1[8]
        while (edi_1 u< arg4)
        
        eax_6 = var_c
        var_8 = ebx_1
        var_14_2 = edi_1
    
    int32_t* ecx_5 = arg2
    int32_t* edx_2 = edi_1
    int32_t* var_18_2 = edx_2
    
    if (ecx_5 u< eax_6)
        void* ebx_3 = var_c
        int32_t* edi_2 = ebx_3 - 0x20
        
        do
            if (arg5(edi_2, esi_4) == 0)
                if (arg5(esi_4, edi_2) != 0)
                    break
                
                esi_4 -= 0x20
                
                if (esi_4 != edi_2)
                    sub_4d58c0(esi_4, edi_2)
            
            ebx_3 -= 0x20
            edi_2 -= 0x20
        while (arg2 u< ebx_3)
        
        edi_1 = var_14_2
        edx_2 = var_18_2
        ecx_5 = arg2
        var_c = ebx_3
        ebx_1 = var_8
        eax_6 = var_c
    
    int32_t* ecx_9
    int32_t* edx_5
    
    if (eax_6 != ecx_5)
        var_c = eax_6 - 0x20
        
        if (edi_1 != arg4)
            ecx_9 = edx_2
            var_c = eax_6 - 0x20
            edx_5 = eax_6 - 0x20
        else
            esi_4 -= 0x20
            
            if (eax_6 - 0x20 != esi_4)
                sub_4d58c0(eax_6 - 0x20, esi_4)
            
            ebx_1 -= 0x20
            var_8 = ebx_1
            sub_4d58c0(esi_4, ebx_1)
            eax_6 = var_c
            ecx_2 = arg4
            continue
    else
        if (edi_1 == arg4)
            *arg3 = esi_4
            arg3[1] = ebx_1
            return arg3
        
        if (ebx_1 != edi_1)
            sub_4d58c0(esi_4, ebx_1)
        
        ecx_9 = esi_4
        ebx_1 = &ebx_1[8]
        edx_5 = var_18_2
        esi_4 += 0x20
        var_8 = ebx_1
    
    edi_1 = &edi_1[8]
    var_14_2 = edi_1
    sub_4d58c0(ecx_9, edx_5)
    eax_6 = var_c
    ecx_2 = arg4

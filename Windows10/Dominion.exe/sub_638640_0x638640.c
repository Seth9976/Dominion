// 函数: sub_638640
// 地址: 0x638640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi_2 = &arg2[(((arg4 - arg2) s/ 0xc) s>> 1) * 3]
sub_639150(arg4 - 0xc, esi_2, arg2, arg4 - 0xc, arg5)
int32_t* ebx_1 = esi_2 + 0xc
int32_t* var_8 = ebx_1

if (arg2 u< esi_2)
    do
        if (arg5(esi_2 - 0xc, esi_2) != 0)
            break
        
        if (arg5(esi_2, esi_2 - 0xc) != 0)
            break
        
        esi_2 -= 0xc
    while (arg2 u< esi_2)
    
    ebx_1 = var_8

void* ecx_2 = arg4

if (ebx_1 u< ecx_2)
    do
        if (arg5(ebx_1, esi_2) != 0)
            ecx_2 = arg4
            break
        
        ecx_2 = arg4
        
        if (arg5(esi_2, ebx_1) != 0)
            break
        
        ebx_1 = &ebx_1[3]
    while (ebx_1 u< ecx_2)
    
    var_8 = ebx_1

int32_t* edi_1 = ebx_1
void* eax_12 = esi_2
int32_t* var_14_2 = edi_1
void* var_c = eax_12

while (true)
    if (edi_1 u< ecx_2)
        do
            if (arg5(esi_2, edi_1) == 0)
                if (arg5(edi_1, esi_2) != 0)
                    break
                
                if (ebx_1 == edi_1)
                    ebx_1 = &ebx_1[3]
                else
                    sub_639300(ebx_1, edi_1)
                    ebx_1 = &ebx_1[3]
            
            edi_1 = &edi_1[3]
        while (edi_1 u< arg4)
        
        eax_12 = var_c
        var_8 = ebx_1
        var_14_2 = edi_1
    
    int32_t* ecx_5 = arg2
    int32_t* edx_4 = edi_1
    int32_t* var_18_2 = edx_4
    
    if (ecx_5 u< eax_12)
        void* ebx_3 = var_c
        int32_t* edi_2 = ebx_3 - 0xc
        
        do
            if (arg5(edi_2, esi_2) == 0)
                if (arg5(esi_2, edi_2) != 0)
                    break
                
                esi_2 -= 0xc
                
                if (esi_2 != edi_2)
                    sub_639300(esi_2, edi_2)
            
            ebx_3 -= 0xc
            edi_2 -= 0xc
        while (arg2 u< ebx_3)
        
        edi_1 = var_14_2
        ecx_5 = arg2
        edx_4 = var_18_2
        var_c = ebx_3
        ebx_1 = var_8
        eax_12 = var_c
    
    int32_t* ecx_9
    int32_t* edx_7
    
    if (eax_12 != ecx_5)
        var_c = eax_12 - 0xc
        
        if (edi_1 != arg4)
            ecx_9 = edx_4
            var_c = eax_12 - 0xc
            edx_7 = eax_12 - 0xc
        else
            esi_2 -= 0xc
            
            if (eax_12 - 0xc != esi_2)
                sub_639300(eax_12 - 0xc, esi_2)
            
            ebx_1 -= 0xc
            var_8 = ebx_1
            sub_639300(esi_2, ebx_1)
            eax_12 = var_c
            ecx_2 = arg4
            continue
    else
        if (edi_1 == arg4)
            *arg3 = esi_2
            arg3[1] = ebx_1
            return arg3
        
        if (ebx_1 != edi_1)
            sub_639300(esi_2, ebx_1)
        
        ecx_9 = esi_2
        ebx_1 = &ebx_1[3]
        edx_7 = var_18_2
        esi_2 += 0xc
        var_8 = ebx_1
    
    edi_1 = &edi_1[3]
    var_14_2 = edi_1
    sub_639300(ecx_9, edx_7)
    eax_12 = var_c
    ecx_2 = arg4

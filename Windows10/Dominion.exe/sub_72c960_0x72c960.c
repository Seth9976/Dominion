// 函数: sub_72c960
// 地址: 0x72c960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx = *(arg1 + 0xa8)
void* edi = arg1 + 0xa8
void* eax
void* ecx_1

if (ecx u>= *(arg1 + 0xac))
    if (*(arg1 + 0x20) != 0)
        void* eax_2 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_2 != 0)
            *(arg1 + 0xac) = eax_2 + 0x28 + arg1
        else
            *(arg1 + 0x20) = eax_2
            *(arg1 + 0xac) = arg1 + 0x29
            *(arg1 + 0x28) = 0
        
        eax.b = *(arg1 + 0x28)
        ecx_1 = arg1 + 0x29
        edi = arg1 + 0xa8
        goto label_72c9cc
    
    eax.b = 0
else
    eax.b = *ecx
    ecx_1 = &ecx[1]
label_72c9cc:
    *edi = ecx_1
    
    if (eax.b u> 0xc)
        return 0
uint32_t ecx_2 = zx.d(eax.b)
int32_t edx_1 = 1 << ecx_2.b
int32_t var_24_1 = 1
int32_t var_10_1 = 0
int32_t var_8_1 = ecx_2 + 1
int32_t ebx_2 = (1 << (ecx_2 + 1).b) - 1
int32_t ecx_4 = 0
int32_t var_14_1 = 0

if (edx_1 s> 0)
    edi = arg1 + 0xa8
    char* eax_7 = arg2 + 0x82a
    
    do
        *eax_7 = ecx_4.b
        eax_7 = &eax_7[4]
        eax_7[0xfffffffd] = ecx_4.b
        ecx_4 += 1
        *(eax_7 - 6) = 0xffff
    while (ecx_4 s< edx_1)

void* const var_20_2 = 0xffffffff
int32_t edx_2 = edx_1 + 2
uint32_t eax_9 = 0
int32_t var_18_1 = edx_2
uint32_t var_1c_1 = 0

while (true)
    int32_t ecx_5 = var_8_1
    char* eax_20
    
    while (true)
        if (var_14_1 s>= ecx_5)
            int32_t edi_4 = var_10_1
            var_10_1 s>>= ecx_5.b
            void* edi_5 = edi_4 & ebx_2
            var_14_1 -= ecx_5
            
            if (edi_5 == edx_1)
                ecx_5 = ecx_2 + 1
                edi = arg1 + 0xa8
                edx_2 = edx_1 + 2
                var_8_1 = ecx_5
                ebx_2 = (1 << ecx_5.b) - 1
                var_18_1 = edx_2
                var_20_2 = 0xffffffff
                var_24_1 = 0
                continue
            else if (edi_5 == edx_1 + 1)
                if (var_1c_1 s>= 0)
                    int32_t eax_35
                    int32_t edx_6
                    
                    if (*(arg1 + 0x10) != 0)
                        edx_6 = *(arg1 + 0xac)
                        eax_35 = edx_6 - *(arg1 + 0xa8)
                    
                    if (*(arg1 + 0x10) == 0 || eax_35 s>= var_1c_1)
                        *(arg1 + 0xa8) += var_1c_1
                    else
                        *(arg1 + 0xa8) = edx_6
                        (*(arg1 + 0x14))(*(arg1 + 0x1c), var_1c_1 - eax_35)
                else
                    *(arg1 + 0xa8) = *(arg1 + 0xac)
                
                void* edx_7 = arg1 + 0x10
                void* edi_6 = arg1 + 0x1c
                
                while (true)
                    void* ecx_14 = *(arg1 + 0xa8)
                    void* ebx_5 = edx_7
                    void* eax_37 = *(arg1 + 0xac)
                    
                    if (ecx_14 u< eax_37)
                        edx_7.b = *ecx_14
                        ecx_14 += 1
                        *(arg1 + 0xa8) = ecx_14
                    else if (*(arg1 + 0x20) == 0)
                        edx_7.b = 0
                    else
                        void* eax_39
                        eax_39, edx_7 = (*edx_7)(*edi_6, arg1 + 0x28, *(arg1 + 0x24))
                        
                        if (eax_39 != 0)
                            eax_37 = eax_39 + 0x28 + arg1
                            *(arg1 + 0xac) = eax_37
                        else
                            *(arg1 + 0x20) = eax_39
                            eax_37 = arg1 + 0x29
                            *(arg1 + 0xac) = eax_37
                            *(arg1 + 0x28) = 0
                        
                        edx_7.b = *(arg1 + 0x28)
                        ecx_14 = arg1 + 0x29
                        edi_6 = arg1 + 0x1c
                        *(arg1 + 0xa8) = ecx_14
                    
                    uint32_t edx_8 = zx.d(edx_7.b)
                    
                    if (edx_8 == 0)
                        break
                    
                    if (*ebx_5 != 0)
                        void* ebx_8 = eax_37 - ecx_14
                        
                        if (ebx_8 s< edx_8)
                            *(arg1 + 0xa8) = eax_37
                            (*(arg1 + 0x14))(*edi_6, edx_8 - ebx_8)
                            edx_7 = ebx_5
                            continue
                    
                    edx_7 = ebx_5
                    *(arg1 + 0xa8) = ecx_14 + edx_8
                    edi_6 = arg1 + 0x1c
            else
                if (edi_5 s> edx_2)
                    return 0
                
                if (var_24_1 != 0)
                    return 0
                
                if (var_20_2 s>= 0)
                    void* ecx_10 = arg2 + (edx_2 << 2)
                    var_18_1 = edx_2 + 1
                    
                    if (edx_2 + 1 s> 0x2000)
                        return 0
                    
                    *(ecx_10 + 0x828) = var_20_2.w
                    void* const eax_32
                    eax_32.b = *(arg2 + (var_20_2 << 2) + 0x82a)
                    *(ecx_10 + 0x82a) = eax_32.b
                    
                    if (edi_5 != var_18_1)
                        eax_32.b = *(arg2 + (edi_5 << 2) + 0x82a)
                    
                    *(ecx_10 + 0x82b) = eax_32.b
                else if (edi_5 == edx_2)
                    return 0
                
                sub_72c860(arg2, edi_5.w)
                edx_2 = var_18_1
                ecx_5 = var_8_1
                
                if ((ebx_2 & edx_2) == 0 && edx_2 s<= 0xfff)
                    ecx_5 += 1
                    var_8_1 = ecx_5
                    ebx_2 = (1 << ecx_5.b) - 1
                
                eax_9 = var_1c_1
                var_20_2 = edi_5
                edi = arg1 + 0xa8
                continue
        else
            if (eax_9 != 0)
            label_72cae0:
                var_1c_1 = eax_9 - 1
                eax_20 = *edi
                break
            
            char* eax_10 = *edi
            
            if (eax_10 u< *(arg1 + 0xac))
                ecx_5.b = *eax_10
                *edi = &eax_10[1]
            else if (*(arg1 + 0x20) == 0)
                ecx_5.b = 0
            else
                void* eax_13
                eax_13, ecx_5 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
                
                if (eax_13 != 0)
                    *(arg1 + 0xac) = eax_13 + 0x28 + arg1
                    ecx_5.b = *(arg1 + 0x28)
                    edi = arg1 + 0xa8
                    *edi = arg1 + 0x29
                else
                    *(arg1 + 0x20) = eax_13
                    *(arg1 + 0xac) = arg1 + 0x29
                    *(arg1 + 0x28) = 0
                    ecx_5.b = *(arg1 + 0x28)
                    edi = arg1 + 0xa8
                    *edi = arg1 + 0x29
            
            eax_9 = zx.d(ecx_5.b)
            
            if (ecx_5.b != 0)
                goto label_72cae0
        
        return *(arg2 + 8)
    
    if (eax_20 u< *(arg1 + 0xac))
        ecx_5.b = *eax_20
        *edi = &eax_20[1]
    else if (*(arg1 + 0x20) == 0)
        ecx_5.b = 0
    else
        void* eax_23
        eax_23, ecx_5 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        
        if (eax_23 != 0)
            *(arg1 + 0xac) = eax_23 + 0x28 + arg1
            ecx_5.b = *(arg1 + 0x28)
            edi = arg1 + 0xa8
            *edi = arg1 + 0x29
        else
            *(arg1 + 0x20) = eax_23
            *(arg1 + 0xac) = arg1 + 0x29
            *(arg1 + 0x28) = 0
            ecx_5.b = *(arg1 + 0x28)
            edi = arg1 + 0xa8
            *edi = arg1 + 0x29
    
    edx_2 = var_18_1
    var_10_1 |= zx.d(ecx_5.b) << var_14_1.b
    eax_9 = var_1c_1
    var_14_1 += 8

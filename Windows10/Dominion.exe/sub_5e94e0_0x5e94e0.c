// 函数: sub_5e94e0
// 地址: 0x5e94e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_4d5d30(arg1, *(arg2 + 4))
sub_4d5d30(arg1, *(arg2 + 0x6c))
int32_t eax = *(arg2 + 4)

if (eax != 5 && eax != 9)
    int32_t i = 0
    
    if (*(arg2 + 0x6c) s> 0)
        void* eax_1 = arg2 + 0x70
        void* var_8_1 = eax_1
        
        do
            sub_4d5d30(arg1, *eax_1)
            i += 1
            eax_1 = var_8_1 + 4
            var_8_1 = eax_1
        while (i s< *(arg2 + 0x6c))

if (*(arg2 + 0xd10) != 0)
    int32_t i_1 = 0
    
    if (*(arg2 + 0x6c) s> 0)
        void* eax_3 = arg2 + 0xd00
        void* var_8_2 = eax_3
        
        do
            sub_4d5d30(arg1, *eax_3)
            i_1 += 1
            eax_3 = var_8_2 + 4
            var_8_2 = eax_3
        while (i_1 s< *(arg2 + 0x6c))

int32_t eax_5 = *(arg2 + 0x40)
void* ecx_3 = &arg1[4]
int32_t edx_4 = arg1[2]
void* ebx_1 = &arg1[2]
void* var_8_3

if (*ecx_3 + 4 s<= edx_4)
    var_8_3 = ecx_3
else
    uint32_t ecx_4 = 0x1000
    uint32_t eax_8 = edx_4 * 2
    
    if (eax_8 s> 0x1000)
        ecx_4 = eax_8
    
    *ebx_1 = ecx_4
    int32_t eax_9 = sub_687730(ecx_4)
    memmove(eax_9, *arg1, arg1[4])
    int32_t eax_10 = *arg1
    ecx_3 = &arg1[4]
    var_8_3 = ecx_3
    
    if (eax_10 != 0)
        _aligned_free(eax_10)
        var_8_3 = &arg1[4]
        ebx_1 = &arg1[2]
        ecx_3 = &arg1[4]
    
    *arg1 = eax_9

*(*ecx_3 + *arg1) = eax_5
void* edx_7 = var_8_3
int32_t eax_14 = *edx_7 + 4
*edx_7 = eax_14
arg1[3] = eax_14
int32_t edi_1 = *(arg2 + 0x68)
int32_t edi_2 = *ebx_1
void* ebx_2
void* edi_3

if (eax_14 + 4 s<= edi_2)
    ebx_2 = edx_7
    edi_3 = &arg1[3]
else
    uint32_t ecx_7 = 0x1000
    uint32_t eax_16 = edi_2 * 2
    
    if (eax_16 s> 0x1000)
        ecx_7 = eax_16
    
    *ebx_1 = ecx_7
    int32_t eax_17 = sub_687730(ecx_7)
    memmove(eax_17, *arg1, *var_8_3)
    int32_t eax_18 = *arg1
    edx_7 = var_8_3
    ebx_2 = edx_7
    
    if (eax_18 != 0)
        _aligned_free(eax_18)
        edx_7 = var_8_3
        ebx_2 = &arg1[4]
    
    edi_3 = &arg1[3]
    *arg1 = eax_17

*(*edx_7 + *arg1) = edi_1
int32_t result = *ebx_2 + 4
*edi_3 = result
*ebx_2 = result
return result

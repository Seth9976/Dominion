// 函数: sub_7551a0
// 地址: 0x7551a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edx = *arg1
arg1[2] = *(edx + 0x10)
arg1[3] = *(edx + 0x14)
arg1[4] = *(edx + 0x18)
arg1[5] = *(edx + 0x1c)
int32_t* edx_1 = arg1[6]

if (edx_1 != 0)
    int32_t* ecx = *(*arg1 + 0x20)
    *edx_1 = *ecx
    edx_1[1] = ecx[1]
    edx_1[2] = ecx[2]
    edx_1[3] = ecx[3]

int32_t* eax_12 = *arg1
char* edi = eax_12[3]

if (edi != 0)
    int32_t ebx_1 = *eax_12
    eax_12 = arg1[1]
    
    if (ebx_1 != 0xffffffff)
        void* eax_13 = &eax_12[1]
        int32_t** eax_14 = *eax_13
        int32_t ecx_1 = eax_14[0xd]
        
        if (ecx_1 != 0)
            eax_12 = sub_752840(eax_14, ebx_1, ecx_1, edi)
        
        if (ecx_1 != 0 && eax_12 != 0)
        label_755260:
            arg1[7] = 0
            arg1[7] = eax_12
            int32_t eax_16 = *(*eax_13 + 0x48)
            arg1[0xb] = eax_16
            arg1[9] = 0
            return eax_16
        
        eax_12 = *eax_14
        int32_t ecx_2 = eax_12[0xe]
        
        if (ecx_2 != 0)
            eax_12 = sub_752840(eax_12, ebx_1, ecx_2, edi)
            
            if (eax_12 != 0)
                goto label_755260
    
    arg1[7] = 0
else if (arg1[7] != edi)
    void* eax_9 = arg1[1]
    arg1[7] = edi
    int32_t eax_11 = *(*(eax_9 + 4) + 0x48)
    arg1[9] = edi
    arg1[0xb] = eax_11
    return eax_11

return eax_12

// 函数: sub_59d430
// 地址: 0x59d430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ebx = data_1597e44
int32_t esi = 0
int32_t edi = *(arg1 + 0x14)
void* eax_1 = arg1 + 0x10

if (edi s> 0)
    int32_t ecx = *eax_1
    int32_t eax_2 = ecx
    int32_t edx = data_1597e48
    void* ecx_1 = &ebx[ecx * 2]
    
    while (true)
        if (eax_2 s>= 0 && eax_2 s< edx)
            edx = data_1597e48
            
            if (*ecx_1 == arg2)
                eax_2 = ecx + esi
                
                if (ecx + esi s>= 0 && eax_2 s< edx)
                    ebx[eax_2 * 2 + 1] += 1
                    return eax_2
            else
                esi += 1
                eax_2 += 1
                ecx_1 += 8
                
                if (esi s>= edi)
                    break
                
                continue
        
        sub_63b870(eax_2, &data_801800, "index >= 0 && index < mSize", 
            "C:\x\ax2017\Engine\xDynArray.h", 0xd4, 
            "XDynArray<struct DomLogCardEntry>::operator []")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

int32_t eax_3 = data_1597e4c
int32_t esi_2 = *eax_1 + edi
data_1597e48 = esi_2

if (esi_2 s>= eax_3)
    int32_t edi_1 = 0x10
    
    if (eax_3 != 0)
        edi_1 = eax_3 * 2
    
    ebx = sub_64c020(edi_1 << 3)
    int32_t eax_5 = data_1597e44
    
    if (eax_5 != 0)
        memcpy(ebx, eax_5, esi_2 << 3)
        sub_64c080(data_1597e44, data_1597e4c << 3)
    
    esi_2 = data_1597e48
    data_1597e44 = ebx
    data_1597e4c = edi_1

data_1597e48 = esi_2 + 1
ebx[(esi_2 + 1) * 2 - 2] = arg2
ebx[(esi_2 + 1) * 2 - 1] = 1
*(arg1 + 0x14) += 1
return arg1

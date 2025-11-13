// 函数: sub_657930
// 地址: 0x657930
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* edi = arg3
int32_t* esi = arg2
int32_t* var_8 = edi

if (arg4 s<= 0)
    return 

int32_t i

do
    arg1 = *edi
    int32_t edx = 0
    int32_t edi_1 = edi[1]
    
    if (edi_1 s> 0)
        while (arg1[1] != esi[1] || *arg1 != *esi)
            edx += 1
            arg1 = &arg1[7]
            
            if (edx s>= edi_1)
                edi = var_8
                arg1 = sub_67d590(edi)
                goto label_657989
    
    if (edi_1 s> 0 && arg1 != 0)
        edi = var_8
    else
        edi = var_8
        arg1 = sub_67d590(edi)
    
label_657989:
    *arg1 = *esi
    *(arg1 + 0x10) = *(esi + 0x10)
    int32_t ecx_3 = esi[6]
    esi = &esi[7]
    i = arg4
    arg4 -= 1
    arg1[6] = ecx_3
while (i != 1)

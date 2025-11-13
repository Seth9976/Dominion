// 函数: sub_712da0
// 地址: 0x712da0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *(arg1 + 0x2c)
int32_t esi = 0
int32_t* var_10
int32_t* esi_1

if (edi s<= 0)
    esi_1 = arg1 + 0x2c
    var_10 = arg1 + 0x2c
else
    int32_t* eax_1 = *(arg1 + 0x28)
    
    do
        if (*eax_1 == arg2)
            return 0
        
        esi += 1
        eax_1 = &eax_1[1]
    while (esi s< edi)
    
    esi_1 = arg1 + 0x2c
    var_10 = esi_1

if (*(arg1 + 0x30) s< edi + 1)
    int32_t ecx = data_147ded8
    int32_t eax_3 = (edi + 1) * 2
    int32_t _Size = eax_3 << 2
    int32_t eax_4
    
    if (ecx == 0)
        eax_4 = malloc(_Size)
    else
        eax_4 =
            ecx(_Size, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationState.c", 0x387)
    
    if (eax_4 != 0)
        memset(eax_4, 0, eax_3 << 2)
        esi_1 = arg1 + 0x2c
    
    memcpy(eax_4, *(arg1 + 0x28), *(arg1 + 0x2c) << 2)
    free(*(arg1 + 0x28))
    *(arg1 + 0x28) = eax_4
    *(arg1 + 0x30) = eax_3

*(*(arg1 + 0x28) + (*var_10 << 2)) = arg2
*esi_1 += 1
return 1

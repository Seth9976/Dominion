// 函数: sub_596c20
// 地址: 0x596c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg4
int32_t edi = arg2
int32_t esi = ecx - 1
int32_t var_10 = edi
int32_t eax_1 = esi s>> 1
int32_t var_20 = eax_1

if (edi s< eax_1)
    do
        int32_t eax_3 = arg2 * 2
        int32_t ecx_1 = *(arg3 + (eax_3 << 2) + 4)
        int32_t eax_4 = *(arg3 + (eax_3 << 2) + 8)
        uint32_t esi_1 = zx.d(eax_4.w)
        int32_t var_8_1 = ecx_1
        
        if (esi_1 u>= 0x320)
            sub_591930()
            ecx_1 = var_8_1
        
        int32_t edx = arg6
        int32_t esi_2 = *(esi_1 * 0x64 + edx + 0x1a4c)
        uint32_t eax_6 = zx.d(ecx_1.w)
        
        if (eax_6 u>= 0x320)
            sub_591930()
            ecx_1 = var_8_1
            edx = arg6
        
        int32_t temp0_1 = *(eax_6 * 0x64 + edx + 0x1a4c)
        int32_t eax_8
        
        if (esi_2 s< temp0_1)
            eax_8 = 1
        else if (esi_2 s<= temp0_1)
            eax_8.b = eax_4 s>= ecx_1
        else
            eax_8 = 0
        
        arg2 = eax_3 + 1 + eax_8
        *(arg3 + (edi << 2)) = *(arg3 + (arg2 << 2))
        edi = arg2
        eax_1 = var_20
    while (arg2 s< eax_1)
    
    ecx = arg4

if (arg2 == eax_1 && (ecx.b & 1) == 0)
    *(arg3 + (edi << 2)) = *(arg3 + (ecx << 2) - 4)
    edi = esi

int32_t esi_4 = (edi - 1) s>> 1

while (var_10 s< edi)
    int32_t edx_3 = *arg5
    int32_t eax_13 = *(arg3 + (esi_4 << 2))
    uint32_t eax_14 = zx.d(eax_13.w)
    int32_t var_c_2 = edx_3
    
    if (eax_14 u>= 0x320)
        sub_591930()
        edx_3 = var_c_2
    
    int32_t ecx_3 = *(eax_14 * 0x64 + arg6 + 0x1a4c)
    uint32_t eax_16 = zx.d(edx_3.w)
    
    if (eax_16 u>= 0x320)
        sub_591930()
    
    int32_t temp1_1 = *(eax_16 * 0x64 + arg6 + 0x1a4c)
    
    if (ecx_3 s< temp1_1)
        break
    
    if (ecx_3 s<= temp1_1 && eax_13 s>= var_c_2)
        break
    
    *(arg3 + (edi << 2)) = *(arg3 + (esi_4 << 2))
    edi = esi_4
    esi_4 = (esi_4 - 1) s>> 1

int32_t result = *arg5
*(arg3 + (edi << 2)) = result
return result

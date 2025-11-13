// 函数: sub_5c9a70
// 地址: 0x5c9a70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg4
int32_t edi = arg2
int32_t var_8 = arg3
int32_t esi = ebx - 1
int32_t var_c = edi
int32_t eax_1 = esi s>> 1
int32_t var_14 = eax_1
int32_t eax_3

if (edi s< eax_1)
    do
        int32_t eax_2 = arg2 * 2
        int32_t esi_1 = *(arg3 + (eax_2 << 2) + 4)
        int32_t ebx_1 = *(arg3 + (eax_2 << 2) + 8)
        eax_3 = data_ccea08
        
        if (eax_3 == 0)
            goto label_5c9b82
        
        int32_t eax_4 = eax_3(ebx_1, esi_1, arg6)
        int32_t eax_5
        
        if (eax_4 s< 0)
            eax_5 = 1
        else if (eax_4 s<= 0)
            eax_5.b = ebx_1 s>= esi_1
        else
            eax_5 = 0
        
        arg3 = var_8
        arg2 = eax_2 + 1 + eax_5
        *(arg3 + (edi << 2)) = *(arg3 + (arg2 << 2))
        edi = arg2
        eax_1 = var_14
    while (arg2 s< eax_1)
    
    ebx = arg4

if (arg2 == eax_1 && (ebx.b & 1) == 0)
    *(arg3 + (edi << 2)) = *(arg3 + (ebx << 2) - 4)
    edi = esi

if (var_c s>= edi)
label_5c9b60:
    int32_t result = *arg5
    *(var_8 + (edi << 2)) = result
    return result

while (true)
    int32_t edx_2 = data_ccea08
    int32_t ebx_3 = (edi - 1) s>> 1
    eax_3 = *arg5
    int32_t* ecx = arg3 + (ebx_3 << 2)
    int32_t ecx_1 = *ecx
    
    if (edx_2 == 0)
        break
    
    int32_t eax_9 = edx_2(ecx_1, eax_3, arg6)
    
    if (eax_9 s< 0)
        goto label_5c9b60
    
    if (eax_9 s<= 0 && ecx_1 s>= eax_3)
        goto label_5c9b60
    
    arg3 = var_8
    *(arg3 + (edi << 2)) = *ecx
    edi = ebx_3
    
    if (var_c s>= ebx_3)
        goto label_5c9b60

label_5c9b82:
sub_63b870(eax_3, &data_801800, "gPile.fnItemCompare", 
    "C:\x\ax2017\Jams\Dominion\code\PileLayout.cpp", 0x16, "ItemCompare")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

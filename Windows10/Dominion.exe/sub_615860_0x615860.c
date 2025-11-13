// 函数: sub_615860
// 地址: 0x615860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = data_b809e0
void* eax_1 = data_b809e4 * 0x1c30 + esi
int32_t edi_1

if (esi u>= eax_1)
label_6158ab:
    edi_1 = arg5
    eax_1, arg3 = sub_615360(eax_1, edi_1, arg3, arg6, arg8, arg7, 0, arg9, arg10, arg11)
    esi = eax_1
else
    while ((*(esi + 0x1c28) & 0xffff0000) == 0)
        esi += 0x1c30
        
        if (esi u>= eax_1)
            goto label_6158ab
    
    if (esi == 0xffffffff)
        goto label_6158ab
    
    while (*(esi + 0x2c) != 4 || *(esi + 0x1b0) != arg3 || *(esi + 0x1c8) != arg10
            || *(esi + 0x1cc) != arg11)
        esi += 0x1c30
        
        if (esi u>= eax_1)
            goto label_6158ab
        
        while ((*(esi + 0x1c28) & 0xffff0000) == 0)
            esi += 0x1c30
            
            if (esi u>= eax_1)
                goto label_6158ab
        
        if (esi == 0xffffffff)
            goto label_6158ab
    
    edi_1 = arg5

if (*(esi + 0x2c) != 4)
    sub_63b870(eax_1, &data_801800, "gfx.type == DOMGFX_TOKEN", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xc4a8, "DomModifyToken")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t temp0 = *(esi + 0x1d8)
*(esi + 0x1d8) += arg2
uint32_t result = arg4
*(esi + 0x1d4) = result

if (temp0 == neg.d(arg2))
    int32_t ecx = *(esi + 0x1bc)
    
    if (ecx == 6)
        sub_5ccef0(esi)
    else if (ecx == 0x3f1)
        sub_5cd3e0(esi)
    else if (ecx != 0x474)
        sub_5cd880(esi, sub_5cc4b0(0, 0))
    
    result, arg3 = sub_5cb5a0(esi)

if (arg9 != 0)
    return result

int32_t var_18_2 = arg3
return sub_5af980(arg3, edi_1)

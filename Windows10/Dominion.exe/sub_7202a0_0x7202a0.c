// 函数: sub_7202a0
// 地址: 0x7202a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = *(arg1 + 0xa8)
void* ebx = arg1 + 0xa8
void* ecx = *(arg1 + 0xac)
void* edi = arg1 + 0x20
void* var_c = edi
uint32_t var_10
char* eax
void* edx_1

if (edx u>= ecx)
    if (*edi != 0)
        void* eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        *ebx = arg1 + 0x28
        
        if (eax_3 != 0)
            ecx = eax_3 + 0x28 + arg1
            *(arg1 + 0xac) = ecx
        else
            *edi = eax_3
            ecx = arg1 + 0x29
            *(arg1 + 0xac) = ecx
            *(arg1 + 0x28) = 0
        
        edx_1 = arg1 + 0x29
        eax.b = *(arg1 + 0x28)
        var_c = edi
        goto label_72031f
    
    var_c = edi
    var_10 = 0
else
    eax.b = *edx
    edx_1 = &edx[1]
label_72031f:
    var_10 = zx.d(eax.b)
    *ebx = edx_1
    edi = var_c
    
    if (edx_1 u< ecx)
        ecx.b = *edx_1
        *ebx = edx_1 + 1
        return (var_10 << 8) + zx.d(ecx.b)

if (*edi == 0)
    return var_10 << 8

void* eax_10 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
*ebx = arg1 + 0x28
char ecx_4

if (eax_10 != 0)
    *(arg1 + 0xac) = eax_10 + 0x28 + arg1
    ecx_4 = *(arg1 + 0x28)
    *ebx = arg1 + 0x29
    return (var_10 << 8) + zx.d(ecx_4)

*var_c = 0
*(arg1 + 0xac) = arg1 + 0x29
*(arg1 + 0x28) = 0
ecx_4 = *(arg1 + 0x28)
*ebx = arg1 + 0x29
return (var_10 << 8) + zx.d(ecx_4)

// 函数: sub_7203e0
// 地址: 0x7203e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *(arg1 + 0xa8)
void* ebx = arg1 + 0xa8
void* ecx = *(arg1 + 0xac)
void* edi = arg1 + 0x20
void* var_8 = edi
uint32_t result

if (eax u< ecx)
label_72044d:
    char result_2 = *eax
    void* var_c = ebx
    *ebx = eax + 1
    ebx = arg1 + 0xa8
    edi = var_8
    uint32_t result_1 = zx.d(result_2)
    result = result_1
    
    if (eax + 1 u< ecx)
        ecx.b = *(eax + 1)
        *ebx = eax + 2
        return (zx.d(ecx.b) << 8) + result_1
else
    if (*edi != 0)
        void* eax_3 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
        eax = arg1 + 0x28
        *ebx = eax
        
        if (eax_3 != 0)
            ecx = eax_3 + 0x28 + arg1
            *(arg1 + 0xac) = ecx
        else
            *edi = eax_3
            ecx = arg1 + 0x29
            *(arg1 + 0xac) = ecx
            *eax = 0
        
        var_8 = edi
        ebx = arg1 + 0xa8
        goto label_72044d
    
    var_8 = edi
    result = 0

if (*edi == 0)
    return result

void* eax_10 = (*(arg1 + 0x10))(*(arg1 + 0x1c), arg1 + 0x28, *(arg1 + 0x24))
*ebx = arg1 + 0x28
char ecx_3

if (eax_10 != 0)
    *(arg1 + 0xac) = eax_10 + 0x28 + arg1
    ecx_3 = *(arg1 + 0x28)
    *ebx = arg1 + 0x29
    return (zx.d(ecx_3) << 8) + result

*var_8 = 0
*(arg1 + 0xac) = arg1 + 0x29
*(arg1 + 0x28) = 0
ecx_3 = *(arg1 + 0x28)
*ebx = arg1 + 0x29
return (zx.d(ecx_3) << 8) + result

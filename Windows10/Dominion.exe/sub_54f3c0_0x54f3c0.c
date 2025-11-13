// 函数: sub_54f3c0
// 地址: 0x54f3c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int16_t esi = (*arg2).w
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* ebx = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    eax_1 = sub_591930()

int32_t edi = esi_1 * 0x64
uint32_t result

if (sub_5754f0(eax_1, *(edi + ebx + 0x1a4c), ebx, 2, 0).b == 0)
label_54f44c:
    result.b = 0
    return result

int32_t ebx_1 = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t ecx_1 = **(arg1 + 8)
result = 0

if (ecx_1 s> 0)
    do
        if (*(*(arg1 + 4) + (result << 2)) == *(edi + ebx_1 + 0x1a4c))
            goto label_54f44c
        
        result += 1
    while (result s< ecx_1)

result.b = 1
return result

// 函数: sub_549f30
// 地址: 0x549f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg1)
void* edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_1 = esi * 0x64
uint32_t result
int32_t ecx_1
result, ecx_1 = sub_5754f0(eax_1, *(eax_1 + edi + 0x1a4c), edi, 4, 0)

if (result.b != 0)
    int32_t var_14_1 = ecx_1
    int32_t var_18_1 = 0
    
    if (sub_568960(result, 0, 0x3ea, 0) s> 4)
        result.b = 1
        return result

result.b = 0
return result

// 函数: sub_555560
// 地址: 0x555560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t edi = (*arg1).w
uint32_t esi = zx.d(edi)
int32_t ebx = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t esi_1 = *(esi * 0x64 + ebx + 0x1a4c)
void* eax_3 = sub_573400()
int32_t var_1c = 0
uint32_t result
int32_t ecx_2
int32_t edx_1
result, ecx_2, edx_1 = sub_576b30(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 0x1e, esi_1, 0, var_1c)

if (result s<= 0)
    var_1c = ecx_2
    var_1c = 5
    
    if (sub_568470(&var_1c, edx_1, edi, var_1c).b != 0)
        result.b = 1
        return result

result.b = 0
return result

// 函数: sub_546e60
// 地址: 0x546e60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t edi = (*arg1).w
void* eax_1
int32_t ecx
int32_t edx
eax_1, ecx, edx = sub_573400()
uint32_t esi = zx.d(edi)
int32_t ebx = *(eax_1 + 4)

if (esi u>= 0x320)
    edx = sub_591930()

uint32_t result

if (*(esi * 0x64 + ebx + 0x1a4c) != 0xd1e)
    int32_t var_14 = ecx
    var_14 = 5
    
    if (sub_568470(&var_14, edx, edi, var_14).b != 0)
        result.b = 1
        return result

result.b = 0
return result

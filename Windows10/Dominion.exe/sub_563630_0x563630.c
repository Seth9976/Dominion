// 函数: sub_563630
// 地址: 0x563630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t ebx = *(arg1 + 0xc80)
int32_t esi = 0
int32_t ecx = *(eax + 0xc)
int32_t* result = *(eax + 4)
int32_t var_8 = ecx
int32_t* result_1 = result

if (ebx s> 0)
    do
        sub_583720(result, ecx, result, *(arg1 + (esi << 2)), 0x476, nullptr, 2, 0, 0, 4)
        ecx = var_8
        esi += 1
        result = result_1
    while (esi s< ebx)

return result

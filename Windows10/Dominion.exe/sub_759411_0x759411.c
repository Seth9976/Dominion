// 函数: sub_759411
// 地址: 0x759411
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx_1 = *(arg1 + 0x3c) + arg1
void* i = ecx_1 + 0x18 + zx.d(*(ecx_1 + 0x14))

for (void* esi_1 = zx.d(*(ecx_1 + 6)) * 0x28 + i; i != esi_1; i += 0x28)
    int32_t ecx_2 = *(i + 0xc)
    
    if (arg2 u>= ecx_2 && arg2 u< *(i + 8) + ecx_2)
        return i

return nullptr

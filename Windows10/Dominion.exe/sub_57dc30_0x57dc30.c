// 函数: sub_57dc30
// 地址: 0x57dc30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t esi = zx.d(arg2)

if (esi u>= 0x320)
    sub_591930()

int32_t esi_1 = *(esi * 0x64 + arg1 + 0x1a4c)
int32_t eax_1 = sub_57da30(arg1, esi_1)
void* ecx_1 = arg1 + 0x1594

for (int32_t i = 7; i s< 0x48; )
    int32_t result = *ecx_1
    
    if (result == esi_1 || *(ecx_1 + 4) == esi_1 || result == eax_1)
        return result
    
    i += 1
    ecx_1 += 0x10

return 0

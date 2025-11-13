// 函数: sub_53d210
// 地址: 0x53d210
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t* ecx_1 = *(sub_573400() + 4) + 0x1594

for (int32_t i = 7; i s< 0x21; )
    if (*ecx_1 != 0 && ecx_1[2] == 0)
        result += 1
    
    i += 1
    ecx_1 = &ecx_1[4]

return result

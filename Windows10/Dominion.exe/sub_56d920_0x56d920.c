// 函数: sub_56d920
// 地址: 0x56d920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t result = 0
int32_t* edx_1 = *(sub_573400() + 4) + 0x1594

for (int32_t i = 7; i s< 0x21; )
    int32_t ecx = *edx_1
    
    if (ecx != 0 && edx_1[2] == 0)
        *(arg1 + (result << 2)) = ecx
        result += 1
        
        if (result == 0x1a)
            break
    
    i += 1
    edx_1 = &edx_1[4]

return result

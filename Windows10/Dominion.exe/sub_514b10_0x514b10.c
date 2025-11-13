// 函数: sub_514b10
// 地址: 0x514b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t esi = data_cca788
int32_t result

if (esi != 0)
    int32_t eax_2 = *(sub_571b30(esi, 0x17) + 0x98) & 4
    
    if (eax_2 == 0 && (*(sub_571b30(esi, eax_2 + 0x17) + 0x98) & 2) == 0)
        result.b = 0
        return result

result.b = 1
return result

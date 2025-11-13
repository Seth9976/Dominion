// 函数: sub_52f660
// 地址: 0x52f660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t result

if (arg1 != 0x923)
    if ((*(sub_571b30(arg1, data_cce9b0) + 0x9c) & 0x20000) != 0)
        result.b = 0
        return result
    
    if ((*(sub_571b30(arg1, data_cce9b0) + 0x9c) & 0x10000) != 0)
        result.b = 0
        return result
    
    if ((*(sub_571b30(arg1, data_cce9b0) + 0x98) & 4) == 0)
        result.b = 0
        return result

result.b = 1
return result

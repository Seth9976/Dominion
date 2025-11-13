// 函数: sub_4f1f40
// 地址: 0x4f1f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t i = 0x3e9
int32_t result = 0
int32_t edi = 0
int32_t var_8 = 0
int128_t var_18 = data_891f90

do
    int32_t ecx = 0
    
    for (int32_t j = *(arg1 + ((i + arg2 * 0x168c) << 2) + 0x16328); j != 0; 
            j = *(j * 0x64 + arg1 + 0x1aa4))
        ecx += 1
    
    i = *(&var_18:4 + (edi << 2))
    edi += 1
    result += ecx
while (i != 0)

return result

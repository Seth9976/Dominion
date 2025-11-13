// 函数: sub_4c0160
// 地址: 0x4c0160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_8 = arg1
char* edx = arg1
char* var_8_1 = arg1
int32_t result

do
    result.b = *edx
    edx = &edx[1]
while (result.b != 0)

if (edx - &edx[1] == 8)
    void* esi_1 = nullptr
    
    while (isalpha(sx.d(*(esi_1 + arg1))) != 0 || isdigit(sx.d(*(esi_1 + var_8_1))) != 0)
        arg1 = var_8_1
        esi_1 += 1
        
        if (esi_1 s>= 8)
            result.b = 1
            return result

result.b = 0
return result

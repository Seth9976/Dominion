// 函数: sub_69c4d0
// 地址: 0x69c4d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edi = arg1
int32_t result = arg2
char c = *edi

while (c != 0)
    char eax_1 = tolower(c)
    char ecx = eax_1
    edi = &edi[1]
    
    if (eax_1 == 0x5c)
        ecx = 0x2f
    
    c = *edi
    result = result u>> 8 ^ *(((zx.d(ecx) ^ zx.d(result.b)) << 2) + &data_7ffd70)

return result

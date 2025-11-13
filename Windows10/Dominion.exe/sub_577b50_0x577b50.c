// 函数: sub_577b50
// 地址: 0x577b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t eax = arg2
int32_t var_c = eax
int32_t var_8 = 0
int32_t* edi = arg3 + 0x28

while (*edi != 0)
    void* ecx = &edi[1]
    int32_t i_1 = 0xe
    int32_t i
    
    do
        if (*ecx == eax)
            *(arg4 + (result << 2)) = *edi
            result += 1
            eax = var_c
        
        ecx += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    edi = &edi[0xf]
    int32_t ebx_3 = var_8 + 1
    var_8 = ebx_3
    
    if (ebx_3 s>= 4)
        break

return result

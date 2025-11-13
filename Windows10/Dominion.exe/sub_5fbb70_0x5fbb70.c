// 函数: sub_5fbb70
// 地址: 0x5fbb70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 == 0x13)
    return sub_4dada0()

uint32_t result

if (arg1 == 2)
label_5fbb91:
    result.b = 1
    return result

void* var_c
void* var_8
uint32_t ebx_1 = sub_4daf40(&var_8, &var_c)
int32_t esi_1 = 0

if (ebx_1 s> 0)
    do
        if (sub_4db700(*(var_8 + (esi_1 << 2)), arg1).b != 0)
            goto label_5fbb91
        
        esi_1 += 1
    while (esi_1 s< ebx_1)

result.b = 0
return result

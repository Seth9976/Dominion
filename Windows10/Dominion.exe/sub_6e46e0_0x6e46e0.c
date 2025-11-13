// 函数: sub_6e46e0
// 地址: 0x6e46e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax_3
int32_t* result

if (strncmp(&(*U"{[p\rnm")[1], *(arg2 + 4), 1) == 0)
    *(arg2 + 4) += 1
    sub_6e1920(arg2)
    result = arg1
    *result = data_cb2f08.d
    result[1] = data_cb2f08:4
    eax_3 = data_cb2f10
else
    result = arg1
    *result = data_cb2f14
    result[1] = data_cb2f18
    eax_3 = data_cb2f1c

result[2] = eax_3

if (eax_3 != 0 && *eax_3 != 0)
    char* eax_6 = sub_63d4e0(&result[2])
    *(eax_6 + 4) += 1

return result

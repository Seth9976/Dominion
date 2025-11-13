// 函数: sub_6a6220
// 地址: 0x6a6220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char** var_c = arg3
int32_t* edi = arg3
char** eax = sub_63d8d0(arg3, arg5)

if (*(arg4 + 8) == 0)
    return eax

int32_t i_1 = 0
void* eax_3
int32_t i

do
    i = i_1 + 1
    int32_t* eax_2 = *(arg4 + 4) + i_1 * 0x3c
    char* var_24_1 = eax_2[3]
    
    if (i s>= *(arg4 + 8))
        return sub_6a5c80(eax_2, arg2, edi, var_24_1, eax_2, arg6)
    
    eax_3 = sub_6a5c80(eax_2, arg2, edi, var_24_1, eax_2, arg6)
    i_1 = i
while (i != 0xffffffff)
return eax_3

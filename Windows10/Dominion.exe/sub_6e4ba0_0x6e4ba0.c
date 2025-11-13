// 函数: sub_6e4ba0
// 地址: 0x6e4ba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx

if (strchr(arg2[1], 0x5b) == 0)
    *arg1 = data_cb2f14
    arg1[1] = data_cb2f18
    void* eax_5 = data_cb2f1c
    arg1[2] = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_63d4e0(&arg1[2])
        *(eax_6 + 4) += 1
    
    return arg1

char* ebx = arg2[1]
char* esi = ebx
int32_t eax

do
    eax.b = *esi
    esi = &esi[1]
while (eax.b != 0)
void* eax_1 = sub_6e17c0(*arg2)
*(eax_1 + 4) = ebx
*(eax_1 + 8) = esi - &esi[1]
*eax_1 = 6
arg1[2] = &data_801800
*arg1 = 3
arg1[1] = eax_1
return arg1

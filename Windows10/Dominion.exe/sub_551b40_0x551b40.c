// 函数: sub_551b40
// 地址: 0x551b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax
int32_t ecx
eax, ecx = sub_56b800()
int32_t var_94 = ecx
int32_t var_98 = 0
uint32_t var_7c = eax
uint32_t result = sub_568960(eax, 0, 0x44e, 0)

if (result s<= 0)
    return result

int32_t var_68_1 = 0
uint32_t* var_6c_1 = &var_7c
int32_t var_64_1 = 1
int128_t var_40 = 0x101.o
int32_t var_60
__builtin_memset(&var_60, 0, 0x20)
int128_t var_30_1 = var_60.o
int64_t var_50
int128_t var_20_1 = var_50.o
void* eax_1

if (result != 1)
    int32_t* eax_2 = sub_573400()
    int32_t var_78 = *eax_2
    int32_t var_74_1 = eax_2[4]
    int32_t ecx_3 = eax_2[3]
    int32_t* eax_3 = eax_2[1]
    int32_t edx_1
    
    if (ecx_3 != eax_3[0x673])
        edx_1 = ecx_3
    else
        edx_1 = eax_3[0x674]
    
    int32_t var_94_1 = 0
    eax_1 = sub_623940(eax_3, &var_78, eax_3, ecx_3, edx_1, ecx_3, result - 1, &var_40, 0x2a)
else
    eax_1 = nullptr

return sub_565d30(eax_1, 0x44e, var_7c, 0x44e, eax_1)

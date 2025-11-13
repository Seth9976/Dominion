// 函数: sub_5107e0
// 地址: 0x5107e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
var_8 = sub_50fc20(sub_56b780(), 0x461)
int32_t result = sub_573400()
int32_t* ecx_1 = *(result + 4)
int32_t edx = ecx_1[0x541]

if (edx == 3 || edx == 5 || edx == 4 || edx == 6 || ecx_1[0x540].b != 0)
    return result

int32_t edx_1 = *(result + 0xc)
int32_t eax_2 = edx_1

if (edx_1 == ecx_1[0x673])
    eax_2 = ecx_1[0x674]

return sub_59f9b0(eax_2, edx_1, ecx_1, eax_2, 0x43, 0, &var_8, 1, 0x461, 0, 0, 0)

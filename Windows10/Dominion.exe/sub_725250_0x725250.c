// 函数: sub_725250
// 地址: 0x725250
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_18 = ebx
int32_t var_24 = ebx
int32_t result
int32_t ecx
int32_t edx
int32_t ebx_1
result, ebx_1, ecx, edx = __cpuid(1, 0)
*(arg1 + 0x480c) = sub_721940
*(arg1 + 0x4810) = sub_724f10
*(arg1 + 0x4814) = sub_724c50
int32_t result_1 = result
int32_t var_10 = ebx_1
int32_t var_c = ecx

if ((edx & 0x4000000) != 0)
    *(arg1 + 0x480c) = sub_721e90
    *(arg1 + 0x4810) = sub_725020
    *(arg1 + 0x4814) = sub_724cf0

return result

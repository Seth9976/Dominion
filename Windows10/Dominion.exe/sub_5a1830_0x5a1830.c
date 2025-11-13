// 函数: sub_5a1830
// 地址: 0x5a1830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t* result = sub_5a1410(ecx, 0x28)
result[1] = arg2
*result = 0
result[2] = arg3
result[3] = 0xff7fffff
result[4] = 0xff7fffff
result[5] = 0xff7fffff
result[6] = 0xff7fffff
float xmm5_1 = *arg3 - *arg2
float xmm4_1 = arg3[1] f- arg2[1]
float xmm3_4 = (xmm4_1 * 0.5f + arg2[1]) * xmm4_1 + (xmm5_1 * 0.5f + *arg2) * xmm5_1
int32_t eax
eax.b = xmm5_1 * xmm5_1 > xmm4_1 * xmm4_1

if (eax == 0)
    result[9] = xmm3_4 / xmm4_1
    result[7] = xmm5_1 / xmm4_1
    result[8] = 0x3f800000
    return result

result[9] = xmm3_4 / xmm5_1
result[7] = 0x3f800000
result[8] = xmm4_1 / xmm5_1
return result

// 函数: sub_597600
// 地址: 0x597600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg5(arg2, arg3) != 0)
    int32_t ecx = *(arg2 + 0x18)
    int128_t xmm1_1 = *arg2
    int64_t xmm2_1 = arg2[1].q
    *arg2 = *arg3
    arg2[1].q = arg3[1].q
    *(arg2 + 0x18) = *(arg3 + 0x18)
    *arg3 = xmm1_1
    arg3[1].q = xmm2_1
    *(arg3 + 0x18) = ecx

int32_t result = arg5(arg4, arg2)

if (result.b != 0)
    int32_t ecx_1 = *(arg4 + 0x18)
    int128_t xmm1_2 = *arg4
    int64_t xmm2_2 = arg4[1].q
    *arg4 = *arg2
    arg4[1].q = arg2[1].q
    *(arg4 + 0x18) = *(arg2 + 0x18)
    *arg2 = xmm1_2
    arg2[1].q = xmm2_2
    *(arg2 + 0x18) = ecx_1
    result = arg5(arg2, arg3)
    
    if (result.b != 0)
        int32_t ecx_2 = *(arg2 + 0x18)
        int128_t xmm1_3 = *arg2
        int64_t xmm2_3 = arg2[1].q
        *arg2 = *arg3
        arg2[1].q = arg3[1].q
        result = *(arg3 + 0x18)
        *(arg2 + 0x18) = result
        *arg3 = xmm1_3
        arg3[1].q = xmm2_3
        *(arg3 + 0x18) = ecx_2

return result

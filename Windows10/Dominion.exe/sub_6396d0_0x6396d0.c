// 函数: sub_6396d0
// 地址: 0x6396d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int128_t* var_8 = arg3

if (arg5(arg2, arg3) != 0)
    int128_t xmm1_1 = *arg2
    int128_t xmm2_1 = arg2[1]
    int128_t xmm3_1 = arg2[2]
    int64_t xmm4_1 = arg2[3].q
    *arg2 = *arg3
    arg2[1] = arg3[1]
    arg2[2] = arg3[2]
    arg2[3].q = arg3[3].q
    *arg3 = xmm1_1
    arg3[1] = xmm2_1
    arg3[2] = xmm3_1
    arg3[3].q = xmm4_1

char result = arg5(arg4, arg2)

if (result != 0)
    int128_t xmm1_2 = *arg4
    int128_t xmm2_2 = arg4[1]
    int128_t xmm3_2 = arg4[2]
    int64_t xmm4_2 = arg4[3].q
    *arg4 = *arg2
    arg4[1] = arg2[1]
    arg4[2] = arg2[2]
    arg4[3].q = arg2[3].q
    *arg2 = xmm1_2
    arg2[1] = xmm2_2
    arg2[2] = xmm3_2
    arg2[3].q = xmm4_2
    result = arg5(arg2, arg3)
    
    if (result != 0)
        int128_t xmm1_3 = *arg2
        int128_t xmm2_3 = arg2[1]
        int128_t xmm3_3 = arg2[2]
        int64_t xmm4_3 = arg2[3].q
        *arg2 = *arg3
        arg2[1] = arg3[1]
        arg2[2] = arg3[2]
        arg2[3].q = arg3[3].q
        *arg3 = xmm1_3
        arg3[1] = xmm2_3
        arg3[2] = xmm3_3
        arg3[3].q = xmm4_3

return result

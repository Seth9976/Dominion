// 函数: sub_6cce80
// 地址: 0x6cce80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int128_t* result = __security_cookie ^ &__saved_ebp
int128_t* result_1 = result
int32_t* ecx = data_147d1b0

if (ecx != 0)
    (*(*ecx + 0x24))(1)
    data_147d2b4 = data_800248
    sub_6cc6d0()
    float xmm7_1[0x4] = data_147d2b4
    float xmm3_1 = data_147d234:0xc
    float xmm6_2 = xmm7_1[0] ^ 0x80000000
    int128_t xmm0_4 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0xaa) ^ 0x80000000
    int32_t xmm5_2 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0x55)
    int128_t var_30 = xmm0_4
    float xmm5_3 = xmm5_2 ^ 0x80000000
    float xmm7_2 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0xff)
    float xmm1_5 = data_147d234:8
    float xmm2_2 =
        xmm7_2 * xmm3_1 - xmm6_2 f* data_147d234.d - xmm5_3 f* data_147d234:4 - var_30.d * xmm1_5
    float xmm4_4 =
        xmm6_2 * xmm3_1 + xmm7_2 f* data_147d234.d + xmm5_3 * xmm1_5 - var_30.d f* data_147d234:4
    float xmm5_4 = xmm5_3 f* data_147d234.d
    float xmm6_3 = xmm6_2 f* data_147d234:4
    float xmm2_6 =
        xmm7_2 f* data_147d234:4 + xmm5_3 * xmm3_1 + var_30.d f* data_147d234.d - xmm6_2 * xmm1_5
    var_30 = var_30.d * xmm3_1
    int128_t xmm3_5 = var_30.d + xmm7_2 * xmm1_5 + xmm6_3 - xmm5_4
    var_30 = xmm3_5
    float xmm2_9 = xmm4_4 * xmm2_6 - xmm2_2 f* xmm3_5
    float xmm4_6 = xmm2_6 * xmm2_6
    float xmm2_10 = xmm2_9 + xmm2_9
    float xmm5_6 = xmm3_5.d f* xmm3_5
    float xmm3_7 = xmm2_2 * xmm2_2
    float xmm2_12 = xmm4_4 * xmm4_4
    float xmm0_34 = xmm4_6 - xmm5_6 + xmm3_7 - xmm2_12
    float xmm0_36 = xmm4_4 * xmm2_2
    float xmm1_8 = xmm2_6 f* var_30.d
    float xmm7_6 = xmm0_36 + xmm1_8
    float xmm1_9 = xmm1_8 - xmm0_36
    float xmm7_7 = xmm7_6 + xmm7_6
    int64_t var_3c = 0
    float xmm3_8 = var_3c:4.d
    var_30:0xc.d = xmm5_6 - xmm4_6 - xmm2_12 + xmm3_7
    float var_64_1 = xmm7_7
    var_30:8.d = xmm1_9 + xmm1_9
    float xmm1_11 = var_3c.d
    float xmm6_9 = xmm2_6 * xmm2_2 + xmm4_4 f* var_30.d
    var_30:4.d = xmm6_9 + xmm6_9
    float xmm4_10 = xmm0_34 * xmm3_8 + xmm2_10 * xmm1_11 + xmm7_7 * 1f
    float xmm7_11 = xmm2_10 - xmm1_11 * xmm4_10
    float xmm6_12 = xmm0_34 - xmm3_8 * xmm4_10
    float xmm5_11 = xmm7_7 - 1f * xmm4_10
    float xmm1_17 =
        1f / sub_4ac580(&__saved_ebp, xmm6_12 * xmm6_12 + xmm7_11 * xmm7_11 + xmm5_11 * xmm5_11)
    var_3c.d = xmm1_17 * xmm7_11
    var_3c:4.d = xmm1_17 * xmm6_12
    float var_34_1 = xmm1_17 * xmm5_11
    void var_80
    int128_t var_70
    result = sub_4ac840(&var_80, &data_7fef8c, &var_3c, &var_80, &var_70:4, &var_30:4)
    int128_t xmm0_51 = *result
    var_70 = xmm0_51
    var_70.d = xmm0_51.d ^ 0x80000000
    int32_t var_6c_2 = xmm2_10 ^ 0x80000000
    int32_t var_68_2 = xmm0_34 ^ 0x80000000
    data_147d2b4 = var_70

CookieCheckFunction(result)
return result

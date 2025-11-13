// 函数: sub_5a93d0
// 地址: 0x5a93d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
float xmm3_1 = *arg2 - *arg3
float xmm2_2 = xmm3_1 * 0.5f + *arg3
float xmm2_4 = arg2[1] f- arg3[1]
float xmm4_2 = xmm2_4 * 0.5f + arg3[1]
int32_t __saved_ebp
float xmm0_3 = sub_4ac580(&__saved_ebp, xmm2_4 * xmm2_4 + xmm3_1 * xmm3_1)
float xmm1_2 = 1f / xmm0_3
int32_t* esi = arg7
int32_t var_38 = 0x3f800000

if (esi == 0)
    esi = data_171efc4

int32_t var_64 = 0
int32_t var_60 = 0
int32_t var_74 = 0
int32_t var_68 = 0
int32_t var_5c = 0x3f800000
float xmm2_5[0x4] = data_8002c0
float xmm5_1 = xmm3_1 * xmm1_2
float xmm4_4 = xmm2_4 * xmm1_2
int128_t xmm1_3 = data_8002b0
int128_t var_58 = xmm1_3
var_58.d = xmm0_3 f* xmm1_3
float xmm0_6 = xmm0_3 f* var_58:0xc.d
float xmm3_3 = xmm0_3 * _mm_shuffle_ps(xmm2_5, xmm2_5, 0xaa)
var_58:0xc.d = xmm0_6
float var_70 = xmm4_4
int32_t xmm4_5 = xmm4_4 ^ (data_8937c0.o).d
var_58:4.d = var_58:4.d * arg5
float xmm0_10 = xmm2_5[0] * arg5
xmm2_5[2] = xmm3_3
float var_7c = xmm5_1
xmm2_5[0] = xmm0_10
int32_t var_78 = xmm4_5
float var_6c = xmm5_1
xmm2_5[3] = xmm2_5[3] * arg5
sub_4ac390(&var_58, &var_7c, &var_58, &var_58)
int32_t eax_2 = *arg4
var_58:8.d = xmm2_2 f+ var_58:8.d
xmm2_5[1] = xmm4_2 + xmm2_5[1]
int128_t var_34 = data_893580
int32_t var_24 = eax_2
int32_t var_20_1 = 0
return sub_682ad0(&var_34, &var_58, esi, &var_34, &var_24, arg6)

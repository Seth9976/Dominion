// 函数: sub_645a20
// 地址: 0x645a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
bool cond:0 = data_cf65f0.b == 0
data_cf65fc = *arg1
float xmm4 = data_cf65fc:8
float xmm3 = data_cf65fc:0xc
data_cf660c = arg1[1].q
int128_t var_f0
int128_t var_a0
void var_60
int128_t* ecx_2

if (cond:0)
    bool cond:1_1 = data_147b074 != 1
    float xmm6_7 = (data_cf65fc.d + xmm4) * 0.5f
    float xmm2_3 = 1f / (xmm4 f- data_cf65fc.d)
    float xmm4_4 = data_cf660c:4
    float xmm1_1 = 1f / (xmm3 f- data_cf65fc:4)
    float xmm3_3 = data_cf660c.d
    float xmm5_3 = (data_cf65fc:4 f+ xmm3) * 0.5f
    float xmm7_5 = 1f / (xmm4_4 - xmm3_3)
    __builtin_memset(&var_f0, 0, 0x40)
    var_f0:8.d = (xmm6_7 + xmm6_7) * xmm2_3
    int128_t var_e0_1
    var_e0_1:8.d = (xmm5_3 + xmm5_3) * xmm1_1
    var_f0.d = xmm2_3 + xmm2_3
    var_e0_1:4.d = xmm1_1 + xmm1_1
    float xmm0_27
    float xmm3_5
    
    if (cond:1_1)
        xmm0_27 = xmm4_4
        xmm3_5 = xmm3_3 * xmm4_4 * -1f
    else
        xmm0_27 = xmm3_3 + xmm4_4
        xmm3_5 = xmm3_3 * xmm4_4 * -2f
    
    ecx_2 = &var_f0
    int128_t var_c0_1
    var_c0_1:8.d = 0xbf800000
    int128_t var_d0_1
    var_d0_1:0xc.d = xmm3_5 * xmm7_5
    var_d0_1:8.d = (xmm0_27 ^ (data_8937c0.o).d) * xmm7_5
else
    float xmm0_2 = 1f f/ data_cf65f0:4
    int32_t var_18_1 = 0x3f800000
    float xmm2 = data_cf660c.d
    float xmm7_2 = (data_cf65fc.d + xmm4) * 0.5f
    float xmm5 = 1f / (xmm4 f- data_cf65fc.d)
    float xmm6_2 = (data_cf65fc:4 f+ xmm3) * 0.5f
    float xmm1 = 1f / (data_cf660c:4 f- xmm2)
    float xmm4_2 = 1f / (xmm3 f- data_cf65fc:4)
    __builtin_memset(&var_f0, 0, 0x40)
    int128_t var_c0
    var_c0:0xc.d = 0x3f800000
    int128_t var_d0
    var_d0:0xc.d = (xmm2 ^ (data_8937c0.o).d) * xmm1
    var_f0.d = xmm5 + xmm5
    int128_t var_e0
    var_e0:4.d = xmm4_2 + xmm4_2
    var_d0:8.d = xmm1 * -2f
    var_f0:0xc.d = xmm7_2 * -2f * xmm5
    var_e0:0xc.d = xmm6_2 * -2f * xmm4_2
    float var_20 = xmm0_2
    float var_1c_1 = xmm0_2
    int32_t edx
    int32_t* eax_3 = sub_6c3c80(&var_60, edx, &var_20, &var_60)
    var_a0 = *eax_3
    int128_t var_90_1 = *(eax_3 + 0x10)
    int128_t var_80_1 = *(eax_3 + 0x20)
    int128_t var_70_1 = *(eax_3 + 0x30)
    float* eax_5 = sub_642ae0(&var_60, &var_a0, &var_f0, &var_60)
    ecx_2 = &var_a0
    var_a0 = *eax_5
    int128_t var_90_2 = *(eax_5 + 0x10)
    int128_t var_80_2 = *(eax_5 + 0x20)
    int128_t var_70_2 = *(eax_5 + 0x30)

float* result = sub_642ae0(&var_60, 0xcb2030, ecx_2, &var_60)
bool cond:2 = data_147b074 != 1
var_f0 = *result
int128_t var_e0_2 = *(result + 0x10)
int128_t var_d0_2 = *(result + 0x20)
int128_t var_c0_2 = *(result + 0x30)

if (not(cond:2) && data_cf69dc != 0)
    __builtin_memcpy(&var_a0, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00", 
        0x20)
    int128_t var_90_3
    var_90_3:4.d = 0xbf800000
    int128_t var_80_3
    __builtin_memcpy(&var_80_3, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x20)
    result = sub_642ae0(&var_60, &var_f0, &var_a0, &var_60)
    var_f0 = *result
    int128_t var_e0_3 = *(result + 0x10)
    int128_t var_d0_3 = *(result + 0x20)
    int128_t var_c0_3 = *(result + 0x30)

sub_6459b0(&var_f0)
CookieCheckFunction(result)
return result

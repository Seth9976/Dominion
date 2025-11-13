// 函数: sub_662030
// 地址: 0x662030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
float xmm2_1 = arg7 + arg2[1]
float xmm3_1 = arg6 + *arg2
float var_6c = arg7
void* edi = data_147b06c
int32_t* esi = arg3
float var_70 = arg6
int32_t* edi_1 = *(edi + 0x2dc)
float var_a0[0x4] = var_70.o
int128_t var_110
__builtin_memcpy(&var_110, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
"00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x20)
void var_34
int32_t* result = sub_6842b0(&var_70, &var_110, &var_a0, &data_19e2730, &var_70, &var_34)

if (result.b != 0)
    data_147b06c
    void var_160
    int128_t* eax_4 = sub_642e30(&var_160)
    float xmm5_1 = var_6c
    float xmm6_1[0x4] = *eax_4
    float xmm7_1[0x4] = eax_4[1]
    int128_t var_b0_1 = eax_4[3]
    float xmm2_2[0x4] = eax_4[2]
    float xmm1_2 = xmm6_1[0] * var_70
    float xmm0_4 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0x55)
    float xmm0_5 = xmm0_4 * xmm5_1
    float xmm4_2 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
    float xmm0_7 = _mm_shuffle_ps(xmm6_1, xmm6_1, 0xff)
    float xmm1_4 = xmm1_2 + xmm0_5 + xmm0_7
    float xmm0_9 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0x55)
    float xmm3_3 = xmm0_9 * xmm5_1
    float xmm0_11 = xmm7_1[0] * var_70
    float xmm0_13[0x4] = _mm_shuffle_ps(xmm7_1, xmm7_1, 0xff)
    float var_50[0x4] = xmm0_13
    float xmm1_7 = xmm0_11 + xmm3_3 f+ xmm0_13
    float xmm1_9 = xmm4_2 * xmm5_1
    float xmm5_3 = xmm2_2[0] * var_70
    float xmm0_17[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
    float xmm2_4 = xmm5_3 + xmm1_9 f+ xmm0_17
    var_a0 = xmm0_17
    float var_d0 = xmm1_4
    float var_cc_1 = xmm1_7
    float var_c8_1 = xmm2_4
    float xmm0_21 = xmm3_1 f* xmm6_1
    float xmm0_23 = xmm3_1 f* xmm7_1
    float xmm0_25 = xmm3_1 f* eax_4[2].d
    float var_c4_1 = xmm0_21 + xmm0_5 + xmm0_7
    float var_c0_1 = xmm0_23 + xmm3_3 + var_50[0]
    float xmm6_3 = xmm2_1 * xmm0_9
    float xmm6_5 = xmm2_1 * xmm4_2
    float var_bc_1 = xmm0_25 + xmm1_9 + var_a0[0]
    float xmm0_36 = xmm2_1 * xmm0_4
    float var_b8_1 = xmm0_36 + xmm1_2 + xmm0_7
    float var_b4_1 = xmm6_3 + xmm0_11 + var_50[0]
    int32_t xmm5_4 = var_a0.d
    var_b0_1.d = xmm6_5 + xmm5_3 f+ xmm5_4
    
    if (xmm3_1 < var_70 || xmm2_1 < var_6c)
        sub_63b870(eax_4, &data_801800, "RectIsNormalized(r)", "C:\x\ax2017\Engine\Rect.cpp", 
            0x12d, "RectBottomRight")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_50[1] = xmm1_4
    var_50[2] = xmm1_7
    var_50[3] = xmm2_4
    var_6c.q = 0
    int32_t var_64_1 = 0x3f800000
    var_b0_1:4.d = xmm0_21 + xmm0_36 + xmm0_7
    var_b0_1:8.d = xmm0_23 + xmm6_3 + var_50[0]
    var_b0_1:0xc.d = xmm0_25 + xmm6_5 f+ xmm5_4
    
    if (esi == 0)
        void* eax_6 = *(sub_5af880(edi_1) + 8)
        esi = sub_6dd280(eax_6, *(eax_6 + 8) + 8, &data_8ce7bc, 0x53)
        
        if (esi == 0)
            esi = data_1724a58
    
    void* eax_9 = *(sub_5af880(edi_1) + 8)
    int32_t eax_10 = sub_6dd280(eax_9, *(eax_9 + 8) + 8, &data_8ce7bc, 0x54)
    result =
        sub_646580(&var_50[1], &var_34, &var_d0, arg5, 0, &var_50[1], &var_6c, esi, eax_10, edi_1)

CookieCheckFunction(result)
return result

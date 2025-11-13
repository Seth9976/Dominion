// 函数: sub_5a9bc0
// 地址: 0x5a9bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
__security_cookie
int32_t edi = arg2[1]
int32_t esi_2 = (*arg2 u>> 0x1b | edi << 5) ^ edi u>> 0xd
uint32_t edx_1 = edi u>> 0x1b
int32_t var_1dc = 0
float xmm0_2 = ((((esi_2 << ((neg.d(edx_1)).b & 0x1f) | esi_2 u>> edx_1.b) & 0x7fffff) | 0x3f800000)
    - 1f) * 6.28318548f
float xmm0_3 = sub_4ae0f0(ebp_1, xmm0_2)
float xmm0_5 = sub_4ae0d0(ebp_1, xmm0_2)
int32_t eax_8
int32_t edx_2
eax_8, edx_2 = __allmul(*arg2, edi, 0x4c957f2d, 0x5851f42d)
int32_t edi_3 = eax_8 + arg2[2]
int32_t esi_5 = adc.d(edx_2, arg2[3], eax_8 + arg2[2] u< eax_8)
int32_t eax_10
int32_t edx_3
eax_10, edx_3 = __allmul(edi_3, esi_5, 0x4c957f2d, 0x5851f42d)
var_1dc = 0
bool c_1 = eax_10 + arg2[2] u< eax_10
*arg2 = eax_10 + arg2[2]
arg2[1] = adc.d(edx_3, arg2[3], c_1)
int32_t edi_5 = (edi_3 u>> 0x1b | esi_5 << 5) ^ esi_5 u>> 0xd
uint32_t esi_6 = esi_5 u>> 0x1b
uint32_t i = ((edi_5 << ((neg.d(esi_6)).b & 0x1f) | edi_5 u>> esi_6.b) & 0x7fffff) | 0x3f800000
float xmm1_1 = i - 1f
void* edi_8 = &arg2[4]
int128_t var_88 = data_893940
uint32_t i_1 = 0

if (*(edi_8 + 0xeffbc) s> 0)
    int32_t* esi_7 = edi_8 + 0x8ffd4
    int32_t* var_1ac_3 = esi_7
    
    do
        int32_t ecx_13 = 0
        int32_t edx_5 = *esi_7 * 3
        int32_t var_2c[0x2]
        
        if (not(*(edi_8 + (edx_5 << 2) + 8) f<= 0))
            ecx_13 = 1
            float xmm1_6 = *(edi_8 + (edx_5 << 2) + 4) * 1024f
            var_2c[0] = *(edi_8 + (edx_5 << 2)) * 1024f
            var_2c[1] = xmm1_6
        
        int32_t eax_19 = esi_7[1] * 3
        var_28
        
        if (not(*(edi_8 + (eax_19 << 2) + 8) <= 0f))
            float xmm1_8 = *(edi_8 + (eax_19 << 2) + 4) * 1024f
            (&var_2c)[ecx_13][0] = *(edi_8 + (eax_19 << 2)) * 1024f
            *(&var_28 + (ecx_13 << 3)) = xmm1_8
            ecx_13 += 1
        
        int32_t eax_21 = esi_7[2] * 3
        int32_t xmm7_1 = *(edi_8 + (eax_21 << 2) + 8)
        
        if (not(xmm7_1 f<= 0))
            float xmm1_10 = *(edi_8 + (eax_21 << 2) + 4) * 1024f
            (&var_2c)[ecx_13][0] = *(edi_8 + (eax_21 << 2)) * 1024f
            *(&var_28 + (ecx_13 << 3)) = xmm1_10
            ecx_13 += 1
        
        if (ecx_13 != 3)
            int32_t var_1f8 = 0xff877538
            int32_t var_1f4_1 = 0xff877538
            int32_t var_1f0_1 = 0xff877538
            sub_5a99d0(&arg2[0x857f6], &var_88, edi_8, &arg2[0x857f6], esi_7, &var_1f8)
        else
            int32_t eax_22 = 0
            
            while (true)
                float xmm1_12 = (&var_2c)[eax_22][0] f* 0.0009765625f
                float xmm0_16 = *(&var_28 + (eax_22 << 3)) * 0.0009765625f
                
                if (0.0250000004f > xmm1_12)
                    break
                
                if (xmm1_12 > 1.97500002f)
                    break
                
                if (0.0250000004f > xmm0_16)
                    break
                
                if (xmm0_16 > 0.975000024f)
                    break
                
                eax_22 += 1
                
                if (eax_22 s>= 3)
                    int32_t eax_24 = *(arg1 + 0x10)
                    int32_t var_208_5
                    char const* const var_204_5
                    char* ecx_24
                    
                    if (eax_24 == 0)
                    label_5aa1a0:
                        var_204_5 = "GetTerrainColorRamp"
                        ecx_24 = "style != TERRAINSTYLE_NONE"
                        var_208_5 = 0xf1f
                    label_5aa1b9:
                        sub_63b870(eax_24, &data_801800, ecx_24, 
                            "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", var_208_5, var_204_5)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    if ((&data_7c158c)[eax_24 * 0x23] != eax_24)
                    label_5aa18f:
                        var_204_5 = "GetTerrainColorRamp"
                        var_208_5 = 0xf22
                        ecx_24 = "def.style == style"
                        goto label_5aa1b9
                    
                    void var_128
                    __builtin_memcpy(&var_128, eax_24 * 0x8c + 0x7c1598, 0x80)
                    eax_24 = *(arg1 + 0x14)
                    
                    if (eax_24 == 0)
                        goto label_5aa1a0
                    
                    if ((&data_7c158c)[eax_24 * 0x23] != eax_24)
                        goto label_5aa18f
                    
                    float xmm1_14 = var_2c[0] - (xmm1_1 * xmm0_5 * 200f + 512f)
                    int32_t var_1e4_1 = xmm7_1
                    void var_1a8
                    __builtin_memcpy(&var_1a8, eax_24 * 0x8c + 0x7c1598, 0x80)
                    edi_8 = &arg2[4]
                    int32_t j = 0
                    int32_t var_1ec = *(edi_8 + (edx_5 << 2) + 8)
                    int32_t var_1e8_1 = *(edi_8 + (eax_19 << 2) + 8)
                    float xmm1_18 = (xmm1_14 * xmm0_5
                        + (var_2c[1] - (xmm1_1 * xmm0_3 * 200f + 512f)) * xmm0_3 - -50f) / 100f
                    int32_t var_38
                    
                    do
                        float xmm0_22 = *(&var_1ec + j)
                        int32_t eax_27 = sub_5a9940(&var_128, xmm0_22)
                        float xmm1_20 = *(&var_1ec + j)
                        var_1dc = eax_27
                        float xmm1_21 = (zx.o(0)).d
                        int32_t var_1d4 = sub_5a9940(&var_1a8, xmm1_20)
                        
                        if (not(0f > xmm1_18))
                            xmm1_21 = _mm_min_ss(0x3f800000, xmm1_18)
                        
                        *(&var_38 + j) = sub_5af6f0(&var_1dc, &var_1d4, xmm0_22 * xmm1_21)
                        j += 4
                    while (j s< 0xc)
                    
                    esi_7 = var_1ac_3
                    sub_5a99d0(&arg2[0x857f6], &var_88, edi_8, &arg2[0x857f6], esi_7, &var_38)
                    int32_t var_78 = var_38
                    int128_t var_a8
                    __builtin_memcpy(&var_a8, 
                        "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x"
                    "3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f", 
                        0x20)
                    int32_t var_34
                    int32_t var_70_1 = var_34
                    int32_t var_30
                    int32_t var_68_1 = var_30
                    void* eax_35 = data_147abe4
                    float xmm2_6 = *(eax_35 + 0x20)
                    float xmm3_1 = *(eax_35 + 0x24)
                    char* var_204_3 = nullptr
                    int32_t* var_208_3 = data_171efc4
                    float var_1c
                    float xmm1_23 = var_1c + xmm2_6
                    int32_t var_74_1 = 0
                    int32_t var_6c_1 = 0
                    float var_58 = var_2c[0] + xmm2_6
                    int32_t var_64_1 = 0
                    float var_48_1 = xmm1_23
                    float var_40_1 = xmm1_23
                    float var_54_1 = var_2c[1] + xmm3_1
                    float var_24
                    float var_50_1 = var_24 + xmm2_6
                    float var_20
                    float var_4c_1 = var_20 + xmm3_1
                    float var_18
                    float xmm0_33 = var_18 + xmm3_1
                    float var_44_1 = xmm0_33
                    float var_3c_1 = xmm0_33
                    sub_6867a0(&var_78, &var_a8, &var_58, &var_78, 1, var_208_3, var_204_3)
                    break
        
        esi_7 = &esi_7[3]
        i = i_1 + 1
        var_1ac_3 = esi_7
        i_1 = i
    while (i s< *(edi_8 + 0xeffbc))

CookieCheckFunction(i)
return i

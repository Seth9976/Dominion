// 函数: sub_747970
// 地址: 0x747970
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
float* eax_1 = __security_cookie ^ &__saved_ebp
float* var_14 = eax_1
int32_t* ecx = data_1512450
char const* const var_15c
int32_t var_158
char const* const var_154_1
char* ecx_1

if (ecx[1] == 0x1e)
    void* eax_2 = sub_5af880(ecx)
    float xmm7_1 = data_1593c6c
    uint32_t esi_1 = 0
    float xmm2_1[0x4] = *(eax_2 + 0xc)
    int128_t var_f0
    __builtin_memcpy(&var_f0, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x40)
    float xmm1_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
    float xmm3_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
    int128_t xmm1_3 = xmm1_2 f- xmm2_1
    float xmm4_2[0x4] = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
    int128_t xmm3_3 = xmm3_2 f- xmm4_2
    float var_90_1[0x4] = xmm2_1
    float var_48[0x4] = xmm2_1
    int128_t var_80_1 = xmm1_3
    float var_b0_1[0x4] = xmm4_2
    int128_t var_a0_1 = xmm3_3
    float var_30_1 = 16f
    int32_t var_2c_1 = 0x41800000
    
    while (true)
        int128_t var_38
        int32_t* edx_1 = &var_38:8
        float xmm0_5 = (xmm3_3.d f* *(&var_f0:4 + (esi_1 << 3)) f+ xmm4_2 f- data_1593c74) * xmm7_1
        float var_50 = (xmm1_3 f* *(&var_f0 + (esi_1 << 3)) f+ xmm2_1 f- data_1593c70) * xmm7_1
        float var_4c_1 = xmm0_5
        float var_70
        eax_1 = sub_5af7f0(&var_70, edx_1, &var_50, &var_70)
        float xmm0_6[0x4] = *eax_1
        float xmm1_9 = _mm_shuffle_ps(xmm0_6, xmm0_6, 0xaa)
        float var_28[0x4] = xmm0_6
        
        if (not(xmm1_9 f< xmm0_6))
            float xmm3_4 = var_28[3]
            float xmm2_2 = var_28[1]
            
            if (not(xmm3_4 < xmm2_2))
                if (not(arg1 f< xmm0_6) && not(arg2 f< xmm2_2) && not(xmm1_9 f< arg1)
                        && xmm3_4 f>= arg2)
                    CookieCheckFunction(esi_1)
                    return esi_1
                
                esi_1 += 1
                
                if (esi_1 s< 8)
                    xmm2_1 = var_90_1
                    xmm1_3 = var_80_1
                    xmm3_3 = var_a0_1
                    xmm4_2 = var_b0_1
                    continue
                
                int128_t var_120
                __builtin_memcpy(&var_120, 
                    "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                "00\x00\x00\x06\x00\x00\x00", 
                    0x30)
                uint32_t eax_6 = sub_744c10(&var_28, edx_1, &var_48, &var_28)
                void* edi_1 = &var_120:4
                float var_2c_2 = 2.80259693e-45f
                int32_t esi_2 = 0
                var_28 = *eax_6
                var_50 = 16f
                int32_t var_4c_2 = 0x41800000
                int32_t var_60 = 0x41800000
                int32_t var_5c_1 = 0x41800000
                
                while (true)
                    int32_t eax_7 = *(edi_1 - 4)
                    float xmm2_3 = data_1593c6c
                    float xmm0_13 = (var_a0_1.d f* *(&var_f0:4 + (eax_7 << 3))
                        + var_b0_1[0] f- data_1593c74) * xmm2_3
                    float var_58 = (var_80_1.d f* *(&var_f0 + (eax_7 << 3))
                        + var_90_1[0] f- data_1593c70) * xmm2_3
                    float var_54_1 = xmm0_13
                    float var_130[0x4]
                    float xmm6_2[0x4] = *sub_5af7f0(&var_130, &var_50, &var_58, &var_130)
                    var_48 = xmm6_2
                    float xmm0_18 = (var_a0_1.d f* *(&var_f0:4 + (var_2c_2 << 3))
                        + var_b0_1[0] f- data_1593c74) f* data_1593c6c
                    float var_68 = (var_80_1.d f* *(&var_f0 + (var_2c_2 << 3))
                        + var_90_1[0] f- data_1593c70) f* data_1593c6c
                    float var_64_1 = xmm0_18
                    float var_140[0x4]
                    eax_1 = sub_5af7f0(&var_140, &var_60, &var_68, &var_140)
                    float xmm2_5 = _mm_shuffle_ps(xmm6_2, xmm6_2, 0xaa)
                    var_38 = *eax_1
                    
                    if (not(xmm2_5 f< xmm6_2))
                        float xmm1_20 = var_48[3]
                        float xmm0_20 = var_48[1]
                        
                        if (not(xmm1_20 < xmm0_20))
                            float xmm3_5[0x4] = var_38.d
                            
                            if (not(xmm3_5 f> xmm6_2))
                                xmm6_2 = xmm3_5
                            
                            if (not(xmm2_5 > var_30_1))
                                xmm2_5 = var_30_1
                            
                            float xmm3_7 = var_38:4.d
                            
                            if (not(xmm3_7 > xmm0_20))
                                xmm0_20 = xmm3_7
                            
                            if (not(xmm1_20 > var_2c_2))
                                xmm1_20 = var_2c_2
                            
                            float xmm4_3[0x4] = var_28[2]
                            
                            if (not(var_28[0] f> xmm6_2))
                                xmm6_2 = xmm4_3
                            
                            float xmm5_1 = var_28[1]
                            float xmm3_10 = var_28[3]
                            
                            if (not(xmm5_1 > xmm0_20))
                                xmm0_20 = xmm3_10
                            
                            if (not(xmm2_5 f> xmm4_3))
                                xmm2_5 = var_28[0]
                            
                            if (not(xmm1_20 > xmm3_10))
                                xmm1_20 = xmm5_1
                            
                            if (xmm2_5 f< xmm6_2)
                                goto label_747d87
                            
                            if (xmm1_20 < xmm0_20)
                                goto label_747d87
                            
                            if (not(arg1 f< xmm6_2) && not(arg2 f< xmm0_20) && not(xmm2_5 f< arg1)
                                    && xmm1_20 f>= arg2)
                                uint32_t eax_14 = *(&var_120:8 + esi_2 * 0xc)
                                CookieCheckFunction(eax_14)
                                return eax_14
                            
                            esi_2 += 1
                            edi_1 += 0xc
                            
                            if (esi_2 s>= 4)
                                CookieCheckFunction(0xffffffff)
                                return 0xffffffff
                            
                            var_2c_2 = *edi_1
                            continue
                    
                    var_154_1 = "RectUnion"
                    var_158 = 0xdb
                    ecx_1 = "RectIsNormalized(r0)"
                    break
                
                break
        
    label_747d87:
        var_154_1 = "RectContains"
        var_158 = 0xa4
        ecx_1 = "RectIsNormalized(r)"
        break
    
    var_15c = "C:\x\ax2017\Engine\Rect.cpp"
else
    var_154_1 = "UIDefGet"
    var_158 = 0x127
    var_15c = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"

sub_63b870(eax_1, &data_801800, ecx_1, var_15c, var_158, var_154_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

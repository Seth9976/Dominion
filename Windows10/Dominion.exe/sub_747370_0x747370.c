// 函数: sub_747370
// 地址: 0x747370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (data_151345c == 0)
label_74792f:
    CookieCheckFunction(0xffffffff)
    return 0xffffffff

float var_144[0xc]
float* eax_2 = sub_745020(&var_144)
bool cond:1_1 = data_1513462 == 0
int128_t var_8c = *eax_2
int128_t var_7c_1 = *(eax_2 + 0x10)
int128_t var_6c = *(eax_2 + 0x20)
int128_t var_5c_1 = *(eax_2 + 0x30)
int128_t var_4c_1 = *(eax_2 + 0x40)
int128_t var_3c_1 = *(eax_2 + 0x50)
char const* const var_160
int32_t var_15c_1
char const* const var_158_2
float* eax_3
char* ecx_1
int128_t var_b4
float var_94_1
float var_90_1
float var_18[0x4]
int32_t ecx
float xmm1_1
float xmm2_1
float xmm6_1
float xmm7_1

if (cond:1_1)
label_7475c6:
    int32_t var_15c_3 = ecx
    void* eax_7 = sub_744f10(data_151245c, nullptr)
    float (* eax_8)[0x4]
    int32_t ecx_8
    eax_8, ecx_8 = sub_697620(eax_7, &var_8c, eax_7, &var_b4, 0)
    int32_t esi_2 = 1
    var_18 = *eax_8
    
    if (data_151345c s<= 1)
        goto label_747443
    
    var_94_1 = var_18[3]
    var_90_1 = var_18[2]
    float var_9c_2 = var_18[1]
    float var_98_2 = var_18[0]
    
    while (true)
        int32_t var_15c_5 = ecx_8
        void* eax_9 = sub_744f10((&data_151245c)[esi_2], nullptr)
        eax_3, ecx_8 = sub_697620(eax_9, &var_8c, eax_9, &var_b4, 0)
        xmm7_1 = var_98_2
        xmm2_1 = var_90_1
        var_18 = *eax_3
        
        if (not(xmm2_1 < xmm7_1))
            xmm6_1 = var_9c_2
            xmm1_1 = var_94_1
            
            if (not(xmm1_1 < xmm6_1))
                float xmm0_19 = var_18[0]
                
                if (not(xmm0_19 > xmm7_1))
                    xmm7_1 = xmm0_19
                
                float xmm0_20 = var_18[2]
                var_98_2 = xmm7_1
                
                if (not(xmm2_1 > xmm0_20))
                    xmm2_1 = xmm0_20
                
                float xmm0_21 = var_18[1]
                var_90_1 = xmm2_1
                
                if (not(xmm0_21 > xmm6_1))
                    xmm6_1 = xmm0_21
                
                float xmm0_22 = var_18[3]
                var_9c_2 = xmm6_1
                
                if (not(xmm1_1 > xmm0_22))
                    xmm1_1 = xmm0_22
                
                esi_2 += 1
                var_94_1 = xmm1_1
                
                if (esi_2 s>= data_151345c)
                    goto label_74746e
                
                continue
        
    label_747702:
        var_158_2 = "RectUnion"
        var_15c_1 = 0xdb
        ecx_1 = "RectIsNormalized(r0)"
        break
    
    var_160 = "C:\x\ax2017\Engine\Rect.cpp"
else
    eax_3, ecx = GetKeyState(0x11)
    char var_158_3
    void* eax_4
    
    if (eax_3.w s< 0)
        if (data_1513462 == 0)
            goto label_7475c6
        
        eax_3, ecx = GetKeyState(0x11)
        
        if (eax_3.w s>= 0)
            goto label_7475c6
        
        if (data_151345c == 1)
            eax_4 = sub_744f10(data_151245c, nullptr)
            var_158_3 = 1
            goto label_74743f
        
        var_158_2 = "TransformCorner"
        var_15c_1 = 0x3bf
        var_160 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
        ecx_1 = "gUI.s.activeSetCount == 1"
    else if (data_151345c == 1)
        eax_4 = sub_744f10(data_151245c, nullptr)
        var_158_3 = 0
    label_74743f:
        var_18 = *sub_697620(eax_4, &var_8c, eax_4, &var_b4, var_158_3)
    label_747443:
        xmm1_1 = var_18[3]
        xmm2_1 = var_18[2]
        xmm6_1 = var_18[1]
        xmm7_1 = var_18[0]
        var_94_1 = xmm1_1
        var_90_1 = xmm2_1
    label_74746e:
        float xmm2_2 = xmm2_1 - xmm7_1
        __builtin_memcpy(&var_6c, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x40)
        uint32_t esi_1 = 0
        float xmm3_2 = xmm1_1 - xmm6_1
        float var_9c_1 = xmm2_2
        float var_98_1 = xmm3_2
        float var_20_1 = 16f
        int32_t var_1c_1 = 0x41800000
        
        while (true)
            float xmm0_10 = xmm3_2 f* *(&var_6c:4 + (esi_1 << 3)) + xmm6_1
            float var_a4 = xmm2_2 f* *(&var_6c + (esi_1 << 3)) + xmm7_1
            float var_a0_1 = xmm0_10
            int128_t var_28
            eax_3 = sub_5af7f0(&var_b4, &var_28:8, &var_a4, &var_b4)
            float xmm0_11[0x4] = *eax_3
            float xmm1_6 = _mm_shuffle_ps(xmm0_11, xmm0_11, 0xaa)
            var_18 = xmm0_11
            
            if (xmm1_6 f< xmm0_11)
                break
            
            float xmm3_3 = var_18[3]
            float xmm2_3 = var_18[1]
            
            if (xmm3_3 < xmm2_3)
                break
            
            if (not(arg1 f< xmm0_11) && not(arg2 f< xmm2_3) && not(xmm1_6 f< arg1)
                    && xmm3_3 f>= arg2)
                CookieCheckFunction(esi_1)
                return esi_1
            
            esi_1 += 1
            
            if (esi_1 s>= 8)
                int128_t var_114
                void* ebx_1 = &var_114:4
                __builtin_memcpy(&var_114, 
                    "\x00\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x"
                "03\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x07"
                "00\x00\x00\x06\x00\x00\x00", 
                    0x30)
                int32_t edi_1 = 0
                float var_1c_2 = 2.80259693e-45f
                var_a4 = 16f
                int32_t var_a0_2 = 0x41800000
                int32_t var_c4 = 0x41800000
                int32_t var_c0_1 = 0x41800000
                
                while (true)
                    int32_t eax_11 = *(ebx_1 - 4)
                    float xmm0_25 = var_98_1 f* *(&var_6c:4 + (eax_11 << 3)) + xmm6_1
                    float var_bc = var_9c_1 f* *(&var_6c + (eax_11 << 3)) + xmm7_1
                    float var_b8_1 = xmm0_25
                    float var_d4[0x4]
                    float* eax_13 = sub_5af7f0(&var_d4, &var_a4, &var_bc, &var_d4)
                    float xmm1_11 = var_9c_1 f* *(&var_6c + (var_1c_2 << 3))
                    var_b4 = *eax_13
                    float xmm0_29 = var_98_1 f* *(&var_6c:4 + (var_1c_2 << 3)) + xmm6_1
                    var_18[2] = xmm1_11 + xmm7_1
                    var_18[3] = xmm0_29
                    float var_e4[0x4]
                    eax_3 = sub_5af7f0(&var_e4, &var_c4, &var_18[2], &var_e4)
                    float xmm4_2[0x4] = *eax_13
                    int128_t xmm0_30 = *eax_3
                    float xmm5_2 = _mm_shuffle_ps(xmm4_2, xmm4_2, 0xaa)
                    var_28 = xmm0_30
                    
                    if (xmm5_2 f< xmm4_2)
                        goto label_747702
                    
                    float xmm2_4 = var_b4:0xc.d
                    float xmm0_31 = var_b4:4.d
                    
                    if (xmm2_4 < xmm0_31)
                        goto label_747702
                    
                    float xmm1_13[0x4] = var_28.d
                    
                    if (not(xmm1_13 f> xmm4_2))
                        xmm4_2 = xmm1_13
                    
                    if (not(xmm5_2 > var_20_1))
                        xmm5_2 = var_20_1
                    
                    float xmm1_15 = var_28:4.d
                    
                    if (not(xmm1_15 > xmm0_31))
                        xmm0_31 = xmm1_15
                    
                    if (not(xmm2_4 > var_1c_2))
                        xmm2_4 = var_1c_2
                    
                    float xmm3_4[0x4] = var_90_1
                    
                    if (not(xmm7_1 f> xmm4_2))
                        xmm4_2 = xmm3_4
                    
                    if (not(xmm6_1 > xmm0_31))
                        xmm0_31 = var_94_1
                    
                    if (not(xmm5_2 f> xmm3_4))
                        xmm5_2 = xmm7_1
                    
                    if (not(xmm2_4 > var_94_1))
                        xmm2_4 = xmm6_1
                    
                    if (xmm5_2 f< xmm4_2)
                        break
                    
                    if (xmm2_4 < xmm0_31)
                        break
                    
                    if (not(arg1 f< xmm4_2) && not(arg2 f< xmm0_31) && not(xmm5_2 f< arg1)
                            && xmm2_4 f>= arg2)
                        void var_10c
                        uint32_t eax_18 = *(&var_10c + edi_1 * 0xc)
                        CookieCheckFunction(eax_18)
                        return eax_18
                    
                    edi_1 += 1
                    ebx_1 += 0xc
                    
                    if (edi_1 s>= 4)
                        goto label_74792f
                    
                    var_1c_2 = *ebx_1
                
                break
            
            xmm2_2 = var_9c_1
            xmm3_2 = var_98_1
        
        var_158_2 = "RectContains"
        ecx_1 = "RectIsNormalized(r)"
        var_15c_1 = 0xa4
        var_160 = "C:\x\ax2017\Engine\Rect.cpp"
    else
        var_158_2 = "TransformCorner"
        var_15c_1 = 0x3b9
        var_160 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
        ecx_1 = "gUI.s.activeSetCount == 1"
sub_63b870(eax_3, &data_801800, ecx_1, var_160, var_15c_1, var_158_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

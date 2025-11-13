// 函数: sub_5d1640
// 地址: 0x5d1640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
__security_cookie
int32_t edi = data_b604e0
int32_t eax_2 = edi

if (edi == 0xffffffff)
    eax_2 = 0

int32_t ecx = *(arg2 + 8)
int128_t xmm0
int128_t xmm1
int32_t ecx_3

if (ecx != eax_2)
    if (edi == 0xffffffff)
        edi = 0
    
    void* ecx_17 = ecx - edi
    void* eax_33 = sub_4b95e0() + ecx_17
    
    if (ecx - edi s>= 0)
        eax_33 = ecx_17
    
    int32_t eax_35 = sub_67be20(eax_33 - 1)
    uint32_t eax_37 = sub_64e7a0(sub_66b2b0(eax_35, "tbl_hand", eax_35, 0xffffffff))
    int32_t ecx_21 = *(eax_37 + 0x189c)
    
    if (ecx_21 s< 0)
        sub_63b870(eax_37, &data_801800, "numChildren >= 0", "C:\x\ax2017\Engine\UI2.cpp", 0xba8, 
            "UI2::countChildren")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx_21 != 0)
        ecx_3 = sub_64c870(eax_37, nullptr)
    label_5d1c91:
        uint32_t eax_39 = sub_64e7a0(ecx_3)
        xmm1 = *(eax_39 + 0x1630)
        xmm0 = *(eax_39 + 0x1620)
    else
        xmm0 = data_bf21e8
        xmm1 = data_bf21f8
else
    if (edi == 0xffffffff)
        edi = 0
    
    void* eax_3 = sub_5d10b0(edi, 0x3ea)
    
    if (sub_5cddc0(*(arg2 + 8)) != 0)
        int32_t ecx_5
        int32_t edx_2
        
        if (*(arg2 + 0x3c) == "tbl_player_hand" && *(arg2 + 0x38) == arg3 && *(arg2 + 0x40) == 0
                && *(arg2 + 0x44) == 0)
            ecx_5 = *(arg2 + 0x58)
            
            if (ecx_5 == 0)
                goto label_5d17bf
            
            edx_2 = data_c23bac
            uint32_t eax_13 = zx.d(ecx_5.w)
            
            if (eax_13 u>= edx_2 || *(eax_13 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_5)
                goto label_5d17bf
            
            goto label_5d1861
        
    label_5d17bf:
        int32_t eax_16 = sub_67bd70(arg3, "tbl_player_hand")
        int128_t xmm0_1
        int128_t xmm1_1
        
        if (eax_16 != 0)
            ecx_5 = sub_64c870(sub_64e7a0(eax_16), nullptr)
            *(arg2 + 0x58) = ecx_5
            
            if (ecx_5 == 0)
                xmm1_1 = data_bf21f8
                xmm0_1 = data_bf21e8
            else
                *(arg2 + 0x3c) = "tbl_player_hand"
                *(arg2 + 0x38) = arg3
                *(arg2 + 0x40) = 0
                *(arg2 + 0x44) = 0
                edx_2 = data_c23bac
            label_5d1861:
                uint32_t eax_21 = zx.d(ecx_5.w)
                
                if (eax_21 u>= edx_2 || *(eax_21 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_5)
                    xmm1_1 = data_bf21f8
                    xmm0_1 = data_bf21e8
                else
                    uint32_t eax_24 = sub_64e7a0(ecx_5)
                    xmm0_1 = *(eax_24 + 0x1620)
                    xmm1_1 = *(eax_24 + 0x1630)
        else
            *(arg2 + 0x58) = eax_16
            xmm1_1 = data_bf21f8
            xmm0_1 = data_bf21e8
        
        int32_t esi_1 = *(arg2 + 0xc)
        int128_t var_d8 = xmm0_1
        int128_t var_c8 = xmm1_1
        float var_104
        int32_t var_dc_1
        float xmm1_2
        float xmm2
        
        if (sub_4aec30() == 0)
            var_104 = 2000f
            xmm2 = 0.981747746f
            
            if (eax_3 s<= 1)
                var_dc_1 = (zx.o(0)).d
            else
                xmm1_2 = 0.196349546f
            label_5d18a8:
                float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_3))
                
                if (not(xmm2 < xmm4_2 * xmm1_2))
                    xmm2 = _mm_cvtepi32_ps(zx.o(eax_3 - 1)) * xmm1_2
                
                int32_t xmm0_7 = (xmm2 ^ (data_8937c0.o).d) * 0.5f
                float xmm2_3 = xmm2 * 0.5f
                var_dc_1 = xmm0_7
                float xmm3_3 = (float.s(esi_1) - 0f) / (xmm4_2 - 1f - 0f)
                
                if (not(0 f>= xmm3_3))
                    int32_t xmm0_2
                    
                    if (xmm3_3 < 1f)
                        xmm0_2 = sub_4ae110(1, xmm3_3, xmm0_7, xmm2_3)
                    else
                        xmm0_2 = xmm2_3
                    
                    var_dc_1 = xmm0_2
        else
            var_104 = 3000f
            xmm2 = 0.654498458f
            
            if (eax_3 s> 1)
                xmm1_2 = 0.130899698f
                goto label_5d18a8
            
            var_dc_1 = (zx.o(0)).d
        float xmm0_10 = var_dc_1 f* 0.5f
        int32_t var_5c = sub_4ae0d0(ebp_1, xmm0_10)
        float xmm0_13 = sub_4ae0f0(ebp_1, xmm0_10)
        int128_t xmm2_4 = data_800248
        float var_60 = xmm0_13
        float xmm1_5 = xmm0_13 * 0f
        float var_64 = xmm1_5
        float xmm1_7 = var_104 * -0f
        float var_e8 = var_104 * -1f
        int32_t var_100_1 = 0x3f800000
        float var_ec = xmm1_7
        int128_t var_98 = 0x3f800000.o
        float var_e4 = xmm1_7
        int32_t var_ec_1 = 0x43678000
        int32_t var_e8_1 = 0x43b20000
        int128_t var_88 = xmm2_4
        int32_t var_e4_1 = 0
        int32_t var_100_2 = 0x3f800000
        int128_t var_b8 = var_100_1.o
        int32_t var_e4_2 = 0
        int128_t var_a8 = xmm2_4
        var_ec_1.q = 0
        int32_t var_100_3 = 0x3f800000
        int128_t var_38 = var_100_2.o
        int128_t var_fc_3
        __builtin_memcpy(&var_fc_3, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x80\x67\xc3\x00\x00\x"
        "b2\xc3\x00\x00\x00\x80", 
            0x1c)
        int128_t var_28 = xmm1_5.o
        int128_t var_78 = var_100_3.o
        float var_68
        var_68.o = var_fc_3
        int128_t var_148
        sub_4eb600(&var_98, &var_78, &var_148, &var_98)
        var_98 = var_148
        int128_t var_138
        int128_t var_88_1 = var_138
        int128_t var_128
        sub_4eb600(&var_38, &var_98, &var_128, &var_38)
        var_38 = var_128
        int128_t var_58
        sub_4eb600(&var_b8, &var_38, &var_58, &var_b8)
        int32_t var_100_4 = 0x3f800000
        var_b8 = var_58
        float var_e8_2 = var_104
        float xmm1_9 = var_104 * 0f
        int128_t var_48
        int128_t var_a8_1 = var_48
        int128_t xmm0_32 = data_800248
        float var_ec_2 = xmm1_9
        float var_e4_3 = xmm1_9
        var_58 = var_100_4.o
        int128_t var_48_1 = xmm0_32
        sub_4eb600(&var_58, &var_b8, &var_128, &var_58)
        var_58 = var_128
        int128_t var_118
        int128_t var_48_2 = var_118
        sub_4eb600(&var_d8, &var_58, &var_38, &var_d8)
        *arg4 = var_38
        arg4[1] = var_118
        CookieCheckFunction(arg4)
        return arg4
    
    void* edx = *(arg2 + 0xc)
    
    if (*(arg2 + 0x3c) == "tbl_player_hand" && *(arg2 + 0x38) == arg3 && *(arg2 + 0x40) == edx
            && *(arg2 + 0x44) == 0)
        ecx_3 = *(arg2 + 0x58)
        
        if (ecx_3 == 0)
            goto label_5d1716
        
        uint32_t eax_5 = zx.d(ecx_3.w)
        
        if (eax_5 u>= data_c23bac || *(eax_5 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_3)
            goto label_5d1716
        
        goto label_5d173c
    
label_5d1716:
    ecx_3 = sub_67be20(edx)
    *(arg2 + 0x58) = ecx_3
    
    if (ecx_3 == 0)
        xmm1 = data_bf21f8
        xmm0 = data_bf21e8
    else
        *(arg2 + 0x3c) = "tbl_player_hand"
        *(arg2 + 0x38) = arg3
        *(arg2 + 0x40) = edx
        *(arg2 + 0x44) = 0
    label_5d173c:
        uint32_t eax_10 = zx.d(ecx_3.w)
        
        if (eax_10 u< data_c23bac && *(eax_10 * 0x18d0 + data_c23ba8 + 0x18c8) == ecx_3)
            goto label_5d1c91
        
        xmm1 = data_bf21f8
        xmm0 = data_bf21e8
*arg4 = xmm0
arg4[1] = xmm1
CookieCheckFunction(arg4)
return arg4

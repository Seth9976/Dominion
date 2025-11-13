// 函数: sub_6204a0
// 地址: 0x6204a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t edi

if (data_8db59c != 2)
    edi = 0
    
    if (data_8db5ac == 2)
        edi = data_8db5b0
else
    edi = data_8db5a0

uint32_t eax_2 = sub_4b9370()
uint32_t var_98
float var_68[0x4]
int32_t esi_2

if (eax_2.b == 0 || edi == 0)
    int32_t ecx_10
    
    if (data_8db664 != 0x7e3)
        ecx_10 = 0
        
        if (data_8db674 == 0x7e3)
            ecx_10 = data_8db678
    else
        ecx_10 = data_8db668
    
    int32_t var_94_1 = ecx_10
    
    if (ecx_10 == 0)
        CookieCheckFunction(eax_2)
        return eax_2
    
    int32_t edx_3 = data_171efd0
    
    if (edx_3 == 0)
        CookieCheckFunction(eax_2)
        return eax_2
    
    eax_2 = zx.d(edx_3.w)
    
    if (eax_2 u>= data_b4a5c4)
        CookieCheckFunction(eax_2)
        return eax_2
    
    eax_2 = eax_2 * 0x510c + data_b4a5c0
    
    if (*(eax_2 + 0x5108) != edx_3 || eax_2 == 0 || *eax_2 != 2)
        CookieCheckFunction(eax_2)
        return eax_2
    
    uint32_t temp0_1 = eax_2
    eax_2 += 4
    
    if (temp0_1 == 0xfffffffc)
        CookieCheckFunction(eax_2)
        return eax_2
    
    void* edi_1 = &var_68
    void* i = &data_1724008
    var_98 = eax_2 + 0x507c
    float xmm3_1
    
    do
        int32_t eax_16 = sub_67bd70(ecx_10, "img_map")
        uint32_t eax_17
        
        if (eax_16 != 0)
            eax_17 = zx.d(eax_16.w)
        
        float var_90_2
        int96_t xmm0_19
        
        if (eax_16 == 0 || eax_17 u>= data_c23bac
                || *(eax_17 * 0x18d0 + data_c23ba8 + 0x18c8) != eax_16)
            var_90_2 = (data_bf21e8).d
            xmm0_19 = (data_bf21f8).12
        else
            uint32_t eax_20 = sub_64e7a0(eax_16)
            var_90_2 = (*(eax_20 + 0x1620)).d
            xmm0_19 = (*(eax_20 + 0x1630)).12
        
        xmm3_1 = var_90_2
        uint32_t eax_21 = var_98
        int32_t ecx_12 = *i
        float xmm1_6 = xmm3_1 * 8f
        float xmm0_24 = xmm3_1 f* *(eax_21 + 4) * 1.13867188f f+ xmm0_19:8.d
        *edi_1 = xmm3_1 f* *eax_21 * 1.13867188f f+ xmm0_19:4.d - xmm1_6
        *(edi_1 + 4) = xmm0_24 - xmm1_6
        
        if (ecx_12 != 0)
            sub_664d00(sub_64e7a0(ecx_12))
            xmm3_1 = var_90_2
            eax_21 = var_98
        
        ecx_10 = var_94_1
        eax_2 = eax_21 + 8
        i += 4
        var_98 = eax_2
        edi_1 += 8
    while (i s< &data_1724030)
    
    int32_t edx_4 = 9
    
    if (data_171efcc == 0)
        edx_4 = data_171efc8
    
    if (data_147aba1 != 0)
        bool cond:4_1 = data_1724034 != 1
        esi_2 = data_cf6b14
        int32_t xmm0_26 = 0x3f800000
        data_cf6b14 = 0x32c90000
        
        if (not(cond:4_1))
            xmm0_26 = data_1724038
        
        int32_t var_a4_3 = ecx_10
        int32_t var_a4_4 = xmm0_26
        int32_t var_a8_2 = data_8d2fcc
        float var_ac_2 = xmm3_1
        eax_2 = sub_620000(eax_2, edx_4 + 1, &var_68)
        
        if (data_147aba1 != 0)
            goto label_62069a
else
    int32_t esi_1 = 0
    int32_t eax_4 = *sub_4b9480()
    int32_t i_1
    
    while (true)
        void* eax_5 = sub_61dad0()
        
        if (*(eax_5 + esi_1 + 8) == eax_4)
            i_1 = 0
            var_98 = sub_5ac120(data_171efd0) + 0x507c
            break
        
        esi_1 += 0xc
        
        if (esi_1 s>= 0x78)
            CookieCheckFunction(eax_5)
            return eax_5
    
    int32_t var_90_1
    int32_t eax_8
    
    do
        eax_8 = sub_67bd70(edi, "bg_image")
        uint32_t eax_9
        
        if (eax_8 != 0)
            eax_9 = zx.d(eax_8.w)
        
        int96_t xmm0_2
        
        if (eax_8 == 0 || eax_9 u>= data_c23bac
                || *(eax_9 * 0x18d0 + data_c23ba8 + 0x18c8) != eax_8)
            var_90_1 = (data_bf21e8).d
            xmm0_2 = (data_bf21f8).12
        else
            uint32_t eax_12 = sub_64e7a0(eax_8)
            var_90_1 = (*(eax_12 + 0x1620)).d
            xmm0_2 = (*(eax_12 + 0x1630)).12
        
        float* eax_13 = var_98
        float xmm0_5 = var_90_1 * *eax_13
        float xmm1_2 = var_90_1 f* eax_13[1]
        eax_2 = &eax_13[2]
        var_98 = eax_2
        var_68[i_1 * 2] = xmm0_5 + xmm0_5 f+ xmm0_2:4.d
        var_68[1 + i_1 * 2] = xmm1_2 + xmm1_2 f+ xmm0_2:8.d
        i_1 += 1
    while (i_1 s< 0xa)
    
    bool cond:1_1 = data_171efcc == 0
    int32_t edx_1 = 9
    float xmm0_9[0x4] = _mm_add_ps(var_68, zx.o(0))
    
    if (cond:1_1)
        edx_1 = data_171efc8
    
    bool cond:2_1 = data_147aba1 == 0
    var_68 = xmm0_9
    float var_58[0x4]
    float var_58_1[0x4] = _mm_add_ps(var_58, zx.o(0))
    float var_48[0x4]
    float var_48_1[0x4] = _mm_add_ps(var_48, zx.o(0))
    float var_38[0x4]
    float var_38_1[0x4] = _mm_add_ps(var_38, zx.o(0))
    float var_28[0x4]
    float var_28_1[0x4] = _mm_add_ps(var_28, zx.o(0))
    
    if (not(cond:2_1))
        esi_2 = data_cf6b14
        int32_t var_a4_1 = eax_8
        int32_t var_a4_2 = 0x3f800000
        int32_t var_a8_1 = 0xff041323
        data_cf6b14 = 0x2af90000
        float var_ac_1 = var_90_1 f* 2f
        eax_2 = sub_620000(eax_2, edx_1 + 1, &var_68)
        
        if (data_147aba1 != 0)
        label_62069a:
            data_cf6b14 = esi_2
            CookieCheckFunction(eax_2)
            return eax_2
sub_63b870(eax_2, &data_801800, "gDraw3DData.submittingRenderItems", 
    "C:\x\ax2017\Engine\Draw3d.cpp", 0x32c, "Draw3DLayer")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

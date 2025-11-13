// 函数: sub_4cd0b0
// 地址: 0x4cd0b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* edi = arg2
int32_t* var_84 = edi
char var_85_1

if ((*(data_147ac28 + 0x1c) & 1) != 0)
    var_85_1 = 1

if ((*(data_147ac28 + 0x1c) & 1) == 0 || *(data_cf65b4 + 0x18) == 0)
    var_85_1 = 0

int32_t var_7c
sub_63c270(&var_7c)
float xmm0_2 = sub_4d5cf0(arg3 * 8f)
float xmm0_4

if (0f <= xmm0_2)
    xmm0_4 = xmm0_2 + 0.5f
else
    xmm0_4 = xmm0_2 - 0.5f

void* esi = nullptr
char const* const var_9c
int32_t var_98_2
char const* const var_94_5
int32_t eax_6
char* ecx_13

while (true)
    uint32_t eax_5 = sub_64e7a0(arg1)
    void** edx = &data_8dc5fc
    
    if (esi s< int.d(xmm0_4))
        edx = &data_8dc5f0
    
    eax_6 = sub_665db0(eax_5, edx, eax_5, 0x3f800000, esi, 0)
    
    if (*edi == 1)
        if (var_85_1 != 0)
            int32_t eax_8 = sub_64c870(sub_64e7a0(arg1), esi)
            uint32_t eax_9
            int32_t edx_1
            eax_9, edx_1 = sub_64e7a0(eax_8)
            void var_40
            eax_6 = sub_655720(eax_9, edx_1, eax_9, &var_40)
            float xmm2[0x4] = *eax_6
            float var_30[0x4] = xmm2
            int32_t xmm3_2 = _mm_shuffle_ps(xmm2, xmm2, 0xaa)
            
            if (xmm3_2 f< xmm2)
            label_4cd5e9:
                var_94_5 = "RectContains"
                var_98_2 = 0xa4
                var_9c = "C:\x\ax2017\Engine\Rect.cpp"
                ecx_13 = "RectIsNormalized(r)"
                break
                break
            
            float xmm1_1 = var_30[3]
            float xmm0_5 = var_30[1]
            
            if (xmm1_1 < xmm0_5)
                goto label_4cd5e9
            
            int32_t xmm4_1 = var_7c
            int32_t var_78
            
            if (xmm4_1 f< xmm2 || var_78 f< xmm0_5 || xmm3_2 f< xmm4_1 || xmm1_1 f< var_78)
                float var_50[0x4]
                
                if (esi == 0)
                    uint32_t eax_11 = sub_64e7a0(eax_8)
                    void* var_6c_1 = esi
                    int32_t var_68_1 = *(eax_11 + 0x16cc)
                    int32_t var_64_1 = *(eax_11 + 0x16d0)
                    var_30 = esi.o
                    eax_6 = sub_655430(&var_50, &var_30, eax_11 + 0x1620, &var_50)
                    float xmm2_4[0x4] = *eax_6
                    float xmm3_4 = xmm2_4[0]
                    var_30 = xmm2_4
                    float xmm3_5 = xmm3_4 - 100000f
                    int32_t xmm2_5 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa)
                    
                    if (xmm2_5 f< xmm3_5)
                        goto label_4cd5e9
                    
                    float xmm1_8 = var_30[3]
                    float xmm0_10 = var_30[1]
                    
                    if (xmm1_8 < xmm0_10)
                        goto label_4cd5e9
                    
                    int32_t xmm4_2 = var_7c
                    
                    if (xmm4_2 f< xmm3_5 || var_78 f< xmm0_10 || xmm2_5 f< xmm4_2
                            || xmm1_8 f< var_78)
                        esi += 1
                        continue
                    
                    edi[1] = esi
                    *edi = 1
                    void** edi_2 = data_cc8dc0
                    
                    if (edi_2 == 0)
                        goto label_4cd469
                    
                    float xmm1_9 = edi_2[1]
                    float xmm0_11
                    
                    if (var_84 != &data_cc8da8)
                        edi_2[1] = 0
                        xmm0_11 = (zx.o(0)).d
                    else
                        *edi_2 = esi
                        xmm0_11 = xmm1_9
                    
                    xmm0_11 - xmm1_9
                    eax_6:1.b = (xmm0_11 == xmm1_9 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_11, xmm1_9) ? 1 : 0) << 2
                        | (xmm0_11 < xmm1_9 ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    
                    if (p_4)
                        data_171e6b0
                        sub_688a10()
                    
                    float xmm2_6 = edi_2[1]
                    int32_t xmm0_12 = (zx.o(0)).d
                    void* xmm3_7 = *edi_2
                    int32_t xmm1_10
                    
                    if (0f <= xmm2_6)
                        xmm1_10 = _mm_min_ss(0x3f800000, xmm2_6)
                    else
                        xmm1_10 = (zx.o(0)).d
                    
                    void* eax_13 = data_147abf0
                    *(eax_13 + 0x1c) = xmm1_10
                    
                    if (not(0f f> xmm3_7))
                        xmm0_12 = _mm_min_ss(0x3f800000, xmm3_7)
                    
                    *(eax_13 + 0x20) = xmm0_12
                    sub_4d6a20()
                    edi = var_84
                    esi += 1
                    continue
                
                if (esi == 7)
                    uint32_t eax_14 = sub_64e7a0(eax_8)
                    int32_t var_6c_2 = 0
                    int32_t var_68_2 = *(eax_14 + 0x16cc)
                    int32_t var_64_2 = *(eax_14 + 0x16d0)
                    var_30 = 0.o
                    eax_6 = sub_655430(&var_50, &var_30, eax_14 + 0x1620, &var_50)
                    float xmm1_11[0x4] = *eax_6
                    var_30 = xmm1_11
                    float xmm0_18 = _mm_shuffle_ps(xmm1_11, xmm1_11, 0xaa) + 100000f
                    
                    if (xmm0_18 f< xmm1_11)
                        goto label_4cd5e9
                    
                    float xmm2_7 = var_30[3]
                    float xmm3_8 = var_30[1]
                    
                    if (xmm2_7 < xmm3_8)
                        goto label_4cd5e9
                    
                    int32_t xmm4_3 = var_7c
                    
                    if (xmm4_3 f< xmm1_11 || var_78 f< xmm3_8 || xmm0_18 f< xmm4_3
                            || xmm2_7 f< var_78)
                        CookieCheckFunction(eax_6)
                        return eax_6
                    
                    edi[1] = 0
                    *edi = 1
                    int32_t* esi_1 = data_cc8dc0
                    
                    if (esi_1 == 0)
                        goto label_4cd469
                    
                    float xmm1_13 = esi_1[1]
                    float xmm0_19
                    
                    if (edi != &data_cc8da8)
                        xmm0_19 = 1f
                        esi_1[1] = 0x3f800000
                    else
                        *esi_1 = 0x3f800000
                        xmm0_19 = xmm1_13
                    
                    xmm0_19 - xmm1_13
                    eax_6:1.b = (xmm0_19 == xmm1_13 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_19, xmm1_13) ? 1 : 0) << 2
                        | (xmm0_19 < xmm1_13 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (p_6)
                        data_171e6b0
                        sub_688a10()
                    
                    float xmm3_9 = esi_1[1]
                    int32_t xmm0_20 = (zx.o(0)).d
                    float xmm2_8 = *esi_1
                    int32_t xmm1_14
                    
                    if (0f <= xmm3_9)
                        xmm1_14 = _mm_min_ss(0x3f800000, xmm3_9)
                    else
                        xmm1_14 = (zx.o(0)).d
                    
                    void* eax_16 = data_147abf0
                    *(eax_16 + 0x1c) = xmm1_14
                    
                    if (not(0f > xmm2_8))
                        xmm0_20 = _mm_min_ss(0x3f800000, xmm2_8)
                    
                    *(eax_16 + 0x20) = xmm0_20
                    char* eax_17 = sub_4d6a20()
                    CookieCheckFunction(eax_17)
                    return eax_17
            else
                int32_t xmm0_6 = (zx.o(0)).d
                float xmm1_3
                
                if (0 f<= xmm0_2)
                    xmm1_3 = xmm0_2 + 0.5f
                else
                    xmm1_3 = xmm0_2 - 0.5f
                
                eax_6 = int.d(xmm1_3)
                
                if (edi[1] != 1 || esi != 0)
                    edi[1] = 0
                    eax_6 = esi + 1
                    *edi = 1
                
                int32_t* edi_1 = data_cc8dc0
                
                if (edi_1 == 0)
                label_4cd469:
                    var_94_5 = "GetLocalSettings"
                    var_98_2 = 0x5fb
                    var_9c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
                    ecx_13 = "gGameSettings.localSettings"
                    break
                    break
                
                float xmm2_2 = edi_1[1]
                float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax_6)) * 0.125f
                
                if (var_84 != &data_cc8da8)
                    edi_1[1] = xmm1_6
                else
                    *edi_1 = xmm1_6
                    xmm1_6 = xmm2_2
                
                xmm1_6 - xmm2_2
                eax_6:1.b = (xmm1_6 == xmm2_2 ? 1 : 0) << 6
                    | (is_unordered.d(xmm1_6, xmm2_2) ? 1 : 0) << 2 | (xmm1_6 < xmm2_2 ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    data_171e6b0
                    sub_688a10()
                    xmm0_6 = (zx.o(0)).d
                
                float xmm2_3 = edi_1[1]
                float xmm3_3 = *edi_1
                int32_t xmm1_7
                
                if (0f <= xmm2_3)
                    xmm1_7 = _mm_min_ss(0x3f800000, xmm2_3)
                else
                    xmm1_7 = (zx.o(0)).d
                
                void* eax_10 = data_147abf0
                *(eax_10 + 0x1c) = xmm1_7
                
                if (not(0f > xmm3_3))
                    xmm0_6 = _mm_min_ss(0x3f800000, xmm3_3)
                
                *(eax_10 + 0x20) = xmm0_6
                eax_6 = sub_4d6a20()
                edi = var_84
        else
            *edi = 0
    
    esi += 1
    
    if (esi s>= 8)
        CookieCheckFunction(eax_6)
        return eax_6

sub_63b870(eax_6, &data_801800, ecx_13, var_9c, var_98_2, var_94_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

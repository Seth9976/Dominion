// 函数: sub_7411d0
// 地址: 0x7411d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
__security_cookie
int32_t esi
int32_t var_35c = esi
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t eax_2 = sub_744210(&data_14ff3b4:4, esi)
int128_t* var_364 = &data_14ff3b4:4
sub_73f700(eax_2, &data_14ff3b4:4, &data_14ff3c4:4)
void* eax_3 = data_cf65b8
float xmm2 = data_14ff3a4
int32_t var_a4 = 0
int32_t var_a0 = 0
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
int32_t esi_1 = data_14ff3c4:0xc
int32_t var_7c = esi_1
int64_t xmm1 = data_14ff3c4:4.q
float var_9c = xmm0_1
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18)))
int64_t var_200 = xmm1
float var_98 = xmm0_3
int128_t xmm0_4 = data_14ff3b4:4.o
int64_t var_84 = xmm1
int128_t var_60 = xmm0_4
int128_t var_94 = xmm0_4
float xmm0_6 = 1f f/ data_14ff3a8 * xmm2
float var_a8 = xmm2
float xmm3_1 = xmm0_6 ^ (data_8937c0.o).d
float var_b4 = xmm3_1
float xmm3_3 = xmm2 ^ (data_8937c0.o).d
float var_b0 = xmm3_3
float var_ac = xmm0_6
float var_230[0x4]
sub_63c270(&var_230[2])
void var_2d8
void* var_364_1 = &var_2d8
int128_t* eax_5 = sub_6dc460(&var_2d8, &var_230[2], &var_b4)
int32_t xmm1_1 = data_14ff3ac
int32_t xmm2_1 = data_14ff3b0
int32_t edx_2 = data_147df90
int32_t ecx_3 = data_14ff3dc
int32_t var_298 = esi_1
int128_t var_50 = *eax_5
int64_t xmm0_8 = eax_5[1].q
int128_t var_2b0 = var_60
int128_t* var_364_2 = &var_2b0
int64_t var_2a0 = var_200
int32_t var_284 = xmm1_1
int128_t var_294 = var_b4.o
int32_t var_280 = xmm2_1
int128_t var_27c = data_bf21e8
int128_t var_26c = data_bf21f8
sub_6ce2f0(&var_2b0, edx_2, ecx_3)

if (sub_740ef0(&var_50) == 0)
    data_14ff3e0 = sub_6d0cb0(data_14ff3dc, &var_50)
else
    data_14ff3e0 = 0xffffffff

void var_2f0
void* var_364_3 = &var_2f0
int128_t* eax_9 = sub_73f4a0()
float xmm2_2[0x4] = *eax_9
int64_t xmm0_14 = eax_9[1].q
HWND eax_10 = data_147ac28
float xmm1_3 = xmm2_2[0] + _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
bool cond:0 = (eax_10->__offset(0x1c).b & 1) == 0
float xmm0_20 = (_mm_shuffle_ps(xmm2_2, xmm2_2, 0x55) f+ xmm0_14.d) * 0.5f
float xmm2_5 = (_mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa) f+ xmm0_14:4.d) * 0.5f
float var_2c = xmm1_3 * 0.5f
float var_24 = xmm2_5

if (not(cond:0) && data_cf65b4->__offset(0x18).b != 0)
    eax_10 = GetFocus()

if (cond:0 || data_cf65b4->__offset(0x18).b == 0 || data_147b084 != eax_10)
    eax_10.b = 0
else
    eax_10.b = 1

int64_t xmm4 = xmm0_8:4.d
float xmm3_4[0x4] = xmm0_8.d
float xmm5 = var_50:0xc.d
char var_1d5 = eax_10.b
int32_t var_1d4 = xmm4
float var_1e0 = xmm3_4

if (data_1512448 != 0 || eax_10.b == 0)
    goto label_74165b

int32_t* var_37c_1 = &data_1512438
int128_t var_378 = var_50
int64_t xmm0_23 = _mm_unpacklo_ps(xmm3_4, xmm4)
int32_t eax_12 = sub_7402e0(&var_378, &data_1512428, &var_2c, &data_1512438, var_378, xmm0_23)
float var_228
data_1512410 = var_228
data_1512424 = eax_12
float var_224
data_1512414 = var_224
float xmm2_10
float xmm6_13
float xmm7_3

if (eax_12 == 1)
    xmm3_4 = var_1e0
    xmm4 = var_1d4
label_74165b:
    xmm7_3 = data_151242c
    xmm2_10 = data_1512430
    xmm6_13 = data_1512434
else
    int32_t var_364_4 = 0x12
    
    if (GetKeyState() s< 0)
        sub_740d50()
    
    sub_73eb30()
    xmm3_4 = var_1e0
    float xmm2_6 = data_1512438
    float xmm1_5 = data_151243c
    xmm4 = var_1d4
    float xmm7 = data_1512440
    uint32_t xmm6_3[0x4] = xmm5 * xmm2_6 + xmm3_4[0] * xmm1_5 + xmm4.d * xmm7
    float var_1f8_1 = xmm6_3
    int32_t xmm0_31 = __andps_xmmxud_memxud(xmm6_3, data_8937a0.o)
    float xmm6_8
    
    if (not(9.99999975e-06f f> xmm0_31))
        xmm6_8 = var_50.d * xmm2_6 + var_50:4.d * xmm1_5 + var_50:8.d * xmm7 f+ data_1512444
    
    float xmm6_10
    
    if (9.99999975e-06f f> xmm0_31 || 0 f< xmm6_8 * var_1f8_1)
        xmm6_10 = xmm2
    else
        xmm6_10 = (xmm6_8 ^ (data_8937c0.o).d) / var_1f8_1
    
    xmm7_3 = xmm5 * xmm6_10 f+ var_50.d
    xmm2_10 = xmm3_4[0] * xmm6_10 f+ var_50:4.d
    xmm6_13 = xmm4.d * xmm6_10 f+ var_50:8.d
    data_151242c = xmm7_3
    data_1512430 = xmm2_10
    data_1512434 = xmm6_13

float eax_14 = data_151240c
uint32_t eax_15 = data_1512424
var_2c.q = data_1512404
char const* const ecx_8
int64_t var_368

if (eax_15 u> 0xb)
    char const* const var_364_17 = "FabEditorUpdate"
    var_368.d = 0x523
    var_378:0xc.d = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
    ecx_8 = "Halt"
else
    eax_15 = zx.d(lookup_table_74245c[eax_15])
    
    switch (eax_15)
        case 0
        label_74235d:
            sub_73e8e0()
            
            if (data_1512424 != 0 && var_1d5 == 0)
                char* ecx_22
                ecx_22.b = 1
                data_1512424 = 0
                sub_744790(ecx_22)
            
            int32_t var_364_15 = data_14ff3dc
            sub_6cfcb0(sub_6d1370(), data_8c4634)
            bool cond:4 = data_14ff3e0 != 0xffffffff
            data_1512448 = var_1d5
            float result
            PSTR lpCursorName
            
            if (cond:4 || data_14ff3e8 != 0xffffffff)
                void var_218
                result = sub_63c270(&var_218)
                
                if (result.b != 0)
                    lpCursorName = 0x7f89
                label_7423e0:
                    var_368.d = 0
                    HCURSOR var_364_16 = LoadCursorA(var_368.d, lpCursorName)
                    result = SetCursor()
            else
                void var_210
                result = sub_63c270(&var_210)
                
                if (result.b != 0)
                    lpCursorName = 0x7f00
                    goto label_7423e0
            CookieCheckFunction(result)
            return result
        case 1
            float xmm2_11 = var_228
            float xmm1_6 = data_1512410
            float xmm3_5 = var_224
            float xmm0_39 = data_1512414
            data_1512418 = xmm2_11
            data_151241c = xmm3_5
            float xmm6_14
            
            if (xmm2_11 <= xmm1_6)
                xmm6_14 = xmm2_11
                xmm2_11 = xmm1_6
            else
                xmm6_14 = xmm1_6
            
            float xmm1_7
            
            if (xmm3_5 <= xmm0_39)
                xmm1_7 = xmm3_5
                xmm3_5 = xmm0_39
            else
                xmm1_7 = xmm0_39
            
            float xmm5_2 = xmm0_3 - 0f
            float xmm7_5 = xmm0_1 - 0f
            
            if (xmm2_11 < xmm6_14 || xmm3_5 < xmm1_7)
                char const* const var_364_11 = "RectBottomRight"
                var_368.d = 0x12d
                var_378:0xc.d = "C:\x\ax2017\Engine\Rect.cpp"
                ecx_8 = "RectIsNormalized(r)"
            else
                int32_t* ecx_7 = data_147df90
                float xmm6_16 = xmm0_6 - xmm3_1
                data_15003ec = 0
                bool cond:7_1 = ecx_7[1] == 0x20
                float xmm7_7 = xmm2 - xmm3_3
                float var_250_1 = xmm6_16 * (xmm2_11 - 0f) / xmm7_5 + xmm3_1
                float var_258 = xmm6_16 * (xmm6_14 - 0f) / xmm7_5 + xmm3_1
                float var_24c_1 = (1f - (xmm3_5 - 0f) / xmm5_2) * xmm7_7 + xmm3_3
                int32_t var_248_1 = data_14ff3ac
                float var_254_1 = (1f - (xmm1_7 - 0f) / xmm5_2) * xmm7_7 + xmm3_3
                int32_t var_244_1 = data_14ff3b0
                
                if (cond:7_1)
                    int32_t* eax_16 = sub_5af880(ecx_7)
                    int32_t i = 0
                    int32_t* var_1e4_1 = eax_16
                    
                    if (eax_16[2] s> 0)
                        int32_t ecx_9 = 0
                        int32_t var_1f8_3 = 0
                        
                        do
                            if (*(*eax_16 + ecx_9 + 0x39) == 0)
                                void var_358
                                void* var_364_6 = &var_358
                                int128_t* eax_19
                                int32_t edx_5
                                eax_19, edx_5 = sub_6d0bc0(&var_358, i, data_14ff3dc)
                                void var_310
                                void* var_364_7 = &var_310
                                uint128_t xmm1_11 = *eax_19
                                int128_t var_e0_1 = eax_19[1]
                                int64_t xmm0_46 = eax_19[2].q
                                int64_t var_13c_1 = xmm1_11
                                int32_t xmm1_12 = _mm_bsrli_si128(xmm1_11, 8)
                                uint128_t var_14c = xmm1_11
                                int32_t var_134_1 = xmm1_12
                                int128_t* eax_21 = sub_6dc9a0(&var_310, edx_5, &var_14c)
                                int128_t var_130 = *eax_21
                                int32_t var_118_1 = *(eax_21 + 0x18)
                                void var_330
                                void* var_364_8 = &var_330
                                int64_t var_120_1 = eax_21[1].q
                                int128_t* eax_24 = sub_6dc740(&var_330, &var_130, &var_94)
                                float xmm3_8 = *(eax_19 + 0x1c)
                                int128_t var_110 = *eax_24
                                int64_t var_100_1 = eax_24[1].q
                                float xmm3_9 = xmm3_8 * 0.5f
                                int32_t var_f8_1 = *(eax_24 + 0x18)
                                float xmm1_14 = xmm0_46.d * 0.5f
                                void var_1d0
                                void* var_364_9 = &var_1d0
                                float xmm2_18 = xmm0_46:4.d * 0.5f
                                float var_78 = 0f - xmm3_9
                                float var_6c_1 = xmm3_9 + 0f
                                float var_74_1 = 0f - xmm1_14
                                float var_68_1 = xmm1_14 + 0f
                                float var_70_1 = 0f - xmm2_18
                                float var_64_1 = xmm2_18 + 0f
                                sub_6dbda0(&var_1d0, &var_110, &var_258)
                                ecx_9 = var_1f8_3
                                
                                if (sub_73b3e0(&var_1d0, &var_78) != 0)
                                    *((data_15003ec << 2) + &data_14ff3ec) = i
                                    data_15003ec += 1
                            
                            eax_16 = var_1e4_1
                            i += 1
                            ecx_9 += 0xe0
                            var_1f8_3 = ecx_9
                        while (i s< eax_16[2])
                    
                    if (var_1d5 == 0)
                        int32_t var_364_10 = 0x10
                        
                        if (GetKeyState() s>= 0 || *(data_cf65b4 + 0x18) == 0)
                            data_147ef94 = 0
                            sub_73e3e0()
                        else
                            HWND eax_31 = GetFocus()
                            
                            if (eax_31 != data_147b084 && eax_31 != 0)
                                data_147ef94 = 0
                                sub_73e3e0()
                        
                        int32_t edi = data_15003ec
                        int32_t esi_3 = 0
                        
                        if (edi s> 0)
                            int32_t ecx_15 = data_147ef94
                            
                            do
                                int32_t i_1 = *((esi_3 << 2) + &data_14ff3ec)
                                int32_t eax_32 = 0
                                
                                if (ecx_15 s<= 0)
                                label_741a7e:
                                    (&data_147df94)[ecx_15] = i_1
                                    data_147ef94 += 1
                                    sub_73e3e0()
                                    edi = data_15003ec
                                    ecx_15 = data_147ef94
                                else
                                    while ((&data_147df94)[eax_32] != i_1)
                                        eax_32 += 1
                                        
                                        if (eax_32 s>= ecx_15)
                                            goto label_741a7e
                                
                                esi_3 += 1
                            while (esi_3 s< edi)
                        
                        data_15003ec = 0
                        data_1512424 = 0
                    
                    goto label_74235d
                
                char const* const var_364_5 = "FabDefGet"
                var_368.d = 0xeb
                var_378:0xc.d = "C:\x\ax2017\Engine\FabDef.cpp"
                ecx_8 = "ptr->assetType == ASSET_TYPE_FAB"
        case 2
            uint32_t xmm6_22[0x4] =
                xmm5 f* data_1512438 + xmm3_4[0] f* data_151243c + xmm4.d f* data_1512440
            float var_1e4_2 = xmm6_22
            int32_t xmm0_60 = __andps_xmmxud_memxud(xmm6_22, data_8937a0.o)
            float xmm1_20
            
            if (not(9.99999975e-06f f> xmm0_60))
                xmm1_20 = var_50.d f* data_1512438 + var_50:4.d f* data_151243c
                    + var_50:8.d f* data_1512440 f+ data_1512444
            
            float xmm1_22
            
            if (9.99999975e-06f f> xmm0_60 || 0 f< xmm1_20 f* xmm6_22)
                xmm1_22 = var_1e4_2
            else
                xmm1_22 = (xmm1_20 ^ (data_8937c0.o).d) / var_1e4_2
            
            eax_15 = data_1512428
            float xmm5_9 = xmm5 * xmm1_22 f+ var_50.d - var_2c - (xmm7_3 - var_2c)
            float xmm3_14 = xmm3_4 f* xmm1_22 f+ var_50:4.d - xmm0_20 - (xmm2_10 - xmm0_20)
            float xmm4_7 = xmm4 f* xmm1_22 f+ var_50:8.d - eax_14 - (xmm6_13 - eax_14)
            float var_1dc_1 = xmm5_9
            float var_1e0_1 = xmm3_14
            float var_1d4_1 = xmm4_7
            
            if (eax_15 == 1)
                xmm4_7 = xmm4_7 * 0f
            label_741c0a:
                xmm3_14 = xmm3_14 * 0f
                goto label_741c0e
            
            if (eax_15 == 2)
                xmm5_9 = xmm5_9 * 0f
                xmm4_7 = xmm4_7 * 0f
            label_741c0e:
                var_1dc_1 = xmm5_9
                var_1e0_1 = xmm3_14
                var_1d4_1 = xmm4_7
            else if (eax_15 == 3)
                xmm5_9 = xmm5_9 * 0f
                goto label_741c0a
            
            int32_t* ecx_16 = data_147df90
            
            if (ecx_16[1] == 0x20)
                int32_t* eax_33 = sub_5af880(ecx_16)
                int32_t i_2 = 0
                
                if (data_147ef94 s> 0)
                    void* edx_9 = &data_15093f8
                    
                    do
                        int32_t ecx_17 = (&data_147df94)[i_2] * 0xe0
                        float xmm0_68 = var_1dc_1 f+ *(edx_9 - 8)
                        int32_t eax_34 = *eax_33
                        float xmm2_22 = var_1e0_1 f+ *(edx_9 - 4)
                        i_2 += 1
                        float xmm1_26 = var_1d4_1 f+ *edx_9
                        edx_9 += 0x24
                        *(ecx_17 + eax_34 + 0x10) = xmm0_68
                        *(ecx_17 + eax_34 + 0x14) = xmm2_22
                        *(ecx_17 + eax_34 + 0x18) = xmm1_26
                    while (i_2 s< data_147ef94)
                
                goto label_74235d
            
            char const* const var_364_12 = "FabDefGet"
            var_368.d = 0xeb
            var_378:0xc.d = "C:\x\ax2017\Engine\FabDef.cpp"
            ecx_8 = "ptr->assetType == ASSET_TYPE_FAB"
        case 3
            uint32_t xmm3_18[0x4] =
                xmm3_4[0] f* data_151243c + xmm5 f* data_1512438 + xmm4.d f* data_1512440
            float var_1dc_3 = xmm3_18
            
            if (not(9.99999975e-06f > __andps_xmmxud_memxud(xmm3_18, data_8937a0.o)))
                float xmm0_84 = var_50:4.d f* data_151243c + var_50.d f* data_1512438
                    + var_50:8.d f* data_1512440 f+ data_1512444
                
                if (not(0 f< xmm0_84 * var_1dc_3))
                    float xmm0_88 = (xmm0_84 ^ (data_8937c0.o).d) / var_1dc_3
                    float xmm6_27 = xmm6_13 - eax_14
                    float xmm7_9 = xmm7_3 - var_2c
                    float xmm2_23 = xmm2_10 - xmm0_20
                    float var_1d4_4 = xmm0_88
                    float xmm5_13 = xmm5 * xmm0_88 f+ var_50.d - var_2c
                    float xmm3_22 = var_1e0 * xmm0_88 f+ var_50:4.d - xmm0_20
                    float xmm4_11 = xmm4 f* xmm0_88 f+ var_50:8.d - eax_14
                    float xmm0_94 =
                        sub_4ac580(ebp_1, xmm4_11 * xmm4_11 + xmm3_22 * xmm3_22 + xmm5_13 * xmm5_13)
                    float var_30_1
                    float var_28_1
                    
                    if (9.99999975e-06f <= xmm0_94)
                        float xmm0_95 = 1f / (xmm0_94 + 9.99999975e-06f)
                        float xmm2_25 = xmm3_22 * xmm0_95
                        float xmm4_13 = xmm5_13 * xmm0_95
                        float xmm3_24 = xmm4_11 * xmm0_95
                        float xmm1_35 = 1f / sub_4ac580(ebp_1, 
                            xmm3_24 * xmm3_24 + xmm2_25 * xmm2_25 + xmm4_13 * xmm4_13)
                        var_30_1 = xmm1_35 * xmm4_13
                        var_2c = xmm1_35 * xmm2_25
                        var_28_1 = xmm1_35 * xmm3_24
                    else
                        var_30_1 = 0f
                        var_2c = 0f
                        var_28_1 = 0f
                    
                    int64_t var_23c_1 = var_30_1.q
                    float var_234_1 = var_28_1
                    float xmm0_112 =
                        sub_4ac580(ebp_1, xmm6_27 * xmm6_27 + xmm2_23 * xmm2_23 + xmm7_9 * xmm7_9)
                    float var_30_2
                    float var_28_2
                    
                    if (9.99999975e-06f <= xmm0_112)
                        float xmm3_25 = 1f / (xmm0_112 + 9.99999975e-06f)
                        float xmm0_114 = xmm3_25 * xmm2_23
                        float xmm2_27 = xmm3_25 * xmm7_9
                        float xmm3_26 = xmm3_25 * xmm6_27
                        float xmm1_45 = 1f / sub_4ac580(ebp_1, 
                            xmm3_26 * xmm3_26 + xmm0_114 * xmm0_114 + xmm2_27 * xmm2_27)
                        var_30_2 = xmm1_45 * xmm2_27
                        var_2c = xmm1_45 * xmm0_114
                        var_28_2 = xmm1_45 * xmm3_26
                    else
                        var_30_2 = 0f
                        var_2c = 0f
                        var_28_2 = 0f
                    
                    float var_1f8_5 = var_28_2
                    int32_t* var_364_13 = &data_1512438
                    float var_240[0x4]
                    var_368.d = &var_240[1]
                    var_200 = var_30_2.q
                    void var_2c0
                    var_378:0xc.d = &var_2c0
                    int128_t* eax_38 = sub_4ac840(&var_2c0, &data_1512438, &var_200)
                    float xmm3_27[0x4] = *eax_38
                    float xmm2_28 = xmm3_27[0]
                    float xmm1_48[0x4] = _mm_shuffle_ps(xmm3_27, xmm3_27, 0xff)
                    float xmm0_127 = xmm1_48[0] f* xmm1_48
                    var_230 = xmm1_48
                    float xmm1_50[0x4] = _mm_shuffle_ps(xmm3_27, xmm3_27, 0x55)
                    float xmm0_129 = xmm1_50[0] f* xmm1_50
                    var_240 = xmm1_50
                    float xmm1_52[0x4] = _mm_shuffle_ps(xmm3_27, xmm3_27, 0xaa)
                    var_30_2.o = xmm1_52
                    float xmm0_133 = sub_4ac580(ebp_1, 
                        xmm1_52[0] f* xmm1_52 + xmm2_28 f* xmm3_27 + xmm0_127 + xmm0_129)
                    var_60.d = (*eax_38).d f/ xmm0_133
                    var_60:4.d = var_240.d f/ xmm0_133
                    var_60:8.d = var_30_2 / xmm0_133
                    var_60:0xc.d = var_230.d / xmm0_133
                    sub_73ec10(&var_60)
            
            goto label_74235d
        case 4
            uint32_t xmm6_32[0x4] =
                xmm5 f* data_1512438 + xmm3_4[0] f* data_151243c + xmm4.d f* data_1512440
            float var_204_1 = xmm6_32
            int32_t xmm0_139 = __andps_xmmxud_memxud(xmm6_32, data_8937a0.o)
            float xmm6_37
            
            if (not(9.99999975e-06f f> xmm0_139))
                xmm6_37 = var_50.d f* data_1512438 + var_50:4.d f* data_151243c
                    + var_50:8.d f* data_1512440 f+ data_1512444
            
            float xmm6_39
            
            if (9.99999975e-06f f> xmm0_139 || 0 f< xmm6_37 * var_204_1)
                xmm6_39 = xmm2
            else
                xmm6_39 = (xmm6_37 ^ (data_8937c0.o).d) / var_204_1
            
            float xmm7_10 = xmm7_3 - var_2c
            float xmm2_32 = xmm2_10 - xmm0_20
            float xmm3_30 = xmm3_4 f* xmm6_39 f+ var_50:4.d - xmm0_20
            float xmm5_16 = xmm5 * xmm6_39 f+ var_50.d - var_2c
            float xmm7_12 = xmm6_13 - eax_14
            float xmm4_16 = xmm4 f* xmm6_39 f+ var_50:8.d - eax_14
            float xmm0_147 =
                sub_4ac580(ebp_1, xmm3_30 * xmm3_30 + xmm5_16 * xmm5_16 + xmm4_16 * xmm4_16)
            float xmm0_152
            eax_15, xmm0_152 =
                sub_4ac580(ebp_1, xmm2_32 * xmm2_32 + xmm7_10 * xmm7_10 + xmm7_12 * xmm7_12)
            int32_t* ecx_20 = data_147df90
            float xmm1_66 = xmm0_147 / xmm0_152
            
            if (ecx_20[1] == 0x20)
                int32_t eax_39 = sub_5af880(ecx_20)
                int32_t i_3 = 0
                
                if (data_147ef94 s> 0)
                    void* ecx_21 = &data_15093f8
                    
                    do
                        int32_t eax_40 = (&data_147df94)[i_3] * 0xe0
                        i_3 += 1
                        void* eax_41 = eax_40 + *eax_39
                        float xmm2_36 = (*ecx_21 f- data_151240c) * xmm1_66 f+ data_151240c
                        float xmm3_37 =
                            (*(ecx_21 - 4) f- data_1512404:4) * xmm1_66 f+ data_1512404:4
                        *(eax_41 + 0x10) =
                            (*(ecx_21 - 8) f- data_1512404.d) * xmm1_66 f+ data_1512404.d
                        *(eax_41 + 0x14) = xmm3_37
                        *(eax_41 + 0x18) = xmm2_36
                        float xmm0_154 = xmm1_66 f* *(ecx_21 + 0x10)
                        float xmm2_38 = xmm1_66 f* *(ecx_21 + 0x14)
                        float xmm1_72 = xmm1_66 f* *(ecx_21 + 0x18)
                        ecx_21 += 0x24
                        *(eax_41 + 0x28) = xmm0_154
                        *(eax_41 + 0x2c) = xmm2_38
                        *(eax_41 + 0x30) = xmm1_72
                    while (i_3 s< data_147ef94)
                
                goto label_74235d
            
            char const* const var_364_14 = "FabDefGet"
            var_368.d = 0xeb
            var_378:0xc.d = "C:\x\ax2017\Engine\FabDef.cpp"
            ecx_8 = "ptr->assetType == ASSET_TYPE_FAB"
sub_63b870(eax_15, &data_801800, ecx_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

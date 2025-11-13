// 函数: sub_6268d0
// 地址: 0x6268d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_a8
int128_t* eax_1 = __security_cookie ^ &var_a8
int128_t* var_14 = eax_1
int32_t* ecx = data_171e94c
char const* const var_bc
int32_t var_b8_1
char const* const var_b4
char* ecx_1
char const* const edx

if (ecx != 0)
    if (ecx[1] == 0x22)
        eax_1 = sub_5af880(ecx)
        int128_t var_40
        int128_t xmm0_1
        
        if (*(eax_1 + 8) != 0)
            xmm0_1 = *sub_64f140(eax_1, nullptr, *eax_1, &var_40, 0)
        else
            xmm0_1 = data_7ff520
        
        int128_t var_70 = xmm0_1
        float xmm1_1 = var_70.d
        xmm1_1 f- 0
        eax_1:1.b = (xmm1_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_1, 0f) ? 1 : 0) << 2
            | (xmm1_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            float xmm2_1 = var_70:4.d
            xmm2_1 f- 0
            eax_1:1.b = (xmm2_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 0f) ? 1 : 0) << 2
                | (xmm2_1 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                int32_t edx_1 = data_cf6494
                float xmm0_3 = var_70:8.d - xmm1_1
                float xmm0_5 = var_70:0xc.d - xmm2_1
                int32_t var_b4_1 = edx_1 * 0x5dd4 + 0xcd3198
                float xmm0_6 = xmm0_5 * 0.25f
                float var_a4 = xmm0_6
                int32_t eax_4 = sub_6261f0(arg1, edx_1)
                int32_t edx_2 = data_b604e0
                int32_t esi = data_cf6494
                int32_t ecx_4 = edx_2
                
                if (edx_2 == 0xffffffff)
                    ecx_4 = 0
                
                int32_t eax_6
                int32_t edi_1
                
                if (esi != ecx_4)
                    if (edx_2 == 0xffffffff)
                        edx_2 = 0
                    
                    void* esi_1 = esi - edx_2
                    void* eax_8 = sub_4b95e0() + esi_1
                    
                    if (esi_1 s>= 0)
                        eax_8 = esi_1
                    
                    int32_t esi_2
                    
                    if (data_8db5c4 != 0x27)
                        esi_2 = 0
                        
                        if (data_8db5d4 == 0x27)
                            esi_2 = data_8db5d8
                    else
                        esi_2 = data_8db5c8
                    
                    if (data_1a96660 != "tbl_opponents" || data_1a9665c != esi_2
                            || data_1a96664 != eax_8 - 1 || data_1a96668 != "grpOpponentScore"
                            || data_1a9666c != 0 || data_1a96670 != 0)
                        eax_6 = sub_67be20(eax_8 - 1)
                        
                        if (eax_6 != 0)
                            eax_6 = sub_67bd70(eax_6, "grpOpponentScore")
                            
                            if (eax_6 != 0)
                                eax_6 = sub_64c870(sub_64e7a0(eax_6), nullptr)
                            
                            data_1a9667c = eax_6
                            
                            if (eax_6 != 0)
                                data_1a9665c = esi_2
                                data_1a96660 = "tbl_opponents"
                                data_1a96664 = eax_8 - 1
                                data_1a96668 = "grpOpponentScore"
                                data_1a9666c = 0
                                data_1a96670 = 0
                        else
                            data_1a9667c = eax_6
                    else
                        eax_6 = data_1a9667c
                    
                    edi_1 = eax_4
                    var_a4 = 0f
                else
                    int32_t eax_5
                    
                    if (data_8db5c4 != 0x27)
                        eax_5 = 0
                        
                        if (data_8db5d4 == 0x27)
                            eax_5 = data_8db5d8
                    else
                        eax_5 = data_8db5c8
                    
                    eax_6 = sub_4bb9f0(&data_1a9665c, eax_5, "grpScore")
                    edi_1 = eax_4 + 1
                
                uint32_t eax_10 = sub_64e7a0(eax_6)
                var_70.d = 0
                var_70:4.d = 0
                int32_t* ecx_10 = eax_10 + 0x1620
                var_70:8.d = *(eax_10 + 0x16cc)
                var_70:0xc.d = *(eax_10 + 0x16d0)
                var_70 = var_70
                float* eax_12 = sub_655430(&var_40, &var_70, ecx_10, &var_40)
                bool cond:2 = data_8db5c4 != 0x27
                var_40 = *eax_12
                int128_t var_60
                int128_t xmm0_12
                
                if (cond:2)
                    if (data_8db5d4 == 0x27)
                        ecx_10 = data_8db5d8
                        goto label_626bae
                    
                    var_60 = data_bf21e8
                    xmm0_12 = data_bf21f8
                else
                    ecx_10 = data_8db5c8
                label_626bae:
                    
                    if (ecx_10 == 0)
                        var_60 = data_bf21e8
                        xmm0_12 = data_bf21f8
                    else
                        uint32_t eax_13 = zx.d(ecx_10.w)
                        
                        if (eax_13 u>= data_c23bac
                                || *(eax_13 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_10)
                            var_60 = data_bf21e8
                            xmm0_12 = data_bf21f8
                        else
                            uint32_t eax_16 = sub_64e7a0(ecx_10)
                            var_60 = *(eax_16 + 0x1620)
                            xmm0_12 = *(eax_16 + 0x1630)
                
                int128_t var_50 = xmm0_12
                var_70.d = 0
                float xmm0_15 = _mm_cvtepi32_ps(zx.o(edi_1))
                var_70:4.d = 0
                var_70:8.d = xmm0_3
                int32_t* var_bc_1 = ecx_10
                var_70:0xc.d = xmm0_15 * xmm0_5
                int128_t var_30 = var_70
                var_70.d = xmm0_6
                int32_t xmm0_19 = xmm0_6 ^ (data_8937c0.o).d
                var_70:4.d = var_a4
                float xmm1_4 = var_60.d
                var_70:8.d = xmm0_19
                var_70:0xc.d = xmm0_19
                var_70 = var_70
                void var_90
                int128_t* eax_18 =
                    sub_658160(&var_90, 0, &var_40, xmm1_4, &var_90, 1f, &var_30, &var_70)
                var_60 = *eax_18
                int128_t var_50_1 = eax_18[1]
                uint32_t result = sub_666060(arg1, &var_60)
                CookieCheckFunction(result)
                return result
        
        var_b4 = "ScoresBreakdownUpdate"
        var_b8_1 = 0xef53
        var_bc = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_1 = "RectTopLeft(taptipBoundary) == V20"
    else
        var_b4 = "UI2DefGet"
        var_b8_1 = 0xc17
        var_bc = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx = &data_801800
else
    var_b4 = "UI2DefGet"
    var_b8_1 = 0xc16
    var_bc = "C:\x\ax2017\Engine\UI2.cpp"
    edx = "UI2DefGet on null pointer"
    ecx_1 = &data_874470

sub_63b870(eax_1, edx, ecx_1, var_bc, var_b8_1, var_b4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

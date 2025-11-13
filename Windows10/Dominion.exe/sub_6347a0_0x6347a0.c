// 函数: sub_6347a0
// 地址: 0x6347a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float var_bc
float result
int32_t edx_1
result, edx_1 = sub_633d60(arg1, &var_bc)
int32_t* ecx = data_171e998
float result_1 = result
*(arg2 + 0xb0) = result_1
*(arg2 + 0xb4) = edx_1
*(arg2 + 0xac) = 0
char const* const var_fc
int32_t var_f8_1
char const* const var_f4_1
char* ecx_1
char const* const edx_2

if (ecx != 0)
    if (ecx[1] == 0x22)
        result = sub_5af880(ecx)
        int32_t ecx_2 = *(arg2 + 0xac)
        result_1 = 0f
        int32_t var_dc_1 = 0
        int32_t var_d8_1 = *(result i+ 0x10)
        int32_t var_d4_1 = *(result i+ 0x14)
        int128_t xmm1_1 = result_1.o
        int128_t var_90 = xmm1_1
        result_1.o = xmm1_1
        int128_t var_40 = data_bf21e8
        int128_t var_30_1 = data_bf21f8
        int32_t var_b4
        var_40.d = var_b4
        
        if (ecx_2 s>= 0x2b)
        label_634c4e:
            var_f4_1 = "TwitterUIs::alloc"
            var_f8_1 = 0x112df
            ecx_1 = "numUIs < MAX_TWITTER_UIS"
            var_fc = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        else
            *(arg2 + 0xac) = ecx_2 + 1
            void* esi_1 = arg2 + (ecx_2 << 2)
            sub_654ce0(&result_1, esi_1, "twitter-player", data_171e9a0, &result_1, &result_1, 0, 
                nullptr, 0)
            int32_t ecx_3 = *esi_1
            uint32_t eax_4
            
            if (ecx_3 != 0)
                eax_4 = zx.d(ecx_3.w)
            
            int128_t xmm0_7
            int128_t xmm1_2
            
            if (ecx_3 == 0 || eax_4 u>= data_c23bac
                    || *(eax_4 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_3)
                xmm1_2 = data_bf21f8
                xmm0_7 = data_bf21e8
            else
                uint32_t eax_7 = sub_64e7a0(ecx_3)
                xmm0_7 = *(eax_7 + 0x1620)
                xmm1_2 = *(eax_7 + 0x1630)
            
            int128_t var_60 = xmm0_7
            int128_t var_50_1 = xmm1_2
            int128_t var_80
            sub_4eb600(&var_60, &var_40, &var_80, &var_60)
            int32_t ecx_5 = *esi_1
            var_60 = var_80
            int128_t var_70
            int128_t var_50_2 = var_70
            int32_t var_f4_3 = 0xffffffff
            sub_666120(sub_666060(ecx_5, &var_60), &data_bf1768, *esi_1, arg1[0x18])
            sub_65d6e0(*esi_1, (zx.o(0)).d)
            sub_654ce0(&result_1, esi_1, "twitter-player", data_171e9a0, &result_1, &result_1, 0, 
                nullptr, 0)
            int32_t var_114_1 = 0xffffffff
            sub_666120(sub_666060(*esi_1, &var_60), &data_bf1768, *esi_1, arg1[0x18])
            void* esi_2 = nullptr
            int32_t* var_e8
            
            if (arg1[0x18] s<= 0)
            label_634a42:
                void* esi_3 = arg2
                result = sub_65d6e0(*(esi_3 + (ecx_2 << 2)), (zx.o(0)).d)
                bool cond:0_1 = arg1[0x41b] s<= 0
                result_1 = 0f
                
                if (cond:0_1)
                label_634c32:
                    CookieCheckFunction(result)
                    return result
                
                void* edi_1 = &arg1[0x1b]
                
                while (true)
                    int32_t ecx_16 = *(esi_3 + 0xac)
                    
                    if (ecx_16 s>= 0x2b)
                        goto label_634c4e
                    
                    *(esi_3 + 0xac) = ecx_16 + 1
                    void* esi_4 = esi_3 + (ecx_16 << 2)
                    result = data_cc8d5c
                    
                    if (result == 0)
                        var_f4_1 = "GetClient"
                        var_f8_1 = 0x7b
                        var_fc = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
                        ecx_1 = "gClient"
                        break
                    
                    int32_t edx_9
                    
                    if (*(result i+ 0x5068) == 0)
                        edx_9 = 0x18
                    else
                        edx_9 = sub_4b9480()[0xc]
                    
                    void* eax_17 = sub_571b30(*(edi_1 + 8), edx_9)
                    uint128_t xmm0_10 = zx.o(*edi_1)
                    var_50_2:0xc.d = 0
                    bool cond:1_1 =
                        ((*(eax_17 + 0x98) & 0x7f000400) | (*(eax_17 + 0x9c) & 0x940)) == 0
                    float xmm1_6 = _mm_cvtepi32_ps(zx.o(*(edi_1 + 4)))
                    float xmm0_11 = _mm_cvtepi32_ps(xmm0_10)
                    int32_t* eax_20
                    int32_t xmm0_15
                    float xmm1_7
                    float var_ac
                    
                    if (cond:1_1)
                        eax_20 = data_171e998
                        float var_a8
                        xmm1_7 = xmm1_6 * var_a8
                        float var_a4
                        var_50_2:8.d = xmm0_11 * var_a4 + var_ac
                        var_60 = data_800248
                        int32_t var_a0
                        xmm0_15 = var_a0
                    else
                        eax_20 = data_171e99c
                        float var_9c
                        xmm1_7 = xmm1_6 * var_9c
                        float var_98
                        var_50_2:8.d = xmm0_11 * var_98 + var_ac
                        var_60 = data_800248
                        int32_t var_94
                        xmm0_15 = var_94
                    var_60.d = xmm0_15
                    var_40 = var_60
                    var_e8 = eax_20
                    float var_b0
                    var_50_2:4.d = xmm1_7 + var_b0
                    int128_t var_30_2 = var_50_2
                    int32_t i_1 = 2
                    int32_t i
                    
                    do
                        sub_654ce0(eax_20, esi_4, "twitter-card", eax_20, &var_90, &var_90, 0, 
                            nullptr, 0)
                        sub_666060(*esi_4, &var_40)
                        sub_6342f0(arg1, edi_1, *esi_4, arg1[0x18])
                        sub_65d6e0(*esi_4, (zx.o(0)).d)
                        i = i_1
                        i_1 -= 1
                        eax_20 = var_e8
                    while (i != 1)
                    edi_1 += 0x40
                    result = arg1
                    float result_2 = result_1 i+ 1
                    esi_3 = arg2
                    result_1 = result_2
                    
                    if (result_2 s>= *(result i+ 0x106c))
                        goto label_634c32
            else
                var_e8 = arg1
                
                while (true)
                    int32_t* eax_13 = sub_67bd70(*(arg2 + (ecx_2 << 2)), "tbl_players")
                    
                    if (eax_13 != 0)
                        result = sub_64e7a0(eax_13)
                        
                        if (esi_2 s< 0)
                            var_f4_1 = "UI2GetHandle"
                            var_f8_1 = 0x5a8b
                            var_fc = "C:\x\ax2017\Engine\UI2.cpp"
                            ecx_1 = "idx >= 0"
                            break
                        
                        eax_13 = sub_64c870(result, esi_2)
                    
                    sub_634160(eax_13, var_e8, eax_13, esi_2)
                    var_e8 = &var_e8[4]
                    esi_2 += 1
                    
                    if (esi_2 s>= arg1[0x18])
                        goto label_634a42
    else
        var_f4_1 = "UI2DefGet"
        var_f8_1 = 0xc17
        var_fc = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx_2 = &data_801800
else
    var_f4_1 = "UI2DefGet"
    var_f8_1 = 0xc16
    var_fc = "C:\x\ax2017\Engine\UI2.cpp"
    edx_2 = "UI2DefGet on null pointer"
    ecx_1 = &data_874470

sub_63b870(result, edx_2, ecx_1, var_fc, var_f8_1, var_f4_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

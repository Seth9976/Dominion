// 函数: sub_4d3c40
// 地址: 0x4d3c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float performanceCount_9
float performanceCount_2 = performanceCount_9
int32_t* result
result.b = arg2
char var_4d = result.b
int32_t ecx = *arg1

if (ecx != 0 && (arg1[1] != 0 || result.b == 0))
    void* eax = data_cf65b8
    float performanceCount_1 = 0f
    int32_t var_3c_1 = 0
    uint128_t xmm1 = zx.o(*(eax + 0x18))
    int32_t* performanceCount_3 = arg1[3]
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax + 0x14)))
    int32_t* performanceCount = performanceCount_3
    int32_t xmm1_1 = _mm_cvtepi32_ps(xmm1)
    int32_t var_38_1 = xmm2_2
    int32_t var_34_1 = xmm1_1
    int32_t var_38_2 = xmm2_2
    int32_t var_34_2 = xmm1_1
    int128_t var_20 = performanceCount_1.o
    performanceCount_1 = 0f
    int32_t var_3c_2 = 0
    performanceCount_1.o = performanceCount_1.o
    void* eax_1 = sub_4d3b00(ecx)
    int32_t* ecx_1 = *(eax_1 + 4)
    
    if (ecx_1 != 0)
        goto label_4d3d13
    
    result = *(eax_1 + 0x14)
    char const* const var_6c_1
    int32_t var_68_1
    char const* const var_64_1
    char* ecx_2
    
    if (result == 0)
        var_64_1 = "GetDlgAsset"
        var_68_1 = 0x2e31
        var_6c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
        ecx_2 = "def.uiPages"
    label_4d40b9:
        sub_63b870(result, &data_801800, ecx_2, var_6c_1, var_68_1, var_64_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    ecx_1 = result[performanceCount]
label_4d3d13:
    bool cond:1_1 = arg1[1] != 0
    int32_t* performanceCount_4 = *ecx_1
    performanceCount = performanceCount_4
    
    if (not(cond:1_1) && *arg1 != 0x27)
        sub_654ce0(performanceCount_4, &arg1[1], "dialog (retired)", performanceCount_4, &var_20, 
            &performanceCount_1, 0x32c8, nullptr, 0)
        uint32_t eax_2 = sub_64e7a0(arg1[1])
        sub_665db0(eax_2, &data_8dba78, eax_2, 0x3f800000, 0xffffffff, 0)
        sub_65d6e0(arg1[1], (zx.o(0)).d)
    
    int32_t ecx_7 = *arg1
    int32_t eax_3
    
    if (ecx_7 != 0x27)
        eax_3 = *(sub_4d3b00(ecx_7) + 0xc)
    else
        eax_3 = 0x2af8
    
    sub_654ce0(&var_20, &arg1[1], "dialog", performanceCount, &var_20, &performanceCount_1, eax_3, 
        nullptr, 0)
    
    if (var_4d != 0)
        uint32_t eax_6 = sub_64e7a0(arg1[1])
        sub_665db0(eax_6, &data_8dba78, eax_6, 0x3f800000, 0xffffffff, 0)
    
    sub_4d3b70(arg1[1])
    result = data_cc8dc0
    int32_t ecx_11 = arg1[1]
    
    if (result == 0)
        var_64_1 = "GetLocalSettings"
        var_68_1 = 0x5fb
        var_6c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_2 = "gGameSettings.localSettings"
        goto label_4d40b9
    
    int32_t eax_7 = result[2]
    uint32_t eax_11
    
    if (eax_7 == 0)
        eax_11 = sub_64e7a0(ecx_11)
        sub_665db0(eax_11, &data_8dc9e0, eax_11, 0x3f800000, 0xffffffff, 0)
    else if (eax_7 == 1)
        eax_11 = sub_64e7a0(ecx_11)
        sub_665db0(eax_11, &data_8dc9ec, eax_11, 0x3f800000, 0xffffffff, 0)
    else if (eax_7 == 3)
        eax_11 = sub_64e7a0(ecx_11)
        sub_665db0(eax_11, &data_8dc9f8, eax_11, 0x3f800000, 0xffffffff, 0)
    arg1[1]
    sub_4d2030()
    int32_t* performanceCount_5 = *(sub_4d3b00(*arg1) + 0x14)
    performanceCount = performanceCount_5
    
    if (performanceCount_5 != 0)
        int32_t esi_1 = arg1[3]
        float performanceCount_6 = arg1[1]
        performanceCount_1 = performanceCount_6
        
        if (esi_1 == 0)
            uint32_t eax_13 = sub_64e7a0(performanceCount_6)
            sub_665db0(eax_13, &data_8dbd64, eax_13, 0x3f800000, 0xffffffff, esi_1.b)
            performanceCount_5 = performanceCount
            performanceCount_6 = performanceCount_1
        
        if (performanceCount_5[esi_1 + 1] == 0)
            uint32_t eax_14 = sub_64e7a0(performanceCount_6)
            sub_665db0(eax_14, &data_8dbd70, eax_14, 0x3f800000, 0xffffffff, 0)
    
    result = data_cc8dc0
    
    if (result == 0)
        var_64_1 = "GetLocalSettings"
        var_68_1 = 0x5fb
        var_6c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_2 = "gGameSettings.localSettings"
        goto label_4d40b9
    
    void** esi_2 = &data_cadf54
    
    if (result[3] == 0)
        esi_2 = &data_cadf60
    
    uint32_t eax_15 = sub_64e7a0(arg1[1])
    sub_665db0(eax_15, esi_2, eax_15, 0x3f800000, 0xffffffff, 0)
    result = data_cc8d5c
    
    if (result == 0)
        var_64_1 = "GetClient"
        var_68_1 = 0x7b
        var_6c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_2 = "gClient"
        goto label_4d40b9
    
    if (result[0x1d6b].b != 0)
        uint32_t eax_16 = sub_64e7a0(arg1[1])
        sub_665db0(eax_16, &data_8dbd58, eax_16, 0x3f800000, 0xffffffff, 0)
    
    data_147abe0 = 0
    QueryPerformanceCounter(&performanceCount)
    result = *(sub_4d3b00(*arg1) + 8)
    
    if (result == 0)
        var_64_1 = "GetDlgUpdate"
        var_68_1 = 0x2e45
        var_6c_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
        ecx_2 = "def.updateFn"
        goto label_4d40b9
    
    result(arg1[1])
    QueryPerformanceCounter(&performanceCount_1)
    float performanceCount_7 = performanceCount_1
    int32_t var_44
    sub_63c000(performanceCount_7 i- performanceCount, 
        sbb.d(var_3c_2, var_44, performanceCount_7 u< performanceCount))
    sub_65d6e0(arg1[1], performanceCount_2)
    QueryPerformanceCounter(&performanceCount_2)
    float performanceCount_8 = performanceCount_2
    int32_t var_24
    sub_63c000(performanceCount_8 i- performanceCount, 
        sbb.d(var_24, var_44, performanceCount_8 u< performanceCount))
    result = arg1
    int32_t ecx_26 = result[1]
    void* esi_3 = &result[1]
    
    if (ecx_26 == 0)
        goto label_4d4073
    
    uint32_t edx_4 = zx.d(ecx_26.w)
    
    if (edx_4 u>= data_c23bac)
        goto label_4d4073
    
    if (*(edx_4 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_26)
    label_4d406f:
        result = arg1
    label_4d4073:
        
        if (var_4d != 0)
            int32_t ecx_29 = *result
            
            if (ecx_29 != 0)
                int32_t eax_28 = *(sub_4d3b00(ecx_29) + 0x18)
                
                if (eax_28 != 0)
                    eax_28(*esi_3)
            
            return sub_64e810(esi_3)
    else
        uint32_t ecx_27 = sub_64e7a0(ecx_26)
        float xmm0_3 = *(ecx_27 + 0x1680)
        xmm0_3 f- 0
        uint32_t eax_25
        eax_25:1.b = (xmm0_3 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, 0f) ? 1 : 0) << 2
            | (xmm0_3 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            goto label_4d406f
        
        result = *(ecx_27 + 0x189c)
        
        if (result s< 0)
            var_64_1 = "UI2::countChildren"
            var_68_1 = 0xba8
            var_6c_1 = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_2 = "numChildren >= 0"
            goto label_4d40b9
        
        if (result == 1)
            float xmm0_4 = sub_64e7a0(sub_64c870(ecx_27, nullptr))[0x5a0]
            xmm0_4 f- 0
            result:1.b = (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2
                | (xmm0_4 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                goto label_4d406f

return result

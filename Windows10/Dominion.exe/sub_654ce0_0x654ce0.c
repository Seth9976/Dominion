// 函数: sub_654ce0
// 地址: 0x654ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx = *arg2
char var_221 = 0
uint32_t eax_3

if (ecx != 0)
    eax_3 = zx.d(ecx.w)

if (ecx == 0 || eax_3 u>= data_c23bac || *(eax_3 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx)
    void* eax_6 = sub_64e660(nullptr)
    var_221 = 1
    *(eax_6 + 8) = arg3
    ecx = *(eax_6 + 0x18c8)
    *arg2 = ecx

uint32_t eax_7 = sub_64e7a0(ecx)
void* eax_8 = *(eax_7 + 0x1600)

if (eax_8 != 0 && eax_8 != arg4)
    sub_64e810(arg2)
    void* eax_9 = sub_64e660(nullptr)
    var_221 = 1
    *(eax_9 + 8) = arg3
    eax_8 = *(eax_9 + 0x18c8)
    *arg2 = eax_8

*(eax_7 + 0x1600) = arg4
*(eax_7 + 0x1604) = 0xffffffff
int32_t var_238
char const* const var_234
char* ecx_5
char const* const edx

if (arg4 != 0)
    if (arg4[1] == 0x22)
        void* eax_10 = sub_5af880(arg4)
        float xmm4_1 = *(eax_10 + 0x10)
        float xmm5_1 = *(eax_10 + 0x14)
        void var_130
        int32_t* eax_11 = sub_67db90((zx.o(0)).d, &var_130)
        int128_t xmm1_2 = *(eax_11 + 0x10)
        int128_t xmm2_1 = *(eax_11 + 0x20)
        int64_t xmm3_1 = *(eax_11 + 0x30)
        int32_t eax_12 = eax_11[0xe]
        *(eax_7 + 0x50) = *eax_11
        *(eax_7 + 0x60) = xmm1_2
        *(eax_7 + 0x70) = xmm2_1
        *(eax_7 + 0x80) = xmm3_1
        *(eax_7 + 0x88) = eax_12
        void var_f0
        int32_t* eax_13 = sub_67db90((zx.o(0)).d, &var_f0)
        int128_t xmm1_4 = *(eax_13 + 0x10)
        int128_t xmm2_2 = *(eax_13 + 0x20)
        int64_t xmm3_2 = *(eax_13 + 0x30)
        int32_t eax_14 = eax_13[0xe]
        *(eax_7 + 0xe0) = *eax_13
        *(eax_7 + 0xf0) = xmm1_4
        *(eax_7 + 0x100) = xmm2_2
        *(eax_7 + 0x110) = xmm3_2
        *(eax_7 + 0x118) = eax_14
        void var_b0
        int32_t* eax_15 = sub_67db90(xmm4_1 - 0f, &var_b0)
        int128_t xmm1_6 = *(eax_15 + 0x10)
        int128_t xmm2_3 = *(eax_15 + 0x20)
        int64_t xmm3_3 = *(eax_15 + 0x30)
        int32_t eax_16 = eax_15[0xe]
        *(eax_7 + 0x170) = *eax_15
        *(eax_7 + 0x180) = xmm1_6
        *(eax_7 + 0x190) = xmm2_3
        *(eax_7 + 0x1a0) = xmm3_3
        *(eax_7 + 0x1a8) = eax_16
        void var_70
        int32_t* eax_17 = sub_67db90(xmm5_1 - 0f, &var_70)
        uint32_t count = 0xd0
        int128_t xmm1_8 = *(eax_17 + 0x10)
        int32_t c = 0
        int128_t xmm2_4 = *(eax_17 + 0x20)
        int64_t xmm3_4 = *(eax_17 + 0x30)
        int32_t eax_18 = eax_17[0xe]
        *(eax_7 + 0x200) = *eax_17
        *(eax_7 + 0x210) = xmm1_8
        *(eax_7 + 0x220) = xmm2_4
        *(eax_7 + 0x230) = xmm3_4
        *(eax_7 + 0x238) = eax_18
        eax_8 = memset(eax_7 + 0x1620, c, count)
        *(eax_7 + 0x1620) = data_bf21e8
        int128_t xmm0_6 = data_bf21f8
        *(eax_7 + 0x16ac) = 0
        *(eax_7 + 0x1630) = xmm0_6
        int128_t xmm0_7 = data_7fefb0
        *(eax_7 + 0x1694) = 0
        *(eax_7 + 0x1674) = xmm0_7
        *(eax_7 + 0x16b4) = 0
        *(eax_7 + 0x16b8) = 0
        *(eax_7 + 0x16c4) = 0
        *(eax_7 + 0x16c8) = 0
        
        if (arg4[1] == 0x22)
            eax_8 = sub_5af880(arg4)
            float xmm0_9 = *(eax_8 + 0x14) - 0f
            *(eax_7 + 0x16bc) = *(eax_8 + 0x10) - 0f
            *(eax_7 + 0x16c0) = xmm0_9
            
            if (arg4[1] == 0x22)
                void* eax_20 = sub_5af880(arg4)
                float xmm0_11 = *(eax_20 + 0x14) - 0f
                *(eax_7 + 0x16cc) = *(eax_20 + 0x10) - 0f
                *(eax_7 + 0x16d0) = xmm0_11
                
                if (arg4[1] != 0x22)
                label_6552e9:
                    sub_63b870(eax_20, &data_801800, "ptr->assetType == ASSET_TYPE_UI2", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0xc17, "UI2DefGet")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                void* ecx_10 = sub_5af880(arg4)
                float xmm2_5 = *(ecx_10 + 0x18)
                xmm2_5 f- 0
                eax_20:1.b = (xmm2_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_5, 0f) ? 1 : 0) << 2
                    | (xmm2_5 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                bool p_4
                
                if (not(p_2))
                    float xmm0_12 = *(ecx_10 + 0x1c)
                    xmm0_12 f- 0
                    eax_20:1.b = (xmm0_12 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2 | (xmm0_12 < 0f ? 1 : 0)
                    p_4 = unimplemented  {test ah, 0x44}
                
                int32_t xmm0_14
                
                if (p_2 || p_4)
                    xmm0_14 = *(ecx_10 + 0x1c)
                    float var_218_2 = xmm2_5
                else
                    int32_t var_218_1 = *(ecx_10 + 0x10)
                    xmm0_14 = *(ecx_10 + 0x14)
                
                bool cond:1_1 = arg4[1] != 0x22
                int32_t var_220 = 0
                int32_t var_21c_1 = 0
                int32_t var_214_1 = xmm0_14
                int128_t var_30 = var_220.o
                
                if (cond:1_1)
                    goto label_6552e9
                
                void* eax_21 = sub_5af880(arg4)
                var_220 = 0
                int32_t var_218_3 = *(eax_21 + 0x10)
                int128_t* var_234_5 = &var_30
                int32_t var_214_2 = *(eax_21 + 0x14)
                int128_t var_200
                int128_t* var_238_1 = &var_200
                int32_t var_21c_2 = 0
                float var_168[0xe]
                float* var_23c_2 = &var_168
                var_200 = var_220.o
                float* eax_23 = sub_654660(&var_168, arg6, arg5, var_23c_2, var_238_1, var_234_5)
                int128_t xmm1_13 = *(eax_23 + 0x10)
                int128_t xmm2_6 = *(eax_23 + 0x20)
                eax_8 = eax_23[0xc]
                *(eax_7 + 0x1640) = *eax_23
                *(eax_7 + 0x1650) = xmm1_13
                *(eax_7 + 0x1660) = xmm2_6
                *(eax_7 + 0x1670) = eax_8
                float xmm3_5 = *(eax_7 + 0x1640)
                int32_t xmm2_7 = *(eax_7 + 0x1658)
                *(eax_7 + 0x1620) = data_bf21e8
                *(eax_7 + 0x1630) = data_bf21f8
                *(eax_7 + 0x1634) = (*(eax_7 + 0x1654) ^ 0x80000000) * xmm3_5
                *(eax_7 + 0x1638) = (xmm2_7 ^ 0x80000000) * xmm3_5
                *(eax_7 + 0x163c) = xmm3_5 * -0f
                bool cond:0_1 = 100000f > __andps_xmmxud_memxud(*(eax_7 + 0x1634), data_8937a0.o)
                *(eax_7 + 0x1620) = xmm3_5
                
                if (cond:0_1)
                    int32_t eax_24 = *(eax_7 + 0x15e0)
                    
                    if (eax_24 == 0 || eax_24 != "<root>")
                        sub_63d5e0(eax_24, 6, eax_7 + 0x15e0, 0)
                        __builtin_strncpy(*(eax_7 + 0x15e0), "<root>", 7)
                    
                    *(eax_7 + 0x1694) = arg7
                    eax_8 = arg8
                    *(eax_7 + 0x16e8) = eax_7
                    *(eax_7 + 0x1698) = eax_8
                    *(eax_7 + 0x16ec) = 0
                    
                    if (eax_8 != 0xffffffff)
                        uint32_t count_1 = 0x68
                        *(eax_7 + 0x1410) = zx.d(arg9)
                        void var_1e0
                        memset(&var_1e0, 0, count_1)
                        int32_t var_170 = 0
                        int32_t var_174 = 0xffffffff
                        int128_t var_1f0 = data_7ff520
                        int32_t var_178 = 1
                        int32_t var_218_4 = 0
                        __builtin_memcpy(eax_7 + 0xd40, &var_1f0, 0x84)
                        var_220.q = 0
                        sub_67dc70(&var_220, eax_7 + 0xd40, eax_7 + 0x554, (zx.o(0)).d, &var_220)
                        uint32_t result
                        result.b = var_221
                        *(eax_7 + 4) = 0
                        CookieCheckFunction(result)
                        return result
                    
                    var_234 = "UI2Begin"
                    var_238 = 0x198d
                    ecx_5 = "root.worldInfo.sublayer != -1"
                else
                    var_234 = "UI2Begin"
                    var_238 = 0x197c
                    ecx_5 = "Abs(root.worldInfo.transform.t.x) < 100000.0f"
            else
                var_234 = "UI2DefGet"
                var_238 = 0xc17
                ecx_5 = "ptr->assetType == ASSET_TYPE_UI2"
        else
            var_234 = "UI2DefGet"
            var_238 = 0xc17
            ecx_5 = "ptr->assetType == ASSET_TYPE_UI2"
    else
        var_234 = "UI2DefGet"
        var_238 = 0xc17
        ecx_5 = "ptr->assetType == ASSET_TYPE_UI2"
    
    edx = &data_801800
else
    var_234 = "UI2DefGet"
    var_238 = 0xc16
    edx = "UI2DefGet on null pointer"
    ecx_5 = &data_874470

sub_63b870(eax_8, edx, ecx_5, "C:\x\ax2017\Engine\UI2.cpp", var_238, var_234)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

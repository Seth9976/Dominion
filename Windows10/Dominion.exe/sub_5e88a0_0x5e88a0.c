// 函数: sub_5e88a0
// 地址: 0x5e88a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (*(arg3 + 0x2c) == 3)
    uint32_t eax_2
    eax_2.b = *(arg3 + 0x90)
    char var_143_1 = eax_2.b
    uint32_t eax_3 = sub_5cdc20(eax_2, *(arg3 + 0x5c), *(arg3 + 0x58), *(arg3 + 0x6c))
    
    if (var_143_1 != eax_3.b && *(arg3 + 0x5c) != 0x454)
        *(arg3 + 0x84) = 0
        sub_5cdee0(eax_3, 0, arg3, 1)

bool var_143_2 = false
float xmm0 = sub_5e72a0(arg3 + 0x258)

if (*(arg3 + 0x1a18) != 0)
    var_143_2 = *(arg3 + 0x4a0) == 0xa

if (*(arg3 + 0x2c) != 0 || *(arg3 + 0x128) == 0 || not(0.899999976f f> *(arg3 + 0x12c)))
    sub_636940(arg3 + 0x258, data_8c4634)

float xmm1_3 = data_8c4634 * 5f
void* eax_5

if (*(arg3 + 0x1c28) == data_b7fcd0)
    eax_5 = sub_5ddf70()

float xmm0_2

if (*(arg3 + 0x1c28) != data_b7fcd0 || eax_5 != 5)
    xmm0_2 = *(arg3 + 0x1bd4) - xmm1_3
else
    xmm0_2 = xmm1_3 f+ *(arg3 + 0x1bd4)

int32_t xmm2 = (zx.o(0)).d
*(arg3 + 0x1bd4) = xmm0_2
int32_t xmm3

if (0f <= xmm0_2)
    xmm3 = _mm_min_ss(0x3f800000, xmm0_2)
else
    xmm3 = (zx.o(0)).d

int32_t eax_6 = *(arg3 + 0x1c28)
float xmm0_4 = *(arg3 + 0x1bd8)
*(arg3 + 0x1bd4) = xmm3
float xmm0_5

if (eax_6 != data_b7fcd0)
    xmm0_5 = xmm0_4 - xmm1_3
else
    xmm0_5 = xmm0_4 + xmm1_3

*(arg3 + 0x1bd8) = xmm0_5
int32_t xmm1_4

if (0f <= xmm0_5)
    xmm1_4 = _mm_min_ss(0x3f800000, xmm0_5)
else
    xmm1_4 = (zx.o(0)).d

*(arg3 + 0x1bd8) = xmm1_4
char var_142 = 0
int32_t xmm1_5

if (eax_6 != *(arg2 + 0x1cf64))
    int32_t ecx_4 = *(arg2 + 0x1f800)
    
    if (eax_6 == ecx_4 || (ecx_4 == 0 && eax_6 == *(arg2 + 0x1cf40)))
        xmm1_5 = data_8c4634 * 7.5f f+ *(arg3 + 0x1bd0)
    else
        xmm1_5 = *(arg3 + 0x1bd0) - data_8c4634 * 7.5f
    
    *(arg3 + 0x1bd0) = xmm1_5
else if (*(arg3 + 0x1a18) != 0)
    xmm1_5 = *(arg3 + 0x1bd0)
else
    *(arg3 + 0x1bd0) = 0
    xmm1_5 = (zx.o(0)).d

if (not(0 f> xmm1_5))
    xmm2 = _mm_min_ss(0x3f800000, xmm1_5)

*(arg3 + 0x1bd0) = xmm2
int32_t eax_7
float xmm0_8
eax_7, xmm0_8 = sub_5e72a0(arg3 + 0x258)
xmm0 f- 0
eax_7:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
bool p_3

if (not(p_1))
    xmm0_8 f- 0
    eax_7:1.b = (xmm0_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 0f) ? 1 : 0) << 2
        | (xmm0_8 < 0f ? 1 : 0)
    p_3 = unimplemented  {test ah, 0x44}

if (p_1 || p_3)
    xmm0 - 1f
    eax_7:1.b =
        (xmm0 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 1f) ? 1 : 0) << 2 | (xmm0 < 1f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    bool p_7
    
    if (not(p_5))
        xmm0_8 - 1f
        var_142 = 1
        eax_7:1.b = (xmm0_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, 1f) ? 1 : 0) << 2
            | (xmm0_8 < 1f ? 1 : 0)
        p_7 = unimplemented  {test ah, 0x44}
    
    if (p_5 || not(p_7))
        var_142 = 0

uint32_t eax_15

if (*(arg3 + 0x2c) != 3)
label_5e8c6f:
    char eax_20
    int32_t edx_2
    eax_20, edx_2 = sub_5d7b90(arg3)
    
    if (eax_20 == 0 && *(arg3 + 0x1ba0) != 0)
        edx_2 = sub_64e810(arg3 + 0x1ba0)
    
    if (var_142 != 0 && *(arg3 + 0x2c) == 0 && var_143_2 == 0 && *(arg3 + 0x4a0) != 0)
        sub_5cbb20(arg3)
        int32_t var_44[0xc]
        sub_6883d0(data_171e724, &var_44)
        edx_2 = sub_688660(&var_44, arg2, arg3)
    
    int32_t eax_21 = *(arg3 + 0x2c)
    int32_t ecx_20
    
    if (eax_21 != 2)
        if (eax_21 == 1 && *(arg3 + 0x174) == 0 && *(arg3 + 0x1a18) == 0)
            int32_t eax_22 = *(arg3 + 0x378)
            
            if (eax_22 == 0x21 || eax_22 == 0x22)
                goto label_5e8d5d
            
            ecx_20 = *(arg3 + 0x178)
            goto label_5e8d21
        
    label_5e8d5d:
        eax_15 = *(arg3 + 0x2c)
        
        if (eax_20 != 0)
            char const* const var_15c_2
            int32_t var_158_7
            char const* const var_154_11
            char* ecx_47
            
            if (eax_15 u> 8)
                var_154_11 = "DomGfxUpdate"
                var_158_7 = 0x5605
            label_5e90d3:
                var_15c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_47 = "Halt"
            label_5e90e2:
                sub_63b870(eax_15, &data_801800, ecx_47, var_15c_2, var_158_7, var_154_11)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t var_154_6
            
            switch (eax_15)
                case 0, 1
                    var_154_6 = 0
                    sub_5e4d80(eax_15, arg3, arg4, arg5)
                case 2
                    sub_5dba80(arg3)
                case 3
                    eax_15 = *(arg3 + 0x5c)
                    
                    if (eax_15 u> 0x48 || eax_15 == 3)
                        sub_5e7820(arg3, nullptr)
                    else
                        var_154_6 = 0
                        sub_5e4d80(eax_15, arg3, arg4, arg5)
                case 4, 6
                    void var_e0
                    int128_t* eax_27 = sub_5d77e0(&var_e0, edx_2, arg3, &var_e0)
                    int128_t var_90 = *eax_27
                    int128_t var_80_1 = eax_27[1]
                    sub_5dbca0(&var_90, arg3 + 0x1ba0, arg3, &var_90, sub_5d8610(arg3))
                    int32_t eax_30 = *(arg3 + 0x2c)
                    
                    if (eax_30 != 3 && (eax_30 != 4 || *(arg3 + 0x1bc) != 0x3f1) && eax_30 != 6)
                        uint32_t eax_31 = sub_64e7a0(*(arg3 + 0x1ba0))
                        sub_665db0(eax_31, &data_be31f0, eax_31, 0x3f800000, 0xffffffff, 0)
                    
                    sub_65d6e0(*(arg3 + 0x1ba0), data_8c4634)
                case 5
                    sub_5e1c50(arg2)
                case 7
                    sub_5db750(arg3)
                case 8
                    eax_15 = sub_5cba00(*(arg3 + 0x240))
                    int32_t ecx_40 = *(eax_15 + 0x2c)
                    void* eax_32
                    int32_t edx_10
                    
                    if (ecx_40 != 3)
                        if (ecx_40 != 0)
                            var_154_11 = "DomDeclareHint"
                            var_158_7 = 0x36f4
                            goto label_5e90d3
                        
                        eax_32, edx_10 = sub_5dc990(eax_15)
                    else
                        eax_32, edx_10 = sub_5e7360(eax_15)
                    
                    void var_c0
                    int128_t* eax_34 = sub_5d77e0(&var_c0, edx_10, arg3, &var_c0)
                    int128_t var_70 = *eax_34
                    int128_t var_60_1 = eax_34[1]
                    sub_5db9a0(&var_70, arg3 + 0x1ba0, arg3, &var_70, eax_32 + 1)
                    sub_65d6e0(*(arg3 + 0x1ba0), data_8c4634)
            
            void* ecx_46 = data_147abe8
            eax_15 = *(arg3 + 0x1bdc)
            
            if (ecx_46 == 0)
                var_154_11 = "GetGameData"
                var_158_7 = 0x45
                var_15c_2 = "C:\x\ax2017\Engine\Game.h"
                ecx_47 = "gpGameData"
                goto label_5e90e2
            
            void* ecx_48 = *(ecx_46 + 0x10)
            
            if (eax_15 != 0)
                uint32_t edx_12 = zx.d(eax_15.w)
                
                if (edx_12 u< *(ecx_48 + 4))
                    void* esi_4 = edx_12 * 0x7c + *ecx_48
                    
                    if (*(esi_4 + 0x78) == eax_15 && esi_4 != 0)
                        int32_t eax_38 = sub_66b2b0(eax_15, "itemCard", *(arg3 + 0x1ba0), 0)
                        float var_a0
                        float var_9c
                        float var_98
                        float var_94
                        int128_t xmm0_14
                        
                        if (eax_38 != 0)
                            uint32_t eax_39 = sub_64e7a0(eax_38)
                            var_a0 = 0f
                            var_9c = 0f
                            var_98 = *(eax_39 + 0x16cc)
                            var_94 = *(eax_39 + 0x16d0)
                            var_a0.o = var_a0.o
                            float var_110[0x4]
                            xmm0_14 = *sub_655430(&var_110, &var_a0, eax_39 + 0x1620, &var_110)
                        else
                            xmm0_14 = data_7ff520
                        
                        var_a0.o = xmm0_14
                        int32_t var_114 = 0
                        int128_t xmm0_18 = data_800248
                        float xmm2_4 = (var_a0 + var_98) * 0.5f
                        float var_118 = (var_9c + var_94) * 0.5f
                        float xmm1_14 = data_8c4634
                        *(esi_4 + 0x2c) = ((var_98 - var_a0) / 200f).o
                        float var_11c = xmm2_4
                        *(esi_4 + 0x3c) = xmm0_18
                        uint32_t eax_42 = sub_6bca30(esi_4, xmm1_14)
                        CookieCheckFunction(eax_42)
                        return eax_42
        else if (eax_15 == 0)
            int32_t edx_6
            eax_15, edx_6 = sub_5cdc20(eax_15, *(arg3 + 0xa4), *(arg3 + 0xa0), eax_15)
            
            if (eax_15.b != 0)
                void var_100
                int128_t* eax_25 = sub_5de520(&var_100, edx_6, arg3, &var_100)
                int128_t xmm1_9 = eax_25[1]
                *(arg3 + 0xc) = *eax_25
                *(arg3 + 0x1c) = xmm1_9
                CookieCheckFunction(eax_25)
                return eax_25
    else
        if (*(arg3 + 0x1a18) != 0 || *(arg3 + 0x378) == 0x25)
            goto label_5e8d5d
        
        ecx_20 = *(arg3 + 0x24c)
    label_5e8d21:
        
        if (ecx_20 == 0)
            eax_15 = sub_5cb5a0(arg3)
        else
            sub_5cba00(ecx_20)
            sub_5e88a0(arg4, arg5)
            eax_15 = sub_5cb5a0(arg3)
else
    int32_t eax_8 = *(arg3 + 0x5c)
    
    if (eax_8 != 0x3ee && eax_8 != 0x3ef && eax_8 != 0x3f0)
        goto label_5e8c6f
    
    int32_t eax_9 = sub_5d1210(eax_8, 0x3ee, *(arg3 + 0x58), *(arg3 + 0x60), *(arg3 + 0x64))
    int32_t eax_10 = sub_5d1210(eax_9, 0x3ef, *(arg3 + 0x58), *(arg3 + 0x60), *(arg3 + 0x64))
    
    if (eax_9 != 0 || eax_10 != eax_9
            || sub_5d1210(eax_10, 0x3f0, *(arg3 + 0x58), *(arg3 + 0x60), *(arg3 + 0x64)) != 0)
        goto label_5e8c6f
    
    int32_t ecx_10 = *(arg2 + 0x1f800)
    
    if (ecx_10 == 0)
    label_5e8bf0:
        
        if (data_b7fcf4 != *(arg3 + 0x1c28))
            eax_15 = sub_5cb5a0(arg3)
        else
            sub_5cbbf0(arg3)
            int32_t eax_17
            
            if (data_8db5c4 != 0x27)
                eax_17 = 0
                
                if (data_8db5d4 == 0x27)
                    eax_17 = data_8db5d8
            else
                eax_17 = data_8db5c8
            
            uint32_t eax_19 = sub_64e7a0(sub_4bb9f0(0x1a8cab0, eax_17, "tbl_player_reveal"))
            *(eax_19 + 0x138c) = 0
            *(eax_19 + 0x1390) = 0
            sub_67a770(eax_19, nullptr)
            sub_65bf00(eax_19)
            eax_15 = sub_5cb5a0(arg3)
    else
        uint32_t eax_12 = zx.d(ecx_10.w)
        
        if (eax_12 u>= data_b809e4)
            goto label_5e8bf0
        
        void* eax_14 = eax_12 * 0x1c30 + data_b809e0
        
        if (*(eax_14 + 0x1c28) != ecx_10 || eax_14 == 0)
            goto label_5e8bf0
        
        eax_15 = *(eax_14 + 0x1be0)
        
        if (eax_15 != 0x3ee && eax_15 != 0x3ef && eax_15 != 0x3f0)
            goto label_5e8bf0

CookieCheckFunction(eax_15)
return eax_15

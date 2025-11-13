// 函数: sub_681fe0
// 地址: 0x681fe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_10 = data_19e2754
int128_t var_20 = data_19e2744
float var_94
float var_84
int128_t* ecx
int128_t* edx
int128_t* result = sub_681e50(&var_20, edx, ecx, &var_20, &var_84, &var_94)

if (result.b != 0)
    void* eax_4 = data_147b06c
    float xmm0_1 = var_84
    float xmm2_2 = *(eax_4 + 0x124) * xmm0_1
    float xmm7_1 = *(eax_4 + 0x144)
    float xmm6_2 = *(eax_4 + 0x134) * xmm0_1
    float var_80
    float xmm2_4 = *(eax_4 + 0x148) * var_80
    float xmm3_2 = *(eax_4 + 0x138) * var_80
    float xmm4_2 = *(eax_4 + 0x128) * var_80
    float xmm1_3 = xmm7_1 * xmm0_1
    float xmm5_1 = *(eax_4 + 0x150)
    float var_5c = xmm2_2 + xmm4_2 f+ *(eax_4 + 0x130)
    float var_58_1 = xmm3_2 + xmm6_2 f+ *(eax_4 + 0x140)
    float var_54_1 = xmm2_4 + xmm1_3 + xmm5_1
    float var_7c
    float xmm6_4 = *(eax_4 + 0x124) * var_7c
    float xmm7_2 = xmm7_1 * var_7c
    float xmm6_6 = *(eax_4 + 0x134) * var_7c
    float xmm4_3 = *(eax_4 + 0x140)
    float var_48_1 = xmm2_4 + xmm7_2 + xmm5_1
    float var_50_1 = xmm6_4 + xmm4_2 f+ *(eax_4 + 0x130)
    float var_78
    float xmm2_8 = *(eax_4 + 0x138) * var_78
    float var_4c_1 = xmm3_2 + xmm6_6 + xmm4_3
    float xmm3_6 = *(eax_4 + 0x128) * var_78
    float xmm2_10 = *(eax_4 + 0x148) * var_78
    float xmm3_7 = *(eax_4 + 0x130)
    float var_44_1 = xmm2_2 + xmm3_6 + xmm3_7
    float var_40_1 = xmm6_2 + xmm2_8 + xmm4_3
    float var_3c_1 = xmm1_3 + xmm2_10 + xmm5_1
    float var_38_1 = xmm6_4 + xmm3_6 + xmm3_7
    float var_34_1 = xmm6_6 + xmm2_8 + xmm4_3
    float var_30_1 = xmm2_10 + xmm7_2 + xmm5_1
    
    if (arg3 == 0)
        sub_63b870(eax_4, &data_801800, "material", "C:\x\ax2017\Engine\Sprite.cpp", 0x18f, 
            "SpriteDrawRects")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm2_13 = var_94
    int128_t* var_a4_1 = ecx
    int32_t var_90
    int32_t var_28_1 = var_90
    var_20.d = var_90
    float var_2c = xmm2_13
    int32_t var_8c
    int32_t var_24_1 = var_8c
    var_20:4.d = xmm2_13
    int32_t var_88
    var_20:8.d = var_88
    var_20:0xc.d = var_8c
    int32_t var_10_1 = var_88
    result = sub_646580(&var_5c, &var_2c, &var_5c, arg1, 0, &var_5c, &data_7fef8c, arg2, 0, arg3)

CookieCheckFunction(result)
return result

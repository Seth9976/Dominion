// 函数: sub_646220
// 地址: 0x646220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
data_cf65c0.o = *arg1
data_cf65d0 = arg1[1]
uint128_t xmm1 = arg1[2]
data_cf65e0 = xmm1
data_cf65f0 = arg1[3].q
int64_t xmm0_3 = data_cf65e0:4.q
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
int64_t var_40 = xmm0_3
int128_t xmm0_4 = data_cf65d0:4.o
int128_t var_b0 = xmm0_4
int128_t var_50 = xmm0_4
int32_t var_38 = xmm1_1
int32_t eax_2 = sub_64b0d0(&var_50)
int32_t var_d8
char* ecx_1

if (eax_2.b != 0)
    uint32_t eax_3 = data_cf65b8
    int128_t xmm1_2 = var_b0
    data_cf664c = xmm1_2
    data_cf6664 = xmm1_1
    data_cf665c = xmm0_3
    
    if (*(eax_3 + 0x28) == 0)
        data_cf662c = xmm1_1
        data_cf6648 = xmm1_1
        data_cf6680 = xmm1_1
        data_cf6624 = xmm0_3
        data_cf6614 = xmm1_2
        data_cf6630 = xmm1_2
        data_cf6640 = xmm0_3
        data_cf6668 = xmm1_2
        data_cf6678 = xmm0_3
        CookieCheckFunction(eax_3)
        return eax_3
    
    int64_t xmm0_6 = data_147d21c.q
    float eax_4 = data_147d21c:8
    int128_t xmm0_7 = data_147d234
    var_b0 = xmm0_7
    int128_t var_90 = xmm0_7
    eax_2 = sub_64b0d0(&var_90)
    
    if (eax_2.b != 0)
        int64_t xmm0_8 = data_147d21c:0xc.q
        float eax_5 = data_147d230
        int128_t var_70 = data_147d244
        eax_2 = sub_64b0d0(&var_70)
        
        if (eax_2.b != 0)
            int32_t* edx = &var_50
            int128_t var_30 = var_b0
            float var_20 = (xmm0_8.d f- xmm0_6.d) * 0.5f f+ xmm0_6.d
            float var_1c = (xmm0_8:4.d f- xmm0_6:4.d) * 0.5f f+ xmm0_6:4.d
            float var_18 = (eax_5 - eax_4) * 0.5f + eax_4
            int128_t* eax_7 = sub_6dc740(&var_b0, edx, &var_90, &var_b0)
            data_cf6614 = *eax_7
            data_cf6624 = eax_7[1].q
            data_cf662c = *(eax_7 + 0x18)
            int128_t* eax_10 = sub_6dc740(&var_90, edx, &var_70, &var_90)
            data_cf6630 = *eax_10
            data_cf6640 = eax_10[1].q
            data_cf6648 = *(eax_10 + 0x18)
            int128_t* eax_13 = sub_6dc740(&var_70, edx, &var_30, &var_70)
            data_cf6668 = *eax_13
            data_cf6678 = eax_13[1].q
            uint32_t eax_14 = *(eax_13 + 0x18)
            data_cf6680 = eax_14
            CookieCheckFunction(eax_14)
            return eax_14
        
        char const* const var_d4_5 = "Draw3DSetCamera"
        var_d8 = 0x3e7
        ecx_1 = "QuatIsValid(eyeRight.orientation)"
    else
        char const* const var_d4_1 = "Draw3DSetCamera"
        var_d8 = 0x3e2
        ecx_1 = "QuatIsValid(eyeLeft.orientation)"
else
    char const* const var_d4 = "Draw3DSetCamera"
    var_d8 = 0x3d9
    ecx_1 = "QuatIsValid(mainPose.orientation)"

sub_63b870(eax_2, &data_801800, ecx_1, "C:\x\ax2017\Engine\Draw3d.cpp", var_d8, "Draw3DSetCamera")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

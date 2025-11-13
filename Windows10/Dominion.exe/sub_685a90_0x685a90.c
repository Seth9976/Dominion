// 函数: sub_685a90
// 地址: 0x685a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
float xmm0 = arg2[3]
float xmm3_1 = *arg2
float xmm2 = arg2[4]
xmm0 f- 0
float var_3c = xmm3_1
float var_38 = xmm2
int32_t eax_1
eax_1:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t var_d4
char const* const ecx

if (not(p_1))
    float xmm0_1 = arg2[1]
    xmm0_1 f- 0
    eax_1:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        int32_t var_20 = 0
        int32_t var_14 = 0
        int32_t var_28 = 0
        int32_t var_10 = 0
        int32_t var_c = 0x3f800000
        float var_2c = 1f / xmm3_1
        float var_1c = 1f / xmm2
        int32_t xmm3
        int32_t var_24 = xmm3
        int32_t var_18 = arg4
        int128_t var_6c
        sub_4ac390(&var_2c, arg2, &var_6c:8, &var_2c)
        float* edx = &var_2c
        int32_t var_44
        int32_t var_c_1 = var_44
        int128_t var_64
        var_2c.o = var_64
        int128_t var_54
        var_1c.o = var_54
        sub_4ac390(var_44, edx, &var_6c:8, &data_8002b0)
        int32_t var_c_2 = var_44
        var_2c.o = var_64
        var_1c.o = var_54
        void var_bc
        int32_t* eax_6 = sub_5b07e0(&var_bc, edx, &var_2c, &var_bc)
        float xmm1_2 = arg5 f* *arg2
        int32_t var_d0_3 = 0
        int128_t var_7c = *eax_6
        var_6c = *(eax_6 + 0x10)
        var_64 = *(eax_6 + 0x20)
        int128_t xmm0_11 = *(eax_6 + 0x30)
        float var_34 = xmm1_2
        var_54 = xmm0_11
        float var_30 = arg2[4] f* arg6
        int32_t* result = sub_684c00(&var_3c, 0, arg3, &var_3c, &var_34, 2.80259693e-45f, 
            &data_7ff530, 0f, &data_19e2744, &var_7c, arg7, nullptr, &data_7ff520)
        CookieCheckFunction(result)
        return result
    
    char const* const var_d0_4 = "DrawParented9SliceImage"
    var_d4 = 0xc70
    ecx = "aParentToScreen.m01 == 0.0f"
else
    char const* const var_d0 = "DrawParented9SliceImage"
    var_d4 = 0xc6f
    ecx = "aParentToScreen.m10 == 0.0f"

sub_63b870(eax_1, &data_801800, ecx, "C:\x\ax2017\Engine\Sprite.cpp", var_d4, 
    "DrawParented9SliceImage")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

// 函数: sub_6cc6d0
// 地址: 0x6cc6d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t esi
int32_t var_dc = esi
int32_t edi
int32_t var_e0 = edi
int32_t result_1
(*(*data_147d1b0 + 0x14))(&result_1)
float xmm0 = data_147d2b4:4
float xmm4 = data_147d2b4.d
float xmm2 = data_147d2b4:8
float xmm5 = data_147d2b4:0xc
float xmm1_1 = xmm0 * xmm0
float xmm0_1 = xmm0 * xmm4
float xmm3_1 = xmm4 * xmm4
float xmm7_1 = xmm2 * xmm2
float xmm4_2 = xmm2 * xmm5
float xmm6_1 = xmm5 * xmm5
float xmm2_2 = xmm0_1 - xmm4_2
float xmm4_4 = data_147d2b4:8 f* data_147d2b4.d
float var_90
float xmm2_4 = var_90 * 2f
float xmm1_3 = data_147d2b4:4 f* xmm5
float var_94
float xmm5_2 = var_94 * 2f
float xmm2_8 = xmm3_1 + xmm6_1 - xmm1_1 - xmm7_1
float xmm2_10 = xmm1_3 + xmm4_4
float var_8c
float xmm4_6 = var_8c * 2f
float xmm2_12 = xmm4_2 + xmm0_1
float xmm0_3 = xmm6_1 - xmm3_1
float xmm3_3 = data_147d2b4.d f* data_147d2b4:0xc
float xmm2_14 = xmm4_4 - xmm1_3
float xmm0_5 = xmm0_3 + xmm1_1 - xmm7_1
float xmm0_7 = data_147d2b4:8 f* data_147d2b4:4
float xmm1_5 = xmm3_3 + xmm0_7
float xmm3_5 = xmm0_7 - xmm3_3
float xmm0_10 = xmm0_3 - xmm1_1 + xmm7_1
float xmm7_2 = data_147d2b4:4
float var_94_1 = xmm2_2 * xmm2_4 + xmm2_8 * var_94 + xmm2_10 * xmm4_6
float var_90_1 = xmm0_5 * var_90 + xmm2_12 * xmm5_2 + xmm3_5 * xmm4_6
float var_80
float xmm2_16 = var_80 * 2f
float var_88
float xmm3_7 = var_88 * 2f
float var_8c_1 = xmm5_2 * xmm2_14 + xmm2_4 * xmm1_5 + var_8c * xmm0_10
float var_84
float xmm5_7 = var_84 * 2f
float var_88_1 = xmm2_2 * xmm5_7 + xmm2_8 * var_88 + xmm2_10 * xmm2_16
float var_80_1 = xmm5_7 * xmm1_5 + xmm3_7 * xmm2_14 + var_80 * xmm0_10
float var_84_1 = xmm0_5 * var_84 + xmm2_12 * xmm3_7 + xmm3_5 * xmm2_16
float xmm6_14 = data_147d2b4:8
float var_7c
float var_78
float var_74
float var_70
float var_c4 =
    var_70 f* data_147d2b4:0xc - var_7c f* data_147d2b4.d - var_78 * xmm7_2 - var_74 * xmm6_14
int32_t result = result_1
float var_cc =
    var_70 * xmm7_2 + var_78 f* data_147d2b4:0xc + var_7c * xmm6_14 - var_74 f* data_147d2b4.d
float var_c8 =
    var_70 * xmm6_14 + var_74 f* data_147d2b4:0xc + var_78 f* data_147d2b4.d - var_7c * xmm7_2
var_7c.o =
    (var_70 f* data_147d2b4.d + var_7c f* data_147d2b4:0xc + var_74 * xmm7_2 - var_78 * xmm6_14).o
float var_6c
float var_68
float var_64
float var_60
float var_c4_1 =
    var_60 f* data_147d2b4:0xc - var_6c f* data_147d2b4.d - var_68 * xmm7_2 - var_64 * xmm6_14
float var_cc_1 =
    var_60 * xmm7_2 + var_68 f* data_147d2b4:0xc + var_6c * xmm6_14 - var_64 f* data_147d2b4.d
float var_c8_1 =
    var_60 * xmm6_14 + var_64 f* data_147d2b4:0xc + var_68 f* data_147d2b4.d - var_6c * xmm7_2
var_6c.o =
    (var_60 f* data_147d2b4.d + var_6c f* data_147d2b4:0xc + var_64 * xmm7_2 - var_68 * xmm6_14).o

if (result != 3 && result != 0)
    __builtin_memcpy(&data_147d218, &result_1, 0x80)
    result = sub_64b0d0(&data_147d234)
    int32_t var_ec
    char const* const var_e8
    char* ecx_1
    
    if (result.b == 0)
        var_e8 = "VRUpdatePose"
        var_ec = 0x180
        ecx_1 = "QuatIsValid(gVR.currentHmdState.eyeOrientation[VR_EYE_LEFT])"
    label_6ccccc:
        sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\VR.cpp", var_ec, var_e8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = sub_64b0d0(&data_147d244)
    
    if (result.b == 0)
        var_e8 = "VRUpdatePose"
        var_ec = 0x181
        ecx_1 = "QuatIsValid(gVR.currentHmdState.eyeOrientation[VR_EYE_RIGHT])"
        goto label_6ccccc

if (data_147d2b1 != 0 || data_147d254 == 0)
    data_147d21c = data_893400
    data_147d22c = 0
    data_147d230 = 0
    __builtin_memcpy(&data_147d234, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x20)

CookieCheckFunction(result)
return result

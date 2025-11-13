// 函数: sub_66cc40
// 地址: 0x66cc40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t result_1 = arg2
int32_t ecx = data_c23be0
float var_58

if (ecx != 0 && ecx != arg1)
    arg2.b = 0
    sub_66ca90(__security_cookie ^ &var_58, arg2.b, ecx, 1)

void* eax_2 = data_147abe8
data_c23be0 = arg1
var_58 = *(eax_2 + 0x2c)
uint32_t result = sub_64e7a0(arg1)
uint32_t result_2 = result

if (*(result_2 + 0x15f8) == 3 && *(result_2 + 0x1568) != 0)
    if (*(result_2 + 0x1789) != 0)
        sub_63b870(result, &data_801800, "el.textBox.mHasFocus == false", 
            "C:\x\ax2017\Engine\UI2.cpp", 0x42e3, "UI2SetFocus")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    float xmm0_1 = *(result_2 + 0x16cc)
    float xmm0_2 = *(result_2 + 0x16d0)
    float var_30 = 0f
    float var_2c_1 = 0f
    var_30.o = var_30.o
    float var_40[0x4]
    float* eax_4 = sub_655430(&var_40, &var_30, result_2 + 0x1620, &var_40)
    float xmm3_1 = *(result_2 + 0x1620)
    float xmm2_1[0x4] = *eax_4
    *(result_2 + 0x1730) = xmm2_1
    float xmm0_6 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) f- xmm2_1
    float xmm1_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
    float xmm2_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) - xmm1_2
    *(result_2 + 0x1734) = xmm1_2
    float xmm1_3 = var_58
    *(result_2 + 0x1738) = xmm0_6
    *(result_2 + 0x173c) = xmm2_3
    float xmm2_5 = xmm1_3 f- *(result_2 + 0x370)
    float xmm4_2 = xmm3_1 f* *(result_2 + 0x151c)
    float xmm3_2 = xmm3_1 f* *(result_2 + 0x1520)
    bool cond:0_1 = *(result_2 + 0x360) f+ *(result_2 + 0x35c) > xmm2_5
    var_58 = xmm2_5
    float xmm2_6
    
    if (cond:0_1 || *(result_2 + 0x350) s> 1)
        float xmm0_9 = sub_67f6b0(result_2 + 0x2e4, xmm1_3 f- *(result_2 + 0x36c))
        float xmm0_10 = sub_67f6b0(result_2 + 0x320, var_58)
        xmm2_6 = sub_64c3c0(result_2 + 0x35c, var_58) * (xmm0_10 - xmm0_9) + xmm0_9
    else
        xmm2_6 = *(result_2 + 0x320)
    
    *(result_2 + 0x1758) = *(result_2 + 0x1508)
    *(result_2 + 0x175c) = *(result_2 + 0x1510)
    *(result_2 + 0x1760) = *(result_2 + 0x1518)
    *(result_2 + 0x1740) = xmm4_2 * xmm2_6
    *(result_2 + 0x1744) = xmm3_2 * xmm2_6
    sub_63d850(result_2 + 0x1720, result_2 + 0x15d8)
    *(result_2 + 0x172c) = 0
    char* eax_9 = *(result_2 + 0x1720)
    int32_t eax_11
    
    if (eax_9 == 0 || *eax_9 == 0)
        eax_11 = 0
    else
        eax_11 = *(sub_63d4e0(result_2 + 0x1720) + 8)
    
    *(result_2 + 0x1724) = eax_11
    sub_64c550(result_2 + 0x14, *(data_147abe8 + 0x2c), &var_30)
    int32_t* eax_14 = *SteamInternal_ContextInit(&data_cb4524)
    
    if (eax_14 != 0)
        float xmm0_16 = sub_4d5cf0(xmm0_2 - var_2c_1)
        float xmm0_17
        
        if (0 f<= xmm0_16)
            xmm0_17 = xmm0_16 + 0.5f
        else
            xmm0_17 = xmm0_16 - 0.5f
        
        float xmm0_20 = sub_4d5cf0(xmm0_1 - var_30)
        float xmm0_21
        
        if (0 f<= xmm0_20)
            xmm0_21 = xmm0_20 + 0.5f
        else
            xmm0_21 = xmm0_20 - 0.5f
        
        float xmm0_23 = sub_4d5cb0(var_2c_1)
        float xmm0_24
        
        if (0 f<= xmm0_23)
            xmm0_24 = xmm0_23 + 0.5f
        else
            xmm0_24 = xmm0_23 - 0.5f
        
        float xmm0_26 = sub_4d5cb0(var_30)
        float xmm0_27
        
        if (0 f<= xmm0_26)
            xmm0_27 = xmm0_26 + 0.5f
        else
            xmm0_27 = xmm0_26 - 0.5f
        
        eax_14 =
            (*(*eax_14 + 0x8c))(0, int.d(xmm0_27), int.d(xmm0_24), int.d(xmm0_21), int.d(xmm0_17))
    
    *(result_2 + 0x1789) = 1
    sub_665db0(eax_14, &data_c21430, result_2, 0x3f800000, 0xfffffc18, 0)
    result = result_1
    
    if (result != 0)
        result = sub_6ea940(result_2 + 0x1720, 1, result)

CookieCheckFunction(result)
return result

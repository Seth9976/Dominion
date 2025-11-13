// 函数: sub_66b600
// 地址: 0x66b600
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
float var_30 = 0f
int32_t var_2c = 0
int32_t var_28 = *(arg1 + 0x16cc)
int32_t var_24 = *(arg1 + 0x16d0)
int32_t var_84 = arg2
var_30.o = var_30.o
int128_t var_a0
float* eax_3 = sub_655430(&var_a0, &var_30, arg1 + 0x1620, &var_a0)
float xmm0_3[0x4] = *eax_3
float xmm1_2 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0xaa) f- xmm0_3
var_a0 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0xff) - _mm_shuffle_ps(xmm0_3, xmm0_3, 0x55)
int32_t var_e8
char const* const var_e4_1
char* ecx_1
bool cond:0

if (arg2 != 0xffffffff)
    cond:0 = arg2 != 0
label_66b6ca:
    
    if (not(cond:0))
        CookieCheckFunction(0)
        return 0
    
    int32_t esi_2 = *(arg1 + 0x14e8)
    
    if (esi_2 == 0)
        CookieCheckFunction(0)
        return 0
    
    int32_t var_e4_2 = 0
    void var_60
    void var_50
    void var_40
    int128_t* eax_5 = sub_656980(&var_40, 0, arg1, &var_40, &var_60, &var_50)
    int32_t var_f4_1 = 0
    int128_t var_80 = *eax_5
    var_30.o = eax_5[1]
    eax_3 = sub_656980(&var_80, 1, arg1, &var_80, &var_60, &var_50)
    float xmm1_6[0x4] = var_30.o
    float xmm3_1[0x4] = *(eax_3 + 0x10)
    int128_t var_d0_1 = *eax_3
    int128_t xmm2_3 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55) - _mm_shuffle_ps(xmm1_6, xmm1_6, 0x55)
    float xmm3_3 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa) - _mm_shuffle_ps(xmm1_6, xmm1_6, 0xaa)
    var_30.o = xmm2_3
    
    if (esi_2 == 1)
        float xmm2_4 = *(arg1 + 0x1390)
        float xmm0_25 = _mm_max_ss(0, (xmm2_4 ^ (data_8937c0.o).d) / xmm3_3)
        sub_4d5cf0((var_a0.d - xmm2_4) / xmm3_3)
        float xmm0_32 = sub_4d5cb0(xmm0_25)
        float xmm0_33
        
        if (0 f<= xmm0_32)
            xmm0_33 = xmm0_32 + 0.5f
        else
            xmm0_33 = xmm0_32 - 0.5f
        
        int32_t eax_9 = int.d(xmm0_33)
        CookieCheckFunction(eax_9)
        return eax_9
    
    if (esi_2 == 2)
        float xmm0_15 =
            sub_4d5cb0((*(arg1 + 0x138c) ^ (data_8937c0.o).d) f/ xmm2_3 - 9.99999975e-06f + 1f)
        float xmm0_16
        
        if (0 f<= xmm0_15)
            xmm0_16 = xmm0_15 + 0.5f
        else
            xmm0_16 = xmm0_15 - 0.5f
        
        int32_t esi_6 = int.d(xmm0_16)
        
        if (0 f<= sub_4d5cf0((xmm1_2 f- *(arg1 + 0x138c)) / var_30 + 9.99999975e-06f - 1f))
            CookieCheckFunction(esi_6)
            return esi_6
        
        CookieCheckFunction(esi_6)
        return esi_6
    
    if (esi_2 == 3)
        *(arg1 + 0x14c0)
        CookieCheckFunction(0)
        return 0
    
    var_e4_1 = "UI2TableGetRangeInt"
    var_e8 = 0x3fd0
    ecx_1 = "Halt"
else
    int32_t esi_1 = *(arg1 + 0x189c)
    var_84 = esi_1
    cond:0 = esi_1 != 0
    
    if (esi_1 s>= 0)
        goto label_66b6ca
    
    var_e4_1 = "UI2::countChildren"
    var_e8 = 0xba8
    ecx_1 = "numChildren >= 0"
sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_e8, var_e4_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

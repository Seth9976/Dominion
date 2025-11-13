// 函数: sub_65de30
// 地址: 0x65de30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d06d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_12c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm0 = *(arg1 + 0x1680)
xmm0 f- 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3
eax_3:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

char* var_28
sub_65db40(&var_28, arg1)
int32_t var_14_1 = 0
char* ecx_3 = var_28
float result

if (ecx_3 == 0 || *ecx_3 == 0)
    result = 0f
else
    float xmm2_1 = *(data_147abe8 + 0x2c)
    float xmm1_2 = xmm2_1 f- *(arg1 + 0x370)
    float result_1
    void* eax_5
    float xmm5_1
    
    if (*(arg1 + 0x360) f+ *(arg1 + 0x35c) > xmm1_2 || *(arg1 + 0x350) s> 1)
        result_1 = sub_67f6b0(arg1 + 0x2e4, xmm2_1 f- *(arg1 + 0x36c))
        float xmm0_4 = sub_67f6b0(arg1 + 0x320, xmm1_2)
        float xmm0_5
        eax_5, xmm0_5 = sub_64c3c0(arg1 + 0x35c, xmm1_2)
        ecx_3 = var_28
        xmm5_1 = (xmm0_4 - result_1) * xmm0_5 + result_1
    else
        xmm5_1 = *(arg1 + 0x320)
    
    float xmm0_7 = xmm5_1 f* *(arg1 + 0x1620)
    xmm0_7 f- 0
    eax_5:1.b = (xmm0_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
        | (xmm0_7 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        result = 0f
    else
        float xmm2_3[0x4] = *(arg1 + 0x1554)
        float xmm3_1 = *(arg1 + 0x1428)
        float xmm4_1 = *(arg1 + 0x16cc)
        float xmm1_8 = xmm3_1 * _mm_shuffle_ps(xmm2_3, xmm2_3, 0x55) + 0f
        float xmm0_11 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xaa)
        float xmm7_3 = xmm3_1 f* xmm2_3 + 0f
        float xmm3_2 = xmm3_1 * _mm_shuffle_ps(xmm2_3, xmm2_3, 0xff)
        float xmm4_2 = xmm4_1 - xmm3_1 * xmm0_11
        
        if (xmm7_3 >= xmm4_2 || not(xmm1_8 < *(arg1 + 0x16d0) - xmm3_2))
            xmm4_2 = *(arg1 + 0x16cc)
            xmm7_3 = (zx.o(0)).d
        
        float var_24_3 = (xmm4_2 - xmm7_3) * 1f / xmm5_1
        void var_a8
        memset(&var_a8, 0, 0x78)
        void* edi_2 = *fsbase->ThreadLocalStoragePointer
        
        if (data_1a99248 s> *(edi_2 + 8))
            sub_75970e(&data_1a99248)
            
            if (data_1a99248 == 0xffffffff)
                int32_t* var_130_3 = &data_1a99248
                data_1a9924c = *(arg1 + 0x1508)
                __Init_thread_footer(var_130_3)
        
        int32_t* var_a4_1 = &data_1a9924c
        
        if (data_1a99250 s> *(edi_2 + 8))
            sub_75970e(&data_1a99250)
            
            if (data_1a99250 == 0xffffffff)
                int32_t* var_130_5 = &data_1a99250
                data_1a99254 = *(arg1 + 0x1510)
                __Init_thread_footer(var_130_5)
        
        int32_t var_44_1 = *(arg1 + 0x1518)
        int32_t var_60_1 = *(arg1 + 0x1540)
        int32_t var_5c_1 = *(arg1 + 0x1548)
        int32_t* var_48_1 = &data_1a99254
        int32_t var_98_1 = *(arg1 + 0x1404)
        int32_t var_88_1 = 0x3f800000
        int32_t var_84_1 = *(arg1 + 0x154c)
        int32_t var_50_1 = sub_65d960(*(arg1 + 0x1524))
        int32_t eax_12
        eax_12.b = *(arg1 + 0x1528)
        char var_4c_1 = eax_12.b
        int32_t* var_130_6 = &result_1
        int32_t var_c8_1 = 3
        void var_120
        sub_6b73c0(&var_120, data_c23bf4, __builtin_memcpy(&var_120, &var_a8, 0x78), &var_120, 0)
        result = result_1
        ecx_3 = var_28

int32_t var_14_2 = 1

if (data_cf65bc != 0 && ecx_3 != 0 && *ecx_3 != 0)
    char* eax_14 = sub_63d4e0(&var_28)
    int32_t temp0_1 = *(eax_14 + 4)
    *(eax_14 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result

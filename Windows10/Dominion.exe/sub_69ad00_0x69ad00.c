// 函数: sub_69ad00
// 地址: 0x69ad00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76f115
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_114 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm2 = *(arg3 + 0x148)
float xmm1 = *(arg3 + 0x14c)
float xmm0 = arg4[3]
float xmm0_2 = xmm2 f+ *(arg3 + 0x10)
float xmm2_1 = xmm2 f+ *(arg3 + 0x18)
void* var_58 = arg5
void* var_4c = arg6
float var_68 = xmm0_2
float xmm0_4 = xmm1 f+ *(arg3 + 0x14)
float xmm1_1 = xmm1 f+ *(arg3 + 0x1c)
int32_t* var_54 = arg4
int128_t var_80 = var_68.o
float var_90[0x4]
float* eax_7 = sub_697400(&var_90, &var_80, arg4, &var_90, arg3 + 0x20)
bool cond:0 = arg2[0x57].b == 0
int128_t xmm0_6 = *eax_7
var_68.o = xmm0_6
var_80 = xmm0_6
void* result

if (cond:0)
    result = data_cf65b8
    
    if (*(result + 0x28) != 0 || *(result + 0x39) != 0)
    label_69aea5:
        result = sub_69ac90(arg2, arg3)
        char* result_2 = result
        char* result_1 = result_2
        
        if (*result_2 != 0)
            if (var_58 == 0)
                void* eax_10 = &arg2[0x1c]
                
                if (arg2[0x1b] s<= *arg2)
                    eax_10 = arg3 + 0xf0
                
                var_58 = eax_10
            
            void* edi_1
            
            if (var_4c != 0)
                edi_1 = var_4c
            else if (arg2[0x1d] s<= *arg2)
                edi_1 = arg3 + 0xf4
            else
                edi_1 = &arg2[0x1e]
            
            if (data_147ac24 == 0)
                goto label_69b118
            
            int32_t eax_12 = strchr(result_2, 0x7b)
            
            if (eax_12 != 0)
                float xmm0_13 = xmm0 f* *(arg3 + 0xf8)
                var_80 = var_80
                
                if (not(xmm0_13 <= 9.99999975e-06f))
                    float xmm3_3 = var_68
                    
                    if (xmm2_1 < xmm3_3 || xmm1_1 < xmm0_4)
                        sub_63b870(eax_12, &data_801800, "RectIsNormalized(r)", 
                            "C:\x\ax2017\Engine\Rect.cpp", 0x12d, "RectBottomRight")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    float xmm5_1 = 1f / xmm0_13
                    var_68 = xmm3_3 * xmm5_1
                    float var_60_1 = xmm2_1 * xmm5_1
                    float var_64_1 = xmm0_4 * xmm5_1
                    float var_5c_1 = xmm1_1 * xmm5_1
                    var_80 = var_68.o
                
                void var_108
                memset(&var_108, 0, 0x78)
                int32_t* ecx_4 = var_54
                int32_t var_e8_1 = 0x3f800000
                int32_t var_f4_1 = *var_58
                int32_t var_f0_1 = *edi_1
                var_58 = *(arg3 + 0xe8)
                void** var_104_1 = &var_58
                int32_t var_f8_1 = *(arg3 + 0xfc)
                var_4c = 0xffffffff
                float xmm0_17 = _mm_cvtepi32_ps(0xff) f* ecx_4[2]
                float xmm0_18
                
                if (0 f<= xmm0_17)
                    xmm0_18 = xmm0_17 + 0.5f
                else
                    xmm0_18 = xmm0_17 - 0.5f
                
                var_4c:3.b = (int.d(xmm0_18)).b
                int128_t* ecx_6
                result, ecx_6 = sub_63d720(&result_1, result_1)
                int32_t var_14_1 = 0
                float xmm2_8 = xmm0 f* *(arg3 + 0xf8)
                xmm2_8 - 0f
                result:1.b = (xmm2_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_8, 0f) ? 1 : 0) << 2
                    | (xmm2_8 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    int128_t xmm0_19 = data_8002b0
                    int128_t xmm1_6 = data_8002c0
                    int128_t var_48
                    __builtin_memcpy(&var_48, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
                    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x24)
                    void* var_118_1 = &var_108
                    var_48.d = xmm0_19 f* xmm2_8
                    var_48:4.d = var_48:4.d * xmm2_8
                    int128_t var_38
                    var_38.d = xmm1_6 f* xmm2_8
                    var_48:8.d = var_48:8.d * xmm2_8
                    var_48:0xc.d = var_48:0xc.d * xmm2_8
                    var_38:4.d = var_38:4.d * xmm2_8
                    var_38:8.d = var_38:8.d * xmm2_8
                    var_38:0xc.d = var_38:0xc.d * xmm2_8
                    float var_28
                    float var_28_1 = var_28 * xmm2_8
                    result = sub_6b76e0(&var_80, &var_48, ecx_6, &var_80, data_147ac24, var_4c)
                
                int32_t var_14_2 = 1
                goto label_69b2a6
            
            result_2 = result_1
        label_69b118:
            int32_t eax_20
            
            if (*(arg3 + 0x100) == 0)
                eax_20 = strchr(result_2, 0xd)
            
            if (*(arg3 + 0x100) != 0 || eax_20 != 0)
                void* eax_31 = *edi_1
                int32_t* ecx_8 = var_54
                var_4c = eax_31
                float xmm3_6 = ecx_8[2]
                float xmm0_47 = _mm_cvtepi32_ps(zx.o(eax_31 u>> 0x18)) * xmm3_6
                float xmm0_48
                
                if (0 f<= xmm0_47)
                    xmm0_48 = xmm0_47 + 0.5f
                else
                    xmm0_48 = xmm0_47 - 0.5f
                
                var_4c:3.b = (int.d(xmm0_48)).b
                int32_t* eax_35 = *var_58
                var_54 = eax_35
                float xmm0_51 = _mm_cvtepi32_ps(zx.o(eax_35 u>> 0x18)) * xmm3_6
                float xmm0_52
                
                if (0 f<= xmm0_51)
                    xmm0_52 = xmm0_51 + 0.5f
                else
                    xmm0_52 = xmm0_51 - 0.5f
                
                var_54:3.b = (int.d(xmm0_52)).b
                int32_t eax_38
                int32_t ecx_10
                eax_38, ecx_10 = sub_63d720(&result_1, result_1)
                int32_t var_14_3 = 2
                int32_t var_118_3 = 0
                int32_t var_11c_5 = 0
                result = sub_6b74d0(eax_38, &var_68, ecx_10, *(arg3 + 0xe8), var_54, var_4c, 
                    *(arg3 + 0xfc), xmm0 f* *(arg3 + 0xf8))
                int32_t var_14_4 = 3
            label_69b2a6:
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp1_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp1_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
            else
                void* eax_21 = *edi_1
                int32_t* ecx_7 = var_54
                var_4c = eax_21
                float xmm3_5 = ecx_7[2]
                float xmm0_37 = _mm_cvtepi32_ps(zx.o(eax_21 u>> 0x18)) * xmm3_5
                float xmm0_38
                
                if (0 f<= xmm0_37)
                    xmm0_38 = xmm0_37 + 0.5f
                else
                    xmm0_38 = xmm0_37 - 0.5f
                
                var_4c:3.b = (int.d(xmm0_38)).b
                var_54 = var_4c
                void* eax_26 = *var_58
                var_4c = eax_26
                float xmm0_41 = _mm_cvtepi32_ps(zx.o(eax_26 u>> 0x18)) * xmm3_5
                float xmm0_42
                
                if (0 f<= xmm0_41)
                    xmm0_42 = xmm0_41 + 0.5f
                else
                    xmm0_42 = xmm0_41 - 0.5f
                
                int32_t var_118_2 = *(arg3 + 0xfc)
                struct _EXCEPTION_REGISTRATION_RECORD*** edx_4 = *(arg3 + 0xe8)
                char* result_3 = result_1
                float xmm0_44 = xmm0 f* *(arg3 + 0xf8)
                var_4c:3.b = (int.d(xmm0_42)).b
                var_4c = var_4c
                int32_t var_120
                result = sub_6b40d0(&var_68, edx_4, result_3, &var_68, &var_4c, &var_54, var_120, 
                    xmm0_44)
    else if (not(0f > xmm2_1) && not(var_68 f> _mm_cvtepi32_ps(zx.o(*(result + 0x14))))
            && not(0 f> xmm1_1) && not(xmm0_4 f> _mm_cvtepi32_ps(zx.o(*(result + 0x18)))))
        goto label_69aea5
else
    float xmm0_7 = var_68
    int32_t* ecx_1 = var_54
    arg2[0x5c] = xmm0_7
    arg2[0x5d] = xmm0_4
    arg2[0x60] = 0
    arg2[0x5e] = xmm2_1 - xmm0_7
    arg2[0x61] = 0
    arg2[0x5f] = xmm1_1 - xmm0_4
    arg2[0x6a] = *(arg3 + 0xf8) f* ecx_1[3]
    arg2[0x71] = *(arg3 + 0x118)
    result = sub_6eade0(&arg2[0x58])

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

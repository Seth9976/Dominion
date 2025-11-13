// 函数: sub_6b1ec0
// 地址: 0x6b1ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char var_40 = arg2.b
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6a0f60(*(arg1 + 0x58))
void* edi = data_147b078
void* const edx

if (result != 0)
    uint32_t ecx_5 = zx.d(result.w)
    
    if (ecx_5 u< *(edi + 0x3c))
        edx = ecx_5 * 0x24c + *(edi + 0x38)
        
        if (*(edx + 0x248) != result)
            edx = nullptr
    else
        edx = nullptr
else
    edx = nullptr

if (arg3 == 0)
    int32_t var_58_1 = *(edx + 0x30)
    float var_30 = _mm_cvtepi32_ps(zx.o(var_40)) / 255f
    float var_2c_1 = _mm_cvtepi32_ps(zx.o((arg2 u>> 8).b)) / 255f
    float xmm0_8 = _mm_cvtepi32_ps(zx.o((arg2 u>> 0x10).b))
    int32_t* eax_10 = *(arg1 + 8)
    float var_28_1 = xmm0_8 / 255f
    float var_24_1 = _mm_cvtepi32_ps(zx.o(arg2 u>> 0x18)) / 255f
    var_30.o = var_30.o
    result = (*(*eax_10 + 0xc8))(eax_10, var_58_1, &var_30)

struct _EXCEPTION_REGISTRATION_RECORD** ecx_7 = *(arg1 + 0x5c)

if (ecx_7 != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_11 = sub_6a0f60(ecx_7)
    void* edi_1 = data_147b078
    uint32_t ecx_8
    
    if (eax_11 != 0)
        ecx_8 = zx.d(eax_11.w)
    
    void* const edx_2
    
    if (eax_11 == 0 || ecx_8 u>= *(edi_1 + 0x3c))
        edx_2 = nullptr
    else
        edx_2 = ecx_8 * 0x24c + *(edi_1 + 0x38)
        
        if (*(edx_2 + 0x248) != eax_11)
            edx_2 = nullptr
    
    int32_t* eax_12 = *(arg1 + 8)
    int32_t ecx_9 = *eax_12
    int32_t var_58_2 = ecx_9
    result = (*(ecx_9 + 0xd4))(eax_12, *(edx_2 + 0x24), 1, 0x3f800000, 0)

CookieCheckFunction(result)
return result

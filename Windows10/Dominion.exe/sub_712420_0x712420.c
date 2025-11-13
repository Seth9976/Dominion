// 函数: sub_712420
// 地址: 0x712420
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = arg2
void* var_c = esi
float xmm0 = *(esi + 0x30)
float xmm1 = *(esi + 0x2c)
float xmm0_1[0x2] = xmm0 - xmm1
float var_30 = xmm0_1
double xmm0_2 = _mm_cvtps_pd(xmm0_1)
double var_2c = _mm_cvtps_pd(*(esi + 0x44))
_CIfmod()
void* ecx = arg1
int32_t edi = 0
float var_10 = fconvert.s(fconvert.t(xmm0_2))
void* result_2 = *(ecx + 0x1c)
void* const result = *(ecx + 0x20)
void* const result_1 = result

if (result_2 s> 0)
    float xmm1_1 = var_10
    
    do
        result = *(result + (edi << 2))
        var_2c:4.d = result
        int32_t xmm0_5 = *(result + 4)
        
        if (xmm1_1 f> xmm0_5)
            break
        
        if (not(xmm0_5 f> xmm0))
            void* esi_1 = *(ecx + 0x24)
            sub_710f50(esi_1)
            *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = 5
            *(esi_1 + 8) += 1
            sub_710f50(esi_1)
            *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = var_c
            *(esi_1 + 8) += 1
            sub_710f50(esi_1)
            xmm1_1 = var_10
            *(*(esi_1 + 4) + (*(esi_1 + 8) << 2)) = var_2c:4.d
            *(esi_1 + 8) += 1
            ecx = arg1
        
        result = result_1
        edi += 1
    while (edi s< result_2)
    
    esi = var_c

if (*(esi + 0x18) != 0)
    var_30 - 0f
    result:1.b = (var_30 == 0f ? 1 : 0) << 6 | (is_unordered.d(var_30, 0f) ? 1 : 0) << 2
        | (var_30 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    int32_t xmm0_10
    
    if (p_2)
        double var_3c_1 = _mm_cvtps_pd(*(esi + 0x40))
        _CIfmod()
        xmm0_10 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(xmm0_2))))
    
    if (not(p_2) || var_10 f> xmm0_10)
        result = 1
    else
        result = nullptr
    
    if (result != 0)
        goto label_71256c
else if (not(arg3 f< xmm0) && not(xmm0 f<= *(esi + 0x34)))
label_71256c:
    void* esi_3 = *(arg1 + 0x24)
    sub_710f50(esi_3)
    *(*(esi_3 + 4) + (*(esi_3 + 8) << 2)) = 3
    *(esi_3 + 8) += 1
    sub_710f50(esi_3)
    result = *(esi_3 + 4)
    *(result + (*(esi_3 + 8) << 2)) = var_c
    *(esi_3 + 8) += 1

if (edi s< result_2)
    float xmm0_12 = xmm1
    result = result_2
    void* const result_3 = result_1
    
    do
        void* ebx = *(result_3 + (edi << 2))
        
        if (not(xmm0_12 f> *(ebx + 4)))
            void* esi_4 = *(arg1 + 0x24)
            sub_710f50(esi_4)
            *(*(esi_4 + 4) + (*(esi_4 + 8) << 2)) = 5
            *(esi_4 + 8) += 1
            sub_710f50(esi_4)
            *(*(esi_4 + 4) + (*(esi_4 + 8) << 2)) = var_c
            *(esi_4 + 8) += 1
            sub_710f50(esi_4)
            xmm0_12 = xmm1
            *(*(esi_4 + 4) + (*(esi_4 + 8) << 2)) = ebx
            *(esi_4 + 8) += 1
            result = result_2
            result_3 = result_1
        
        edi += 1
    while (edi s< result)

return result

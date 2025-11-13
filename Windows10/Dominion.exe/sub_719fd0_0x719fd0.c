// 函数: sub_719fd0
// 地址: 0x719fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* edi = arg3
void* var_18 = edi
int32_t eax
eax.b = arg4 > 1f

if (eax != 0)
    int32_t var_50 = arg7
    int32_t eax_2 = (&data_cb3cb0)[arg7 * 2](1f / arg4)
    int32_t esi = 0
    float var_14 = fconvert.s(arg5 * fconvert.t(arg4))
    int16_t top = 1
    
    if (arg10 s<= 0)
        return eax_2
    
    int32_t eax_8
    
    do
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(esi)) + 0.5f
        int32_t eax_5 = arg2 + ((sub_7198c0(arg7, arg4) * esi) << 2)
        double var_3c_1 = _mm_cvtps_pd((xmm0_3 + var_14 + arg8) / arg4) - 0.5
        unimplemented  {fld st0, qword [ebp-0x38]}
        double var_60_1 = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        int32_t ecx_3
        int32_t edx
        ecx_3, edx = floor()
        var_60_1:4.d = sub_7622d0(ecx_3, edx, (xmm0_3 + arg8) / arg4, edi, eax_5)
        double var_3c_2 = _mm_cvtps_pd((xmm0_3 - var_14 + arg8) / arg4) + 0.5
        unimplemented  {fld st0, qword [ebp-0x38]}
        double _X = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        int32_t ecx_4
        int32_t edx_1
        ecx_4, edx_1 = floor(_X)
        int32_t eax_7 = sub_7622d0(ecx_4, edx_1, unimplemented  {call 0x7622d0})
        top += 1
        eax_8 = sub_7199f0(eax_7, eax_7, arg7, arg4)
        esi += 1
        edi += 8
    while (esi s< arg10)
    
    return eax_8

int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(sub_719800(arg7, arg4, arg5))
int32_t var_50_3 = arg9
int32_t esi_1 = arg9 + ((eax_10 - edx_3) s>> 1 << 1)
int32_t eax_14 = (&data_cb3cb0)[arg7 * 2](arg4)
int32_t ebx_2 = 0
int32_t var_30_1 = 0
float var_20_1 = fconvert.s(arg6 / fconvert.t(arg4))
int16_t top_9 = 2

if (esi_1 s> 0)
    do
        int32_t eax_16
        int32_t edx_4
        edx_4:eax_16 = sx.q(sub_719800(arg7, arg4))
        float xmm0_22 = _mm_cvtepi32_ps(zx.o(ebx_2 - ((eax_16 - edx_4) s>> 1))) + 0.5f
        double var_3c_3 = _mm_cvtps_pd((xmm0_22 - var_20_1) * arg4 - arg8) + 0.5
        unimplemented  {fld st0, qword [ebp-0x38]}
        float _X_1
        _X_1.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        floor(_X_1)
        double var_3c_4 = fconvert.d(unimplemented  {fstp qword [ebp-0x38], st0})
        unimplemented  {fstp qword [ebp-0x38], st0}
        double var_2c_1 = _mm_cvtps_pd((xmm0_22 + var_20_1) * arg4 - arg8) - 0.5
        unimplemented  {fld st0, qword [ebp-0x28]}
        _X_1.q = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        floor(_X_1)
        double var_2c_2 = fconvert.d(unimplemented  {fstp qword [ebp-0x28], st0})
        unimplemented  {fstp qword [ebp-0x28], st0}
        int32_t esi_2 = int.d(fconvert.t(var_2c_2))
        top_9 += 2
        int32_t eax_20 = sub_7198c0(arg7, arg4) * ebx_2
        *(edi + (ebx_2 << 3) + 4) = esi_2
        int32_t edx_5 = arg2 + (eax_20 << 2)
        eax_14 = int.d(fconvert.t(var_3c_4))
        var_2c_2:4.d = edx_5
        int32_t esi_3 = esi_2 - eax_14
        *(edi + (ebx_2 << 3)) = eax_14
        int32_t edi_1 = 0
        
        if (esi_2 - eax_14 s>= 0)
            do
                (*((arg7 << 3) + &data_cb3cac))(
                    _mm_cvtepi32_ps(zx.o(eax_14 + edi_1)) + 0.5f - (xmm0_22 * arg4 - arg8), arg4)
                unimplemented  {fmul st0, dword [ebp-0x4]}
                eax_14 = int.d(fconvert.t(var_3c_4))
                *(edx_5 + (edi_1 << 2)) = fconvert.s(unimplemented  {fstp dword [ebx+edi*4], st0})
                unimplemented  {fstp dword [ebx+edi*4], st0}
                top_9 += 1
                edi_1 += 1
            while (edi_1 s<= esi_3)
            
            ebx_2 = var_30_1
            int32_t temp1_1
            
            do
                float xmm0_39 = *(var_2c_2:4.d + (esi_3 << 2))
                xmm0_39 f- 0
                eax_14:1.b = (xmm0_39 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_39, 0f) ? 1 : 0) << 2 | (xmm0_39 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    break
                
                eax_14 = *(var_18 + (ebx_2 << 3)) - 1 + esi_3
                temp1_1 = esi_3
                esi_3 -= 1
                *(var_18 + (ebx_2 << 3) + 4) = eax_14
            while (temp1_1 - 1 s>= 0)
        
        edi = var_18
        ebx_2 += 1
        var_30_1 = ebx_2
    while (ebx_2 s< esi_1)

return sub_719be0(eax_14, arg2, edi, arg4, arg7, arg9, arg10)

// 函数: sub_719be0
// 地址: 0x719be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int128_t xmm0 = arg4
float var_68 = xmm0
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t ebx = arg2
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_4c = ebx
int32_t eax
eax.b = xmm0 f> 1f
int32_t eax_1
int16_t top

if (eax == 0)
    long double x87_r0
    int32_t eax_2 = sub_719800(arg5, xmm0.d, x87_r0)
    top = 1
    xmm0 = var_68
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(eax_2)
    eax_1 = arg6 + ((eax_3 - edx) s>> 1 << 1)
else
    eax_1 = arg7

int32_t eax_6 = sub_7198c0(arg5, xmm0)
int16_t top_1 = top + 1
int32_t ecx_3 = eax_1
int32_t esi_1 = 0
int32_t result = arg7

if (result s> 0)
    do
        int32_t xmm0_1 = (zx.o(0)).d
        int32_t edi = 0
        int32_t var_60_1 = 0
        
        if (ecx_3 s> 0)
            void* eax_7 = arg3
            
            do
                int32_t edx_1 = *(eax_7 + (edi << 3))
                
                if (esi_1 s< edx_1)
                    break
                
                if (esi_1 s<= *(eax_7 + (edi << 3) + 4))
                    top_1 += 1
                    ecx_3 = eax_1
                    xmm0_1 =
                        var_60_1 f+ *(ebx + ((sub_7198c0(arg5, var_68) * edi - edx_1 + esi_1) << 2))
                    eax_7 = arg3
                    var_60_1 = xmm0_1
                
                edi += 1
            while (edi s< ecx_3)
            
            result = arg7
        
        int32_t edi_1 = 0
        
        if (ecx_3 s> 0)
            void* eax_12 = arg3
            
            do
                int32_t edx_2 = *(eax_12 + (edi_1 << 3))
                
                if (esi_1 s< edx_2)
                    break
                
                if (esi_1 s<= *(eax_12 + (edi_1 << 3) + 4))
                    top_1 += 1
                    ecx_3 = eax_1
                    int32_t eax_16 = sub_7198c0(arg5, var_68) * edi_1 - edx_2 + esi_1
                    *(ebx + (eax_16 << 2)) = 1f f/ xmm0_1 f* *(ebx + (eax_16 << 2))
                    eax_12 = arg3
                
                edi_1 += 1
            while (edi_1 s< ecx_3)
            
            result = arg7
        
        esi_1 += 1
    while (esi_1 s< result)

int32_t result_1 = 0

if (ecx_3 s> 0)
    int128_t xmm0_5 = var_68
    int32_t eax_17
    eax_17.b = xmm0_5 f> 1f
    void* esi_3
    
    do
        int32_t edi_2 = 0
        int16_t top_2 = top_1 + 1
        int32_t result_2 = result_1
        float xmm0_6 = *(ebx + ((sub_7198c0(arg5, xmm0_5) * result_2) << 2))
        xmm0_6 f- 0
        int32_t eax_19
        eax_19:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
            | (xmm0_6 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            bool p_4
            
            do
                edi_2 += 1
                top_2 += 1
                result_2 = result_1
                float xmm0_7 = *(ebx + ((sub_7198c0(arg5, var_68) * result_2 + edi_2) << 2))
                xmm0_7 f- 0
                int32_t eax_22
                eax_22:1.b = (xmm0_7 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
                    | (xmm0_7 < 0f ? 1 : 0)
                p_4 = unimplemented  {test ah, 0x44}
            while (not(p_4))
        
        esi_3 = arg3
        int32_t eax_23 = *(esi_3 + (result_2 << 3))
        int32_t eax_24 = eax_23 + edi_2
        *(esi_3 + (result_2 << 3)) = eax_24
        
        if (eax_23 + edi_2 s< 0)
            int32_t temp1_1
            
            do
                edi_2 += 1
                temp1_1 = eax_24
                eax_24 += 1
            while (temp1_1 + 1 s< 0)
            *(esi_3 + (result_2 << 3)) = eax_24
        
        int32_t ecx_10 = *(esi_3 + (result_2 << 3) + 4) - eax_24 + 1
        
        if (eax_6 s< ecx_10)
            ecx_10 = eax_6
        
        int32_t eax_26 = (&data_cb3cb0)[arg5 * 2]
        int32_t var_84_1 = ecx_10
        float var_58_3
        float xmm0_9
        int16_t top_3
        
        if (eax_17 == 0)
            float var_84_3 = var_68
            eax_26()
            var_58_3 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
            unimplemented  {fstp dword [esp+0x2c], st0}
            top_3 = top_2 + 1
            xmm0_9 = var_58_3
        else
            float var_84_2 = 1f / var_68
            eax_26()
            var_58_3 = fconvert.s(unimplemented  {fstp dword [esp+0x2c], st0})
            unimplemented  {fstp dword [esp+0x2c], st0}
            top_3 = top_2 + 1
            xmm0_9 = var_58_3
        
        var_58_3.q = _mm_cvtps_pd(xmm0_9 + xmm0_9)
        unimplemented  {fld st0, qword [esp+0x30]}
        double _X = fconvert.d(unimplemented  {fstp qword [esp], st0})
        unimplemented  {fstp qword [esp], st0}
        ceil(_X)
        int32_t ebx_1 = 0
        var_58_3.q = fconvert.d(unimplemented  {fstp qword [esp+0x28], st0})
        unimplemented  {fstp qword [esp+0x28], st0}
        top_1 = top_3
        int32_t i = int.d(fconvert.t(var_58_3.q))
        
        if (ecx_10 s> 0)
            while (edi_2 + ebx_1 s< i)
                int32_t esi_7 = sub_7198c0(arg5, var_68) * result_1 + edi_2 + ebx_1
                top_1 += 2
                int32_t eax_31 = sub_7198c0(arg5, var_68) * result_1 + ebx_1
                ebx_1 += 1
                *(var_4c + (eax_31 << 2)) = *(var_4c + (esi_7 << 2))
                i = int.d(fconvert.t(var_58_3.q))
                
                if (ebx_1 s>= ecx_10)
                    break
            
            esi_3 = arg3
        
        result = result_1 + 1
        xmm0_5 = var_68
        ebx = var_4c
        result_1 = result
    while (result s< eax_1)
    
    int32_t i_1 = 0
    
    if (eax_1 u>= 8 && data_cc8d30 s>= 2)
        int32_t eax_34 = eax_1 & 0x80000007
        
        if (eax_34 s< 0)
            eax_34 = ((eax_34 - 1) | 0xfffffff8) + 1
        
        void* edi_3 = esi_3 + 0xc
        result = arg7 - 1
        uint32_t xmm4_1[0x4] = _mm_shuffle_epi32(zx.o(result), 0)
        
        do
            uint64_t xmm2_1 = zx.q(*(edi_3 + 0x10))
            edi_3 += 0x40
            i_1 += 8
            int32_t xmm3_3[0x4] = _mm_min_epi32(
                _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(zx.o(*(edi_3 - 0x48)), zx.q(*(edi_3 - 0x38))), 
                    _mm_unpacklo_epi32(zx.o(*(edi_3 - 0x40)), xmm2_1)), 
                xmm4_1)
            *(edi_3 - 0x48) = xmm3_3
            uint128_t xmm3_4 = _mm_bsrli_si128(xmm3_3, 4)
            *(edi_3 - 0x40) = xmm3_4
            int32_t xmm1_12[0x4] = zx.o(*(edi_3 - 0x20))
            uint128_t xmm3_5 = _mm_bsrli_si128(xmm3_4, 4)
            *(edi_3 - 0x38) = xmm3_5
            uint64_t xmm0_15 = zx.q(*(edi_3 - 0x18))
            *(edi_3 - 0x30) = _mm_bsrli_si128(xmm3_5, 4)
            int32_t xmm3_10[0x4] = _mm_min_epi32(
                _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(edi_3 - 0x28)), xmm0_15), 
                    _mm_unpacklo_epi32(xmm1_12, zx.q(*(edi_3 - 0x10)))), 
                xmm4_1)
            *(edi_3 - 0x28) = xmm3_10
            uint128_t xmm3_11 = _mm_bsrli_si128(xmm3_10, 4)
            *(edi_3 - 0x20) = xmm3_11
            uint128_t xmm3_12 = _mm_bsrli_si128(xmm3_11, 4)
            *(edi_3 - 0x18) = xmm3_12
            *(edi_3 - 0x10) = _mm_bsrli_si128(xmm3_12, 4)
        while (i_1 s< eax_1 - eax_34)
    
    if (eax_1 u< 8 || data_cc8d30 s< 2 || i_1 s< eax_1)
        void* esi_9 = esi_3 + (i_1 << 3) + 4
        int32_t i_3 = eax_1 - i_1
        int32_t i_2
        
        do
            int32_t ecx_14 = arg7 - 1
            
            if (*esi_9 s< arg7 - 1)
                ecx_14 = *esi_9
            
            esi_9 += 8
            *(esi_9 - 8) = ecx_14
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return result

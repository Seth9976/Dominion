// 函数: sub_6a8d00
// 地址: 0x6a8d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t ecx
uint32_t eax = sub_6a82e0(ecx)
int32_t esi = 0
void* eax_1 = *(eax + 4)

if (*(eax_1 + 0x10) s> 0)
    int32_t* edi = *(eax_1 + 0x18)
    
    while (true)
        int32_t* eax_2 = *edi
        char* ecx_1 = arg2
        char* eax_4 = *(*eax_2 + 4)
        int32_t eax_6
        
        while (true)
            char edx = *eax_4
            char temp0_1 = *ecx_1
            bool c_1 = edx u< temp0_1
            
            if (edx == temp0_1)
                if (edx == 0)
                    eax_6 = 0
                    break
                
                edx = eax_4[1]
                char temp1_1 = ecx_1[1]
                c_1 = edx u< temp1_1
                
                if (edx == temp1_1)
                    eax_4 = &eax_4[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (edx != 0)
                        continue
                    
                    eax_6 = 0
                    break
            
            eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
            break
        
        if (eax_6 == 0)
            arg5[0x10] = esi
            void* ecx_3 = eax_2[7]
            
            if (*(ecx_3 + 4) != 0)
                sub_63b870(eax_6, &data_801800, "Halt", "C:\x\ax2017\Engine\Spine.cpp", 0x348, 
                    "SpineGetSlotInfoByName")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int128_t* eax_7 = eax_2[6]
            int128_t xmm4 = zx.o(0)
            
            if (eax_7 != 0)
                xmm4 = *eax_7
            
            void* eax_9 = *(eax + 4)
            float xmm1_2 = eax_2[5] f* *(eax_9 + 0x44) f* *(ecx_3 + 0x40)
            float xmm3_2 = eax_2[3] f* *(eax_9 + 0x3c) f* *(ecx_3 + 0x38)
            float xmm2_2 = eax_2[4] f* *(eax_9 + 0x40) f* *(ecx_3 + 0x3c)
            arg5[8] = eax_2[2] f* *(eax_9 + 0x38) f* *(ecx_3 + 0x34)
            arg5[9] = xmm3_2
            arg5[0xa] = xmm2_2
            arg5[0xb] = xmm1_2
            *(arg5 + 0x30) = xmm4
            void* eax_10 = eax_2[1]
            float xmm1_3 = *(eax_10 + 0x5c)
            float xmm0_3 = *(eax_10 + 0x50)
            double xmm0_6 = _mm_cvtps_pd(xmm0_3 * xmm0_3 + xmm1_3 * xmm1_3)
            
            if (0 f> xmm0_6)
                _libm_sse2_sqrt_precise(arg4, arg3.w, ecx_3)
            else
                xmm0_6 = _mm_sqrt_sd(xmm0_6, xmm0_6)
            
            arg5[4] = fconvert.s(xmm0_6) f* *(ecx_3 + 0x20)
            void* eax_12 = eax_2[1]
            float xmm1_5 = *(eax_12 + 0x60)
            float xmm0_9 = *(eax_12 + 0x54)
            double xmm0_12 = _mm_cvtps_pd(xmm0_9 * xmm0_9 + xmm1_5 * xmm1_5)
            
            if (0 f> xmm0_12)
                _libm_sse2_sqrt_precise(arg4, arg3.w, ecx_3)
            else
                xmm0_12 = _mm_sqrt_sd(xmm0_12, xmm0_12)
            
            arg5[5] = fconvert.s(xmm0_12) f* *(ecx_3 + 0x24)
            void* eax_14 = eax_2[1]
            int32_t* var_10_1
            var_10_1.q = _mm_cvtps_pd(*(eax_14 + 0x5c))
            var_10_1.q = _mm_cvtps_pd(*(eax_14 + 0x50))
            _CIatan2(arg4, arg3, ecx_3, eax, var_10_1)
            var_10_1.q = fconvert.d(fconvert.t(var_10_1.q))
            float xmm0_22 = _mm_cvtpd_ps(zx.o(var_10_1.q)) * 57.2957764f f- *(ecx_3 + 0x28)
            TEB* fsbase
            
            if (data_19e3ba0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                sub_75970e(&data_19e3ba0)
                
                if (data_19e3ba0 == 0xffffffff)
                    data_19e3b9c = 0x3c8efa35
                    __Init_thread_footer(&data_19e3ba0)
            
            float xmm0_23 = xmm0_22 f* data_19e3b9c
            int32_t xmm0_24 = sub_4ae0f0(ebp, xmm0_23)
            arg5[3] = sub_4ae0d0(ebp, xmm0_23)
            arg5[2] = xmm0_24
            *arg5 = 0
            arg5[1] = 0
            void* esi_2 = eax_2[1]
            float xmm1_8 = *(esi_2 + 0x5c)
            float xmm0_27 = *(esi_2 + 0x50)
            double xmm0_30 = _mm_cvtps_pd(xmm0_27 * xmm0_27 + xmm1_8 * xmm1_8)
            
            if (0 f> xmm0_30)
                _libm_sse2_sqrt_precise()
            else
                xmm0_30 = _mm_sqrt_sd(xmm0_30, xmm0_30)
            
            float xmm1_10 = *(esi_2 + 0x60)
            float xmm0_32 = fconvert.s(xmm0_30) f* *(ecx_3 + 0x18)
            float xmm0_33 = *(esi_2 + 0x54)
            double xmm0_36 = _mm_cvtps_pd(xmm0_33 * xmm0_33 + xmm1_10 * xmm1_10)
            
            if (0 f> xmm0_36)
                _libm_sse2_sqrt_precise()
            else
                xmm0_36 = _mm_sqrt_sd(xmm0_36, xmm0_36)
            
            float xmm2_5 = *(esi_2 + 0x64)
                + fconvert.s(xmm0_36) * (*(ecx_3 + 0x1c) ^ (data_8937c0.o).d) f+ arg5[1]
            *arg5 = *(esi_2 + 0x58) + xmm0_32 f+ *arg5
            arg5[1] = xmm2_5
            arg5[6] = *(ecx_3 + 0x2c)
            arg5[7] = *(ecx_3 + 0x30)
            int32_t eax_20
            eax_20.b = 1
            return eax_20
        
        esi += 1
        edi = &edi[1]
        
        if (esi s>= *(*(eax + 4) + 0x10))
            break

eax_1.b = 0
return eax_1

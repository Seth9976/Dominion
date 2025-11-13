// 函数: sub_6bc170
// 地址: 0x6bc170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
void* eax_2 = arg2
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
void* var_a0 = eax_2
int32_t ecx = 0
int32_t esi = 0
char var_c6 = 0
int32_t i = 0
int32_t var_ac = 0
float xmm3 = 1f
int32_t xmm1 = (zx.o(0)).d
float var_b4 = 1f
char var_c5 = 0
int32_t var_a4 = 0
char var_ba = 0
int32_t var_a8 = 0
char var_b9 = 0
int32_t var_c4 = 0
int32_t i_4 = 0

if (*(eax_2 + 0x120) s> 0)
    int32_t var_b8_1 = 0
    
    do
        int32_t* esi_1 = *(eax_2 + 0x128)
        void* esi_2 = esi_1 + ecx
        int32_t eax_4 = *(esi_1 + ecx) - 0xf
        
        if (eax_4 u> 5)
            esi = var_ac
        else
            switch (eax_4)
                case 0
                    xmm1 = var_c4
                    esi = sub_6b86c0(arg1, esi_2)
                    ecx = var_b8_1
                    i = i_4
                    var_ac = esi
                    var_c5 = 1
                case 1
                    var_a4 = sub_6b86c0(arg1, esi_2)
                    var_ba = 1
                label_6bc540:
                    xmm1 = var_c4
                label_6bc546:
                    i = i_4
                    ecx = var_b8_1
                    esi = var_ac
                case 2
                    int32_t* eax_5 = *(esi_2 + 8)
                    var_c6 = 1
                    float xmm0_1
                    bool p_2
                    
                    if (eax_5[2] == 1)
                        int32_t* eax_6 = *eax_5
                        xmm0_1 = *eax_6
                        float temp4_1 = eax_6[1]
                        xmm0_1 - temp4_1
                        eax_6:1.b = (xmm0_1 == temp4_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_1, temp4_1) ? 1 : 0) << 2
                            | (xmm0_1 < temp4_1 ? 1 : 0)
                        p_2 = unimplemented  {test ah, 0x44}
                    
                    if (eax_5[2] != 1 || p_2)
                        int32_t eax_9 = (*(arg1 + 0x2c) + *esi_2) * *esi_2
                        int32_t ecx_3 = (eax_9 << 0xf) + not.d(eax_9)
                        int32_t ecx_4 = (ecx_3 u>> 0xc ^ ecx_3) * 5
                        int32_t eax_17 = (ecx_4 u>> 4 ^ ecx_4) * 0x809
                        xmm0_1 = sub_706bb0(*(esi_2 + 8), *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
                            (((eax_17 u>> 0x10 ^ eax_17) & 0x7fffff) | 0x3f800000) - 1f)
                        xmm1 = var_c4
                        ecx = var_b8_1
                        i = i_4
                    
                    xmm1 = xmm1 f+ xmm0_1 f* *(*(arg1 + 0x2e4) + 0x58)
                    var_c4 = xmm1
                    esi = var_ac
                case 3
                    int32_t* eax_19 = *(esi_2 + 8)
                    var_c6 = 1
                    float var_c0_2
                    bool p_4
                    
                    if (eax_19[2] == 1)
                        int32_t* eax_20 = *eax_19
                        float xmm0_3 = *eax_20
                        float temp5_1 = eax_20[1]
                        xmm0_3 - temp5_1
                        var_c0_2 = xmm0_3
                        eax_20:1.b = (xmm0_3 == temp5_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_3, temp5_1) ? 1 : 0) << 2
                            | (xmm0_3 < temp5_1 ? 1 : 0)
                        p_4 = unimplemented  {test ah, 0x44}
                    
                    if (eax_19[2] != 1 || p_4)
                        int32_t eax_23 = (*(arg1 + 0x2c) + *esi_2) * *esi_2
                        int32_t ecx_8 = (eax_23 << 0xf) + not.d(eax_23)
                        int32_t ecx_9 = (ecx_8 u>> 0xc ^ ecx_8) * 5
                        int32_t eax_31 = (ecx_9 u>> 4 ^ ecx_9) * 0x809
                        var_c0_2 = sub_706bb0(*(esi_2 + 8), *(arg1 + 0x2f4), *(arg1 + 0x2e8), 
                            (((eax_31 u>> 0x10 ^ eax_31) & 0x7fffff) | 0x3f800000) - 1f)
                    
                    void* ecx_11 = *(arg1 + 0x2e4)
                    int64_t xmm0_5 = *(ecx_11 + 0x40)
                    float xmm0_7 = *(ecx_11 + 0x6c) f- xmm0_5:4.d
                    float xmm2_2 = *(ecx_11 + 0x68) f- xmm0_5.d
                    float xmm1_4 = *(ecx_11 + 0x70) - *(ecx_11 + 0x48)
                    xmm1 = var_c4
                        f+ sub_4ac580(ebp, xmm0_7 * xmm0_7 + xmm2_2 * xmm2_2 + xmm1_4 * xmm1_4)
                        * var_c0_2
                    var_c4 = xmm1
                    goto label_6bc546
                case 4
                    var_a8 = sub_6b86c0(arg1, esi_2)
                    var_b9 = 1
                    goto label_6bc540
                case 5
                    int128_t var_70
                    int128_t* var_d4_1 = &var_70
                    int128_t* eax_34 = sub_6bcb90(&var_70, i, arg1)
                    int32_t* esi_3 = *(esi_2 + 8)
                    int32_t edx_12 = *(arg1 + 0x2f4)
                    float xmm1_7[0x4] = eax_34[1]
                    float eax_35 = data_cf6680
                    int128_t var_90_1 = *eax_34
                    int128_t var_40_1 = data_cf6668
                    int64_t xmm0_15 = data_cf6678
                    var_70 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0x55) f- xmm0_15.d
                    float xmm0_21 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xaa) f- xmm0_15:4.d
                    float xmm1_9 = _mm_shuffle_ps(xmm1_7, xmm1_7, 0xff) - eax_35
                    float xmm0_22 = sub_706bb0(esi_3, edx_12, *(arg1 + 0x2e8), (zx.o(0)).d)
                    float xmm0_23 = sub_706bb0(esi_3, *(arg1 + 0x2f4), *(arg1 + 0x2e8), 1f)
                    float xmm1_12 = var_70.d
                    float xmm3_8 = (
                        sub_4ac580(ebp, xmm0_21 * xmm0_21 + xmm1_12 * xmm1_12 + xmm1_9 * xmm1_9)
                        - xmm0_22) / (xmm0_23 - xmm0_22)
                    float xmm0_31 = (zx.o(0)).d
                    
                    if (not(0 f>= xmm3_8) && not(xmm3_8 >= 1f))
                        xmm0_31 = sub_4ae110(0xa, xmm3_8, (zx.o(0)).d, 1f)
                    
                    var_b4 = xmm0_31
                    goto label_6bc540
        
        eax_2 = var_a0
        i += 1
        ecx += 0x10
        i_4 = i
        var_b8_1 = ecx
    while (i s< *(eax_2 + 0x120))
    
    xmm3 = var_b4
    ecx = var_a8

float xmm1_18 = xmm1 f* xmm3 f+ *(arg1 + 0x2c8)

if (var_c6 == 0)
    if (var_c5 == 0)
        esi = 1
    
    xmm1_18 = _mm_max_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(esi - *(arg1 + 0x2d8))))
else if (var_c5 != 0)
    xmm1_18 = _mm_max_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(esi - *(arg1 + 0x2d8))))

float var_c4_1 = xmm1_18

if (var_ba != 0)
    int32_t eax_39 = 0
    
    if (var_a4 - *(arg1 + 0x2d8) s>= 0)
        eax_39 = var_a4 - *(arg1 + 0x2d8)
    
    xmm1_18 = _mm_min_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(eax_39)))
    var_c4_1 = xmm1_18

if (var_b9 != 0)
    int32_t eax_40 = 0
    
    if (ecx - *(arg1 + 0x2cc) s>= 0)
        eax_40 = ecx - *(arg1 + 0x2cc)
    
    xmm1_18 = _mm_min_ss(xmm1_18, _mm_cvtepi32_ps(zx.o(eax_40)))
    var_c4_1 = xmm1_18

var_a0.q = fconvert.d(xmm1_18)
long double x87_r7 = fconvert.t(var_a0.q)
floor(fconvert.d(x87_r7))
float var_a0_1 = fconvert.s(x87_r7)
*(arg1 + 0x2c8) = var_c4_1 - var_a0_1
float xmm0_41

if (0 f<= var_a0_1)
    xmm0_41 = var_a0_1 + 0.5f
else
    xmm0_41 = var_a0_1 - 0.5f

int32_t* ecx_19 = *(arg1 + 0x2e4)
int32_t esi_5 = int.d(xmm0_41)
int32_t* eax_41

if (not(ecx_19[0x13] f<= 0f))
    eax_41 = sub_5af880(*ecx_19)

void* result

if (ecx_19[0x13] f<= 0f || *(*(arg1 + 0x2dc) * 0x168 + *eax_41 + 0xe6) == 0)
    void* result_1 = nullptr
    
    if (esi_5 s> 0)
        do
            int32_t* eax_43 = sub_5af880(**(arg1 + 0x2e4))
            int32_t* eax_44 = sub_5af880(**(arg1 + 0x2e4))
            int32_t esi_6 = *(arg1 + 0x2dc)
            int32_t i_1 = esi_6 + 1
            int32_t i_3 = i_1
            int32_t eax_45 = *(esi_6 * 0x168 + *eax_44 + 0x10)
            int32_t* eax_46 = eax_43
            
            if (i_1 s< eax_46[2])
                int32_t ecx_26 = i_1 * 0x168
                int32_t var_b8_2 = ecx_26
                
                do
                    int32_t edx_20 = *(*eax_46 + ecx_26 + 0x10)
                    
                    if (edx_20 s<= eax_45)
                        break
                    
                    if (edx_20 == eax_45 + 1)
                        void* eax_51 = sub_5af880(**(arg1 + 0x2e4))
                        ecx_26 = var_b8_2
                        double var_d8_1
                        
                        if (ecx_26 s< 0 || i_1 s>= *(eax_51 + 8))
                            char const* const var_d4_3 = "ParticleEmitOneByIndex"
                            var_d8_1.d = 0x53a
                            char const* const var_dc_2 = "C:\x\ax2017\Engine\Particle.cpp"
                            sub_63b870(eax_51, &data_801800, 
                                "emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount", 
                                "C:\x\ax2017\Engine\Particle.cpp", 0x53a, "ParticleEmitOneByIndex")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        if (*(*(arg1 + 0x2e4) + 0x14) s<= 0xbb8)
                            float* ecx_28 = sub_64bfd0(0x304)
                            ecx_28[3] += 1
                            
                            if (*ecx_28 == 0)
                                sub_64be70(ecx_28)
                            
                            float* esi_7 = *ecx_28
                            int32_t var_d4_2 = 0x304
                            var_d8_1.d = 0
                            *ecx_28 = *esi_7
                            memset(esi_7, 0, 0x304)
                            esi_7[0xb5] = 0
                            esi_7[0xb6] = 0
                            esi_7[0xbf] = *(arg1 + 0x2d0)
                            esi_7[0xc0] = 0
                            void* eax_56 = *(arg1 + 0x2d0)
                            
                            if (eax_56 == 0)
                                *(arg1 + 0x2d4) = esi_7
                            else
                                *(eax_56 + 0x300) = esi_7
                            
                            *(arg1 + 0x2d8) += 1
                            *(arg1 + 0x2d0) = esi_7
                            esi_7[0xb7] = i_3
                            esi_7[0xb9] = *(arg1 + 0x2e4)
                            esi_7[0xb8] = arg1
                            sub_6bc0e0(esi_7)
                            *(arg1 + 0x2cc) += 1
                            i_1 = i_3
                            ecx_26 = var_b8_2
                    
                    eax_46 = eax_43
                    i_1 += 1
                    ecx_26 += 0x168
                    i_3 = i_1
                    var_b8_2 = ecx_26
                while (i_1 s< eax_46[2])
            
            result = result_1 + 1
            result_1 = result
        while (result s< esi_5)

int32_t* i_2 = *(arg1 + 0x2d0)

while (i_2 != 0)
    int32_t* ecx_30 = &i_2[0xbf]
    int32_t* i_5 = i_2
    int32_t* i_6 = i_2
    i_2 = *ecx_30
    
    if (sub_6bc970(i_6).b == 0)
        void* esi_8 = nullptr
        
        while (true)
            if (esi_8 != 0)
                esi_8 = *(esi_8 + 0x2fc)
            else
                esi_8 = i_6[0xb4]
            
            if (esi_8 == 0)
                break
            
            sub_6b8400(esi_8)
        
        sub_6c3440(&i_6[0xb4])
        void* eax_60 = i_6[0xb9]
        *(eax_60 + 0x14) -= 1
        void* edx_21 = i_5[0xc0]
        int32_t ecx_34 = *ecx_30
        
        if (edx_21 == 0)
            *(arg1 + 0x2d0) = ecx_34
        else
            *(edx_21 + 0x2fc) = ecx_34
        
        void* ecx_35 = *ecx_30
        int32_t eax_62 = i_5[0xc0]
        
        if (ecx_35 == 0)
            *(arg1 + 0x2d4) = eax_62
        else
            *(ecx_35 + 0x300) = eax_62
        
        *(arg1 + 0x2d8) -= 1
        boost::exception::~exception(i_5)
        sub_64c080(i_5, 0x304)

result.b = 1
CookieCheckFunction(result)
return result

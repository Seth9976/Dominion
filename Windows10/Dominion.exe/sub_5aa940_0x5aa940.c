// 函数: sub_5aa940
// 地址: 0x5aa940
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76858d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t var_484 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg2
int32_t* var_410 = esi
int32_t result = sub_6a1230(arg4, arg5[1], *arg5, 1, 3, 0)
int32_t eax_4 = sub_6a1230(result, arg5[1], *arg5, 0x50, 4, 0)
int32_t var_428 = eax_4
int64_t var_420
int32_t ecx_4
int32_t edx_2
int32_t edi_1

if (data_147b074 == 2)
    eax_4 = data_1a8a098
    
    if (eax_4 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        eax_4 = sub_75970e(&data_1a8a098)
        
        if (data_1a8a098 == 0xffffffff)
            int32_t var_14_1 = 0
            void* eax_5 = data_147b078
            var_420 = 0
            int32_t* eax_6 = *(eax_5 + 4)
            var_420.d = 0xa
            int32_t eax_7
            
            if ((*(*eax_6 + 0x84))(eax_6, 2, &var_420, 8) s< 0 || (var_420:4.d & 0x4000) == 0)
                eax_7.b = 0
            else
                eax_7.b = 1
            
            data_1a8a09c = eax_7.b
            int32_t var_14_2 = 0xffffffff
            eax_4 = __Init_thread_footer(&data_1a8a098)
    
    edx_2 = arg5[1]
    ecx_4 = *arg5
    
    if (data_1a8a09c == 0)
        edi_1 = 1
    else
        edi_1 = 0x3ea
else
    edx_2 = arg5[1]
    ecx_4 = *arg5
    edi_1 = 0x3ea

int32_t result_2 = sub_6a1230(eax_4, edx_2, ecx_4, edi_1, 3, 0)
int32_t result_6 = sub_6a1230(arg5, arg5[1], *arg5, edi_1, 3, 0)
int32_t var_434 = 0x16
int32_t result_4 = result_6
void* i = nullptr
int32_t result_5 = result_4
void* i_6 = nullptr

while (true)
    void* i_11 = data_cc8dc0
    char const* const var_490_10
    int32_t var_48c_11
    char const* const var_488_14
    char* ecx_77
    
    if (i_11 == 0)
        var_488_14 = "GetLocalSettings"
        var_48c_11 = 0x5fb
        var_490_10 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
        ecx_77 = "gGameSettings.localSettings"
    else
        if (*(i_11 + 0x3c) s>= 2)
            int32_t eax_9 = 0
            
            while ((&var_434)[eax_9] != i)
                eax_9 += 1
                
                if (eax_9 s>= 1)
                    goto label_5abfdb
        
        int32_t edx_4
        int32_t result_1
        
        if (i u<= 0xc)
            result_1 = result_2
            
            if ((i.b & 1) != 0)
                result_1 = result_4
            
            edx_4 = 0
        else if (i != 0x12)
            result_1 = result
            edx_4 = var_428
        else
            result_1 = result_2
            edx_4 = 0
        
        void* ecx_9 = data_147b06c
        *(ecx_9 + 0x2cc) += 1
        int32_t eax_11 = *(ecx_9 + 0x2cc) * 5
        *(ecx_9 + (eax_11 << 2) + 0x18c) = 2
        *(ecx_9 + (eax_11 << 2) + 0x194) = result_1
        *(ecx_9 + (eax_11 << 2) + 0x198) = edx_4
        *(ecx_9 + (eax_11 << 2) + 0x19c) = 0
        sub_6ad5d0(eax_11, edx_4, result_1, 0)
        sub_649ab0()
        data_1a8a0a0 = sub_4acb60(ebp_1, 0.261799395f)
        data_1a8a0a8 = 0x3dcccccd
        data_1a8a0ac = 0x40400000
        data_1a8a0d0 = 0
        data_1a8a0d4 = 0x40400000
        uint128_t xmm1_1 = zx.o(arg5[1])
        float xmm0_3 = _mm_cvtepi32_ps(zx.o(*arg5))
        int32_t var_3bc_1 = 0xbf800000
        float xmm1_3 = _mm_cvtepi32_ps(xmm1_1) / xmm0_3
        int128_t xmm0_4 = data_bf21e8
        data_1a8a0a4 = xmm1_3
        data_1a8a0b0 = xmm0_4
        data_1a8a0c0 = data_bf21f8
        data_1a8a0c0:0xc = 0x40400000
        float var_3c4 = -0f
        int32_t var_3c0_1 = 0x80000000
        void var_478
        data_1a8a0b0:4.o = *sub_4ac9c0(&var_478, &data_7fef98, &var_3c4, &var_478)
        int32_t edx_5
        i_11, edx_5 = sub_646220(&data_1a8a0a0)
        
        if (data_147aba1 == 0)
            var_488_14 = "Draw3DOverlayColor"
            var_48c_11 = 0x30c
            var_490_10 = "C:\x\ax2017\Engine\Draw3d.cpp"
            ecx_77 = "gDraw3DData.submittingRenderItems"
        else
            data_cf6a80 = data_891360
            data_cf6a6c = 4
            data_cf6b14 = 0x7d0
            data_cf65f8 = 0
            uint128_t xmm0_8 = zx.o(arg5[1])
            int32_t xmm1_5 = _mm_cvtepi32_ps(zx.o(*arg5))
            int32_t xmm0_9 = _mm_cvtepi32_ps(xmm0_8)
            int32_t var_44c = xmm1_5
            int32_t var_448_1 = xmm0_9
            int128_t var_148
            int128_t* eax_17 = sub_683290(&var_148, edx_5, &var_44c, &var_148)
            int128_t var_3e4 = *eax_17
            int128_t var_3d4_1 = eax_17[1]
            sub_683220(&var_3e4)
            
            if (data_1a8a0d8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                sub_75970e(&data_1a8a0d8)
                
                if (data_1a8a0d8 == 0xffffffff)
                    int32_t var_14_3 = 1
                    data_1a8a0dc = sub_69f030("sys/SpineTintRT.material", 5)
                    int32_t var_14_4 = 0xffffffff
                    __Init_thread_footer(&data_1a8a0d8)
            
            *(data_147b06c + 0x2dc) = data_1a8a0dc
            i_11 = i_6
            float var_44
            int32_t var_3c[0x2]
            var_38
            float var_34
            float var_30
            
            if (i_11 == 0)
                (*(*data_147b070 + 0x90))(0, 0)
                int32_t i_1 = 0
                int32_t i_8 = 0
                
                if (esi[0x3bff3] s> 0)
                    result_1 = &esi[0x23ffa]
                    
                    do
                        int32_t ecx_17 = 0
                        int32_t eax_24 = *(result_1 - 4) * 3
                        float xmm1_7
                        float xmm3_2
                        
                        if (esi[eax_24 + 6] f<= 0)
                            xmm3_2 = var_3c[1]
                            xmm1_7 = var_3c[0]
                        else
                            ecx_17 = 1
                            xmm1_7 = esi[eax_24 + 4] f* 1024f
                            xmm3_2 = esi[eax_24 + 5] f* 1024f
                            var_3c[0] = xmm1_7
                            var_3c[1] = xmm3_2
                        
                        float var_3f8_1 = xmm1_7
                        float var_3ec_1 = xmm3_2
                        int32_t eax_26 = *result_1 * 3
                        
                        if (not(esi[eax_26 + 6] f<= 0))
                            float xmm0_15 = esi[eax_26 + 4] f* 1024f
                            *(&var_38 + (ecx_17 << 3)) = esi[eax_26 + 5] f* 1024f
                            (&var_3c)[ecx_17][0] = xmm0_15
                            ecx_17 += 1
                            xmm3_2 = var_3c[1]
                            xmm1_7 = var_3c[0]
                            var_3ec_1 = xmm3_2
                            var_3f8_1 = xmm1_7
                        
                        int32_t eax_28 = *(result_1 + 4) * 3
                        
                        if (not(esi[eax_28 + 6] f<= 0))
                            float xmm0_18 = esi[eax_28 + 4] f* 1024f
                            *(&var_38 + (ecx_17 << 3)) = esi[eax_28 + 5] f* 1024f
                            (&var_3c)[ecx_17][0] = xmm0_18
                            ecx_17 += 1
                            xmm3_2 = var_3c[1]
                            xmm1_7 = var_3c[0]
                            var_3ec_1 = xmm3_2
                            var_3f8_1 = xmm1_7
                        
                        if (ecx_17 == 2)
                            float xmm2_2 = var_34 - xmm1_7
                            float xmm1_13 = var_30 - xmm3_2
                            float xmm1_16 =
                                1f / sub_4ac580(ebp_1, xmm1_13 * xmm1_13 + xmm2_2 * xmm2_2)
                            void* eax_29 = data_147abe4
                            float xmm3_3 = var_34
                            float xmm1_17 = xmm1_16 * xmm1_13
                            float xmm0_25 = (xmm1_16 * xmm2_2) ^ (data_8937c0.o).d
                            float xmm7_2 = var_3ec_1 + xmm0_25
                            float xmm5_2 = xmm0_25 + var_30
                            float xmm2_4 = var_30 - xmm0_25
                            float xmm4_2 = xmm1_17 + xmm3_3
                            float xmm3_4 = xmm3_3 - xmm1_17
                            float xmm6_2 = var_3f8_1 + xmm1_17
                            float xmm7_4 = var_3f8_1 - xmm1_17
                            float xmm2_5 = data_b4a5b0
                            float xmm3_5 = data_b4a5ac
                            float xmm7_6 = var_3ec_1 - xmm0_25
                            float var_124 = xmm3_5 * xmm6_2
                            float var_120_1 = xmm2_5 * xmm7_2
                            float var_11c_1 = xmm3_5 * xmm4_2
                            float var_118_1 = xmm2_5 * xmm5_2
                            float var_114_1 = xmm3_5 * xmm7_4
                            float var_10c_1 = xmm3_5 * xmm3_4
                            float var_110_1 = xmm2_5 * xmm7_6
                            float var_108_1 = xmm2_5 * xmm2_4
                            float xmm2_7 = *(eax_29 + 0x20)
                            float xmm1_24 = *(eax_29 + 0x24)
                            float var_3ec_2 = xmm7_6
                            float var_104 = xmm2_7 + xmm6_2
                            float var_100_1 = xmm1_24 + xmm7_2
                            float var_fc_1 = xmm2_7 + xmm4_2
                            float var_f8_1 = xmm1_24 + xmm5_2
                            float var_f4_1 = xmm2_7 + xmm7_4
                            float var_ec_1 = xmm2_7 + xmm3_4
                            float var_e8_1 = xmm1_24 + xmm2_4
                            float var_f0_1 = xmm1_24 + xmm7_6
                            sub_6867a0(eax_29, &var_124, &var_104, &data_bf23ac, 0, result_5, 
                                data_171d8c8)
                            i_1 = i_8
                        
                        i_1 += 1
                        result_1 += 0xc
                        i_8 = i_1
                    while (i_1 s< esi[0x3bff3])
                
                i_11 = i_6
            else if (i_11 s>= 1 && i_11 s<= 0xc)
                int32_t result_3 = result_5
                
                if ((i_11.b & 1) != 0)
                    result_3 = result_2
                
                char const* const var_490_11
                int32_t var_48c_12
                char const* const var_488_15
                char* ecx_78
                
                if (result_3 == result_1)
                    var_488_15 = "MapToTexture"
                    var_48c_12 = 0x1174
                    var_490_11 = "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp"
                    ecx_78 = "textureRead != texture"
                label_5ac0f9:
                    sub_63b870(i_11, &data_801800, ecx_78, var_490_11, var_48c_12, var_488_15)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int128_t var_168
                __builtin_memcpy(&var_168, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                    0x20)
                
                if (i_11 != 0xc)
                    i_11 -= 1
                    bool cond:1_1 = data_147aba1 == 0
                    int32_t xmm0_47 = _mm_cvtepi32_ps(zx.o(i_11))
                    
                    if (cond:1_1)
                        var_488_15 = "Draw3DGame1"
                        var_48c_12 = 0x314
                        var_490_11 = "C:\x\ax2017\Engine\Draw3d.cpp"
                        ecx_78 = "gDraw3DData.submittingRenderItems"
                        goto label_5ac0f9
                    
                    void* eax_34 = data_147abe4
                    char* var_488_5 = data_171d8cc
                    data_cf6b18.d = xmm0_47
                    data_cf6b18:4 = 0
                    data_cf6b18:8 = 0
                    data_cf6b18:0xc = 0
                    float xmm3_9 = *(eax_34 + 0x20)
                    float xmm2_11 = *(eax_34 + 0x24)
                    float xmm3_10 = xmm3_9 + 2048f
                    float xmm1_29 = xmm3_9 + 0f
                    float xmm2_12 = xmm2_11 + 1024f
                    float xmm0_49 = xmm2_11 + 0f
                    float var_e4 = xmm1_29
                    float var_e0_1 = xmm0_49
                    float var_dc_1 = xmm3_10
                    float var_d8_1 = xmm0_49
                    float var_d4_1 = xmm1_29
                    float var_d0_1 = xmm2_12
                    float var_cc_1 = xmm3_10
                    float var_c8_1 = xmm2_12
                    sub_6867a0(eax_34, &var_168, &var_e4, &data_bf23ac, 0, result_3, var_488_5)
                else
                    (*(*data_147b070 + 0x90))(0, 0)
                    void* eax_31 = data_147abe4
                    char* var_488_4 = data_171d8d0
                    result_1 = result_3
                    int32_t var_464 = 0xff7fff00
                    float xmm3_7 = *(eax_31 + 0x20)
                    float xmm2_9 = *(eax_31 + 0x24)
                    float xmm3_8 = xmm3_7 + 2048f
                    int32_t var_460_1 = 0
                    float xmm2_10 = xmm2_9 + 1024f
                    float xmm1_27 = xmm3_7 + 0f
                    float xmm0_45 = xmm2_9 + 0f
                    var_3c[0] = xmm3_8
                    var_44 = xmm1_27
                    float var_40_1 = xmm0_45
                    var_3c[1] = xmm0_45
                    var_34 = xmm1_27
                    var_30 = xmm2_10
                    float var_2c_1 = xmm3_8
                    float var_28_1 = xmm2_10
                    uint32_t eax_33 =
                        sub_6867a0(&var_464, &var_168, &var_44, &var_464, 0, result_1, var_488_4)
                    uint32_t var_498_1 = data_171d8d0
                    int32_t var_43c = 0x7fff00
                    int32_t var_438_1 = 0
                    sub_5aa760(eax_33, &var_43c, &esi[4], result_1, var_498_1)
                
                i_11 = i_6
            
            if (i_11 != 0xd)
                if (i_11 != 0xe)
                    if (i_11 == 0xf)
                        sub_5a9bc0(arg3, esi)
                    else if (i_11 == 0x10)
                        int32_t edi_4 = esi[1]
                        int32_t esi_3 = (*esi u>> 0x1b | edi_4 << 5) ^ edi_4 u>> 0xd
                        uint32_t edx_13 = edi_4 u>> 0x1b
                        int32_t var_3fc_4 = 0
                        int32_t eax_56
                        int32_t edx_14
                        eax_56, edx_14 = __allmul(*var_410, edi_4, 0x4c957f2d, 0x5851f42d)
                        int32_t eax_57 = eax_56 + var_410[2]
                        int32_t edi_6 = adc.d(edx_14, var_410[3], eax_56 + var_410[2] u< eax_56)
                        int32_t var_3fc_5 = 0
                        int32_t esi_8 = (eax_57 u>> 0x1b | edi_6 << 5) ^ edi_6 u>> 0xd
                        uint32_t edx_16 = edi_6 u>> 0x1b
                        float xmm0_70 = (((esi_8 << ((neg.d(edx_16)).b & 0x1f) | esi_8 u>> edx_16.b)
                            & 0x7fffff) | 0x3f800000) - 1f
                        float xmm0_71 = xmm0_70 + xmm0_70
                        float xmm0_73 = (((esi_3 << ((neg.d(edx_13)).b & 0x1f) | esi_3 u>> edx_13.b)
                            & 0x7fffff) | 0x3f800000) - 1f
                        int32_t eax_64
                        int32_t edx_17
                        eax_64, edx_17 = __allmul(eax_57, edi_6, 0x4c957f2d, 0x5851f42d)
                        int32_t var_3fc_7 = 0
                        int32_t eax_65 = eax_64 + var_410[2]
                        int32_t edi_8 = adc.d(edx_17, var_410[3], eax_64 + var_410[2] u< eax_64)
                        uint32_t edx_19 = edi_8 u>> 0x1b
                        int32_t esi_12 = (eax_65 u>> 0x1b | edi_8 << 5) ^ edi_8 u>> 0xd
                        float xmm0_76 = ((((esi_12 << ((neg.d(edx_19)).b & 0x1f)
                            | esi_12 u>> edx_19.b) & 0x7fffff) | 0x3f800000) - 1f) * 6.28318548f
                        int32_t eax_72
                        int32_t edx_20
                        eax_72, edx_20 = __allmul(eax_65, edi_8, 0x4c957f2d, 0x5851f42d)
                        int32_t edi_10 = eax_72 + var_410[2]
                        int32_t esi_15 = adc.d(edx_20, var_410[3], eax_72 + var_410[2] u< eax_72)
                        int32_t eax_74
                        int32_t edx_21
                        eax_74, edx_21 = __allmul(edi_10, esi_15, 0x4c957f2d, 0x5851f42d)
                        int32_t var_3fc_9 = 0
                        bool c_4 = eax_74 + var_410[2] u< eax_74
                        *var_410 = eax_74 + var_410[2]
                        var_410[1] = adc.d(edx_21, var_410[3], c_4)
                        int32_t edi_12 = (edi_10 u>> 0x1b | esi_15 << 5) ^ esi_15 u>> 0xd
                        uint32_t esi_16 = esi_15 u>> 0x1b
                        float xmm0_80 = ((((edi_12 << ((neg.d(esi_16)).b & 0x1f)
                            | edi_12 u>> esi_16.b) & 0x7fffff) | 0x3f800000) - 1f) * 0.400000036f
                            + 0.800000012f
                        float xmm0_82 = sub_4ae0f0(ebp_1, xmm0_76)
                        float xmm0_84 = sub_4ae0d0(ebp_1, xmm0_76)
                        float xmm5_7 = xmm0_82 * 0f
                        float xmm6_7 = xmm0_84 * 0f
                        float xmm4_6 = xmm0_84 + xmm0_84
                        float var_84 = xmm0_80 * (xmm6_7 - xmm5_7) + xmm0_71
                        float var_80_1 = xmm0_80 * (xmm6_7 + xmm5_7) + xmm0_73
                        float xmm3_14 = xmm0_82 + xmm0_82
                        void* eax_82 = data_147abe4
                        char* var_488_8 = data_171d8e8
                        float var_7c_1 = xmm0_80 * (xmm4_6 - xmm5_7) + xmm0_71
                        int32_t* var_48c_6 = data_171d8dc
                        float var_78_1 = xmm0_80 * (xmm3_14 + xmm6_7) + xmm0_73
                        float var_74_1 = xmm0_80 * (xmm6_7 - xmm0_82) + xmm0_71
                        float var_70_1 = xmm0_80 * (xmm0_84 + xmm5_7) + xmm0_73
                        float var_6c_1 = xmm0_80 * (xmm4_6 - xmm0_82) + xmm0_71
                        float var_68_1 = xmm0_80 * (xmm3_14 + xmm0_84) + xmm0_73
                        float xmm3_16 = *(eax_82 + 0x20)
                        float xmm2_28 = *(eax_82 + 0x24)
                        float xmm3_17 = xmm3_16 + 2048f
                        float xmm1_53 = xmm3_16 + 0f
                        float xmm2_29 = xmm2_28 + 1024f
                        float xmm0_102 = xmm2_28 + 0f
                        float var_5c_1 = xmm3_17
                        float var_64 = xmm1_53
                        float var_54_1 = xmm1_53
                        float var_60_1 = xmm0_102
                        float var_58_1 = xmm0_102
                        float var_50_1 = xmm2_29
                        float var_4c_1 = xmm3_17
                        float var_48_1 = xmm2_29
                        sub_6867a0(eax_82, &var_84, &var_64, &data_bf23ac, 0, var_48c_6, var_488_8)
                        esi = var_410
                    else if (i_11 == 0x11)
                        (*(*data_147b070 + 0x90))(0, 1)
                        void* eax_84 = &esi[0x5bfe8]
                        int32_t i_2 = 0
                        void* ecx_57 = arg3 + 0x30
                        void* var_3e8_4 = eax_84
                        var_34.o = data_893580
                        void* var_3f0_5 = ecx_57
                        
                        do
                            int32_t eax_86 = *eax_84 * 3
                            float xmm0_105 = esi[eax_86 + 4] f* 1024f
                            float xmm1_55 = esi[eax_86 + 5] f* 1024f
                            int32_t* var_430
                            sub_51bce0(&var_430, &var_420:4, *ecx_57, &var_430)
                            float xmm0_107 = xmm0_105 - 67.2672424f
                            float xmm1_57 = xmm1_55 - 67.2672424f
                            int32_t* ecx_59 = var_430
                            float var_45c = xmm0_107
                            float var_458_1 = xmm1_57
                            float var_454_1 = xmm0_107 + 134.534485f
                            float var_450_1 = xmm1_57 + 134.534485f
                            sub_682a60(&var_34, &var_45c, ecx_59, &var_34, &data_bf23ac, 
                                data_171d8e4)
                            int32_t var_444 = data_8d2fcc
                            int32_t var_440_1 = 0
                            sub_682a60(&var_34, &var_45c, var_420:4.d, &var_34, &var_444, nullptr)
                            i_2 += 1
                            eax_84 = var_3e8_4 + 4
                            ecx_57 = var_3f0_5 + 4
                            var_3e8_4 = eax_84
                            var_3f0_5 = ecx_57
                        while (i_2 s< 0xa)
                    else if (i_11 == 0x12)
                        int32_t eax_93 = *(arg3 + 0xc)
                        
                        if (eax_93 == 0 || eax_93 == 1)
                            var_34.o = data_893710
                            sub_682f00(&var_34, &data_7e5d1c)
                        
                        int32_t ecx_63 = 0
                        int32_t var_3e8_5 = 0
                        
                        if (esi[0x3bff3] s> 0)
                            void* edi_14 = &esi[0x23ffa]
                            
                            while (true)
                                int32_t eax_95 = *(edi_14 - 4) * 3
                                float xmm1_60 = esi[eax_95 + 5] f* 1024f
                                float xmm7_12 = esi[eax_95 + 4] f* 1024f
                                int32_t eax_97 = *edi_14 * 3
                                float xmm2_30 = esi[eax_97 + 5]
                                var_3c[1] = xmm1_60
                                float xmm1_62 = esi[eax_97 + 4] f* 1024f
                                float xmm2_31 = xmm2_30 * 1024f
                                int32_t eax_99 = *(edi_14 + 4) * 3
                                var_3c[0] = xmm7_12
                                int32_t eax_100 = 0
                                float xmm5_12 = esi[eax_99 + 4] f* 1024f
                                float xmm6_10 = esi[eax_99 + 5] f* 1024f
                                var_34 = xmm1_62
                                var_30 = xmm2_31
                                float var_2c_3 = xmm5_12
                                float var_28_3 = xmm6_10
                                
                                while (true)
                                    float xmm1_64 = (&var_3c)[eax_100][0] f* 0.0009765625f
                                    float xmm2_33 = *(&var_38 + (eax_100 << 3)) * 0.0009765625f
                                    
                                    if (not(0.0250000004f > xmm1_64) && not(xmm1_64 > 1.97500002f)
                                            && not(0.0250000004f > xmm2_33)
                                            && not(xmm2_33 > 0.975000024f))
                                        eax_100 += 1
                                        
                                        if (eax_100 s>= 3)
                                            break
                                        
                                        continue
                                    
                                    var_3e4:4.d = 0
                                    var_3e4:0xc.d = 0
                                    var_3d4_1:4.d = 0
                                    void* eax_101 = data_147abe4
                                    __builtin_memcpy(&var_148, 
                                        "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x"
                                    "3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00"
                                    "3f", 
                                        0x20)
                                    var_3e4.d = 0xff000000
                                    var_3e4:8.d = 0xff000000
                                    var_3d4_1.d = 0xff000000
                                    int32_t* var_48c_8 = data_171efc4
                                    var_44 = xmm7_12 f+ *(eax_101 + 0x20)
                                    float var_40_2 = xmm1_60 f+ *(eax_101 + 0x24)
                                    var_3c[0] = xmm1_62 f+ *(eax_101 + 0x20)
                                    var_3c[1] = xmm2_31 f+ *(eax_101 + 0x24)
                                    var_34 = xmm5_12 f+ *(eax_101 + 0x20)
                                    var_30 = xmm6_10 f+ *(eax_101 + 0x24)
                                    float var_2c_4 = xmm5_12 f+ *(eax_101 + 0x20)
                                    float var_28_4 = xmm6_10 f+ *(eax_101 + 0x24)
                                    sub_6867a0(&var_3e4, &var_148, &var_44, &var_3e4, 1, var_48c_8, 
                                        nullptr)
                                    ecx_63 = var_3e8_5
                                    break
                                
                                ecx_63 += 1
                                edi_14 += 0xc
                                var_3e8_5 = ecx_63
                                
                                if (ecx_63 s>= esi[0x3bff3])
                                    break
                        
                        var_34.o = data_893710
                        sub_682fe0(&var_34, &data_7e43e4, 20f)
                    else if (i_11 == 0x13)
                        sub_5a91a0()
                    else if (i_11 != 0x14)
                        if (i_11 == 0x15)
                            sub_5aa1e0(esi, arg4, esi.w, result_1)
                        else if (i_11 == 0x16)
                            int32_t var_488_12 = data_8d2fcc
                            sub_5a9720(&esi[4])
                    else if (*(arg3 + 0xc) != 0)
                        int32_t i_10 = 0
                        
                        if (esi[0x857f5] s> 0)
                            void* edi_15 = &esi[0x657fc]
                            int32_t i_3
                            
                            do
                                int32_t edx_29 = 0
                                
                                if (0f f> esi[*(edi_15 - 0x10) * 3 + 6])
                                    edx_29 = 1
                                
                                int32_t eax_107 = *edi_15 * 3
                                int32_t ecx_67 = edx_29 + 1
                                
                                if (0f f<= esi[eax_107 + 6])
                                    ecx_67 = edx_29
                                
                                if (ecx_67 != 2)
                                    int32_t var_488_11 = *(edi_15 - 8)
                                    sub_5a9590(eax_107, &data_8d2fcc, &data_8d2fcc, 
                                        *(edi_15 - 0x14), *(edi_15 - 4), data_171d8e0, 
                                        *(edi_15 - 0x1c), *(edi_15 - 0x18), *(edi_15 - 0xc))
                                
                                edi_15 += 0x20
                                i_3 = i_10 + 1
                                i_10 = i_3
                            while (i_3 s< esi[0x857f5])
                    
                    goto label_5abefc
                
                if (data_147aba1 != 0)
                    int32_t i_4 = 0
                    data_cf6b18 = data_891180
                    int32_t i_9 = 0
                    
                    if (esi[0x3bff3] s> 0)
                        void* edi_3 = &esi[0x23ffa]
                        
                        do
                            int32_t ecx_25 = 0
                            int32_t eax_45 = *(edi_3 - 4) * 3
                            
                            if (not(0 f< esi[eax_45 + 6]))
                                ecx_25 = 1
                                float xmm1_41 = esi[eax_45 + 5] f* 1024f
                                var_3c[0] = esi[eax_45 + 4] f* 1024f
                                var_3c[1] = xmm1_41
                            
                            int32_t eax_47 = *edi_3 * 3
                            
                            if (not(0 f< esi[eax_47 + 6]))
                                float xmm1_43 = esi[eax_47 + 5] f* 1024f
                                (&var_3c)[ecx_25][0] = esi[eax_47 + 4] f* 1024f
                                *(&var_38 + (ecx_25 << 3)) = xmm1_43
                                ecx_25 += 1
                            
                            int32_t eax_49 = *(edi_3 + 4) * 3
                            
                            if (not(0 f< esi[eax_49 + 6]))
                                float xmm1_45 = esi[eax_49 + 5] f* 1024f
                                (&var_3c)[ecx_25][0] = esi[eax_49 + 4] f* 1024f
                                *(&var_38 + (ecx_25 << 3)) = xmm1_45
                                ecx_25 += 1
                            
                            if (ecx_25 == 3)
                                sub_5a8d20(eax_49, i_4, &var_3c, result_2)
                                i_4 = i_9
                            
                            i_4 += 1
                            edi_3 += 0xc
                            i_9 = i_4
                        while (i_4 s< esi[0x3bff3])
                    
                    goto label_5abefc
                
                var_488_14 = "Draw3DGame1"
                var_48c_11 = 0x314
                var_490_10 = "C:\x\ax2017\Engine\Draw3d.cpp"
                ecx_77 = "gDraw3DData.submittingRenderItems"
            else
                (*(*data_147b070 + 0x90))(0, 0)
                int32_t i_5 = 0
                int32_t i_7 = 0
                
                if (esi[0x3bff3] s> 0)
                    void* edi_2 = &esi[0x23ffa]
                    
                    do
                        int32_t eax_37 = *(edi_2 - 4) * 3
                        float xmm1_31 = esi[eax_37 + 5] f* 1024f
                        float xmm7_8 = esi[eax_37 + 4] f* 1024f
                        int32_t eax_39 = *edi_2 * 3
                        float xmm2_13 = esi[eax_39 + 5]
                        var_3c[1] = xmm1_31
                        float xmm1_33 = esi[eax_39 + 4] f* 1024f
                        float xmm2_14 = xmm2_13 * 1024f
                        int32_t eax_41 = *(edi_2 + 4) * 3
                        var_3c[0] = xmm7_8
                        int32_t eax_42 = 0
                        float xmm5_4 = esi[eax_41 + 4] f* 1024f
                        float xmm6_4 = esi[eax_41 + 5] f* 1024f
                        var_34 = xmm1_33
                        var_30 = xmm2_14
                        float var_2c_2 = xmm5_4
                        float var_28_2 = xmm6_4
                        
                        while (true)
                            float xmm1_35 = (&var_3c)[eax_42][0] f* 0.0009765625f
                            float xmm2_16 = *(&var_38 + (eax_42 << 3)) * 0.0009765625f
                            
                            if (0.0250000004f > xmm1_35)
                                break
                            
                            if (xmm1_35 > 1.97500002f)
                                break
                            
                            if (0.0250000004f > xmm2_16)
                                break
                            
                            if (xmm2_16 > 0.975000024f)
                                break
                            
                            eax_42 += 1
                            
                            if (eax_42 s>= 3)
                                float xmm3_11 = data_b4a5ac
                                float xmm2_17 = data_b4a5b0
                                void* eax_43 = data_147abe4
                                float var_c0_1 = xmm2_17 * xmm1_31
                                float var_c4 = xmm3_11 * xmm7_8
                                float var_b8_1 = xmm2_17 * xmm2_14
                                float var_bc_1 = xmm3_11 * xmm1_33
                                float xmm3_12 = xmm3_11 * xmm5_4
                                float xmm2_18 = xmm2_17 * xmm6_4
                                float var_b4_1 = xmm3_12
                                float var_ac_1 = xmm3_12
                                float var_b0_1 = xmm2_18
                                float var_a8_1 = xmm2_18
                                char* var_488_6 = data_171d8c4
                                float var_a4 = xmm7_8 f+ *(eax_43 + 0x20)
                                float var_a0_1 = xmm1_31 f+ *(eax_43 + 0x24)
                                float var_9c_1 = xmm1_33 f+ *(eax_43 + 0x20)
                                float var_98_1 = xmm2_14 f+ *(eax_43 + 0x24)
                                float var_94_1 = xmm5_4 f+ *(eax_43 + 0x20)
                                float var_90_1 = xmm6_4 f+ *(eax_43 + 0x24)
                                float var_8c_1 = xmm5_4 f+ *(eax_43 + 0x20)
                                float var_88_1 = xmm6_4 f+ *(eax_43 + 0x24)
                                sub_6867a0(eax_43, &var_c4, &var_a4, &data_bf23ac, 0, result_2, 
                                    var_488_6)
                                i_5 = i_7
                                break
                        
                        i_5 += 1
                        edi_2 += 0xc
                        i_7 = i_5
                    while (i_5 s< esi[0x3bff3])
                
            label_5abefc:
                i_11 = data_147b06c
                *(i_11 + 0x2dc) = 0
                __builtin_memcpy(i_11 + 0x124, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "80\x3f\x00", 
                    0x41)
                sub_649d30()
                
                if (data_147aba1 == 0)
                    var_488_14 = "Draw3DRenderItemSubmissionEnd"
                    var_48c_11 = 0xae8
                    var_490_10 = "C:\x\ax2017\Engine\Draw3d.cpp"
                    ecx_77 = "gDraw3DData.submittingRenderItems"
                else if (data_147aba0 != 0)
                    var_488_14 = "Draw3DRenderItemSubmissionEnd"
                    var_48c_11 = 0xae9
                    var_490_10 = "C:\x\ax2017\Engine\Draw3d.cpp"
                    ecx_77 = "!gDraw3DData.quadGroupDrawing"
                else
                    data_147aba1 = 0
                    sub_645e30()
                    sub_649120()
                    sub_6494f0(2)
                    sub_649c60()
                    sub_6adb80()
                    int32_t eax_109 = data_147b074
                    
                    if (eax_109 == 2)
                        int32_t var_3b8 = eax_109 - 2
                        void var_3b4
                        memset(&var_3b4, eax_109 - 2, 0x1fc)
                        int32_t* eax_112 = *(data_147b078 + 8)
                        (*(*eax_112 + 0x20))(eax_112, 0, 0x80, &var_3b8)
                    
                    result_4 = result_5
                    i = i_6
                label_5abfdb:
                    i += 1
                    i_6 = i
                    
                    if (i s>= 0x17)
                        break
                    
                    continue
    
    sub_63b870(i_11, &data_801800, ecx_77, var_490_10, var_48c_11, var_488_14)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (result_2 != 0)
    sub_69ec60(result_2)

if (result_5 != 0)
    sub_69ec60(result_5)

if (var_428 != 0)
    sub_69ec60(var_428)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

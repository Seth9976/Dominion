// 函数: sub_650190
// 地址: 0x650190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76ce60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_d6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_2 = arg7
int32_t* edi_2 = (arg2 << 4) + *(arg3 + 8)
char* result_7 = arg10
int32_t ecx = *edi_2
char* result_1 = arg15
uint32_t result = ecx - 0x64
char* var_7cc = arg13

if (result u<= 0xaf)
    result = zx.d(lookup_table_652b74[result])
    int32_t var_d74_1
    char* result_4
    char const* const ecx_1
    
    switch (result)
        case 0
            result = sub_6dd320(&data_8cae70, 0x64)
            
            if (*(result + 0x10) != 8)
            label_652977:
                result_4 = "AttribAsString"
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING"
                var_d74_1 = 0xc6b
                goto label_652990
            
            result_4 = edi_2[2]
            result = sub_63d8d0(&arg5[0x578], result_4)
            *(arg5 + 0x15f7) = 1
        case 1
            result = sub_6dd320(&data_8cae70, 0x65)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *arg12 = result
        case 2
            result = result_2
            
            if (*(result + 4) != 0)
                int32_t* ecx_5 = edi_2[2]
                
                if (ecx_5[2] != 0)
                    if (arg5[4].b != 0)
                        result_4 = result_1
                        result = sub_64ff60(result, arg5, ecx_5, arg6, result, arg8, arg9, 
                            result_7, result_4)
                    else
                        int32_t* eax_11 = sub_64fc30(ecx_5)
                        result_4 = result_1
                        void var_1a8
                        char* result_9
                        result, result_9 =
                            sub_64f9b0(eax_11, result_2, eax_11, arg5[0x5ac], &var_1a8, result_4)
                        uint32_t edi_3 = result
                        
                        if (edi_3 s> 0)
                            void** esi_2 = &var_1a8
                            uint32_t i
                            
                            do
                                void* eax_12 = esi_2[1]
                                char* result_14 = (zx.o(0)).d
                                int32_t xmm1_1 = *(eax_12 + 0x14)
                                
                                if (not(0 f> xmm1_1))
                                    result_14 = _mm_min_ss(0x3f800000, xmm1_1)
                                
                                result_4 = result_9
                                result_4 = result_14
                                result, result_9 =
                                    sub_64fe30(eax_12, arg9, arg6, result_7, arg8, *esi_2, result_4)
                                esi_2 = &esi_2[3]
                                i = edi_3
                                edi_3 -= 1
                            while (i != 1)
        case 3
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
            label_652990:
                sub_63b870(result, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_d74_1, 
                    result_4)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            result.b = edi_2[2] != 0
            *(arg5 + 0x15f5) = result.b
        case 4
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            arg5[0x57d].b = result.b
        case 5
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg5 + 0x15f6) = result.b
        case 6
            int32_t* edx_48 = edi_2[2]
            result_4 = nullptr
            int32_t* var_220
            int32_t* eax_52 = sub_64e490(arg5, edx_48, &var_220, arg5[0x5ac], result_2, result_4)
            int32_t var_14_15 = 0x1c
            int32_t edi_5 = 0
            int64_t var_838
            __builtin_memset(&var_838, 0, 0x30)
            int32_t var_800_1 = 0
            int32_t var_804_1 = 0xffffffff
            int32_t var_d74_12
            int32_t var_808_1
            int32_t var_21c
            float var_1fc
            char* ecx_68
            
            if (var_21c == 1)
                int32_t var_1b0
                int32_t edx_49 = var_1b0
                
                if (edx_49 s> 3)
                    result_4 = "PropGraphSet"
                    var_d74_12 = 0x901
                    ecx_68 = "expr.numKeys <= MAX_GRAPH_KEYS"
                label_6528d0:
                    sub_63b870(eax_52, &data_801800, ecx_68, "C:\x\ax2017\Engine\UI2.cpp", 
                        var_d74_12, result_4)
                    
                    if (sub_63bc30() == 0)
                        sub_63bb00()
                        noreturn
                    
                    breakpoint
                
                var_808_1 = edx_49
                int32_t var_7d4_1 = 0
                
                if (edx_49 s> 0)
                    int64_t var_830
                    void* edi_6 = &var_830:4
                    int32_t* esi_5 = &var_1fc
                    int32_t eax_62
                    
                    do
                        char* const result_10 = &data_801800
                        *(edi_6 - 4) = esi_5[4]
                        *edi_6 = esi_5[-7]
                        int32_t* eax_55 = var_220
                        float xmm0_43
                        int16_t top
                        
                        if (eax_55 == 1)
                            xmm0_43 = _mm_cvtepi32_ps(zx.o(esi_5[-5]))
                        else if (eax_55 == 2)
                            xmm0_43 = esi_5[-5]
                        else
                            eax_52 = eax_55 - 3
                            
                            if (eax_55 != 3)
                                goto label_6528bc
                            
                            char* result_18 = esi_5[-6]
                            
                            if (result_18 != 0)
                                result_10 = result_18
                            
                            result_4 = result_10
                            atof(result_4)
                            edx_49 = var_1b0
                            float var_7e0_2 =
                                fconvert.s(unimplemented  {fstp dword [ebp-0x7d0], st0})
                            unimplemented  {fstp dword [ebp-0x7d0], st0}
                            top += 1
                            xmm0_43 = var_7e0_2
                            result_10 = &data_801800
                        
                        int32_t* eax_58 = var_220
                        *(edi_6 - 0xc) = xmm0_43
                        float xmm0_45
                        
                        if (eax_58 == 1)
                            xmm0_45 = _mm_cvtepi32_ps(zx.o(*esi_5))
                        else if (eax_58 == 2)
                            xmm0_45 = *esi_5
                        else
                            eax_52 = eax_58 - 3
                            
                            if (eax_58 != 3)
                                goto label_6528bc
                            
                            char* result_19 = esi_5[-1]
                            
                            if (result_19 != 0)
                                result_10 = result_19
                            
                            result_4 = result_10
                            atof(result_4)
                            edx_49 = var_1b0
                            float var_7e0_3 =
                                fconvert.s(unimplemented  {fstp dword [ebp-0x7d0], st0})
                            unimplemented  {fstp dword [ebp-0x7d0], st0}
                            top += 1
                            xmm0_45 = var_7e0_3
                        
                        esi_5 = &esi_5[0xd]
                        eax_62 = var_7d4_1 + 1
                        *(edi_6 - 8) = xmm0_45
                        edi_6 += 0x10
                        var_7d4_1 = eax_62
                    while (eax_62 s< edx_49)
                    edi_5 = var_800_1
                
                goto label_651f9f
            
            eax_52 = var_220
            char* const result_12 = &data_801800
            var_808_1 = 1
            float var_210
            float xmm0_47
            
            if (eax_52 != 1)
                if (eax_52 == 2)
                    xmm0_47 = var_210
                    goto label_651f42
                
                if (eax_52 != 3)
                label_6528bc:
                    result_4 = "EvalValGet"
                    ecx_68 = "Halt"
                    var_d74_12 = 0x8e0
                    goto label_6528d0
                
                char* const result_11 = &data_801800
                char* result_15
                
                if (result_15 != 0)
                    result_11 = result_15
                
                result_4 = result_11
                atof(result_4)
                eax_52 = var_220
                xmm0_47 = fconvert.s(arg4)
                goto label_651f42
            
            xmm0_47 = _mm_cvtepi32_ps(zx.o(var_210))
        label_651f42:
            var_838.d = xmm0_47
            float xmm0_49
            
            if (eax_52 != 1)
                void* eax_65 = eax_52 - 2
                
                if (eax_52 == 2)
                    xmm0_49 = var_1fc
                    goto label_651f97
                
                eax_52 = eax_65 - 1
                
                if (eax_65 != 1)
                    goto label_6528bc
                
                char* result_16
                
                if (result_16 != 0)
                    result_12 = result_16
                
                result_4 = result_12
                atof(result_4)
                float var_7e0_5 = fconvert.s(unimplemented  {fstp dword [ebp-0x7d0], st0})
                unimplemented  {fstp dword [ebp-0x7d0], st0}
                xmm0_49 = var_7e0_5
                goto label_651f97
            
            xmm0_49 = _mm_cvtepi32_ps(zx.o(var_1fc))
        label_651f97:
            var_838:4.d = xmm0_49
        label_651f9f:
            char* ecx_73 = var_7cc
            *(ecx_73 + 0x1b0) = var_838.o
            int64_t var_828
            *(ecx_73 + 0x1c0) = var_828.o
            int64_t var_818
            *(ecx_73 + 0x1d0) = var_818.o
            *(ecx_73 + 0x1e0) = var_808_1.q
            *(ecx_73 + 0x1e8) = edi_5
            result_4 = sub_64ca90
            int32_t var_14_16 = 0x1d
            void var_218
            result = `eh vector vbase constructor iterator'(&var_218, 0x34, 2, result_4)
        case 7
            result = sub_6dd320(&data_8cae70, 0x70)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            *(arg12 i+ 0x20) = edi_2[2]
            result = sub_65bf00(arg5)
        case 8
            result = edi_2[2]
            *(arg12 i+ 0x1d0) = result
        case 9
            result = edi_2[2]
            float xmm1_9[0x4] = *result
            float xmm2_7 = _mm_shuffle_ps(xmm1_9, xmm1_9, 0xaa)
            float xmm4_1
            
            if (not(xmm2_7 f< xmm1_9))
                xmm4_1 = xmm1_9[0].q:4.d
            
            if (xmm2_7 f< xmm1_9 || arg12 < xmm4_1)
                result_4 = "UI2MergeAttribute"
                var_d74_1 = 0x1475
                ecx_1 = "RectIsNormalized(rect)"
                goto label_652990
            
            int32_t var_9f8_1 = xmm1_9
            int64_t var_9f4
            __builtin_memset(&var_9f4, 0, 0x2c)
            int32_t var_9c4_1 = 0xffffffff
            *(arg13 + 0x3c) = var_9f8_1.o
            int32_t var_9c8_1 = 1
            int64_t var_9ec
            *(arg13 + 0x4c) = var_9ec:4.o
            int32_t var_984_1 = 0xffffffff
            int32_t var_988_1 = 1
            int64_t var_9dc
            *(arg13 + 0x5c) = var_9dc:4.o
            *(arg13 + 0x6c) = var_9c8_1.q
            int64_t var_9b4
            __builtin_memset(&var_9b4, 0, 0x2c)
            int32_t var_944_1 = 0xffffffff
            int32_t var_948_1 = 1
            *(arg13 + 0x78) = xmm4_1.o
            int32_t var_904_1 = 0xffffffff
            int64_t var_9ac
            *(arg13 + 0x88) = var_9ac:4.o
            int32_t var_908_1 = 1
            *(arg13 + 0x74) = 0
            int64_t var_99c
            *(arg13 + 0x98) = var_99c:4.o
            *(arg13 + 0xa8) = var_988_1.q
            int64_t var_974
            __builtin_memset(&var_974, 0, 0x2c)
            *(arg13 + 0xb0) = 0
            *(arg13 + 0xb4) = (xmm2_7 f- xmm1_9).o
            int64_t var_96c
            *(arg13 + 0xc4) = var_96c:4.o
            int64_t var_95c
            *(arg13 + 0xd4) = var_95c:4.o
            *(arg13 + 0xe4) = var_948_1.q
            int64_t var_934
            __builtin_memset(&var_934, 0, 0x2c)
            *(arg13 + 0xec) = 0
            *(arg13 + 0xf0) = (arg12 - xmm4_1).o
            int64_t var_92c
            *(arg13 + 0x100) = var_92c:4.o
            int64_t var_91c
            *(arg13 + 0x110) = var_91c:4.o
            *(arg13 + 0x120) = var_908_1.q
            *(arg13 + 0x128) = 0
        case 0xa
            int128_t* eax_26 = edi_2[2]
            int128_t xmm0_2 = *eax_26
            int128_t xmm1_2 = eax_26[1]
            result = 0x3f800000
            __builtin_memset(arg11, 0, 0x20)
            *(arg11 + 0x20) = xmm0_2
            *(arg11 + 0x30) = xmm1_2
            *(arg11 + 0x40) = 0x3f800000
        case 0xb
            int128_t* eax_27 = edi_2[2]
            int128_t xmm0_3 = *eax_27
            int128_t xmm1_3 = eax_27[1]
            result = 0x3f800000
            __builtin_memset(arg11 + 0x44, 0, 0x20)
            *(arg11 + 0x64) = xmm0_3
            *(arg11 + 0x74) = xmm1_3
            *(arg11 + 0x84) = 0x3f800000
        case 0xc
            result = sub_6dd320(&data_8cae70, 0x79)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            int32_t ecx_48 = edi_2[2]
            *(arg12 i+ 0xc) = ecx_48
            int32_t eax_43
            int32_t edx_24
            eax_43, edx_24 = sub_6b7590(ecx_48)
            result_4 = 0x40
            int96_t var_7ec
            var_7ec:8.d = eax_43
            void var_a48
            result = memset(&var_a48, 0, result_4)
            char* ecx_49 = var_7cc
            int32_t var_a4c_1 = edx_24
            int32_t var_a04_1 = 0xffffffff
            int32_t var_a08_1 = 1
            *(ecx_49 + 0x2dc) = var_7ec:8.d.o
            int128_t var_a40
            *(ecx_49 + 0x2ec) = var_a40
            int128_t var_a30
            *(ecx_49 + 0x2fc) = var_a30
            int128_t var_a20
            *(ecx_49 + 0x30c) = var_a20
            int128_t var_a10
            *(ecx_49 + 0x31c) = var_a10
            *(ecx_49 + 0x32c) = 0
        case 0xd
            result = sub_6dd320(&data_8cae70, 0x7a)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 4) = result
        case 0xe
            result = sub_6dd320(&data_8cae70, 0x7b)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 8) = result.b
        case 0xf
            result = sub_6dd320(&data_8cae70, 0x7e)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            char* ecx_50 = var_7cc
            int64_t var_8f4
            __builtin_memset(&var_8f4, 0, 0x2c)
            int32_t var_8c4_1 = 0xffffffff
            *ecx_50 = edi_2[2].o
            int32_t var_8c8_1 = 1
            int64_t var_8ec
            *(ecx_50 + 0x10) = var_8ec:4.o
            int64_t var_8dc
            *(ecx_50 + 0x20) = var_8dc:4.o
            *(ecx_50 + 0x30) = var_8c8_1.q
            *(ecx_50 + 0x38) = 0
        case 0x10
            result = sub_6dd320(&data_8cae70, 0x7f)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x18) = result
        case 0x11
            result_4 = 0x78
            int128_t var_b20
            memset(&var_b20, 0, result_4)
            result = edi_2[2]
            int32_t var_aa0_1 = 0
            int32_t var_aa4_1 = 0xffffffff
            int32_t var_aa8_1 = 1
            var_b20 = *result
            __builtin_memcpy(&var_7cc[0x12c], &var_b20, 0x84)
            
            if (*(arg12 i+ 0x18) == 0)
                *(arg12 i+ 0x18) = 5
        case 0x12
            int32_t* edx_16 = edi_2[2]
            result_4 = nullptr
            void var_6d0
            int32_t edx_17 = sub_64e490(result, edx_16, &var_6d0, arg5[0x5ac], result_2, result_4)
            int32_t var_14_5 = 7
            void var_ce0
            result_4 = &var_ce0
            uint32_t* eax_32 = sub_67d9e0(&var_ce0, edx_17, &var_6d0, result_4)
            char* ecx_35 = var_7cc
            int128_t xmm1_5 = *(eax_32 + 0x10)
            int128_t xmm2_2 = *(eax_32 + 0x20)
            int64_t xmm3_2 = *(eax_32 + 0x30)
            int32_t eax_33 = eax_32[0xe]
            *(ecx_35 + 0x3e4) = *eax_32
            *(ecx_35 + 0x3f4) = xmm1_5
            *(ecx_35 + 0x404) = xmm2_2
            *(ecx_35 + 0x414) = xmm3_2
            *(ecx_35 + 0x41c) = eax_33
            *(arg12 i+ 0x48) = 1
            result_4 = sub_64ca90
            int32_t var_14_6 = 8
            void var_6c8
            result = `eh vector vbase constructor iterator'(&var_6c8, 0x34, 2, result_4)
        case 0x13
            int32_t* edx_18 = edi_2[2]
            result_4 = nullptr
            void var_4f0
            int32_t edx_19 = sub_64e490(result, edx_18, &var_4f0, arg5[0x5ac], result_2, result_4)
            int32_t var_14_7 = 0xa
            void var_ca0
            result_4 = &var_ca0
            uint32_t* eax_35 = sub_67d9e0(&var_ca0, edx_19, &var_4f0, result_4)
            char* ecx_39 = var_7cc
            int128_t xmm1_6 = *(eax_35 + 0x10)
            int128_t xmm2_3 = *(eax_35 + 0x20)
            int64_t xmm3_3 = *(eax_35 + 0x30)
            int32_t eax_36 = eax_35[0xe]
            *(ecx_39 + 0x420) = *eax_35
            *(ecx_39 + 0x430) = xmm1_6
            *(ecx_39 + 0x440) = xmm2_3
            *(ecx_39 + 0x450) = xmm3_3
            *(ecx_39 + 0x458) = eax_36
            *(arg12 i+ 0x48) = 1
            result_4 = sub_64ca90
            int32_t var_14_8 = 0xb
            void var_4e8
            result = `eh vector vbase constructor iterator'(&var_4e8, 0x34, 2, result_4)
        case 0x14
            int32_t* edx_22 = edi_2[2]
            result_4 = nullptr
            void var_5e0
            int32_t edx_23 = sub_64e490(result, edx_22, &var_5e0, arg5[0x5ac], result_2, result_4)
            int32_t var_14_11 = 0x10
            void var_b60
            result_4 = &var_b60
            uint32_t* eax_41 = sub_67d9e0(&var_b60, edx_23, &var_5e0, result_4)
            char* ecx_47 = var_7cc
            int128_t xmm1_8 = *(eax_41 + 0x10)
            int128_t xmm2_5 = *(eax_41 + 0x20)
            int64_t xmm3_5 = *(eax_41 + 0x30)
            int32_t eax_42 = eax_41[0xe]
            *(ecx_47 + 0x45c) = *eax_41
            *(ecx_47 + 0x46c) = xmm1_8
            *(ecx_47 + 0x47c) = xmm2_5
            *(ecx_47 + 0x48c) = xmm3_5
            *(ecx_47 + 0x494) = eax_42
            *(arg12 i+ 0x48) = 1
            result_4 = sub_64ca90
            int32_t var_14_12 = 0x11
            void var_5d8
            result = `eh vector vbase constructor iterator'(&var_5d8, 0x34, 2, result_4)
        case 0x15
            int32_t* edx_20 = edi_2[2]
            result_4 = nullptr
            void var_658
            int32_t edx_21 = sub_64e490(result, edx_20, &var_658, arg5[0x5ac], result_2, result_4)
            int32_t var_14_9 = 0xd
            void var_d60
            result_4 = &var_d60
            uint32_t* eax_38 = sub_67d9e0(&var_d60, edx_21, &var_658, result_4)
            char* ecx_43 = var_7cc
            int128_t xmm1_7 = *(eax_38 + 0x10)
            int128_t xmm2_4 = *(eax_38 + 0x20)
            int64_t xmm3_4 = *(eax_38 + 0x30)
            int32_t eax_39 = eax_38[0xe]
            *(ecx_43 + 0x498) = *eax_38
            *(ecx_43 + 0x4a8) = xmm1_7
            *(ecx_43 + 0x4b8) = xmm2_4
            *(ecx_43 + 0x4c8) = xmm3_4
            *(ecx_43 + 0x4d0) = eax_39
            *(arg12 i+ 0x48) = 1
            result_4 = sub_64ca90
            int32_t var_14_10 = 0xe
            void var_650
            result = `eh vector vbase constructor iterator'(&var_650, 0x34, 2, result_4)
        case 0x16
            result = sub_6dd320(&data_8cae70, 0x85)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            int32_t ecx_78 = edi_2[2]
            void var_be0
            result_4 = &var_be0
            int32_t* eax_72 = sub_67dc00(&var_be0, 0x85, ecx_78, result_4)
            char* ecx_79 = var_7cc
            int128_t xmm1_11 = *(eax_72 + 0x10)
            int128_t xmm2_10 = *(eax_72 + 0x20)
            int64_t xmm3_9 = *(eax_72 + 0x30)
            result = eax_72[0xe]
            *(ecx_79 + 0x264) = *eax_72
            *(ecx_79 + 0x274) = xmm1_11
            *(ecx_79 + 0x284) = xmm2_10
            *(ecx_79 + 0x294) = xmm3_9
            *(ecx_79 + 0x29c) = result
        case 0x17
            result = sub_6dd320(&data_8cae70, 0x86)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            int32_t ecx_80 = edi_2[2]
            void var_c20
            result_4 = &var_c20
            int32_t* eax_74 = sub_67dc00(&var_c20, 0x86, ecx_80, result_4)
            char* ecx_81 = var_7cc
            int128_t xmm1_12 = *(eax_74 + 0x10)
            int128_t xmm2_11 = *(eax_74 + 0x20)
            int64_t xmm3_10 = *(eax_74 + 0x30)
            result = eax_74[0xe]
            *(ecx_81 + 0x2a0) = *eax_74
            *(ecx_81 + 0x2b0) = xmm1_12
            *(ecx_81 + 0x2c0) = xmm2_11
            *(ecx_81 + 0x2d0) = xmm3_10
            *(ecx_81 + 0x2d8) = result
        case 0x18
            result = sub_6dd320(&data_8cae70, 0x87)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x14) = result
        case 0x19
            result = sub_6dd320(&data_8cae70, 0x88)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x30) = result
        case 0x1a
            result = sub_6dd320(&data_8cae70, 0x89)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg5 + 0x11) = result.b
        case 0x1b
            result = sub_6dd320(&data_8cae70, 0x8a)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg5 + 0x12) = result.b
        case 0x1c
            result = sub_6dd320(&data_8cae70, 0x8b)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg5 + 0x13) = result.b
        case 0x1d
            result_4 = arg5
            char* result_8 = *(arg5[0x580] + 0x20)
            result_4 = result_8
            
            if (result_8 != 0 && *result_8 != 0)
                char* eax_45 = sub_63d4e0(&result_4)
                *(eax_45 + 4) += 1
            
            sub_6c5250(&result_1)
            int32_t var_14_13 = 0x13
            char* result_6 = result_1
            result_7 = result_6
            
            if (result_6 != 0 && *result_6 != 0)
                char* eax_46 = sub_63d4e0(&result_7)
                *(eax_46 + 4) += 1
            
            var_14_13.b = 0x14
            int32_t* ecx_55 = data_147d094
            result_4 = &result_7
            sub_63d850(ecx_55, result_4)
            var_14_13.b = 0x15
            
            if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
                char* eax_47 = sub_63d4e0(&result_7)
                int32_t temp9_1 = *(eax_47 + 4)
                *(eax_47 + 4) -= 1
                
                if (temp9_1 == 1)
                    sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
            
            var_14_13.b = 0x13
            int32_t* edx_39 = edi_2[2]
            result_4 = nullptr
            int32_t var_388
            sub_64e490(arg5, edx_39, &var_388, arg5[0x5ac], result_2, result_4)
            var_14_13.b = 0x16
            int32_t var_378
            int32_t eax_49 = var_378
            
            if (var_388 != 4)
                eax_49 = 0
            
            *(arg12 i+ 0x28) = eax_49
            sub_63d720(&result_2, &data_801800)
            var_14_13.b = 0x17
            int32_t* ecx_61 = data_147d094
            result_4 = &result_2
            sub_63d850(ecx_61, result_4)
            var_14_13.b = 0x18
            
            if (data_cf65bc != 0)
                char* result_5 = result_2
                
                if (result_5 != 0 && *result_5 != 0)
                    char* eax_50 = sub_63d4e0(&result_2)
                    int32_t temp17_1 = *(eax_50 + 4)
                    *(eax_50 + 4) -= 1
                    
                    if (temp17_1 == 1)
                        sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
            
            result_4 = sub_64ca90
            var_14_13.b = 0x19
            void var_380
            result = `eh vector vbase constructor iterator'(&var_380, 0x34, 2, result_4)
            int32_t var_14_14 = 0x1a
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp19_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp19_1 == 1)
                        result = sub_64c080(result, *(result + 0xc) + 0x10)
        case 0x1e
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x78) = result
        case 0x1f
            int32_t* edx_14 = edi_2[2]
            result_4 = nullptr
            void var_748
            int32_t edx_15 = sub_64e490(result, edx_14, &var_748, arg5[0x5ac], result_2, result_4)
            int32_t var_14_3 = 4
            void var_d20
            result_4 = &var_d20
            uint32_t* eax_29 = sub_67d9e0(&var_d20, edx_15, &var_748, result_4)
            char* ecx_31 = var_7cc
            int128_t xmm1_4 = *(eax_29 + 0x10)
            int128_t xmm2_1 = *(eax_29 + 0x20)
            int64_t xmm3_1 = *(eax_29 + 0x30)
            int32_t eax_30 = eax_29[0xe]
            *(ecx_31 + 0x3a8) = *eax_29
            *(ecx_31 + 0x3b8) = xmm1_4
            *(ecx_31 + 0x3c8) = xmm2_1
            *(ecx_31 + 0x3d8) = xmm3_1
            *(ecx_31 + 0x3e0) = eax_30
            result_4 = sub_64ca90
            int32_t var_14_4 = 5
            void var_740
            result = `eh vector vbase constructor iterator'(&var_740, 0x34, 2, result_4)
        case 0x20
            int32_t* edx_50 = edi_2[2]
            result_4 = nullptr
            void var_568
            int32_t edx_51 = sub_64e490(arg5, edx_50, &var_568, arg5[0x5ac], result_2, result_4)
            int32_t var_14_17 = 0x1f
            void var_ba0
            result_4 = &var_ba0
            uint32_t* eax_69 = sub_67d9e0(&var_ba0, edx_51, &var_568, result_4)
            char* ecx_76 = var_7cc
            int128_t xmm1_10 = *(eax_69 + 0x10)
            int128_t xmm2_9 = *(eax_69 + 0x20)
            int64_t xmm3_8 = *(eax_69 + 0x30)
            int32_t eax_70 = eax_69[0xe]
            *(ecx_76 + 0x4d4) = *eax_69
            *(ecx_76 + 0x4e4) = xmm1_10
            *(ecx_76 + 0x4f4) = xmm2_9
            *(ecx_76 + 0x504) = xmm3_8
            *(ecx_76 + 0x50c) = eax_70
            result_4 = sub_64ca90
            int32_t var_14_18 = 0x20
            void var_560
            result = `eh vector vbase constructor iterator'(&var_560, 0x34, 2, result_4)
        case 0x21
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0xb8) = result
        case 0x22
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0xc0) = result.b
        case 0x23
            result = sub_6dd320(&data_8cae70, 0x92)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x34) = result
        case 0x24
            result = sub_6dd320(&data_8cae70, 0x93)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            char* ecx_66 = var_7cc
            int64_t var_8b4
            __builtin_memset(&var_8b4, 0, 0x2c)
            int32_t var_884_1 = 0xffffffff
            *(ecx_66 + 0x1ec) = edi_2[2].o
            int32_t var_888_1 = 1
            int64_t var_8ac
            *(ecx_66 + 0x1fc) = var_8ac:4.o
            int64_t var_89c
            *(ecx_66 + 0x20c) = var_89c:4.o
            *(ecx_66 + 0x21c) = var_888_1.q
            *(ecx_66 + 0x224) = 0
        case 0x25
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x3c) = result
        case 0x26
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x38) = result
        case 0x27
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x40) = result
        case 0x28
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x44) = result
        case 0x29
            result = sub_6dd320(&data_8cae70, 0x98)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x4c) = result
        case 0x2a
            result = sub_6dd320(&data_8cae70, 0x99)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x50) = result
        case 0x2b
            result = sub_6dd320(&data_8cae70, 0x9a)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x54) = result
        case 0x2c
            result = sub_6dd320(&data_8cae70, 0x9b)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x58) = result
        case 0x2d
            result = sub_6dd320(&data_8cae70, 0x9c)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x5c) = result
        case 0x2e
            result = sub_6dd320(&data_8cae70, 0x9d)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x60) = result
        case 0x2f
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x68) = result
        case 0x30
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x70) = result
        case 0x31
            result = sub_6dd320(&data_8cae70, 0xc8)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0xe8) = result
        case 0x32
            int32_t* edx_53 = edi_2[2]
            result_4 = nullptr
            int32_t var_478
            sub_64e490(arg5, edx_53, &var_478, arg5[0x5ac], result_2, result_4)
            int32_t var_14_21 = 0x24
            int32_t eax_82
            
            if (var_478 != 1)
                eax_82 = 0
            else
                eax_82 = sub_67d600(&var_478)
            
            *(arg12 i+ 0xc8) = eax_82
            sub_67a770(arg5, arg12 i+ 0xc4)
            result_4 = sub_64ca90
            int32_t var_14_22 = 0x25
            void var_470
            result = `eh vector vbase constructor iterator'(&var_470, 0x34, 2, result_4)
        case 0x33
            int32_t* edx_55 = edi_2[2]
            result_4 = nullptr
            int32_t var_310
            sub_64e490(arg5, edx_55, &var_310, arg5[0x5ac], result_2, result_4)
            int32_t var_14_23 = 0x26
            int32_t* edx_56
            
            if (var_310 != 1)
                edx_56 = arg12 i+ 0xc4
                *edx_56 = 0
            else
                int32_t eax_84 = sub_67d600(&var_310)
                *(arg12 i+ 0xc4) = eax_84
                edx_56 = arg12 i+ 0xc4
                
                if (eax_84 s>= 0x96)
                    result_4 = "UI2MergeAttribute"
                    sub_63b870(eax_84, &data_801800, "propsStatic.dimensions.x < 150", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0x1558, result_4)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            sub_67a770(arg5, edx_56)
            result_4 = sub_64ca90
            int32_t var_14_24 = 0x27
            void var_308
            result = `eh vector vbase constructor iterator'(&var_308, 0x34, 2, result_4)
        case 0x34
            int32_t* edx_52 = edi_2[2]
            result_4 = nullptr
            int32_t var_298
            sub_64e490(arg5, edx_52, &var_298, arg5[0x5ac], result_2, result_4)
            int32_t var_14_19 = 0x22
            
            if (var_298 != 1)
                *(arg12 i+ 0x100) = 0
            else
                int32_t eax_80 = sub_67d600(&var_298)
                *(arg12 i+ 0x100) = eax_80
                
                if (eax_80 s>= 0x18f)
                    result_4 = "UI2MergeAttribute"
                    sub_63b870(eax_80, &data_801800, "propsStatic.numTableItems < 399", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0x1542, result_4)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            result_4 = sub_64ca90
            int32_t var_14_20 = 0x23
            void var_290
            result = `eh vector vbase constructor iterator'(&var_290, 0x34, 2, result_4)
        case 0x35
            int32_t* edx_57 = edi_2[2]
            result_4 = nullptr
            int32_t var_400
            sub_64e490(arg5, edx_57, &var_400, arg5[0x5ac], result_2, result_4)
            int32_t var_14_25 = 0x28
            
            if (var_400 != 1)
                *(arg12 i+ 0xcc) = 0
            else
                int32_t eax_86 = sub_67d600(&var_400)
                *(arg12 i+ 0xcc) = eax_86
                
                if (eax_86 s>= 0x63)
                    result_4 = "UI2MergeAttribute"
                    sub_63b870(eax_86, &data_801800, "propsStatic.overrideLastRow < 99", 
                        "C:\x\ax2017\Engine\UI2.cpp", 0x1568, result_4)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            result_4 = sub_64ca90
            int32_t var_14_26 = 0x29
            void var_3f8
            result = `eh vector vbase constructor iterator'(&var_3f8, 0x34, 2, result_4)
        case 0x36
            result = sub_6dd320(&data_8cae70, 0xcd)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0xd0) = result.b
        case 0x37
            int32_t* eax_13 = edi_2[2]
            result = eax_13[1]
            *(arg12 i+ 0xd4) = *eax_13
            *(arg12 i+ 0xd8) = result
        case 0x38
            int32_t* eax_14 = edi_2[2]
            result = eax_14[1]
            *(arg12 i+ 0xdc) = *eax_14
            *(arg12 i+ 0xe0) = result
        case 0x39
            result = sub_6dd320(&data_8cae70, 0xd0)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0xe4) = result
        case 0x3a
            result = sub_6dd320(&data_8cae70, 0xd1)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0xf0) = result
        case 0x3b
            result = sub_6dd320(&data_8cae70, 0xd2)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0xf8) = result
        case 0x3c
            result = sub_6dd320(&data_8cae70, 0xd3)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x104) = result
        case 0x3d
            result = sub_6dd320(&data_8cae70, 0xd4)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x108) = result
        case 0x3e
            if (arg14 == 0)
                int32_t* edx_10 = edi_2[2]
                char var_7cd
                result_4 = &var_7cd
                char* result_3 = result_2
                var_7cd = 0
                void var_7c0
                sub_64e490(&var_7cd, edx_10, &var_7c0, arg5[0x5ac], result_3, result_4)
                int32_t var_14_1 = 0
                sub_64ce00(&var_7cc, &var_7c0, arg4)
                var_14_1.b = 1
                result_4 = &var_7cc
                sub_63d850(arg12 i+ 0x1e0, result_4)
                *(arg12 i+ 0x1e4) = var_7cd
                var_14_1.b = 2
                
                if (data_cf65bc != 0)
                    char* eax_21 = var_7cc
                    
                    if (eax_21 != 0 && *eax_21 != 0)
                        char* eax_22 = sub_63d4e0(&var_7cc)
                        int32_t temp5_1 = *(eax_22 + 4)
                        *(eax_22 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                            var_7cc = &data_801800
                
                result_4 = sub_64ca90
                int32_t var_14_2 = 3
                void var_7b8
                result = `eh vector vbase constructor iterator'(&var_7b8, 0x34, 2, result_4)
        case 0x3f
            result = sub_6dd320(&data_8cae70, 0xd6)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x110) = result
        case 0x40
            result = sub_6dd320(&data_8cae70, 0xd7)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x118) = result
        case 0x41
            result = sub_6dd320(&data_8cae70, 0xd8)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x120) = result
        case 0x42
            result_4 = *edi_2[2]
            void var_c60
            int32_t* eax_76 = sub_67db20(&var_c60, result_4)
            int128_t xmm1_13 = *(eax_76 + 0x10)
            int128_t xmm2_12 = *(eax_76 + 0x20)
            int64_t xmm3_11 = *(eax_76 + 0x30)
            result = eax_76[0xe]
            *(arg13 + 0x330) = *eax_76
            *(arg13 + 0x340) = xmm1_13
            *(arg13 + 0x350) = xmm2_12
            *(arg13 + 0x360) = xmm3_11
            *(arg13 + 0x368) = result
        case 0x43
            result_4 = *edi_2[2]
            void var_a90
            int32_t* eax_78 = sub_67db20(&var_a90, result_4)
            int128_t xmm1_14 = *(eax_78 + 0x10)
            int128_t xmm2_13 = *(eax_78 + 0x20)
            int64_t xmm3_12 = *(eax_78 + 0x30)
            result = eax_78[0xe]
            *(arg13 + 0x36c) = *eax_78
            *(arg13 + 0x37c) = xmm1_14
            *(arg13 + 0x38c) = xmm2_13
            *(arg13 + 0x39c) = xmm3_12
            *(arg13 + 0x3a4) = result
        case 0x44
            result = sub_6dd320(&data_8cae70, 0xdb)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x12c) = result
        case 0x45
            result = sub_6dd320(&data_8cae70, 0xdc)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            char* result_13 = edi_2[2]
            char edx_7
            
            if (result_13 == 0 || *result_13 == 0x23)
                char* const eax_17 = &data_801800
                char* esi_4 = *(arg12 i+ 0x134)
                char* const ecx_13 = &data_801800
                
                if (esi_4 != 0)
                    eax_17 = esi_4
                
                while (true)
                    edx_7 = *eax_17
                    char temp4_1 = *ecx_13
                    bool c_2 = edx_7 u< temp4_1
                    
                    if (edx_7 == temp4_1)
                        if (edx_7 == 0)
                            result = 0
                            break
                        
                        edx_7 = eax_17[1]
                        char temp13_1 = ecx_13[1]
                        c_2 = edx_7 u< temp13_1
                        
                        if (edx_7 == temp13_1)
                            eax_17 = &eax_17[2]
                            ecx_13 = &ecx_13[2]
                            
                            if (edx_7 != 0)
                                continue
                            
                            result = 0
                            break
                    
                    result = sbb.d(eax_17, eax_17, c_2) | 1
                    break
                
                if (result != 0)
                    if (esi_4 != 0 && esi_4 != &data_801800)
                        if (data_cf65bc != 0 && *esi_4 != 0)
                            result = sub_63d4e0(arg12 i+ 0x134)
                            int32_t temp21_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp21_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                        
                        *(arg12 i+ 0x134) = &data_801800
                    
                    *(arg12 i+ 0x138) = 0
            else
                char* eax_15 = *(arg12 i+ 0x134)
                char* const ecx_11 = &data_801800
                
                if (eax_15 != 0)
                    ecx_11 = eax_15
                
                char* result_17 = result_13
                
                while (true)
                    edx_7 = *ecx_11
                    char temp8_1 = *result_17
                    bool c_1 = edx_7 u< temp8_1
                    
                    if (edx_7 == temp8_1)
                        if (edx_7 == 0)
                            result = 0
                            break
                        
                        edx_7 = ecx_11[1]
                        char temp16_1 = result_17[1]
                        c_1 = edx_7 u< temp16_1
                        
                        if (edx_7 == temp16_1)
                            ecx_11 = &ecx_11[2]
                            result_17 = &result_17[2]
                            
                            if (edx_7 != 0)
                                continue
                            
                            result = 0
                            break
                    
                    result = sbb.d(result_17, result_17, c_1) | 1
                    break
                
                if (result != 0)
                    result_4 = result_13
                    result = sub_63d8d0(arg12 i+ 0x134, result_4)
                    *(arg12 i+ 0x138) = 0
        case 0x46
            result = edi_2[2]
            *(arg12 i+ 0x1d4) = result
        case 0x47
            result = sub_6dd320(&data_8cae70, 0xde)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            char* ecx_92 = var_7cc
            int64_t var_874
            __builtin_memset(&var_874, 0, 0x2c)
            int32_t var_844_1 = 0xffffffff
            *(ecx_92 + 0x228) = edi_2[2].o
            int32_t var_848_1 = 1
            int64_t var_86c
            *(ecx_92 + 0x238) = var_86c:4.o
            int64_t var_85c
            *(ecx_92 + 0x248) = var_85c:4.o
            *(ecx_92 + 0x258) = var_848_1.q
            *(ecx_92 + 0x260) = 0
        case 0x48
            result = sub_6dd320(&data_8cae70, 0xdf)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x13c) = result
        case 0x49
            int32_t* eax_87 = edi_2[2]
            result = eax_87[1]
            *(arg12 i+ 0x140) = *eax_87
            *(arg12 i+ 0x144) = result
        case 0x4a
            result = sub_6dd320(&data_8cae70, 0xe1)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x148) = result
        case 0x4b
            result = sub_6dd320(&data_8cae70, 0xe2)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x14c) = result.b
        case 0x4c
            result = sub_6dd320(&data_8cae70, 0xe3)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x150) = result
        case 0x4d
            result = sub_6dd320(&data_8cae70, 0xe4)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x154) = result
        case 0x4e
            result = sub_6dd320(&data_8cae70, 0xe5)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x158) = result
        case 0x4f
            result = edi_2[2]
            *(arg12 i+ 0x15c) = *result
        case 0x50
            result = sub_6dd320(&data_8cae70, 0xe7)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x16c) = result
        case 0x51
            result = sub_6dd320(&data_8cae70, 0xe8)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x170) = result.b
        case 0x52
            result = sub_6dd320(&data_8cae70, 0xe9)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x171) = result.b
        case 0x53
            result = sub_6dd320(&data_8cae70, 0xea)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x172) = result.b
        case 0x54
            result = sub_6dd320(&data_8cae70, 0xeb)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x130) = result.b
        case 0x55
            result = *edi_2[2]
            *(arg12 i+ 0x173) = result
        case 0x56
            result = *edi_2[2]
            *(arg12 i+ 0x17b) = result
        case 0x57
            result = sub_6dd320(&data_8cae70, 0xef)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x180) = result
        case 0x58
            result = edi_2[2]
            *(arg12 i+ 0x184) = *result
        case 0x59
            int32_t* eax_23 = edi_2[2]
            result = eax_23[1]
            *(arg12 i+ 0x124) = *eax_23
            *(arg12 i+ 0x128) = result
        case 0x5a
            result = sub_6dd320(&data_8cae70, 0xfa)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            result = edi_2[2]
            *(arg12 i+ 0x194) = result
        case 0x5b
            result = sub_6dd320(&data_8cae70, 0xfc)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            result = edi_2[2]
            *(arg12 i+ 0x198) = result
        case 0x5c
            result = sub_6dd320(&data_8cae70, 0xfd)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x1a0) = result
        case 0x5d
            result = sub_6dd320(&data_8cae70, 0xfe)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x19c) = result.b
        case 0x5e
            result = sub_6dd320(&data_8cae70, 0xff)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x19d) = result.b
        case 0x5f
            result = sub_6dd320(&data_8cae70, 0x100)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x19e) = result.b
        case 0x60
            result = sub_6dd320(&data_8cae70, 0x101)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x19f) = result.b
        case 0x61
            result = sub_6dd320(&data_8cae70, 0x102)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x1a4) = result.b
        case 0x62
            result = sub_6dd320(&data_8cae70, 0x103)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x1c8) = result
        case 0x63
            result = sub_6dd320(&data_8cae70, 0x104)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x1a8) = result
        case 0x64
            result = sub_6dd320(&data_8cae70, 0x105)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            result = edi_2[2]
            *(arg12 i+ 0x1b0) = result
        case 0x65
            result = sub_6dd320(&data_8cae70, 0x106)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x1b8) = result
        case 0x66
            result = sub_6dd320(&data_8cae70, 0x107)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x1bc) = result
        case 0x67
            result = sub_6dd320(&data_8cae70, 0x108)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x1c0) = result
        case 0x68
            result = sub_6dd320(&data_8cae70, 0x109)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x1c4) = result.b
        case 0x69
            result = sub_6dd320(&data_8cae70, 0x10a)
            
            if (*(result + 0x10) != 0xa)
                result_4 = "AttribAsBool"
                var_d74_1 = 0xc51
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_BOOL"
                goto label_652990
            
            result.b = edi_2[2] != 0
            *(arg12 i+ 0x1c5) = result.b
        case 0x6a
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x98) = result
        case 0x6b
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            result = edi_2[2]
            *(arg12 i+ 0xa0) = result
        case 0x6c
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x80) = result
        case 0x6d
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 1)
                result_4 = "AttribAsInt"
                var_d74_1 = 0xc5f
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_INT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x88) = result
        case 0x6e
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 4)
                result_4 = "AttribAsFloat"
                var_d74_1 = 0xc71
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_FLOAT"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0x8c) = result
        case 0x6f
            result = edi_2[2]
            *(arg12 i+ 0x1d8) = result
        case 0x70
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 8)
                goto label_652977
            
            result = edi_2[2]
            *(arg12 i+ 0x90) = result
        case 0x71
            result = sub_6dd320(&data_8cae70, ecx)
            
            if (*(result + 0x10) != 0xf)
                result_4 = "AttribAsAssetPtr"
                var_d74_1 = 0xc65
                ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_ASSET_PTR"
                goto label_652990
            
            result = edi_2[2]
            *(arg12 i+ 0xb0) = result

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

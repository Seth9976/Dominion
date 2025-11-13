// 函数: sub_6bf490
// 地址: 0x6bf490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770080
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t var_1f4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3[0xc]
uint32_t result = sub_5af880(**(esi + 0x2e4))
void* esi_2 = *(esi + 0x2dc) * 0x168 + *result
result.b = *(esi_2 + 0xe2)
char var_195 = result.b

if (*(esi_2 + 0x150) != 0 || *(esi_2 + 0x148) != 0 || *(esi_2 + 0x158) != 0 || result.b != 0
        || *(esi_2 + 0x140) != 0)
    result = data_147abe8
    char const* const var_200_1
    int32_t var_1fc_1
    char const* const var_1f8_1
    char* ecx_1
    
    if (result == 0)
        var_1f8_1 = "GetGameData"
        var_1fc_1 = 0x45
        var_200_1 = "C:\x\ax2017\Engine\Game.h"
        ecx_1 = "gpGameData"
    label_6c20f9:
        sub_63b870(result, &data_801800, ecx_1, var_200_1, var_1fc_1, var_1f8_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_5 = *(result + 0x10)
    *(eax_5 + 0x28) += 1
    uint32_t eax_7 = *(arg3[0xc] + 0x2e4)
    result = *(eax_7 + 0x60)
    
    if (((result.b & 1) == 0 || arg3[0x10].b == 0) && ((result.b & 2) == 0 || arg3[0x10].b != 0))
        float eax_8 = sub_6be480(arg3, arg2)
        float var_180_1 = eax_8
        float var_16c = eax_8
        float var_78
        
        if (var_195 == 0)
            char ecx_3 = var_16c:3.b
            int32_t var_1a0
            int32_t var_19c_1
            char var_160
            char var_e0
            
            if (*(esi_2 + 0xe7) == 0)
                var_e0 = eax_8.b
                eax_8.b = var_16c:1.b
                char var_df_1 = eax_8.b
                eax_8.b = var_16c:2.b
                char var_dd_1 = ecx_3
                char var_de_1 = eax_8.b
                var_1a0 = var_e0.d
                var_19c_1 = 0
            else
                var_160 = eax_8.b
                eax_8.b = var_16c:1.b
                char var_15f_1 = eax_8.b
                eax_8.b = var_16c:2.b
                char var_15e_1 = eax_8.b
                char var_15d_1 = 0xff
                var_1a0.w = 0
                var_1a0:2.b = 0
                var_1a0:3.b = ecx_3
                var_19c_1 = var_160.d
            
            int32_t* ecx_8 = arg4
            int128_t var_130 = *(arg2 + 0x68)
            int128_t var_120 = *(arg2 + 0x78)
            int128_t var_48 = *(arg2 + 0x68)
            int128_t var_38_1 = *(arg2 + 0x78)
            int32_t eax_13 = sub_639970(ecx_8)
            int128_t var_88
            
            if (eax_13.b != 0)
                float* var_1f8_2 = ecx_8
                ecx_8 = &var_88
                sub_4eb600(eax_13, &var_130, ecx_8, var_1f8_2)
                var_48 = var_88
                var_38_1 = var_78.o
            
            int32_t* var_1f8_3 = &var_1a0
            result = sub_6bde50(&var_48, arg2, ecx_8, &var_48)
            
            if (var_1a0:3.b != 0)
                result = arg3[0xe]
                uint32_t result_1 = *(esi_2 + 0xfc) - 1
                
                if (result s< 0)
                    result = 0
                else if (result s> result_1)
                    result = result_1
                
                int32_t edx_4 = *(esi_2 + 0xf8)
                int32_t ecx_11 = arg3[0xd]
                
                if (ecx_11 s< 0)
                    ecx_11 = 0
                else if (ecx_11 s> edx_4 - 1)
                    ecx_11 = edx_4 - 1
                
                if (result s< 0 || result s>= *(esi_2 + 0xfc) || ecx_11 s< 0 || ecx_11 s>= edx_4)
                    var_1f8_1 = "SpriteUVFromStrip"
                    var_1fc_1 = 0x581
                    var_200_1 = "C:\x\ax2017\Engine\Sprite.cpp"
                    ecx_1 = "x >= 0 && x < numCols && y >= 0 && y < numRows"
                    goto label_6c20f9
                
                float xmm0_12 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xfc)))
                float xmm2_3 = _mm_cvtepi32_ps(zx.o(result)) / xmm0_12
                uint32_t edx_5 = *(esi_2 + 0x148)
                float xmm1_2 = _mm_cvtepi32_ps(zx.o(edx_4))
                var_78 = xmm2_3
                float xmm2_6 = _mm_cvtepi32_ps(zx.o(ecx_11)) / xmm1_2
                float var_74_2 = xmm2_6
                int32_t xmm2_7[0x4] = zx.o(result + 1)
                result = ecx_11 + 1
                float xmm2_8 = _mm_cvtepi32_ps(xmm2_7)
                int32_t* ecx_12 = *(esi_2 + 0x150)
                int32_t* var_18c_2 = ecx_12
                float xmm2_9 = xmm2_8 / xmm0_12
                float var_70_2 = xmm2_9
                float xmm0_15 = _mm_cvtepi32_ps(zx.o(result)) / xmm1_2
                float var_6c_2 = xmm0_15
                
                if (ecx_12 != 0)
                    if (ecx_12[1] != 0x1d)
                        var_1f8_1 = "DefAutoLock::DefAutoLock"
                        var_1fc_1 = 0x19
                        var_200_1 = "C:\x\ax2017\Engine\DefLoad.h"
                        ecx_1 = "assetPtr && assetPtr->assetType == assetType"
                        goto label_6c20f9
                    
                    var_160.d = ecx_12
                    
                    if (*ecx_12 == 0)
                        edx_5.b = 0
                        sub_69f4a0(result, edx_5.b, ecx_12, 1)
                        ecx_12 = var_18c_2
                    
                    ecx_12[7] += 1
                    int32_t var_14_1 = 2
                    int32_t var_14_2 = 0xffffffff
                    edx_5 = sub_6edec0(**ecx_12)
                    var_160.d = 0
                    var_18c_2[7] -= 1
                
                int32_t xmm3_1 = (zx.o(0)).d
                int32_t* ecx_14 = *(esi_2 + 0x158)
                uint32_t eax_20 = *(eax_7 + 0x1c)
                
                if (eax_20 != 0)
                    edx_5 = eax_20
                
                uint32_t var_184_1 = edx_5
                int32_t* eax_22 = *(eax_7 + 0x18)
                
                if (eax_22 != 0)
                    ecx_14 = eax_22
                
                int32_t* var_188_1 = ecx_14
                *(eax_5 + 0x2c) += 1
                data_cf6b18.d = *(data_147abe8 + 0x2c) f- *(arg3[0xc] + 0x2e8)
                
                if (*(eax_7 + 0x74) == 0)
                    data_cf6b18.d = 0
                
                int128_t var_150
                float var_10c
                float var_f4
                float var_e4
                int64_t var_d8
                int128_t var_c8
                float var_b8[0x4]
                int128_t var_68
                int128_t var_58
                
                if (*(esi_2 + 0x140) != 0)
                    if (edx_5 == 0)
                        if (data_1a9a2b8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                            edx_5 = sub_75970e(&data_1a9a2b8)
                            
                            if (data_1a9a2b8 == 0xffffffff)
                                int32_t var_14_3 = 3
                                data_1a9a2bc = sub_69f030("sys/draw3d.material", 5)
                                int32_t var_14_4 = 0xffffffff
                                edx_5 = __Init_thread_footer(&data_1a9a2b8)
                            
                            xmm3_1 = (zx.o(0)).d
                        
                        var_184_1 = data_1a9a2bc
                    
                    result = *(esi_2 + 0x160)
                    
                    if (result u> 4)
                        var_1f8_1 = "ParticleSpotDraw"
                        var_1fc_1 = 0x8a7
                        var_200_1 = "C:\x\ax2017\Engine\Particle.cpp"
                        ecx_1 = "Halt"
                        goto label_6c20f9
                    
                    float xmm7_1 = var_38_1:0xc.d
                    int128_t xmm1_3 = data_cf6668
                    float var_d0_1
                    int64_t* const edx_6
                    
                    switch (result)
                        case 1
                            int64_t xmm0_18 = data_cf6678
                            int32_t eax_30 = data_cf6680
                            var_130 = xmm1_3
                            var_120:0xc.d = eax_30
                            var_120:4.q = xmm0_18
                            float xmm3_3 = var_120:0xc.d - xmm7_1
                            float xmm1_5 = var_120:8.d f- var_38_1:8.d
                            float xmm2_11 = var_120:4.d f- var_38_1:4.d
                            float xmm0_23 = sub_4ac580(ebp_1, 
                                xmm1_5 * xmm1_5 + xmm2_11 * xmm2_11 + xmm3_3 * xmm3_3)
                            float xmm2_12
                            float xmm3_4[0x4]
                            int64_t xmm5_1
                            
                            if (9.99999975e-06f <= xmm0_23)
                                float xmm3_5 = 1f / (xmm0_23 + 9.99999975e-06f)
                                float xmm1_11 = xmm3_5 * xmm1_5
                                float xmm2_14 = xmm3_5 * xmm2_11
                                float xmm3_6 = xmm3_5 * xmm3_3
                                float xmm2_15 = 1f / sub_4ac580(ebp_1, 
                                    xmm1_11 * xmm1_11 + xmm2_14 * xmm2_14 + xmm3_6 * xmm3_6)
                                xmm3_4 = xmm2_15 * xmm2_14
                                xmm5_1 = xmm2_15 * xmm1_11
                                xmm2_12 = xmm2_15 * xmm3_6
                            else
                                xmm3_4 = zx.o(0)
                                xmm5_1 = (zx.o(0)).q
                                xmm2_12 = (zx.o(0)).d
                            
                            float xmm2_16 = xmm2_12 * 0f
                            float var_dc_1 = xmm2_12
                            float xmm4_2 = xmm5_1.d - xmm2_16
                            float xmm2_17 = xmm2_16 f- xmm3_4
                            var_e4.q = _mm_unpacklo_ps(xmm3_4, xmm5_1)
                            var_160.d = xmm4_2
                            float xmm3_9 = xmm3_4 f* 0f - xmm5_1 f* 0f
                            var_16c = xmm2_17
                            float xmm0_36 = sub_4ac580(ebp_1, 
                                xmm2_17 * xmm2_17 + xmm4_2 * xmm4_2 + xmm3_9 * xmm3_9)
                            
                            if (9.99999975e-06f <= xmm0_36)
                                float xmm0_37 = 1f / (xmm0_36 + 9.99999975e-06f)
                                float xmm1_23 = var_16c * xmm0_37
                                float xmm3_11 = var_160.d * xmm0_37
                                float xmm2_19 = xmm3_9 * xmm0_37
                                var_16c = xmm1_23
                                var_160.d = xmm3_11
                                edx_6 = &data_7fef98
                                float xmm1_28 = 1f / sub_4ac580(ebp_1, 
                                    xmm1_23 * xmm1_23 + xmm3_11 * xmm3_11 + xmm2_19 * xmm2_19)
                                var_d8.d = xmm1_28 f* var_160.d
                                var_d8:4.d = xmm1_28 * var_16c
                                var_d0_1 = xmm1_28 * xmm2_19
                            else
                                var_d8.d = 0
                                edx_6 = &data_7fef98
                                var_d8:4.d = 0
                                var_d0_1 = 0f
                            
                        label_6c00e4:
                            float var_ec_1 = var_d0_1
                            var_f4.q = var_d8
                            result, edx_5 = sub_4ac840(&var_120, edx_6, &data_7fef74, &var_120, 
                                &var_f4, &var_e4)
                            var_48 = *result
                            xmm1_3 = data_cf6668
                        case 2
                            float xmm0_47 = sub_4ae0f0(ebp_1, -0.785398185f)
                            var_48:4.d = xmm0_47
                            float xmm1_31 = xmm0_47 * 0f
                            var_48:8.d = xmm1_31
                            var_48:0xc.d = xmm1_31
                            int32_t xmm0_48
                            result, edx_5, xmm0_48 = sub_4ae0d0(ebp_1, -0.785398185f)
                            var_38_1.d = xmm0_48
                            xmm1_3 = data_cf6668
                        case 3
                            float xmm3_12 = var_48:4.d
                            float xmm2_25 = var_38_1.d
                            float xmm5_8 = var_48:0xc.d
                            var_120:4.q = data_cf6678
                            var_130 = xmm1_3
                            float xmm1_46 = var_48:8.d
                            var_120:0xc.d = data_cf6680
                            float xmm4_5 = xmm3_12 * xmm5_8 + xmm2_25 * xmm1_46
                            float xmm4_6 = xmm4_5 + xmm4_5
                            float xmm1_49 = var_120:8.d f- var_38_1:8.d
                            float xmm6_7 = xmm5_8 * xmm1_46 - xmm3_12 * xmm2_25
                            float xmm3_15 = var_120:0xc.d - xmm7_1
                            var_160.d = xmm4_6
                            float xmm6_8 = xmm6_7 + xmm6_7
                            float xmm5_12 = xmm5_8 * xmm5_8 - xmm1_46 * xmm1_46 - xmm3_12 * xmm3_12
                                + xmm2_25 * xmm2_25
                            var_e4 = xmm4_6
                            float xmm2_28 = var_120:4.d f- var_38_1:4.d
                            var_e0.d = xmm6_8
                            float var_dc_2 = xmm5_12
                            float xmm0_68 = sub_4ac580(ebp_1, 
                                xmm1_49 * xmm1_49 + xmm2_28 * xmm2_28 + xmm3_15 * xmm3_15)
                            float xmm4_7
                            float xmm6_9
                            float xmm7_4
                            
                            if (9.99999975e-06f <= xmm0_68)
                                float xmm3_16 = 1f / (xmm0_68 + 9.99999975e-06f)
                                float xmm1_57 = xmm3_16 * xmm1_49
                                float xmm2_30 = xmm3_16 * xmm2_28
                                float xmm3_17 = xmm3_16 * xmm3_15
                                float xmm4_8 = 1f / sub_4ac580(ebp_1, 
                                    xmm1_57 * xmm1_57 + xmm2_30 * xmm2_30 + xmm3_17 * xmm3_17)
                                xmm6_9 = xmm4_8 * xmm2_30
                                xmm7_4 = xmm4_8 * xmm1_57
                                xmm4_7 = xmm4_8 * xmm3_17
                            else
                                xmm6_9 = (zx.o(0)).d
                                xmm7_4 = (zx.o(0)).d
                                xmm4_7 = (zx.o(0)).d
                            
                            float xmm2_31 = var_160.d
                            float xmm1_64 = xmm6_8 * xmm4_7 - xmm7_4 * xmm5_12
                            float xmm5_15 = xmm6_9 * xmm5_12 - xmm2_31 * xmm4_7
                            var_16c = xmm1_64
                            float xmm2_33 = xmm2_31 * xmm7_4 - xmm6_8 * xmm6_9
                            var_160.d = xmm2_33
                            float xmm0_82 = sub_4ac580(ebp_1, 
                                xmm1_64 * xmm1_64 + xmm5_15 * xmm5_15 + xmm2_33 * xmm2_33)
                            
                            if (9.99999975e-06f <= xmm0_82)
                                float xmm2_34 = 1f / (xmm0_82 + 9.99999975e-06f)
                                float xmm3_21 = var_16c * xmm2_34
                                float xmm1_72 = xmm2_34 * xmm5_15
                                float xmm2_35 = xmm2_34 f* var_160.d
                                var_16c = xmm3_21
                                float xmm1_77 = 1f / sub_4ac580(ebp_1, 
                                    xmm1_72 * xmm1_72 + xmm3_21 * xmm3_21 + xmm2_35 * xmm2_35)
                                var_d8.d = xmm1_77 * var_16c
                                var_d8:4.d = xmm1_77 * xmm1_72
                                var_d0_1 = xmm1_77 * xmm2_35
                            else
                                var_d8.d = 0
                                var_d8:4.d = 0
                                var_d0_1 = 0f
                            
                            edx_6 = &data_7fef8c
                            goto label_6c00e4
                        case 4
                            float xmm7_2 = arg3[4]
                            float xmm0_49 = arg3[3]
                            float xmm2_21 = xmm7_2 * 0f
                            float xmm6_2 = arg3[5] f* 0f
                            float xmm5_7 = xmm2_21 + xmm0_49 + xmm6_2 + 1f
                            int128_t xmm0_51
                            
                            if (9.99999975e-06f <= xmm5_7)
                                float xmm0_52 = xmm0_49 * 0f
                                float xmm6_4 = xmm6_2 - xmm2_21
                                float xmm7_3 = xmm7_2 - xmm0_52
                                float xmm2_24 = xmm0_52 f- arg3[5]
                                float xmm0_58
                                result, edx_5, xmm0_58 = sub_4ac580(ebp_1, 
                                    xmm6_4 * xmm6_4 + xmm5_7 * xmm5_7 + xmm2_24 * xmm2_24
                                        + xmm7_3 * xmm7_3)
                                var_10c = xmm2_24 / xmm0_58
                                float var_108_2 = xmm7_3 / xmm0_58
                                float var_104_2 = xmm5_7 / xmm0_58
                                xmm0_51 = (xmm6_4 / xmm0_58).o
                            else
                                int32_t xmm6_3 = 0x80000000
                                
                                if (not(_mm_and_ps(0x3f800000, 0x7fffffff)
                                        f<= _mm_and_ps(zx.o(0), 0x7fffffff)))
                                    xmm3_1 = -0x80000000
                                    xmm6_3 = 0x3f800000
                                
                                var_10c = 0f
                                int32_t var_108_1 = xmm6_3
                                float var_104_1 = xmm5_7
                                xmm0_51 = xmm3_1.o
                            
                            var_48 = xmm0_51
                            xmm1_3 = data_cf6668
                    
                    float xmm0_93 = arg2[3]
                    xmm0_93 - 0f
                    result:1.b = (xmm0_93 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_93, 0f) ? 1 : 0) << 2 | (xmm0_93 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        var_120:0xc.d = data_cf6680
                        var_120:4.q = data_cf6678
                        var_130 = xmm1_3
                        float eax_37 = *(eax_7 + 0x48)
                        var_d8 = *(eax_7 + 0x40)
                        float xmm1_80 = var_d8:4.d f- var_120:8.d
                        float xmm2_37 = var_d8.d f- var_120:4.d
                        float xmm3_23 = eax_37 f- var_120:0xc.d
                        float xmm0_100
                        edx_5, xmm0_100 = sub_4ac580(ebp_1, 
                            xmm1_80 * xmm1_80 + xmm2_37 * xmm2_37 + xmm3_23 * xmm3_23)
                        int32_t xmm1_86
                        int32_t xmm2_38
                        int32_t xmm4_9
                        
                        if (9.99999975e-06f <= xmm0_100)
                            float xmm3_24 = 1f / (xmm0_100 + 9.99999975e-06f)
                            float xmm1_89 = xmm3_24 * xmm1_80
                            float xmm2_40 = xmm3_24 * xmm2_37
                            float xmm3_25 = xmm3_24 * xmm3_23
                            float xmm0_105
                            edx_5, xmm0_105 = sub_4ac580(ebp_1, 
                                xmm1_89 * xmm1_89 + xmm2_40 * xmm2_40 + xmm3_25 * xmm3_25)
                            float xmm2_41 = 1f / xmm0_105
                            xmm1_86 = xmm2_41 * xmm2_40
                            xmm4_9 = xmm2_41 * xmm1_89
                            xmm2_38 = xmm2_41 * xmm3_25
                        else
                            xmm1_86 = (zx.o(0)).d
                            xmm4_9 = (zx.o(0)).d
                            xmm2_38 = (zx.o(0)).d
                        
                        float xmm3_26 = arg2[3]
                        var_38_1:4.d = xmm3_26 f* xmm1_86 f+ var_38_1:4.d
                        float xmm3_28 = xmm3_26 f* xmm2_38 f+ var_38_1:0xc.d
                        var_38_1:8.d = xmm3_26 f* xmm4_9 f+ var_38_1:8.d
                        var_38_1:0xc.d = xmm3_28
                    
                    float* eax_39 = sub_64b1b0(&var_c8, edx_5, &var_48, &var_c8)
                    var_68 = *eax_39
                    var_58 = *(eax_39 + 0x10)
                    var_48 = *(eax_39 + 0x20)
                    int128_t var_38_2 = *(eax_39 + 0x30)
                    int32_t* eax_41 = sub_6c3c80(&var_150, edx_5, arg2, &var_150)
                    var_c8 = *eax_41
                    var_b8 = *(eax_41 + 0x10)
                    int128_t var_a8 = *(eax_41 + 0x20)
                    int128_t var_98 = *(eax_41 + 0x30)
                    int128_t* eax_42 = sub_642e30(&var_150)
                    var_c8 = *eax_42
                    var_b8 = eax_42[1]
                    int128_t var_a8_1 = eax_42[2]
                    int128_t var_98_1 = eax_42[3]
                    float xmm1_96 = _mm_cvtepi32_ps(zx.o(var_180_1.b))
                    result = var_180_1 u>> 0x18
                    bool cond:7_1 = data_147aba1 != 0
                    float xmm2_43 = _mm_cvtepi32_ps(zx.o((var_180_1 u>> 8).b))
                    float xmm3_30 = _mm_cvtepi32_ps(zx.o((var_180_1 u>> 0x10).b))
                    float xmm4_13 = _mm_cvtepi32_ps(zx.o(result)) / 255f
                    
                    if (not(cond:7_1))
                        var_1f8_1 = "Draw3DSetMaterialColor"
                        var_1fc_1 = 0x304
                        var_200_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
                        ecx_1 = "gDraw3DData.submittingRenderItems"
                        goto label_6c20f9
                    
                    data_cf6a70.d = xmm1_96 / 255f
                    data_cf6a70:4 = xmm2_43 / 255f
                    data_cf6a70:8 = xmm3_30 / 255f
                    data_cf6a70:0xc = xmm4_13
                    result = sub_648470(result, &var_c8, *(esi_2 + 0x140), var_184_1, var_188_1, 0)
                    
                    if (data_147aba1 == 0)
                        var_1f8_1 = "Draw3DSetMaterialColor"
                        var_1fc_1 = 0x304
                        var_200_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
                        ecx_1 = "gDraw3DData.submittingRenderItems"
                        goto label_6c20f9
                    
                    int128_t xmm0_124 = data_7fefb0
                    data_cf6b18.d = 0
                    data_cf6a70 = xmm0_124
                else if (*(eax_7 + 0x74) == 0)
                    if (edx_5 == 0 && *(esi_2 + 0xe9) != edx_5.b)
                        if (data_1a9a2d0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                            sub_75970e(&data_1a9a2d0)
                            
                            if (data_1a9a2d0 == 0xffffffff)
                                int32_t var_14_9 = 6
                                data_1a9a2d4 = sub_69f030("sys\SpriteAdditive.material", 5)
                                int32_t var_14_10 = 0xffffffff
                                __Init_thread_footer(&data_1a9a2d0)
                        
                        var_184_1 = data_1a9a2d4
                    
                    float xmm0_302 = arg3[9]
                    xmm0_302 f- 0
                    uint32_t eax_25
                    eax_25:1.b = (xmm0_302 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_302, 0f) ? 1 : 0) << 2 | (xmm0_302 < 0f ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    float var_170_6
                    float var_164_5
                    float var_ec
                    int128_t xmm1_233
                    
                    if (p_10)
                        float xmm0_304 = xmm0_302 * 0.5f
                        float xmm0_305 = sub_4ae0f0(ebp_1, xmm0_304)
                        float xmm0_306 = xmm0_305 * 0f
                        var_170_6 = xmm0_305
                        float var_f0_5 = xmm0_305
                        var_164_5 = xmm0_306
                        var_f4 = xmm0_306
                        var_160.d = xmm0_306
                        var_ec = sub_4ae0d0(ebp_1, xmm0_304)
                        xmm1_233 = xmm0_306.o
                    else
                        xmm1_233 = data_800248
                        int32_t var_f8
                        var_f8.o = xmm1_233
                        float var_f0
                        var_170_6 = var_f0
                        var_164_5 = var_f4
                        var_160.d = var_f8
                    
                    bool cond:5_1 = *(esi_2 + 0x160) != 4
                    var_120 = xmm1_233
                    float var_d0_10 = 0f
                    var_d8 = 0
                    
                    if (not(cond:5_1))
                        float xmm1_236 = arg3[4]
                        float xmm0_309 = arg3[3]
                        float xmm1_238 = arg3[5]
                        float xmm0_313 = sub_4ac580(ebp_1, 
                            xmm0_309 * xmm0_309 + xmm1_236 * xmm1_236 + xmm1_238 * xmm1_238)
                        float var_e8
                        
                        if (9.99999975e-06f <= xmm0_313)
                            float xmm3_84 = 1f / (xmm0_313 + 9.99999975e-06f)
                            float xmm1_241 = xmm3_84 f* arg3[3]
                            float xmm2_115 = xmm3_84 f* arg3[4]
                            float xmm3_85 = xmm3_84 f* arg3[5]
                            float xmm1_246 = 1f / sub_4ac580(ebp_1, 
                                xmm1_241 * xmm1_241 + xmm2_115 * xmm2_115 + xmm3_85 * xmm3_85)
                            var_e8 = xmm1_246 * xmm1_241
                            var_e4 = xmm1_246 * xmm2_115
                            var_e0.d = xmm1_246 * xmm3_85
                        else
                            var_e8 = 0f
                            var_e4 = 0f
                            var_e0.d = 0
                        
                        int32_t var_104_8 = var_e0.d
                        var_10c.q = var_e8.q
                        var_48 = *sub_4ac9c0(&var_e8, &data_7fef8c, &var_10c, &var_e8)
                    
                    float xmm0_326 = *(esi_2 + 0x108)
                    xmm0_326 f- 0
                    int128_t* eax_100
                    eax_100:1.b = (xmm0_326 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_326, 0f) ? 1 : 0) << 2 | (xmm0_326 < 0f ? 1 : 0)
                    bool p_12 = unimplemented  {test ah, 0x44}
                    bool p_14
                    
                    if (not(p_12))
                        float xmm0_327 = *(esi_2 + 0x10c)
                        xmm0_327 f- 0
                        eax_100:1.b = (xmm0_327 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_327, 0f) ? 1 : 0) << 2 | (xmm0_327 < 0f ? 1 : 0)
                        p_14 = unimplemented  {test ah, 0x44}
                    
                    float var_180_3
                    float var_174_5
                    float var_154_24
                    float* eax_103
                    
                    if (p_12 || p_14)
                        float xmm5_46 = var_160.d
                        float xmm0_332 = var_164_5 * var_164_5
                        eax_103 = arg2
                        float xmm2_117 = xmm5_46 * xmm5_46
                        float xmm0_334 = var_170_6 * var_170_6
                        float xmm1_249 = var_ec * var_ec
                        float xmm3_87 = var_170_6 * var_ec
                        float xmm4_48 = xmm5_46 * var_164_5
                        float xmm0_336 = var_164_5 * var_170_6
                        float xmm6_38 = xmm5_46 * var_170_6
                        float xmm7_21 = xmm1_249 - xmm2_117
                        float xmm5_48 = var_164_5 * var_ec
                        var_160.d = var_160.d * var_ec
                        float xmm0_341 = *(esi_2 + 0x10c)
                        float xmm7_23 = (xmm4_48 - xmm3_87) * (xmm0_341 + xmm0_341)
                        float var_180_5 = xmm7_23
                        float xmm0_348 = *(esi_2 + 0x108)
                        float xmm2_124 = (xmm7_23
                            + (xmm2_117 + xmm1_249 - xmm0_332 - xmm0_334) f* *(esi_2 + 0x108)
                            + (xmm5_48 + xmm6_38) * 0f) * *eax_103
                        var_180_3 = xmm2_124
                        var_d8.d = xmm2_124
                        float xmm2_127 = (xmm0_348 + xmm0_348) * (xmm3_87 + xmm4_48)
                        float xmm3_89 = *(esi_2 + 0x10c)
                        float var_174_6 = xmm2_127
                        float xmm2_129 = xmm2_127 + (xmm0_332 + xmm7_21 - xmm0_334) * xmm3_89
                            + (xmm0_336 f- var_160.d) * 0f
                        float var_174_8 = xmm2_129
                        float xmm0_357 = xmm2_129 * eax_103[1]
                        var_174_5 = xmm0_357
                        var_d8:4.d = xmm0_357
                        float xmm0_358 = *(esi_2 + 0x108)
                        float xmm0_363 = ((xmm0_358 + xmm0_358) * (xmm6_38 - xmm5_48)
                            + (var_160.d + xmm0_336) * (xmm3_89 + xmm3_89)
                            + (xmm7_21 - xmm0_332 + xmm0_334) * 0f) * eax_103[2]
                        var_154_24 = xmm0_363
                        float var_d0_11 = xmm0_363
                    else
                        eax_103 = arg2
                        var_154_24 = var_d0_10
                        var_174_5 = var_d8:4.d
                        var_180_3 = var_d8.d
                    
                    int32_t* edx_24 = &var_120
                    float var_1e0[0x10]
                    float* eax_105 = sub_6818c0(&var_1e0, edx_24, &var_d8, &var_1e0, eax_103)
                    var_c8 = *eax_105
                    var_b8 = *(eax_105 + 0x10)
                    int128_t var_a8_3 = *(eax_105 + 0x20)
                    int128_t var_98_3 = *(eax_105 + 0x30)
                    float* eax_107 = sub_64b1b0(&var_1e0, edx_24, &var_48, &var_1e0)
                    var_68 = *eax_107
                    var_58 = *(eax_107 + 0x10)
                    var_48 = *(eax_107 + 0x20)
                    int128_t var_38_3 = *(eax_107 + 0x30)
                    float* eax_109 = sub_642ae0(&var_1e0, &var_c8, &var_68, &var_1e0)
                    bool cond:8_1 = arg3[0x10].b == 0
                    float xmm1_251[0x4] = *eax_109
                    float xmm2_130[0x4] = *(eax_109 + 0x10)
                    int128_t var_a8_4 = *(eax_109 + 0x20)
                    int128_t xmm0_373 = *(eax_109 + 0x30)
                    var_b8[3] = xmm1_251
                    int128_t var_98_4 = xmm0_373
                    var_98_4:4.d = 0
                    var_a8_4:8.d = xmm2_130
                    var_a8_4.d = _mm_shuffle_ps(xmm1_251, xmm1_251, 0x55)
                    int32_t xmm0_377 = _mm_shuffle_ps(xmm2_130, xmm2_130, 0x55)
                    var_a8_4:4.d = _mm_shuffle_ps(xmm1_251, xmm1_251, 0xff)
                    var_a8_4:0xc.d = xmm0_377
                    var_98_4.d = _mm_shuffle_ps(xmm2_130, xmm2_130, 0xff)
                    var_98_4:8.d = 0
                    var_98_4:0xc.d = 0x3f800000
                    uint32_t esi_5
                    
                    if (cond:8_1 || *(esi_2 + 0xe8) == 0)
                        esi_5 = var_184_1
                    else
                        var_f4 = var_180_3 - 1f
                        float var_f0_6 = var_174_5 + 1f
                        float var_ec_5 = var_154_24 + 0f
                        float* eax_111 = sub_6818c0(&var_1e0, &var_120, &var_f4, &var_1e0, arg2)
                        var_150 = *eax_111
                        int128_t var_140_1 = *(eax_111 + 0x10)
                        var_130 = *(eax_111 + 0x20)
                        var_120 = *(eax_111 + 0x30)
                        float* eax_113 = sub_642ae0(&var_1e0, &var_150, &var_68, &var_1e0)
                        esi_5 = var_184_1
                        float xmm1_253[0x4] = *eax_113
                        float xmm2_132[0x4] = *(eax_113 + 0x10)
                        var_48 = *(eax_113 + 0x20)
                        int128_t var_38_4 = *(eax_113 + 0x30)
                        int32_t eax_116 = _bswap(zx.d(var_16c:3.b) u>> 2)
                        var_58:0xc.d = xmm1_253
                        int32_t xmm0_391 = _mm_shuffle_ps(xmm1_253, xmm1_253, 0x55)
                        int32_t var_158 = eax_116
                        var_48.d = xmm0_391
                        int32_t xmm0_393 = _mm_shuffle_ps(xmm2_132, xmm2_132, 0x55)
                        var_48:8.d = xmm2_132
                        int32_t xmm1_254 = _mm_shuffle_ps(xmm1_253, xmm1_253, 0xff)
                        int32_t xmm2_133 = _mm_shuffle_ps(xmm2_132, xmm2_132, 0xff)
                        var_48:4.d = xmm1_254
                        var_48:0xc.d = xmm0_393
                        var_38_4.d = xmm2_133
                        var_38_4:4.d = 0
                        var_38_4:8.d = 0
                        var_38_4:0xc.d = 0x3f800000
                        int32_t var_154_25 = 0
                        sub_682ad0(&var_78, &var_58:0xc, var_188_1, &var_78, &var_158, esi_5)
                    
                    int32_t* eax_120 = var_188_1
                    
                    if (eax_120 == 0)
                        void* eax_119 = *(sub_5af880(esi_5) + 8)
                        eax_120 = sub_6dd280(eax_119, *(eax_119 + 8) + 8, &data_8ce7bc, 0x53)
                    
                    result = sub_682ad0(eax_120, &var_b8[3], eax_120, &var_78, &var_1a0, esi_5)
                    data_cf6b18.d = 0
                else
                    if (edx_5 == 0)
                        void* ecx_27 = *fsbase->ThreadLocalStoragePointer
                        uint32_t eax_49
                        
                        if (*(esi_2 + 0xe9) == edx_5.b)
                            if (data_1a9a2c8 s> *(ecx_27 + 8))
                                sub_75970e(&data_1a9a2c8)
                                
                                if (data_1a9a2c8 == 0xffffffff)
                                    int32_t var_14_7 = 5
                                    data_1a9a2cc = sub_69f030("sys/particle_3d.material", 5)
                                    int32_t var_14_8 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a2c8)
                            
                            eax_49 = data_1a9a2cc
                        else
                            if (data_1a9a2c0 s> *(ecx_27 + 8))
                                sub_75970e(&data_1a9a2c0)
                                
                                if (data_1a9a2c0 == 0xffffffff)
                                    int32_t var_14_5 = 4
                                    data_1a9a2c4 =
                                        sub_69f030("sys/particle_3d_additive.material", 5)
                                    int32_t var_14_6 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a2c0)
                            
                            eax_49 = data_1a9a2c4
                        
                        var_184_1 = eax_49
                    
                    int32_t ecx_28
                    
                    if (*(esi_2 + 0xea) != 0 || *(esi_2 + 0xeb) != 0)
                        ecx_28 = arg3[0xa1]
                    
                    if ((*(esi_2 + 0xea) == 0 && *(esi_2 + 0xeb) == 0) || ecx_28 s<= 1)
                        float eax_63 = *(esi_2 + 0x100)
                        int32_t ecx_35 = *(esi_2 + 0x104)
                        __builtin_memcpy(&var_b8, 
                            "\x00\x00\x00\xbf\x00\x00\x00\xbf\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x"
                        "00\xbf\x00\x00\x00\x00\x00\x00\x00\xbf\x00\x00\x00\x3f\x00\x00\x00\x00\x00"
                        "00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x00", 
                            0x30)
                        float var_190 = eax_63
                        int32_t var_18c_5 = ecx_35
                        bool cond:6_1 = *(*(arg3[0xc] + 0x2e4) + 0x18) == 0
                        var_88.d = xmm2_3
                        var_78 = xmm2_3
                        var_88:4.d = xmm2_6
                        var_88:8.d = xmm2_9
                        var_88:0xc.d = xmm2_6
                        float var_74_3 = xmm0_15
                        float var_70_3 = xmm2_9
                        float var_6c_3 = xmm0_15
                        
                        if (not(cond:6_1))
                            float eax_66
                            float edx_14
                            eax_66, ecx_35, edx_14 = sub_5a0e40()
                            var_e0.d = eax_66
                            float xmm3_38 =
                                var_e0.d * 0.00999999978f / _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xfc)))
                            float xmm0_157 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0xf8)))
                            var_190 = xmm3_38
                            float var_18c_6 = edx_14 * 0.00999999978f / xmm0_157
                        
                        result = *(esi_2 + 0x160)
                        
                        if (result u> 4)
                            var_1f8_1 = "ParticleSpotDraw"
                            var_1fc_1 = 0x94e
                            var_200_1 = "C:\x\ax2017\Engine\Particle.cpp"
                            ecx_1 = "Halt"
                            goto label_6c20f9
                        
                        float xmm7_8 = var_38_1:0xc.d
                        int128_t xmm1_115 = data_cf6668
                        int32_t* var_1f8_11
                        float* eax_70
                        float* edx_15
                        
                        switch (result)
                            case 0
                                float xmm0_158 = sub_4ae0d0(ebp_1, -0.785398185f)
                                float xmm0_159
                                ecx_35, xmm0_159 = sub_4ae0f0(ebp_1, -0.785398185f)
                                float xmm3_39 = var_38_1.d
                                float xmm5_20 = xmm0_159 * 0f
                                float xmm2_68 = var_48:4.d
                                float xmm7_10 = xmm5_20 f* var_48:8.d
                                float xmm6_20 = xmm5_20 f* var_48:0xc.d
                                float xmm5_21 = xmm5_20 * xmm2_68
                                float xmm4_29 = xmm5_20 * xmm3_39
                                var_48:0xc.d = xmm0_158 f* var_48:0xc.d + xmm4_29 + xmm5_21
                                    - xmm0_159 f* var_48:8.d
                                var_38_1.d =
                                    xmm0_158 * xmm3_39 - xmm0_159 * xmm2_68 - xmm7_10 - xmm6_20
                                var_48:8.d = xmm0_158 f* var_48:8.d + xmm4_29
                                    + xmm0_159 f* var_48:0xc.d - xmm5_21
                                var_48:4.d =
                                    xmm0_159 * xmm3_39 + xmm0_158 * xmm2_68 + xmm7_10 - xmm6_20
                                xmm1_115 = data_cf6668
                            case 1
                                int64_t xmm0_168 = data_cf6678
                                int32_t eax_67 = data_cf6680
                                var_130 = xmm1_115
                                var_120:0xc.d = eax_67
                                float xmm3_46 = xmm7_8 f- var_120:0xc.d
                                var_120:4.q = xmm0_168
                                float xmm1_122 = var_38_1:8.d f- var_120:8.d
                                float xmm2_70 = var_38_1:4.d f- var_120:4.d
                                float xmm0_173 = sub_4ac580(ebp_1, 
                                    xmm1_122 * xmm1_122 + xmm2_70 * xmm2_70 + xmm3_46 * xmm3_46)
                                int32_t xmm2_71
                                float xmm3_47[0x4]
                                int64_t xmm4_30
                                
                                if (9.99999975e-06f <= xmm0_173)
                                    float xmm3_48 = 1f / (xmm0_173 + 9.99999975e-06f)
                                    float xmm1_128 = xmm3_48 * xmm1_122
                                    float xmm2_73 = xmm3_48 * xmm2_70
                                    float xmm3_49 = xmm3_48 * xmm3_46
                                    float xmm2_74 = 1f / sub_4ac580(ebp_1, 
                                        xmm1_128 * xmm1_128 + xmm2_73 * xmm2_73 + xmm3_49 * xmm3_49)
                                    xmm3_47 = xmm2_74 * xmm2_73
                                    xmm4_30 = xmm2_74 * xmm1_128
                                    xmm2_71 = xmm2_74 * xmm3_49
                                else
                                    xmm3_47 = zx.o(0)
                                    xmm4_30 = (zx.o(0)).q
                                    xmm2_71 = (zx.o(0)).d
                                
                                float xmm2_75 = xmm2_71 f* 0f
                                int32_t var_104_3 = xmm2_71
                                float xmm5_28 = xmm4_30.d - xmm2_75
                                float xmm2_76 = xmm2_75 f- xmm3_47
                                var_10c.q = _mm_unpacklo_ps(xmm3_47, xmm4_30)
                                float xmm3_52 = xmm3_47 f* 0f - xmm4_30 f* 0f
                                float xmm0_186 = sub_4ac580(ebp_1, 
                                    xmm2_76 * xmm2_76 + xmm5_28 * xmm5_28 + xmm3_52 * xmm3_52)
                                float var_d0_5
                                
                                if (9.99999975e-06f <= xmm0_186)
                                    float xmm3_53 = 1f / (xmm0_186 + 9.99999975e-06f)
                                    float xmm1_140 = xmm3_53 * xmm2_76
                                    float xmm2_78 = xmm3_53 * xmm5_28
                                    float xmm3_54 = xmm3_53 * xmm3_52
                                    float xmm1_145 = 1f / sub_4ac580(ebp_1, 
                                        xmm1_140 * xmm1_140 + xmm2_78 * xmm2_78 + xmm3_54 * xmm3_54)
                                    var_d8.d = xmm1_145 * xmm2_78
                                    var_d8:4.d = xmm1_145 * xmm1_140
                                    var_d0_5 = xmm1_145 * xmm3_54
                                else
                                    var_d8.d = 0
                                    var_d8:4.d = 0
                                    var_d0_5 = 0f
                                
                                edx_15 = &data_7fef8c
                                float var_ec_2 = var_d0_5
                                var_1f8_11 = &var_10c
                                var_f4.q = var_d8
                                eax_70 = &var_f4
                            label_6c12d6:
                                int128_t* eax_74
                                eax_74, ecx_35 = sub_4ac840(&var_120, edx_15, &data_7fef74, 
                                    &var_120, eax_70, var_1f8_11)
                                var_48 = *eax_74
                                xmm1_115 = data_cf6668
                            case 2
                                var_48 = data_800248
                            case 3
                                float xmm3_56 = var_48:4.d
                                float xmm2_84 = var_38_1.d
                                float xmm5_33 = var_48:0xc.d
                                var_120:4.q = data_cf6678
                                var_130 = xmm1_115
                                float xmm1_161 = var_48:8.d
                                var_120:0xc.d = data_cf6680
                                float xmm4_35 = xmm3_56 * xmm5_33 + xmm2_84 * xmm1_161
                                float xmm4_36 = xmm4_35 + xmm4_35
                                float xmm1_164 = var_120:8.d f- var_38_1:8.d
                                float xmm6_27 = xmm5_33 * xmm1_161 - xmm3_56 * xmm2_84
                                float xmm3_59 = var_120:0xc.d - xmm7_8
                                float xmm6_28 = xmm6_27 + xmm6_27
                                float xmm5_37 = xmm5_33 * xmm5_33 - xmm1_161 * xmm1_161
                                    - xmm3_56 * xmm3_56 + xmm2_84 * xmm2_84
                                var_f4 = xmm4_36
                                float xmm2_87 = var_120:4.d f- var_38_1:4.d
                                float var_f0_3 = xmm6_28
                                float var_ec_3 = xmm5_37
                                float xmm0_217 = sub_4ac580(ebp_1, 
                                    xmm1_164 * xmm1_164 + xmm2_87 * xmm2_87 + xmm3_59 * xmm3_59)
                                int32_t xmm1_170
                                int32_t xmm4_37
                                int32_t xmm7_13
                                
                                if (9.99999975e-06f <= xmm0_217)
                                    float xmm3_60 = 1f / (xmm0_217 + 9.99999975e-06f)
                                    float xmm1_173 = xmm3_60 * xmm1_164
                                    float xmm2_89 = xmm3_60 * xmm2_87
                                    float xmm3_61 = xmm3_60 * xmm3_59
                                    float xmm4_38 = 1f / sub_4ac580(ebp_1, 
                                        xmm1_173 * xmm1_173 + xmm2_89 * xmm2_89 + xmm3_61 * xmm3_61)
                                    xmm7_13 = xmm4_38 * xmm2_89
                                    xmm1_170 = xmm4_38 * xmm1_173
                                    xmm4_37 = xmm4_38 * xmm3_61
                                else
                                    xmm7_13 = (zx.o(0)).d
                                    xmm1_170 = (zx.o(0)).d
                                    xmm4_37 = (zx.o(0)).d
                                
                                float xmm6_31 = xmm7_13 f* xmm5_37 - xmm4_36 f* xmm4_37
                                float xmm5_40 = xmm6_28 f* xmm4_37 - xmm1_170 f* xmm5_37
                                float xmm2_92 = xmm4_36 * xmm1_170 - xmm6_28 f* xmm7_13
                                float xmm0_229 = sub_4ac580(ebp_1, 
                                    xmm6_31 * xmm6_31 + xmm5_40 * xmm5_40 + xmm2_92 * xmm2_92)
                                float var_d0_6
                                
                                if (9.99999975e-06f <= xmm0_229)
                                    float xmm3_64 = 1f / (xmm0_229 + 9.99999975e-06f)
                                    float xmm1_187 = xmm3_64 * xmm6_31
                                    float xmm2_94 = xmm3_64 * xmm5_40
                                    float xmm3_65 = xmm3_64 * xmm2_92
                                    float xmm1_192 = 1f / sub_4ac580(ebp_1, 
                                        xmm1_187 * xmm1_187 + xmm2_94 * xmm2_94 + xmm3_65 * xmm3_65)
                                    var_d8.d = xmm1_192 * xmm2_94
                                    var_d8:4.d = xmm1_192 * xmm1_187
                                    var_d0_6 = xmm1_192 * xmm3_65
                                else
                                    var_d8.d = 0
                                    var_d8:4.d = 0
                                    var_d0_6 = 0f
                                
                                edx_15 = &var_d8
                                float var_104_6 = var_d0_6
                                var_10c.q = var_d8
                                var_1f8_11 = &var_f4
                                var_d8.d = 0x80000000
                                eax_70 = &var_10c
                                var_d8:4.d = 0xbf800000
                                int32_t var_d0_7 = 0x80000000
                                goto label_6c12d6
                            case 4
                                float xmm7_11 = arg3[4]
                                float xmm3_55 = (zx.o(0)).d
                                float xmm0_197 = arg3[3]
                                float xmm2_80 = xmm7_11 * 0f
                                float xmm6_22 = arg3[5] f* 0f
                                float xmm5_32 = xmm0_197 + xmm2_80 + xmm6_22 + 1f
                                int128_t xmm0_199
                                
                                if (9.99999975e-06f <= xmm5_32)
                                    float xmm0_200 = xmm0_197 * 0f
                                    float xmm6_24 = xmm6_22 - xmm2_80
                                    float xmm7_12 = xmm7_11 - xmm0_200
                                    float xmm2_83 = xmm0_200 f- arg3[5]
                                    float xmm0_206
                                    ecx_35, xmm0_206 = sub_4ac580(ebp_1, 
                                        xmm6_24 * xmm6_24 + xmm5_32 * xmm5_32 + xmm2_83 * xmm2_83
                                            + xmm7_12 * xmm7_12)
                                    var_10c = xmm2_83 / xmm0_206
                                    float var_108_4 = xmm7_12 / xmm0_206
                                    float var_104_5 = xmm5_32 / xmm0_206
                                    xmm0_199 = (xmm6_24 / xmm0_206).o
                                else
                                    int32_t xmm6_23 = 0x80000000
                                    
                                    if (not(_mm_and_ps(0x3f800000, 0x7fffffff)
                                            f<= _mm_and_ps(zx.o(0), 0x7fffffff)))
                                        xmm3_55 = -0f
                                        xmm6_23 = 0x3f800000
                                    
                                    var_10c = 0f
                                    int32_t var_108_3 = xmm6_23
                                    float var_104_4 = xmm5_32
                                    xmm0_199 = xmm3_55.o
                                
                                var_48 = xmm0_199
                                xmm1_115 = data_cf6668
                        
                        float xmm0_240 = arg2[3]
                        xmm0_240 - 0f
                        float* eax_75
                        eax_75:1.b = (xmm0_240 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_240, 0f) ? 1 : 0) << 2 | (xmm0_240 < 0f ? 1 : 0)
                        bool p_4 = unimplemented  {test ah, 0x44}
                        float* eax_79
                        
                        if (not(p_4))
                            eax_79 = arg2
                        else
                            var_120:0xc.d = data_cf6680
                            var_120:4.q = data_cf6678
                            var_130 = xmm1_115
                            float eax_78 = *(eax_7 + 0x48)
                            var_d8 = *(eax_7 + 0x40)
                            float xmm1_195 = var_d8:4.d f- var_120:8.d
                            float xmm2_96 = var_d8.d f- var_120:4.d
                            float xmm3_67 = eax_78 f- var_120:0xc.d
                            float xmm0_247
                            ecx_35, xmm0_247 = sub_4ac580(ebp_1, 
                                xmm1_195 * xmm1_195 + xmm2_96 * xmm2_96 + xmm3_67 * xmm3_67)
                            int32_t xmm2_97
                            int32_t xmm3_68
                            int32_t xmm4_39
                            
                            if (9.99999975e-06f <= xmm0_247)
                                float xmm3_69 = 1f / (xmm0_247 + 9.99999975e-06f)
                                float xmm1_203 = xmm3_69 * xmm1_195
                                float xmm2_99 = xmm3_69 * xmm2_96
                                float xmm3_70 = xmm3_69 * xmm3_67
                                float xmm0_252
                                ecx_35, xmm0_252 = sub_4ac580(ebp_1, 
                                    xmm1_203 * xmm1_203 + xmm2_99 * xmm2_99 + xmm3_70 * xmm3_70)
                                float xmm2_100 = 1f / xmm0_252
                                xmm3_68 = xmm2_100 * xmm2_99
                                xmm4_39 = xmm2_100 * xmm1_203
                                xmm2_97 = xmm2_100 * xmm3_70
                            else
                                xmm3_68 = (zx.o(0)).d
                                xmm4_39 = (zx.o(0)).d
                                xmm2_97 = (zx.o(0)).d
                            
                            eax_79 = arg2
                            float xmm1_208 = eax_79[3]
                            var_38_1:4.d = xmm1_208 f* xmm3_68 f+ var_38_1:4.d
                            float xmm1_210 = xmm1_208 f* xmm2_97 f+ var_38_1:0xc.d
                            var_38_1:8.d = xmm1_208 f* xmm4_39 f+ var_38_1:8.d
                            var_38_1:0xc.d = xmm1_210
                        
                        int32_t var_1fc_8 = ecx_35
                        sub_6be800(&var_190, &var_48, &var_150, &var_190, esi_2 + 0x108, arg3[9], 
                            eax_79)
                        sub_6bcc60(&var_b8, &var_150)
                        float xmm0_260 = arg2[0x17]
                        xmm0_260 f- 0
                        int32_t* eax_82
                        eax_82:1.b = (xmm0_260 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_260, 0f) ? 1 : 0) << 2 | (xmm0_260 < 0f ? 1 : 0)
                        bool p_6 = unimplemented  {test ah, 0x44}
                        bool p_8
                        
                        if (not(p_6))
                            float xmm0_261 = arg2[0x18]
                            xmm0_261 f- 0
                            eax_82:1.b = (xmm0_261 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_261, 0f) ? 1 : 0) << 2
                                | (xmm0_261 < 0f ? 1 : 0)
                            p_8 = unimplemented  {test ah, 0x44}
                        
                        if (p_6 || p_8)
                            int32_t i = 0
                            float* edi_2 = &var_b8[2]
                            
                            do
                                int32_t eax_84 = data_cf6680
                                float xmm3_72 = edi_2[-1]
                                float xmm2_101 = edi_2[-2]
                                float xmm1_211 = *edi_2
                                var_130 = data_cf6668
                                var_120:0xc.d = eax_84
                                float xmm1_212 = xmm1_211 f- var_120:0xc.d
                                var_120:4.q = data_cf6678
                                float xmm3_73 = xmm3_72 f- var_120:8.d
                                float xmm2_102 = xmm2_101 f- var_120:4.d
                                float xmm3_79 = (sub_4ac580(ebp_1, 
                                    xmm3_73 * xmm3_73 + xmm2_102 * xmm2_102 + xmm1_212 * xmm1_212)
                                    - arg2[0x17]) / (arg2[0x18] - arg2[0x17])
                                int32_t xmm1_214
                                
                                if (0 f< xmm3_79)
                                    xmm1_214 = 0x3f800000
                                    
                                    if (not(xmm3_79 >= 1f))
                                        xmm1_214 = sub_4ae110(1, xmm3_79, (zx.o(0)).d, 1f)
                                else
                                    xmm1_214 = (zx.o(0)).d
                                
                                uint32_t var_154_22 = sub_5af6f0(&var_1a0, &data_cf65f8, xmm1_214)
                                edi_2 = &edi_2[3]
                                uint32_t eax_86
                                eax_86.b = var_1a0:3.b
                                var_154_22:3.b = eax_86.b
                                *(&var_48:4 + (i << 3)) = var_19c_1
                                *(&var_48 + (i << 3)) = var_154_22
                                i += 1
                            while (i s< 4)
                            
                            float xmm4_41[0x4] = var_b8
                            float xmm5_42 = _mm_shuffle_ps(xmm4_41, xmm4_41, 0x55)
                            float var_a8_2[0x4]
                            float xmm3_80 = var_a8_2[0]
                            float xmm2_107 = _mm_shuffle_ps(xmm4_41, xmm4_41, 0xaa)
                            float xmm3_81 = xmm3_80 - xmm5_42
                            float xmm7_16 = _mm_shuffle_ps(xmm4_41, xmm4_41, 0xff)
                            int128_t var_98_2
                            var_f4 = (var_98_2:4.d f+ xmm4_41) * 0.5f
                            float xmm7_17 = xmm7_16 f- xmm4_41
                            float var_f0_4 = (var_98_2:8.d + xmm5_42) * 0.5f
                            float xmm1_218 = _mm_shuffle_ps(var_a8_2, var_a8_2, 0x55) - xmm2_107
                            float var_ec_4 = (var_98_2:0xc.d + xmm2_107) * 0.5f
                            int128_t xmm0_281 = _mm_shuffle_ps(var_a8_2, var_a8_2, 0xaa) f- xmm4_41
                            float xmm6_34 = _mm_shuffle_ps(var_a8_2, var_a8_2, 0xff) - xmm5_42
                            float xmm4_43 = var_98_2.d - xmm2_107
                            float var_110
                            var_110.o = xmm0_281
                            float xmm5_45 = xmm6_34 * xmm1_218 - xmm4_43 * xmm3_81
                            int128_t xmm2_110 = var_110 * xmm3_81 - xmm6_34 * xmm7_17
                            float xmm4_45 = xmm4_43 * xmm7_17 - var_110 * xmm1_218
                            var_110.o = xmm2_110
                            float xmm0_290 = sub_4ac580(ebp_1, 
                                xmm4_45 * xmm4_45 + xmm5_45 * xmm5_45 + xmm2_110.d f* xmm2_110)
                            float var_d0_9
                            
                            if (9.99999975e-06f <= xmm0_290)
                                float xmm0_291 = 1f / (xmm0_290 + 9.99999975e-06f)
                                float xmm1_226 = xmm4_45 * xmm0_291
                                float xmm3_83 = xmm5_45 * xmm0_291
                                int128_t xmm2_112 = var_110 * xmm0_291
                                var_110.o = xmm2_112
                                float xmm1_231 = 1f / sub_4ac580(ebp_1, 
                                    xmm1_226 * xmm1_226 + xmm3_83 * xmm3_83
                                        + xmm2_112.d f* xmm2_112)
                                var_d8.d = xmm1_231 * xmm3_83
                                var_d8:4.d = xmm1_231 * xmm1_226
                                var_d0_9 = xmm1_231 * var_110
                            else
                                var_d8.d = 0
                                var_d8:4.d = 0
                                var_d0_9 = 0f
                            
                            var_10c.q = var_d8
                            float var_104_7 = var_d0_9
                            
                            if (var_188_1 == 0)
                                void* eax_91 = *(sub_5af880(var_184_1) + 8)
                                int32_t* eax_92 =
                                    sub_6dd280(eax_91, *(eax_91 + 8) + 8, &data_8ce7bc, 0x53)
                                
                                if (eax_92 == 0)
                                    eax_92 = data_1724a58
                                
                                var_188_1 = eax_92
                            
                            void* eax_94 = *(sub_5af880(var_184_1) + 8)
                            result = sub_646580(&var_48, &var_88, &var_b8, &var_48, 1, &var_f4, 
                                &var_10c, var_188_1, 
                                sub_6dd280(eax_94, *(eax_94 + 8) + 8, &data_8ce7bc, 0x54), 
                                var_184_1)
                            data_cf6b18.d = 0
                        else
                            result = sub_646bb0(&var_1a0, &var_88, &var_b8, &var_1a0, var_188_1, 
                                var_184_1)
                            data_cf6b18.d = 0
                    else
                        result = *(arg3[0xc] + 0x2e4)
                        
                        if (*(result + 0x75) == 0)
                            int32_t eax_51 = ecx_28 * 9
                            float eax_52 = arg3[eax_51 + 0xa]
                            var_d8 = *(arg3 + (eax_51 << 2) + 0x20)
                            int32_t* eax_53 = arg4
                            float xmm1_98 = *eax_53
                            float xmm6_11 = eax_53[1]
                            float xmm0_127 = xmm1_98 f* var_d8.d
                            float xmm4_15 = xmm6_11 * xmm6_11
                            float xmm1_99 = xmm1_98 * eax_52
                            var_160.d = xmm1_98 f* var_d8:4.d
                            float xmm0_130 = eax_53[2]
                            float xmm2_46 = xmm0_130 * xmm0_130
                            float xmm1_100 = eax_53[4]
                            float xmm7_7 = xmm0_130 * xmm1_100
                            float xmm2_47 = eax_53[3]
                            float xmm5_17 = xmm1_100 * xmm1_100
                            float xmm3_33 = xmm2_47 * xmm2_47
                            float xmm3_35 = xmm0_130 * xmm6_11
                            float xmm2_48 = xmm2_47 f* eax_53[1]
                            float xmm6_13 = xmm2_47 * xmm1_100
                            float xmm2_50 = xmm5_17 - xmm4_15
                            float xmm2_52 = eax_53[3] f* xmm0_130
                            var_16c = eax_53[1] f* xmm1_100
                            float xmm0_133 = var_160.d
                            var_d8.d = (xmm3_35 - xmm6_13) * (xmm0_133 + xmm0_133)
                                + (xmm4_15 + xmm5_17 - xmm2_46 - xmm3_33) * xmm0_127
                                + (xmm2_48 + xmm7_7) * (xmm1_99 + xmm1_99) f+ eax_53[5]
                            float xmm1_107 = var_160.d
                            var_d8:4.d = (xmm6_13 + xmm3_35) * (xmm0_127 + xmm0_127)
                                + (xmm2_50 + xmm2_46 - xmm3_33) f* var_160.d
                                + (xmm1_99 + xmm1_99) * (xmm2_52 - var_16c) f+ eax_53[6]
                            float var_d0_4 = (xmm1_107 + xmm1_107) * (var_16c + xmm2_52)
                                + (xmm2_48 - xmm7_7) * (xmm0_127 + xmm0_127)
                                + (xmm2_50 - xmm2_46 + xmm3_33) * xmm1_99 f+ eax_53[7]
                            result = sub_649cc0(&var_d8)
                        
                        int32_t ecx_30 = arg3[0xa1]
                        
                        if (ecx_30 s> 0x10)
                            var_1f8_1 = "ParticleSpotDraw"
                            var_1fc_1 = 0x8df
                            var_200_1 = "C:\x\ax2017\Engine\Particle.cpp"
                            ecx_1 = "pSpot->numTrailSegments <= MAX_TRAIL_SEGMENTS"
                            goto label_6c20f9
                        
                        int32_t i_1 = 1
                        int32_t i_2 = 1
                        
                        if (ecx_30 s> 1)
                            void* esi_3 = &arg3[0x23]
                            
                            do
                                float* ecx_31 = nullptr
                                int32_t edx_9 = neg.d(i_1 - 1)
                                var_48.d = xmm2_3
                                var_38_1.d = xmm2_3
                                var_38_1:4.d = xmm0_15
                                var_38_1:0xc.d = xmm0_15
                                
                                if (i_2 != arg3[0xa1] - 1)
                                    ecx_31 = esi_3
                                
                                var_48:4.d = xmm2_6
                                float* var_1f8_8 = ecx_31
                                var_48:8.d = xmm2_9
                                var_48:0xc.d = xmm2_6
                                var_38_1:8.d = xmm2_9
                                sub_648a50(
                                    sub_6beef0(esi_3 - 0x48, 
                                        sbb.d(edx_9, edx_9, i_1 != 1) & (esi_3 - 0x6c), &var_b8, 
                                        esi_3 - 0x48, esi_3 - 0x24, ecx_31, *(esi_3 - 0x2c)), 
                                    &var_b8, arg4, 4)
                                sub_646bb0(&var_1a0, &var_48, &var_b8, &var_1a0, var_188_1, 
                                    var_184_1)
                                i_1 = i_2 + 1
                                esi_3 += 0x24
                                i_2 = i_1
                            while (i_1 s< arg3[0xa1])
                        
                        result = *(arg3[0xc] + 0x2e4)
                        
                        if (*(result + 0x75) != 0)
                            data_cf6b18.d = 0
                        else
                            sub_649d30()
                            data_cf6b18.d = 0
        else
            void* eax_9 = data_cf65b8
            var_78 = 0f
            int32_t var_74_1 = 0
            int32_t var_70_1 = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0x14)))
            int32_t var_6c_1 = _mm_cvtepi32_ps(zx.o(*(eax_9 + 0x18)))
            result = sub_682f00(&var_78, &var_16c)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

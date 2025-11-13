// 函数: sub_6867a0
// 地址: 0x6867a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$___std_fs_get_stats@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_d4 = esi
int32_t edi
int32_t var_d8 = edi
int32_t var_dc = __security_cookie ^ &__saved_ebp
int32_t* esp = &var_dc
fsbase->NtTib.ExceptionList = &ExceptionList
float* var_b4 = arg2
void* ecx = data_147b06c
int32_t* var_a8 = arg6
char* eax_4 = arg7
char* var_ac = eax_4
char const* const var_e8_4
int32_t var_e4_1
char const* const var_e0
char const* const ecx_1
float var_bc
void* var_b8
uint32_t result

if (*(ecx + 0x167) == 0)
    if (*(ecx + 0x164) != 0)
        float xmm1_3 = *(ecx + 0x12c) * 0f
        float xmm3_2 = *arg3
        float xmm2_3 = arg3[1]
        float xmm1_5 = *(ecx + 0x13c) * 0f
        float xmm6_2 = *(ecx + 0x14c) * 0f
        float xmm5_1 = *(ecx + 0x140)
        float xmm7_1 = *(ecx + 0x144)
        float xmm4_1 = *(ecx + 0x150)
        float xmm0_15 = *(ecx + 0x134) * xmm3_2
        float var_54 = *(ecx + 0x128) * xmm2_3 + *(ecx + 0x124) * xmm3_2 + xmm1_3 f+ *(ecx + 0x130)
        float xmm3_3 = arg3[2]
        float var_50_1 = *(ecx + 0x138) * xmm2_3 + xmm0_15 + xmm1_5 + xmm5_1
        float xmm2_4 = arg3[3]
        float var_4c_1 = *(ecx + 0x148) * xmm2_3 + xmm7_1 * xmm3_2 + xmm6_2 + xmm4_1
        float var_48_1 =
            *(ecx + 0x128) * xmm2_4 + *(ecx + 0x124) * xmm3_3 + xmm1_3 f+ *(ecx + 0x130)
        float xmm3_4 = arg3[4]
        float var_44_1 = *(ecx + 0x138) * xmm2_4 + *(ecx + 0x134) * xmm3_3 + xmm1_5 + xmm5_1
        float xmm2_5 = arg3[5]
        float var_40_1 = *(ecx + 0x148) * xmm2_4 + xmm7_1 * xmm3_3 + xmm6_2 + xmm4_1
        float var_3c_1 =
            *(ecx + 0x128) * xmm2_5 + *(ecx + 0x124) * xmm3_4 + xmm1_3 f+ *(ecx + 0x130)
        float var_38_1 = *(ecx + 0x138) * xmm2_5 + *(ecx + 0x134) * xmm3_4 + xmm1_5 + xmm5_1
        float xmm0_30 = arg3[7]
        float var_34_1 = *(ecx + 0x148) * xmm2_5 + xmm7_1 * xmm3_4 + xmm6_2 + xmm4_1
        float xmm1_51 = arg3[6]
        float var_30_1 =
            *(ecx + 0x128) * xmm0_30 + *(ecx + 0x124) * xmm1_51 + xmm1_3 f+ *(ecx + 0x130)
        float var_2c_1 = *(ecx + 0x138) * xmm0_30 + *(ecx + 0x134) * xmm1_51 + xmm1_5 + xmm5_1
        float var_28_1 = *(ecx + 0x148) * xmm0_30 + xmm7_1 * xmm1_51 + xmm6_2 + xmm4_1
        
        if (eax_4 == 0)
            eax_4 = *(ecx + 0x2dc)
            
            if (eax_4 == 0)
                if (data_1a9a070 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    var_e0 = &data_1a9a070
                    sub_75970e(var_e0)
                    
                    if (data_1a9a070 == 0xffffffff)
                        int32_t var_14_3 = 1
                        int32_t eax_16 = sub_69f030("sys/sprite_3d.material", 5)
                        var_e0 = &data_1a9a070
                        data_1a9a074 = eax_16
                        int32_t var_14_4 = 0xffffffff
                        __Init_thread_footer(var_e0)
                    
                    arg2 = var_b4
                
                eax_4 = data_1a9a074
        
        var_e0 = eax_4
        result = sub_646e00(var_a8, arg2, &var_54, arg4, arg5, var_a8, var_e0)
        esp = &var_dc
        goto label_68758b
    
    eax_4 = sub_6e1520(1)
    void* edi_2 = data_147abe4
    
    if (*(edi_2 + 0x1d) != 0)
        int32_t* ecx_7 = var_a8
        
        if (ecx_7 == 0)
            goto label_686d59
        
        esp = &var_dc
        void var_74
        
        if (sub_6a1470(&var_74, var_b4, ecx_7, &var_74) == 0)
            ecx_7 = var_a8
        label_686d53:
            edi_2 = data_147abe4
        label_686d59:
            eax_4 = *(edi_2 + 0x18)
            
            if (eax_4 == 0 || eax_4 == 0x400)
            label_686f3e:
                sub_681c50()
                edi_2 = data_147abe4
                *(edi_2 + 0x4c) = var_a8
                eax_4 = var_ac
                *(edi_2 + 0x50) = eax_4
            else if (*(edi_2 + 0x4c) != ecx_7 || *(edi_2 + 0x50) != var_ac)
                void* eax_22 = data_147b06c
                *(eax_22 + 0x30) += 1
                void* eax_23 = data_147abe8
                
                if (eax_23 != 0 && ((*(eax_23 + 0x1c) u>> 8).b & 1) != 0)
                    void* eax_26 = *(edi_2 + 0x50)
                    
                    if (eax_26 == var_ac)
                        void* esi_4 = *(edi_2 + 0x4c)
                        
                        if (esi_4 == 0 || ecx_7 == 0)
                            var_e0 = "Texture Swap with null"
                            sub_63b5f0(var_e0)
                            esp = &var_dc
                        else
                            char* eax_33 = ecx_7[8]
                            char* const edx_7 = &data_801800
                            char* const ecx_16 = &data_801800
                            
                            if (eax_33 != 0)
                                edx_7 = eax_33
                            
                            char* eax_34 = *(esi_4 + 0x20)
                            var_e0 = edx_7
                            
                            if (eax_34 != 0)
                                ecx_16 = eax_34
                            
                            char* const var_e4_5 = ecx_16
                            sub_63b5f0("Texture Swap: %s %s")
                            esp = &var_dc
                    else
                        var_b8 = &data_801800
                        int32_t var_14_5 = 2
                        var_bc = &data_801800
                        var_14_5.b = 3
                        int32_t* ecx_9 = &var_b8
                        int32_t* eax_28
                        void* edi_3
                        
                        if (eax_26 == 0)
                            var_e0 = nullptr
                            sub_63d5e0(eax_26, 7, ecx_9, var_e0.b)
                            edi_3 = var_b8
                            eax_28 = 0x61666544
                            __builtin_strcpy(edi_3, "Default")
                        else
                            var_e0 = eax_26 + 0x20
                            eax_28 = sub_63d850(ecx_9, var_e0)
                            edi_3 = var_b8
                        
                        int32_t* ecx_10 = &var_bc
                        float esi_3
                        
                        if (var_ac == 0)
                            var_e0 = nullptr
                            sub_63d5e0(eax_28, 7, ecx_10, var_e0.b)
                            esi_3 = var_bc
                            __builtin_strcpy(esi_3, "Default")
                        else
                            var_e0 = &var_ac[0x20]
                            sub_63d850(ecx_10, var_e0)
                            esi_3 = var_bc
                        
                        float ecx_11 = &data_801800
                        void* eax_30 = &data_801800
                        
                        if (esi_3 != 0)
                            ecx_11 = esi_3
                        
                        var_e0 = ecx_11
                        
                        if (edi_3 != 0)
                            eax_30 = edi_3
                        
                        void* var_e4_4 = eax_30
                        sub_63b5f0("Material change: %s to  %s")
                        esp = &var_dc
                        var_14_5.b = 4
                        
                        if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                            char* eax_31 = sub_63d4e0(&var_bc)
                            int32_t temp0_1 = *(eax_31 + 4)
                            *(eax_31 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                                var_bc = &data_801800
                        
                        int32_t var_14_6 = 5
                        
                        if (data_cf65bc != 0 && edi_3 != 0 && *edi_3 != 0)
                            char* eax_32 = sub_63d4e0(&var_b8)
                            int32_t temp1_1 = *(eax_32 + 4)
                            *(eax_32 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                                var_b8 = &data_801800
                        
                        int32_t var_14_7 = 0xffffffff
                
                goto label_686f3e
            
            if (*(edi_2 + 0x3c) != 0)
                goto label_686fa3
            
            if (*(edi_2 + 0x18) == 0)
                void* edx_8 = *data_147b070
                var_e0 = *(edi_2 + (*(edi_2 + 0x10) << 2))
                int32_t eax_38 = (*(edx_8 + 0x64))(var_e0)
                edi_2 = data_147abe4
                *(edi_2 + 0x3c) = eax_38
                memset(eax_38, 0, 0x20000)
                esp = &var_e0
            label_686fa3:
                int32_t* esi_7 = (*(edi_2 + 0x18) << 7) + *(edi_2 + 0x3c)
                int32_t edx_17
                
                if (arg5 != 0)
                    bool cond:2_1 = data_147b074 != 1
                    int32_t eax_81 = *arg3
                    esi_7[1] = arg3[1]
                    *esi_7 = eax_81
                    esi_7[2] = *var_b4
                    esi_7[3] = var_b4[1]
                    int32_t eax_84 = *arg4
                    uint32_t eax_99
                    uint32_t ecx_42
                    uint32_t edx_24
                    
                    if (cond:2_1)
                        esi_7[6] = (((((eax_84 u>> 0x18 << 8) + zx.d(eax_84.b)) << 8)
                            + zx.d((*arg4 u>> 8).b)) << 8) + zx.d((*arg4 u>> 0x10).b)
                        uint32_t ecx_51 = arg4[1]
                        edx_24 = (ecx_51 u>> 0x18 << 8) + zx.d(ecx_51.b)
                        eax_99 = ecx_51
                        ecx_42 = ecx_51 u>> 0x10
                    else
                        esi_7[6] = ((((zx.d((eax_84 u>> 0x10).b) + (*arg4 u>> 0x18 << 8)) << 8)
                            + zx.d((*arg4 u>> 8).b)) << 8) + zx.d((*arg4).b)
                        ecx_42 = arg4[1]
                        edx_24 = zx.d((ecx_42 u>> 0x10).b) + (ecx_42 u>> 0x18 << 8)
                        eax_99 = ecx_42
                    
                    esi_7[7] = (((edx_24 << 8) + zx.d((eax_99 u>> 8).b)) << 8) + zx.d(ecx_42.b)
                    bool cond:4_1 = data_147b074 != 1
                    uint32_t eax_112 = zx.d(arg5)
                    int32_t eax_113 = arg3[2]
                    esi_7[9] = arg3[3]
                    esi_7[8] = eax_113
                    esi_7[0xa] = var_b4[2]
                    esi_7[0xb] = var_b4[3]
                    int32_t eax_117 = arg4[eax_112 * 2]
                    uint32_t eax_135
                    uint32_t ecx_61
                    uint32_t edx_34
                    int32_t* esi_9
                    
                    if (cond:4_1)
                        esi_9 = esi_7
                        uint32_t ecx_69 = (((((eax_117 u>> 0x18 << 8) + zx.d(eax_117.b)) << 8)
                            + zx.d((arg4[eax_112 * 2] u>> 8).b)) << 8)
                            + zx.d((arg4[eax_112 * 2] u>> 0x10).b)
                        esi_9[0xe] = ecx_69
                        uint32_t ecx_70 = arg4[eax_112 * 2 + 1]
                        edx_34 = (ecx_70 u>> 0x18 << 8) + zx.d(ecx_70.b)
                        eax_135 = ecx_70
                        ecx_61 = ecx_70 u>> 0x10
                    else
                        esi_9 = esi_7
                        uint32_t ecx_60 = ((((zx.d((eax_117 u>> 0x10).b)
                            + (arg4[eax_112 * 2] u>> 0x18 << 8)) << 8)
                            + zx.d((arg4[eax_112 * 2] u>> 8).b)) << 8) + zx.d((arg4[eax_112 * 2]).b)
                        esi_9[0xe] = ecx_60
                        ecx_61 = arg4[eax_112 * 2 + 1]
                        edx_34 = zx.d((ecx_61 u>> 0x10).b) + (ecx_61 u>> 0x18 << 8)
                        eax_135 = ecx_61
                    
                    esi_9[0xf] = (((edx_34 << 8) + zx.d((eax_135 u>> 8).b)) << 8) + zx.d(ecx_61.b)
                    bool cond:5_1 = data_147b074 != 1
                    int32_t eax_151 = arg3[4]
                    esi_9[0x11] = arg3[5]
                    esi_9[0x10] = eax_151
                    esi_9[0x12] = var_b4[4]
                    esi_9[0x13] = var_b4[5]
                    int32_t eax_155 = arg4[(eax_112 + 1) * 2]
                    uint32_t eax_173
                    uint32_t ecx_80
                    uint32_t edx_44
                    int32_t* esi_11
                    
                    if (cond:5_1)
                        esi_11 = esi_7
                        uint32_t ecx_88 = (((((eax_155 u>> 0x18 << 8) + zx.d(eax_155.b)) << 8)
                            + zx.d((arg4[(eax_112 + 1) * 2] u>> 8).b)) << 8)
                            + zx.d((arg4[(eax_112 + 1) * 2] u>> 0x10).b)
                        esi_11[0x16] = ecx_88
                        uint32_t ecx_89 = arg4[(eax_112 + 1) * 2 + 1]
                        edx_44 = (ecx_89 u>> 0x18 << 8) + zx.d(ecx_89.b)
                        eax_173 = ecx_89
                        ecx_80 = ecx_89 u>> 0x10
                    else
                        esi_11 = esi_7
                        esi_11[0x16] = ((((zx.d((eax_155 u>> 0x10).b)
                            + (arg4[(eax_112 + 1) * 2] u>> 0x18 << 8)) << 8)
                            + zx.d((arg4[(eax_112 + 1) * 2] u>> 8).b)) << 8)
                            + zx.d((arg4[(eax_112 + 1) * 2]).b)
                        ecx_80 = arg4[(eax_112 + 1) * 2 + 1]
                        edx_44 = zx.d((ecx_80 u>> 0x10).b) + (ecx_80 u>> 0x18 << 8)
                        eax_173 = ecx_80
                    
                    int32_t var_a8_4 = eax_112 + 2
                    esi_11[0x17] = (((edx_44 << 8) + zx.d((eax_173 u>> 8).b)) << 8) + zx.d(ecx_80.b)
                    bool cond:6_1 = data_147b074 != 1
                    int32_t eax_187 = arg3[6]
                    esi_11[0x19] = arg3[7]
                    esi_11[0x18] = eax_187
                    esi_11[0x1a] = var_b4[6]
                    esi_11[0x1b] = var_b4[7]
                    int32_t eax_191 = arg4[var_a8_4 * 2]
                    uint32_t eax_209
                    uint32_t ecx_99
                    uint32_t edx_54
                    
                    if (cond:6_1)
                        uint32_t ecx_107 = (((((eax_191 u>> 0x18 << 8) + zx.d(eax_191.b)) << 8)
                            + zx.d((arg4[var_a8_4 * 2] u>> 8).b)) << 8)
                            + zx.d((arg4[var_a8_4 * 2] u>> 0x10).b)
                        esi_7[0x1e] = ecx_107
                        uint32_t ecx_108 = arg4[var_a8_4 * 2 + 1]
                        edx_54 = (ecx_108 u>> 0x18 << 8) + zx.d(ecx_108.b)
                        eax_209 = ecx_108
                        ecx_99 = ecx_108 u>> 0x10
                    else
                        uint32_t ecx_98 = ((((zx.d((eax_191 u>> 0x10).b)
                            + (arg4[var_a8_4 * 2] u>> 0x18 << 8)) << 8)
                            + zx.d((arg4[var_a8_4 * 2] u>> 8).b)) << 8) + zx.d((arg4[var_a8_4 * 2]).b)
                        esi_7[0x1e] = ecx_98
                        ecx_99 = arg4[var_a8_4 * 2 + 1]
                        edx_54 = zx.d((ecx_99 u>> 0x10).b) + (ecx_99 u>> 0x18 << 8)
                        eax_209 = ecx_99
                    
                    edx_17 = (((edx_54 << 8) + zx.d((eax_209 u>> 8).b)) << 8) + zx.d(ecx_99.b)
                else
                    int32_t ecx_18 = *arg4
                    int32_t edx_10 = arg4[1]
                    uint32_t eax_41 = ecx_18 u>> 0x18 << 8
                    uint32_t eax_42 = zx.d(ecx_18.b)
                    var_bc = edx_10 u>> 0x18 << 8
                    uint32_t eax_46 = zx.d(edx_10.b)
                    var_b8 = zx.d((ecx_18 u>> 8).b)
                    uint32_t eax_52 = zx.d((edx_10 u>> 8).b)
                    uint32_t edx_12 = zx.d((edx_10 u>> 0x10).b)
                    uint32_t ecx_20 = zx.d((ecx_18 u>> 0x10).b)
                    int32_t var_ac_4
                    
                    if (data_147b074 != 1)
                        var_ac_4 = ((((eax_41 + eax_42) << 8) + var_b8) << 8) + ecx_20
                        edx_17 = ((((eax_46 i+ var_bc) << 8) + eax_52) << 8) + edx_12
                    else
                        edx_17 = ((((edx_12 i+ var_bc) << 8) + eax_52) << 8) + eax_46
                        var_ac_4 = ((((eax_41 + ecx_20) << 8) + var_b8) << 8) + eax_42
                    
                    int32_t eax_65 = *arg3
                    esi_7[1] = arg3[1]
                    *esi_7 = eax_65
                    esi_7[2] = *var_b4
                    esi_7[3] = var_b4[1]
                    esi_7[6] = var_ac_4
                    esi_7[4] = 0
                    esi_7[5] = 0x3f800000
                    esi_7[7] = edx_17
                    int32_t eax_69 = arg3[2]
                    esi_7[9] = arg3[3]
                    esi_7[8] = eax_69
                    esi_7[0xa] = var_b4[2]
                    esi_7[0xb] = var_b4[3]
                    esi_7[0xe] = var_ac_4
                    esi_7[0xc] = 0
                    esi_7[0xd] = 0x3f800000
                    esi_7[0xf] = edx_17
                    int32_t eax_73 = arg3[4]
                    esi_7[0x11] = arg3[5]
                    esi_7[0x10] = eax_73
                    esi_7[0x12] = var_b4[4]
                    esi_7[0x13] = var_b4[5]
                    esi_7[0x16] = var_ac_4
                    esi_7[0x14] = 0
                    esi_7[0x15] = 0x3f800000
                    esi_7[0x17] = edx_17
                    int32_t eax_77 = arg3[6]
                    esi_7[0x19] = arg3[7]
                    esi_7[0x18] = eax_77
                    esi_7[0x1a] = var_b4[6]
                    esi_7[0x1b] = var_b4[7]
                    esi_7[0x1c] = 0
                    esi_7[0x1d] = 0x3f800000
                    esi_7[0x1e] = var_ac_4
                
                *(0x7c + esi_7) = edx_17
                result = data_147b06c
                *(edi_2 + 0x18) += 1
                *(result + 0x28) += 1
            label_68758b:
                fsbase->NtTib.ExceptionList = ExceptionList
                esp[1]
                esp[2]
                CookieCheckFunction(result)
                return result
            
            var_e0 = "SpriteDrawVertsInt"
            var_e4_1 = 0x23d
            ecx_1 = "gpSpriteAppData->numBufferSprites == 0"
            var_e8_4 = "C:\x\ax2017\Engine\Sprite.cpp"
        else
            var_b4 = &var_74
            eax_4 = var_a8
            
            if (*(eax_4 + 4) == 3)
                ecx_7 = *(*sub_5af880(eax_4) + 0x28)
                var_a8 = ecx_7
                goto label_686d53
            
            var_e0 = "TextureGetDef"
            var_e4_1 = 0x89
            var_e8_4 = "C:\x\ax2017\Engine\Texture.h"
            ecx_1 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        var_e0 = "SpriteDrawVertsInt"
        var_e4_1 = 0x1e5
        ecx_1 = "gpSpriteAppData->spritesDrawing"
        var_e8_4 = "C:\x\ax2017\Engine\Sprite.cpp"
else
    if (arg5 == 0)
        float xmm1_1 = *(ecx + 0x16c)
        int32_t i = 0
        float xmm0_2 = *(ecx + 0x168) * xmm1_1
        void var_a0
        var_b8 = &var_a0
        float xmm3_1 = 1f / xmm0_2
        float var_c0_1 = xmm3_1
        var_bc = (1f / xmm1_1) ^ (data_8937c0.o).d
        void* ecx_2
        
        do
            float xmm0_4 = xmm3_1 f* arg3[i * 2]
            *(var_b8 - 4) = sub_4ae0f0(ebp_1, xmm0_4) f* *(data_147b06c + 0x168)
            float xmm0_8 = sub_4ae0d0(ebp_1, xmm0_4)
            ecx_2 = data_147b06c
            void* eax_7 = var_b8
            xmm3_1 = var_c0_1
            *eax_7 = xmm0_8 f* *(ecx_2 + 0x168)
            float xmm0_11 = var_bc f* arg3[i * 2 + 1]
            i += 1
            *(eax_7 + 4) = xmm0_11
            var_b8 = eax_7 + 0xc
        while (i s< 4)
        
        char* eax_9 = var_ac
        
        if (eax_9 == 0)
            eax_9 = *(ecx_2 + 0x2dc)
            
            if (eax_9 == 0)
                if (data_1a9a068 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    var_e0 = &data_1a9a068
                    sub_75970e(var_e0)
                    
                    if (data_1a9a068 == 0xffffffff)
                        int32_t var_14_1 = 0
                        int32_t eax_12 = sub_69f030("sys/sprite_3d.material", 5)
                        var_e0 = &data_1a9a068
                        data_1a9a06c = eax_12
                        int32_t var_14_2 = 0xffffffff
                        __Init_thread_footer(var_e0)
                
                eax_9 = data_1a9a06c
        
        var_e0 = eax_9
        void var_a4
        result = sub_646bb0(var_a8, var_b4, &var_a4, arg4, var_a8, var_e0)
        esp = &var_dc
        goto label_68758b
    
    var_e0 = "SpriteDrawVertsInt"
    var_e4_1 = 0x1a8
    ecx_1 = "!hasFourColors"
    var_e8_4 = "C:\x\ax2017\Engine\Sprite.cpp"
sub_63b870(eax_4, &data_801800, ecx_1, var_e8_4, var_e4_1, var_e0)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

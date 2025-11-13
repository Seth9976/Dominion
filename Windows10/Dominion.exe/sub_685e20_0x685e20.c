// 函数: sub_685e20
// 地址: 0x685e20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76dd5d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_8c = esi
int32_t edi
int32_t var_90 = edi
int32_t var_94 = __security_cookie ^ &__saved_ebp
int32_t* esp = &var_94
fsbase->NtTib.ExceptionList = &ExceptionList
float* var_74 = arg2
float* esi_1 = arg3
void* ecx = data_147b06c
int32_t* edx = arg5
int32_t* edi_1 = arg6
int32_t* var_6c = edx
uint32_t result
int32_t* var_98
void* var_70
char* const i_1
float var_54
float var_50
float var_4c

if (*(ecx + 0x167) != 0)
    float xmm1_1 = *(ecx + 0x16c)
    void* eax_4 = &var_50 - esi_1
    float xmm0_2 = *(ecx + 0x168) * xmm1_1
    var_70 = &var_4c - esi_1
    i_1 = 4
    float xmm3_1 = 1f / xmm0_2
    float xmm2_2 = (1f / xmm1_1) ^ (data_8937c0.o).d
    float var_80_1 = xmm3_1
    void* eax_7
    char* const i
    
    do
        float xmm0_4 = xmm3_1 * *esi_1
        *(eax_4 + esi_1 - 4) = sub_4ae0f0(ebp_1, xmm0_4) f* *(data_147b06c + 0x168)
        float xmm0_8 = sub_4ae0d0(ebp_1, xmm0_4)
        i = i_1
        i_1 -= 1
        esi_1 = &esi_1[3]
        eax_7 = data_147b06c
        void* ecx_1 = var_70
        xmm3_1 = var_80_1
        *(eax_4 + esi_1 - 0xc) = xmm0_8 f* *(eax_7 + 0x168)
        *(ecx_1 + esi_1 - 0xc) = xmm2_2 * esi_1[-2]
    while (i != 1)
    int32_t* edi_3 = edi_1
    
    if (edi_3 == 0)
        edi_3 = *(eax_7 + 0x2dc)
        
        if (edi_3 == 0)
            if (data_1a9a058 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                var_98 = &data_1a9a058
                sub_75970e(var_98)
                
                if (data_1a9a058 == 0xffffffff)
                    int32_t* var_14_1 = edi_3
                    int32_t eax_10 = sub_69f030("sys/sprite_3d.material", edi_3 + 5)
                    var_98 = &data_1a9a058
                    data_1a9a05c = eax_10
                    int32_t var_14_2 = 0xffffffff
                    __Init_thread_footer(var_98)
            
            edi_3 = data_1a9a05c
    
    var_98 = edi_3
    result = sub_646bb0(var_6c, var_74, &var_54, arg4, var_6c, var_98)
    esp = &var_94
else
    float var_44
    
    if (*(ecx + 0x164) == 0)
        float* eax_18 = sub_6e1520(1)
        void* edi_4 = data_147abe4
        char const* const var_a0_3
        int32_t var_9c_3
        char const* const ecx_6
        
        if (*(edi_4 + 0x1d) == 0)
            var_98 = "SpriteDrawVertsInt"
            var_9c_3 = 0x1e5
            ecx_6 = "gpSpriteAppData->spritesDrawing"
        label_68677e:
            var_a0_3 = "C:\x\ax2017\Engine\Sprite.cpp"
        label_686788:
            sub_63b870(eax_18, &data_801800, ecx_6, var_a0_3, var_9c_3, var_98)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t* edx_5 = var_6c
        
        if (edx_5 == 0)
            goto label_6863b0
        
        esp = &var_94
        
        if (sub_6a1470(&var_44, var_74, var_6c, &var_44) != 0)
            eax_18 = &var_44
            var_74 = &var_44
            
            if (var_6c[1] == 3)
                edx_5 = *(*sub_5af880(var_6c) + 0x28)
                var_6c = edx_5
                goto label_6863aa
            
            var_98 = "TextureGetDef"
            var_9c_3 = 0x89
            var_a0_3 = "C:\x\ax2017\Engine\Texture.h"
            ecx_6 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            goto label_686788
        
        edx_5 = var_6c
    label_6863aa:
        edi_4 = data_147abe4
    label_6863b0:
        eax_18 = *(edi_4 + 0x18)
        
        if (eax_18 == 0 || eax_18 == 0x400)
        label_686574:
            sub_681c50()
            edi_4 = data_147abe4
            *(edi_4 + 0x4c) = var_6c
            eax_18 = edi_1
            *(edi_4 + 0x50) = eax_18
        else if (*(edi_4 + 0x4c) != edx_5 || *(edi_4 + 0x50) != edi_1)
            void* eax_23 = data_147b06c
            *(eax_23 + 0x30) += 1
            void* eax_24 = data_147abe8
            
            if (eax_24 != 0 && ((*(eax_24 + 0x1c) u>> 8).b & 1) != 0)
                void* eax_27 = *(edi_4 + 0x50)
                
                if (eax_27 == edi_1)
                    void* ecx_17 = *(edi_4 + 0x4c)
                    
                    if (ecx_17 == 0 || edx_5 == 0)
                        var_98 = "Texture Swap with null"
                        sub_63b5f0(var_98)
                        esp = &var_94
                    else
                        char* eax_33 = edx_5[8]
                        char* const edx_11 = &data_801800
                        
                        if (eax_33 != 0)
                            edx_11 = eax_33
                        
                        char* eax_34 = *(ecx_17 + 0x20)
                        char* const ecx_18 = &data_801800
                        var_98 = edx_11
                        
                        if (eax_34 != 0)
                            ecx_18 = eax_34
                        
                        char* const var_9c_4 = ecx_18
                        sub_63b5f0("Texture Swap: %s %s")
                        esp = &var_94
                else
                    i_1 = &data_801800
                    int32_t var_14_5 = 2
                    var_70 = &data_801800
                    var_14_5.b = 3
                    int32_t* ecx_10 = &i_1
                    char* const i_2
                    
                    if (eax_27 == 0)
                        var_98 = nullptr
                        sub_63d5e0(eax_27, 7, ecx_10, var_98.b)
                        i_2 = i_1
                        __builtin_strcpy(i_2, "Default")
                    else
                        var_98 = eax_27 + 0x20
                        sub_63d850(ecx_10, var_98)
                        i_2 = i_1
                    
                    int32_t* ecx_11 = &var_70
                    void* esi_2
                    
                    if (edi_1 == 0)
                        var_98 = nullptr
                        sub_63d5e0(edi_1, 7, ecx_11, var_98.b)
                        esi_2 = var_70
                        __builtin_strcpy(esi_2, "Default")
                    else
                        var_98 = &edi_1[8]
                        sub_63d850(ecx_11, var_98)
                        esi_2 = var_70
                    
                    void* ecx_12 = &data_801800
                    char* const i_3 = &data_801800
                    
                    if (esi_2 != 0)
                        ecx_12 = esi_2
                    
                    var_98 = ecx_12
                    
                    if (i_2 != 0)
                        i_3 = i_2
                    
                    char* const i_4 = i_3
                    sub_63b5f0("Material change: %s to  %s")
                    esp = &var_94
                    var_14_5.b = 4
                    
                    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                        char* eax_31 = sub_63d4e0(&var_70)
                        int32_t temp1_1 = *(eax_31 + 4)
                        *(eax_31 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                            var_70 = &data_801800
                    
                    int32_t var_14_6 = 5
                    
                    if (data_cf65bc != 0 && i_2 != 0 && *i_2 != 0)
                        char* eax_32 = sub_63d4e0(&i_1)
                        int32_t temp2_1 = *(eax_32 + 4)
                        *(eax_32 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                            i_1 = &data_801800
                    
                    int32_t var_14_7 = 0xffffffff
            
            goto label_686574
        
        if (*(edi_4 + 0x3c) == 0)
            if (*(edi_4 + 0x18) != 0)
                var_98 = "SpriteDrawVertsInt"
                var_9c_3 = 0x23d
                ecx_6 = "gpSpriteAppData->numBufferSprites == 0"
                goto label_68677e
            
            void* edx_12 = *data_147b070
            var_98 = *(edi_4 + (*(edi_4 + 0x10) << 2))
            int32_t eax_38 = (*(edx_12 + 0x64))(var_98)
            edi_4 = data_147abe4
            *(edi_4 + 0x3c) = eax_38
            memset(eax_38, 0, 0x20000)
            esp = &var_98
        
        float* edi_8 = (*(edi_4 + 0x18) << 7) + *(data_147abe4 + 0x3c)
        int32_t ecx_20 = *arg4
        int32_t edx_13 = arg4[1]
        uint32_t eax_43 = ecx_20 u>> 0x18 << 8
        uint32_t eax_44 = zx.d(ecx_20.b)
        var_70 = edx_13 u>> 0x18 << 8
        uint32_t eax_48 = zx.d(edx_13.b)
        i_1 = zx.d((ecx_20 u>> 8).b)
        uint32_t eax_54 = zx.d((edx_13 u>> 8).b)
        uint32_t eax_55 = zx.d((edx_13 u>> 0x10).b)
        uint32_t ecx_22 = zx.d((ecx_20 u>> 0x10).b)
        int32_t eax_61
        int32_t edx_20
        
        if (data_147b074 != 1)
            edx_20 = (&i_1[(eax_44 + eax_43) << 8] << 8) + ecx_22
            eax_61 = ((((var_70 + eax_48) << 8) + eax_54) << 8) + eax_55
        else
            edx_20 = (&i_1[(ecx_22 + eax_43) << 8] << 8) + eax_44
            eax_61 = ((((var_70 + eax_55) << 8) + eax_54) << 8) + eax_48
        
        float eax_68 = *esi_1
        edi_8[1] = esi_1[1]
        *edi_8 = eax_68
        edi_8[2] = *var_74
        edi_8[3] = var_74[1]
        edi_8[7] = eax_61
        edi_8[4] = 0
        edi_8[5] = 0x3f800000
        edi_8[6] = edx_20
        int32_t eax_72 = esi_1[3]
        edi_8[9] = esi_1[4]
        edi_8[8] = eax_72
        edi_8[0xa] = var_74[2]
        edi_8[0xb] = var_74[3]
        edi_8[0xf] = eax_61
        edi_8[0xc] = 0
        edi_8[0xd] = 0x3f800000
        edi_8[0xe] = edx_20
        int32_t eax_76 = esi_1[6]
        edi_8[0x11] = esi_1[7]
        edi_8[0x10] = eax_76
        edi_8[0x12] = var_74[4]
        edi_8[0x13] = var_74[5]
        edi_8[0x17] = eax_61
        edi_8[0x14] = 0
        edi_8[0x15] = 0x3f800000
        edi_8[0x16] = edx_20
        int32_t eax_80 = esi_1[9]
        edi_8[0x19] = esi_1[0xa]
        edi_8[0x18] = eax_80
        edi_8[0x1a] = var_74[6]
        edi_8[0x1b] = var_74[7]
        edi_8[0x1f] = eax_61
        void* eax_84 = data_147abe4
        edi_8[0x1c] = 0
        edi_8[0x1d] = 0x3f800000
        edi_8[0x1e] = edx_20
        *(eax_84 + 0x18) += 1
        result = data_147b06c
        *(result + 0x28) += 1
    else
        int64_t xmm0_12 = *esi_1
        float xmm7_1 = *(ecx + 0x128)
        float xmm5_1 = *(ecx + 0x124)
        float eax_12 = esi_1[2]
        float xmm4_1 = xmm0_12.d
        float xmm3_2 = xmm0_12:4.d
        float eax_13 = esi_1[5]
        float xmm6_1 = *(ecx + 0x134)
        float eax_14 = esi_1[8]
        float xmm0_18 = xmm3_2 f* *(ecx + 0x138)
        float xmm3_3 = xmm3_2 f* *(ecx + 0x148)
        var_54 = xmm4_1 * xmm5_1 + xmm3_2 * xmm7_1 + eax_12 f* *(ecx + 0x12c) f+ *(ecx + 0x130)
        int64_t xmm0_21 = *(esi_1 + 0xc)
        float xmm3_4 = xmm0_21:4.d
        float xmm4_5 =
            xmm4_1 f* *(ecx + 0x144) + xmm3_3 + eax_12 f* *(ecx + 0x14c) f+ *(ecx + 0x150)
        var_50 = xmm4_1 * xmm6_1 + xmm0_18 + eax_12 f* *(ecx + 0x13c) f+ *(ecx + 0x140)
        var_4c = xmm4_5
        float xmm4_6 = xmm0_21.d
        float var_48_1 =
            xmm4_6 * xmm5_1 + xmm3_4 * xmm7_1 + eax_13 f* *(ecx + 0x12c) f+ *(ecx + 0x130)
        int64_t xmm0_30 = *(esi_1 + 0x18)
        float xmm3_6 = xmm0_30:4.d
        float xmm4_10 = xmm4_6 f* *(ecx + 0x144) + xmm3_4 f* *(ecx + 0x148)
            + eax_13 f* *(ecx + 0x14c) f+ *(ecx + 0x150)
        var_44 =
            xmm4_6 * xmm6_1 + xmm3_4 f* *(ecx + 0x138) + eax_13 f* *(ecx + 0x13c) f+ *(ecx + 0x140)
        float var_40_1 = xmm4_10
        float xmm4_11 = xmm0_30.d
        float eax_15 = esi_1[0xb]
        float var_3c_1 =
            xmm4_11 * xmm5_1 + xmm3_6 * xmm7_1 + eax_14 f* *(ecx + 0x12c) f+ *(ecx + 0x130)
        int64_t xmm0_39 = *(esi_1 + 0x24)
        float xmm3_8 = xmm0_39:4.d
        float var_38_1 =
            xmm4_11 * xmm6_1 + xmm3_6 f* *(ecx + 0x138) + eax_14 f* *(ecx + 0x13c) f+ *(ecx + 0x140)
        float var_34_1 = xmm4_11 f* *(ecx + 0x144) + xmm3_6 f* *(ecx + 0x148)
            + eax_14 f* *(ecx + 0x14c) f+ *(ecx + 0x150)
        float xmm4_16 = xmm0_39.d
        float var_30_1 =
            xmm4_16 * xmm5_1 + xmm3_8 * xmm7_1 + eax_15 f* *(ecx + 0x12c) f+ *(ecx + 0x130)
        float var_2c_1 =
            xmm4_16 * xmm6_1 + xmm3_8 f* *(ecx + 0x138) + eax_15 f* *(ecx + 0x13c) f+ *(ecx + 0x140)
        float var_28_1 = xmm4_16 f* *(ecx + 0x144) + xmm3_8 f* *(ecx + 0x148)
            + eax_15 f* *(ecx + 0x14c) f+ *(ecx + 0x150)
        
        if (edi_1 == 0)
            edi_1 = *(ecx + 0x2dc)
            
            if (edi_1 == 0)
                eax_15 = data_1a9a060
                
                if (eax_15 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    var_98 = &data_1a9a060
                    eax_15 = sub_75970e(var_98)
                    
                    if (data_1a9a060 == 0xffffffff)
                        int32_t var_14_3 = 1
                        int32_t eax_17 = sub_69f030("sys/sprite_3d.material", edi_1 + 5)
                        var_98 = &data_1a9a060
                        data_1a9a064 = eax_17
                        int32_t var_14_4 = 0xffffffff
                        eax_15 = __Init_thread_footer(var_98)
                    
                    edx = var_6c
                
                edi_1 = data_1a9a064
        
        var_98 = edi_1
        result = sub_646e00(eax_15, var_74, &var_54, arg4, 0, edx, var_98)
        esp = &var_94
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
CookieCheckFunction(result)
return result

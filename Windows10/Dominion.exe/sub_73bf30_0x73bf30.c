// 函数: sub_73bf30
// 地址: 0x73bf30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_773001
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_4 = data_1a9a3f8

if (eax_4 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    eax_4 = sub_75970e(&data_1a9a3f8)
    
    if (data_1a9a3f8 == 0xffffffff)
        int32_t var_8_1 = 0
        data_1a9a3fc = sub_69f030("sys/DebugFont.font", 0x12)
        int32_t var_8_2 = 0xffffffff
        eax_4 = __Init_thread_footer(&data_1a9a3f8)

int32_t ecx_1 = data_147df54

if (data_147abe8 != 0)
    void* edx_1 = data_147abe8[4]
    int32_t var_4c
    float var_44
    
    if (ecx_1 != 0)
        eax_4 = zx.d(ecx_1.w)
        
        if (eax_4 u< *(edx_1 + 4))
            eax_4 = eax_4 * 0x7c + *edx_1
            
            if (eax_4[0x1e] == ecx_1 && eax_4 != 0)
                int128_t var_58
                
                if (data_147df8c != 1)
                    float xmm1_1 = eax_4[0x10]
                    float xmm3_1 = eax_4[0x11]
                    float var_48_1 = xmm1_1 + 3f
                    var_4c = xmm3_1 - 3f
                    var_44 = xmm3_1 + 3f
                    float var_50_1
                    var_50_1.o = (xmm1_1 - 3f).o
                    sub_682fe0(&var_58:8, &data_7dac94, 1f)
                else
                    int32_t var_70_1 = ecx_1
                    __builtin_memcpy(&var_58, 
                        "\xcd\xcc\x4c\xbd\xcd\xcc\x4c\xbd\xcd\xcc\x4c\xbd\xcd\xcc\x4c\x3d\xcd\xcc\x4c\x"
                    "3d\xcd\xcc\x4c\x3d", 
                        0x18)
                    sub_643e80(&var_58, &eax_4[0xb])
    
    if (data_147df8c == 1)
        sub_683cc0()
    
    float xmm0_6 = data_147df84
    float xmm1_3 = data_8c4634
    xmm0_6 - xmm1_3
    eax_4:1.b = (xmm0_6 == xmm1_3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, xmm1_3) ? 1 : 0) << 2
        | (xmm0_6 < xmm1_3 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    int32_t* var_28
    
    if (p_2)
        int32_t var_74
        var_74.q = _mm_cvtps_pd(xmm0_6 / xmm1_3)
        int32_t edx_3 = sub_63df30(&var_28, "Time dilation %g")
        int32_t var_8_3 = 1
        char* const ecx_4 = &data_801800
        char* eax_7 = var_28
        
        if (eax_7 != 0)
            ecx_4 = eax_7
        
        eax_4 = sub_6b3f10(eax_7, edx_3, ecx_4, data_1a9a3fc, 0xffffffff, 1, 1f)
        int32_t var_8_4 = 2
        
        if (data_cf65bc != 0)
            eax_4 = var_28
            
            if (eax_4 != 0 && *eax_4 != 0)
                eax_4 = sub_63d4e0(&var_28)
                int32_t temp0_1 = eax_4[1]
                eax_4[1] -= 1
                
                if (temp0_1 == 1)
                    eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                    var_28 = &data_801800
        
        int32_t var_8_5 = 0xffffffff
    
    void* edx_20 = data_147df48
    float var_40_1 = 0f
    char* var_30
    int32_t* var_2c
    int32_t* result_2
    int32_t* result_3
    void* var_18
    
    if (edx_20 != 0)
        if (*(edx_20 + 4) == 2)
            void* var_70_2 = edx_20
            sub_6a1f50(&var_2c, edx_20)
            int32_t var_8_6 = 3
            char* const ecx_8 = &data_801800
            char* eax_8 = var_2c
            
            if (eax_8 != 0)
                ecx_8 = eax_8
            
            char* const var_74_1 = ecx_8
            int32_t edx_6 = sub_63df30(&var_18, "%s")
            var_8_6.b = 4
            char* const ecx_9 = &data_801800
            void* eax_9 = var_18
            
            if (eax_9 != 0)
                ecx_9 = eax_9
            
            int32_t var_74_2 = 1
            void* eax_10 = sub_6b3f10(eax_9, edx_6, ecx_9, data_1a9a3fc, 0xffffffff, 1, 1f)
            var_8_6.b = 5
            
            if (data_cf65bc != 0)
                eax_10 = var_18
                
                if (eax_10 != 0 && *eax_10 != 0)
                    eax_10 = sub_63d4e0(&var_18)
                    int32_t temp1_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        eax_10 = sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            var_8_6.b = 3
            int32_t* ecx_12 = data_147df48
            
            if (ecx_12[1] != 2)
                sub_63b870(eax_10, &data_801800, "assetPtr->assetType == ASSET_TYPE_STRUCTURE", 
                    "C:\x\ax2017\Engine\AssetUtils.cpp", 0x313, "StructureDefGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            eax_4 = sub_5af880(ecx_12)
            void* ecx_13 = *eax_4
            
            if (ecx_13 != 0)
                int32_t edx_9 = *(ecx_13 + 0x60)
                
                if (edx_9 s> 0)
                    var_18 = &data_801800
                    var_8_6.b = 6
                    int32_t* eax_11 = data_147df74
                    int32_t* result_5
                    int32_t edx_11
                    
                    if (eax_11 == 0xffffffff)
                        var_8_6.b = 9
                        result_5, edx_11 =
                            sub_63d850(&var_18, sub_63df30(&result_3, "not playing animation"))
                        var_8_6.b = 0xa
                        
                        if (data_cf65bc != 0)
                            result_5 = result_3
                            
                            if (result_5 != 0 && *result_5 != 0)
                                result_5 = sub_63d4e0(&result_3)
                                int32_t temp5_1 = result_5[1]
                                result_5[1] -= 1
                                
                                if (temp5_1 == 1)
                                    result_5, edx_11 = sub_64c080(result_5, result_5[3] + 0x10)
                                    result_3 = &data_801800
                    else
                        char const* const var_78_1
                        int32_t var_74_3
                        char const* const var_70_3
                        char* ecx_15
                        
                        if (eax_11 s>= edx_9)
                            var_70_3 = "ControlsHolodeckDrawOverlay"
                            var_74_3 = 0x2d8
                        label_73c978:
                            var_78_1 = "C:\x\ax2017\Engine\Editor\EditorControls.cpp"
                            ecx_15 = "gControlsData.structureAnimClipIndex < "
                            "defStructure->pStructureImportData->numAnimClips"
                        label_73c984:
                            sub_63b870(eax_11, &data_801800, ecx_15, var_78_1, var_74_3, var_70_3)
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        result_2 = eax_11 * 3
                        int32_t ecx_14 = data_147df70
                        result_3 = *(ecx_13 + 0x68)
                        void* eax_14 = sub_6db510(ecx_14)
                        void* eax_15
                        
                        if (eax_14 != 0)
                            eax_15 = *(eax_14 + 0x2c)
                        
                        int32_t edx_10
                        float xmm0_11[0x2]
                        
                        if (eax_14 != 0 && eax_15 != 0 && *(eax_15 + 0xc) != 0)
                            eax_11 = *(eax_15 + 4)
                            
                            if (eax_11 == 0)
                                var_70_3 = "XList<struct AnimSet *>::GetHead"
                                var_74_3 = 0x53
                                var_78_1 = "C:\x\ax2017\Engine\xList.h"
                                ecx_15 = "mpHead != NULL"
                                goto label_73c984
                            
                            int32_t* ecx_16 = data_147df48
                            eax_11 = *eax_11
                            int32_t* var_38_1 = eax_11
                            
                            if (ecx_16[1] != 2)
                                var_70_3 = "StructureDefGet"
                                var_74_3 = 0x313
                                var_78_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
                                ecx_15 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                                goto label_73c984
                            
                            int32_t** eax_16 = sub_5af880(ecx_16)
                            edx_10 = data_147df74
                            eax_11 = *eax_16
                            
                            if (edx_10 s< eax_11[0x18])
                                xmm0_11 = _mm_cvtepi32_ps(zx.o(
                                    **(eax_11[0x1a] + edx_10 * 0x18 + 0x10) - 1)) f* var_38_1[1]
                                goto label_73c32c
                            
                            var_70_3 = "GetAnimationTime"
                            var_74_3 = 0x2a2
                            goto label_73c978
                        
                        edx_10 = data_147df74
                        xmm0_11 = (zx.o(0)).q
                    label_73c32c:
                        void* eax_22 = *eax_4
                        int32_t* result_9 = result_3
                        var_74_2.q = _mm_cvtps_pd(xmm0_11)
                        int32_t var_78_2 = *(eax_22 + 0x60)
                        int32_t var_7c_5 = edx_10 + 1
                        int32_t* result_4 = result_2
                        int32_t var_80_1 = result_9[result_4 * 2 + 3]
                        int32_t var_84_1 = result_9[result_4 * 2 + 2]
                        var_8_6.b = 7
                        result_5, edx_11 = sub_63d850(&var_18, 
                            sub_63df30(&result_2, "clip %s (%d of %d) frame %f"))
                        var_8_6.b = 8
                        
                        if (data_cf65bc != 0)
                            result_5 = result_2
                            
                            if (result_5 != 0 && *result_5 != 0)
                                result_5 = sub_63d4e0(&result_2)
                                int32_t temp7_1 = result_5[1]
                                result_5[1] -= 1
                                
                                if (temp7_1 == 1)
                                    result_5, edx_11 = sub_64c080(result_5, result_5[3] + 0x10)
                                    result_2 = &data_801800
                    
                    var_8_6.b = 6
                    char* ecx_24 = &data_801800
                    char* esi_1 = var_18
                    
                    if (esi_1 != 0)
                        ecx_24 = esi_1
                    
                    char* var_70_6 = ecx_24
                    eax_4 = sub_6b3f10(result_5, edx_11, ecx_24, data_1a9a3fc, 0xffffffff, 1, 1f)
                    var_8_6.b = 0xb
                    
                    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                        eax_4 = sub_63d4e0(&var_18)
                        int32_t temp6_1 = eax_4[1]
                        eax_4[1] -= 1
                        
                        if (temp6_1 == 1)
                            eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                            var_18 = &data_801800
            
            int32_t var_8_7 = 0xc
            
            if (data_cf65bc != 0)
                eax_4 = var_2c
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_63d4e0(&var_2c)
                    int32_t temp4_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp4_1 == 1)
                        eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                        var_2c = &data_801800
            
            int32_t var_8_8 = 0xffffffff
            edx_20 = data_147df48
        
        if (edx_20 != 0 && *(edx_20 + 4) == 0x19)
            void* var_70_7 = edx_20
            sub_6a1f50(&var_30, edx_20)
            int32_t var_8_9 = 0xd
            char* const ecx_30 = &data_801800
            char* eax_26 = var_30
            
            if (eax_26 != 0)
                ecx_30 = eax_26
            
            char* const var_74_5 = ecx_30
            int32_t edx_21 = sub_63df30(&var_18, "%s")
            var_8_9.b = 0xe
            char* const ecx_31 = &data_801800
            void* eax_27 = var_18
            
            if (eax_27 != 0)
                ecx_31 = eax_27
            
            eax_4 = sub_6b3f10(eax_27, edx_21, ecx_31, data_1a9a3fc, 0xffffffff, 1, 1f)
            var_8_9.b = 0xf
            
            if (data_cf65bc != 0)
                eax_4 = var_18
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_63d4e0(&var_18)
                    int32_t temp2_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp2_1 == 1)
                        eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                        var_18 = &data_801800
            
            int32_t var_8_10 = 0x10
            
            if (data_cf65bc != 0)
                eax_4 = var_30
                
                if (eax_4 != 0 && *eax_4 != 0)
                    eax_4 = sub_63d4e0(&var_30)
                    int32_t temp3_1 = eax_4[1]
                    eax_4[1] -= 1
                    
                    if (temp3_1 == 1)
                        eax_4 = sub_64c080(eax_4, eax_4[3] + 0x10)
                        var_30 = &data_801800
            
            int32_t var_8_11 = 0xffffffff
    
    int32_t ecx_36 = data_147df4c
    
    if (data_147abe8 != 0)
        char* result = *(data_147abe8 + 0xc)
        
        if (ecx_36 != 0)
            uint32_t edx_26 = zx.d(ecx_36.w)
            
            if (edx_26 u< *(result + 4))
                void** edi_3 = edx_26 * 0x94 + *result
                
                if (edi_3[0x24] == ecx_36 && edi_3 != 0)
                    int32_t* ecx_37 = *edi_3
                    
                    if (ecx_37[1] != 0x18)
                        sub_63b870(result, &data_801800, 
                            "assetPtr->assetType == ASSET_TYPE_FLANIM", 
                            "C:\x\ax2017\Engine\AssetUtils.cpp", 0x2ed, "FlanimGetDef")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    void** eax_29 = sub_5af880(ecx_37)
                    char* const esi_2 = &data_801800
                    var_2c = eax_29
                    var_28 = &data_801800
                    void* ecx_38 = nullptr
                    int32_t var_8_12 = 0x11
                    char* var_38_2 = 0xffffffff
                    var_30 = nullptr
                    
                    if (eax_29[2] s> 0)
                        var_18 = nullptr
                        
                        while (true)
                            char** eax_31 = *eax_29 + ecx_38
                            int32_t var_60
                            int32_t var_5c
                            void var_3c
                            
                            if (sub_6e8e40(eax_31, *eax_31, *edi_3, &var_5c, &var_60, &var_3c) != 0
                                    && edi_3[3] == var_5c && edi_3[4] == var_60)
                                sub_63d8d0(&var_28, *eax_31)
                                esi_2 = var_28
                                var_38_2 = var_30
                                break
                            
                            int32_t* edx_28 = var_2c
                            void* eax_36 = &var_30[1]
                            ecx_38 = var_18 + 0x18
                            var_30 = eax_36
                            var_18 = ecx_38
                            
                            if (eax_36 s>= edx_28[2])
                                break
                            
                            eax_29 = edx_28
                    
                    void* edx_29 = *edi_3
                    void* var_70_10 = edx_29
                    sub_6a1f50(&result_2, edx_29)
                    var_8_12.b = 0x12
                    char* const ecx_44 = &data_801800
                    int32_t* result_6 = result_2
                    int32_t* result_12 = &data_801800
                    
                    if (result_6 != 0)
                        result_12 = result_6
                    
                    if (esi_2 != 0)
                        ecx_44 = esi_2
                    
                    int32_t var_74_7 = var_2c[2]
                    void* var_78_4 = &var_38_2[1]
                    char* const var_7c_9 = ecx_44
                    int32_t* result_13 = result_12
                    int32_t edx_30 = sub_63df30(&result_3, "%s -- action %s (%d of %d)")
                    var_8_12.b = 0x13
                    char* result_10 = &data_801800
                    int32_t* result_7 = result_3
                    
                    if (result_7 != 0)
                        result_10 = result_7
                    
                    int32_t var_74_8 = 1
                    sub_6b3f10(result_7, edx_30, result_10, data_1a9a3fc, 0xffffffff, 1, 1f)
                    sub_6e69b0(&var_4c, edi_3[4], edi_3[3], edi_3[1], &var_4c)
                    
                    if (*(edi_3 + 0x8d) == 0)
                        var_40_1 = var_44
                    
                    var_74_8.q =
                        _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(edi_3[4] - 1)) f* edi_3[5] f/ data_8c4634)
                    struct _EXCEPTION_REGISTRATION_RECORD*** var_7c_10
                    var_7c_10.q = _mm_cvtps_pd(var_40_1)
                    int32_t var_80_3 = var_4c
                    char* result_1
                    int32_t edx_32 = sub_63df30(&result_1, "Frame %d %0.3f FPS %0.1f")
                    var_8_12.b = 0x14
                    char* const result_11 = &data_801800
                    char* result_8 = result_1
                    
                    if (result_8 != 0)
                        result_11 = result_8
                    
                    result =
                        sub_6b3f10(result_8, edx_32, result_11, data_1a9a3fc, 0xffffffff, 1, 1f)
                    var_8_12.b = 0x15
                    
                    if (data_cf65bc != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp8_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp8_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_1 = &data_801800
                    
                    var_8_12.b = 0x16
                    
                    if (data_cf65bc != 0)
                        result = result_3
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_3)
                            int32_t temp9_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp9_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_3 = &data_801800
                    
                    var_8_12.b = 0x17
                    
                    if (data_cf65bc != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_2)
                            int32_t temp10_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp10_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_2 = &data_801800
                    
                    int32_t var_8_13 = 0x18
                    
                    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                        result = sub_63d4e0(&var_28)
                        int32_t temp11_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp11_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    int32_t var_8_14 = 0xffffffff
        
        if (data_147df8c == 1)
            result = data_147b06c
            *(result + 0x2dc) = 0
            __builtin_memcpy(&result[0x124], 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x
                    00", 
                0x41)
            sub_649d30()
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result

sub_63b870(eax_4, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

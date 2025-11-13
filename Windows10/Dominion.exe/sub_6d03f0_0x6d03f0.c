// 函数: sub_6d03f0
// 地址: 0x6d03f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770c89
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg3
int32_t* var_b8 = esi
int32_t* ecx = *esi
int32_t* result = arg4
int32_t* result_2 = result

if (ecx != 0)
    char const* const ecx_1
    
    if (ecx[1] != 0x20)
        char const* const var_164_1 = "FabDefGet"
        int32_t var_168_1 = 0xeb
        ecx_1 = "ptr->assetType == ASSET_TYPE_FAB"
    label_6d0b6d:
        char const* const var_16c_6 = "C:\x\ax2017\Engine\FabDef.cpp"
        goto label_6d0b77
    
    int32_t* edx = sub_5af880(ecx)
    result = nullptr
    int32_t* var_c4_1 = edx
    int32_t* result_1 = nullptr
    
    if (edx[2] s> 0)
        int32_t ecx_2 = 0
        int32_t var_b4_1 = 0
        
        while (true)
            int32_t* edi_1 = *edx + ecx_2
            void* esi_1 = sub_6cde00(esi, result)
            int32_t edx_2 = *(esi_1 + 0x5c)
            void* eax_4
            
            if (*(esi_1 + 0x64) s<= edx_2)
                eax_4.b = edi_1[0xe].b
            else
                eax_4.b = *(esi_1 + 0x68)
            
            if (eax_4.b == 0)
                if (arg2 == 0)
                label_6d0501:
                    *(esi_1 + 8) = *(var_b8 + 8)
                    *(esi_1 + 0x18) = *(var_b8 + 0x18)
                    *(esi_1 + 0x28) = *(var_b8 + 0x28)
                    *(esi_1 + 0x38) = *(var_b8 + 0x38)
                    *(esi_1 + 0x48) = *(var_b8 + 0x48)
                    *(esi_1 + 0x58) = var_b8[0x16]
                    int32_t eax_10
                    
                    if (*(esi_1 + 0x4c0) s> edx_2)
                        eax_10 = *(esi_1 + 0x4c4)
                    
                    if (*(esi_1 + 0x4c0) s<= edx_2 || eax_10 == 0)
                        result = *edi_1
                        
                        if (result u> 8)
                            char const* const var_164_21 = "FabDraw"
                            int32_t var_168_13 = 0x5e9
                            ecx_1 = "Halt"
                            goto label_6d0b6d
                        
                        float var_16c
                        uint128_t var_f4
                        int128_t var_7c
                        int128_t var_5c
                        int128_t var_4c
                        int64_t var_3c
                        int128_t var_34
                        
                        switch (result)
                            case 1
                                int32_t* eax_11 = edi_1[0x10]
                                
                                if (eax_11 != 0)
                                    float var_a4
                                    float* eax_13 = sub_6cd460(&var_a4, esi_1, edi_1, &var_a4)
                                    var_5c = *eax_13
                                    var_4c = *(eax_13 + 0x10)
                                    var_3c = *(eax_13 + 0x20)
                                    int128_t* eax_15 =
                                        sub_6ce390(&var_7c, &var_5c, esi_1 + 8, &var_7c)
                                    var_34 = *eax_15
                                    int128_t var_24_1 = eax_15[1]
                                    int32_t eax_16 = sub_64b360((*(edi_1 + 0x50)).d, var_16c)
                                    sub_6830d0(&var_34)
                                    
                                    if (data_1a9a308 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                                        int32_t* var_164_4 = &data_1a9a308
                                        sub_75970e(&data_1a9a308)
                                        
                                        if (data_1a9a308 == 0xffffffff)
                                            int32_t var_8_1 = 0
                                            int32_t* var_164_5 = &data_1a9a308
                                            data_1a9a30c =
                                                sub_69f030("sys/sprite_3d_no_zread.material", 5)
                                            int32_t var_8_2 = 0xffffffff
                                            __Init_thread_footer(&data_1a9a308)
                                    
                                    *(data_147b06c + 0x2dc) = data_1a9a30c
                                    float var_124
                                    float* eax_22 = sub_6cd3d0(&var_124, esi_1, edi_1, &var_124)
                                    int32_t eax_23 = eax_22[2]
                                    int32_t var_fc = (*eax_22).d
                                    int32_t var_f8_1 = eax_23
                                    float var_134[0x4]
                                    float* eax_25 =
                                        sub_5af7f0(&var_134, &var_fc, &data_7ffb14, &var_134)
                                    var_16c = 0f
                                    int32_t var_104 = eax_16
                                    int32_t var_100_1 = 0
                                    int128_t* const var_174_1 = &data_7ff520
                                    var_f4 = *eax_25
                                    sub_682a60(&var_104, &var_f4, eax_11, &data_7ff520, &var_104, 
                                        nullptr)
                                    void* eax_27 = data_147b06c
                                    *(eax_27 + 0x2dc) = 0
                                    __builtin_memcpy(eax_27 + 0x124, 
                                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                    "3f\x00", 
                                        0x41)
                                    sub_649d30()
                            case 2
                                sub_6ce9a0(edi_1, esi_1)
                            case 3
                                sub_6ce400(edi_1, esi_1)
                            case 4
                                int32_t esi_4
                                
                                if (data_147aba1 != 0)
                                    esi_4 = data_cf6b14
                                    data_cf6b14 = 0x3e7
                                    void* var_164_16 = esi_1 + 8
                                    result = sub_64aaa0(edi_1[0x10])
                                
                                if (data_147aba1 == 0 || data_147aba1 == 0)
                                    char const* const var_164_20 = "Draw3DLayer"
                                    int32_t var_168_12 = 0x32c
                                    char const* const var_16c_5 = "C:\x\ax2017\Engine\Draw3d.cpp"
                                    ecx_1 = "gDraw3DData.submittingRenderItems"
                                    break
                                
                                data_cf6b14 = esi_4
                            case 5
                                sub_6cf5a0(result, esi_1, edi_1, arg2, result_2)
                            case 6
                                sub_6cf760(result, esi_1, edi_1, result_2)
                            case 7
                                if (*(data_cf65b8 + 0x39) != 0)
                                    int32_t eax_29
                                    uint128_t xmm0_15
                                    int128_t xmm1_2
                                    
                                    if (*(esi_1 + 0x480) s<= edx_2)
                                        xmm0_15 = *(edi_1 + 0x10)
                                        eax_29 = edi_1[0xc]
                                        xmm1_2 = *(edi_1 + 0x20)
                                    else
                                        xmm0_15 = *(esi_1 + 0x484)
                                        eax_29 = *(esi_1 + 0x4a4)
                                        xmm1_2 = *(esi_1 + 0x494)
                                    
                                    var_3c:4.d = eax_29
                                    var_f4 = xmm0_15
                                    var_5c = xmm0_15
                                    var_4c = xmm1_2
                                    void var_144
                                    int128_t* eax_31 =
                                        sub_4eb2f0(&var_144, edx_2, &var_4c, &var_144)
                                    float var_e4 = xmm1_2:8.d
                                    int128_t var_e0_1 = *eax_31
                                    uint128_t xmm0_18 = var_f4
                                    int128_t var_d4_1
                                    var_d4_1:4.q = xmm0_18
                                    var_d4_1:0xc.d = _mm_bsrli_si128(xmm0_18, 8)
                                    int128_t var_9c = var_e4.o
                                    int128_t var_8c_1 = var_d4_1
                                    sub_4eb600(esi_1 + 0x3c, &var_9c, &var_e4, esi_1 + 0x3c)
                                    var_7c = var_e4.o
                                    int128_t var_6c_1 = var_d4_1
                                    sub_6830d0(&var_7c)
                                    void* eax_33 = data_147b06c
                                    int32_t var_10c = 0x3f000000
                                    int32_t var_108_1 = 0x3f000000
                                    *(eax_33 + 0x2dc) = 0
                                    void var_154
                                    void* var_16c_1 = &var_154
                                    uint128_t xmm0_24 =
                                        *sub_5af7f0(&var_154, &var_10c, &data_7ffb14)
                                    void** ThreadLocalStoragePointer =
                                        fsbase->ThreadLocalStoragePointer
                                    var_f4 = xmm0_24
                                    void* esi_3 = *ThreadLocalStoragePointer
                                    int32_t eax_36 = data_1a9a328
                                    
                                    if (eax_36 s> *(esi_3 + 8))
                                        int32_t* var_164_8 = &data_1a9a328
                                        eax_36 = sub_75970e(&data_1a9a328)
                                        
                                        if (data_1a9a328 == 0xffffffff)
                                            int32_t var_8_3 = 1
                                            int32_t* var_164_9 = &data_1a9a328
                                            data_1a9a32c =
                                                sub_69f030("sys/editor/camera.texture", 3)
                                            int32_t var_8_4 = 0xffffffff
                                            eax_36 = __Init_thread_footer(&data_1a9a328)
                                    
                                    int32_t var_164_10 = 0
                                    int32_t* var_168_6 = &data_bf23ac
                                    int128_t* const var_16c_2 = &data_7ff520
                                    sub_682a60(eax_36, &var_f4, data_1a9a32c)
                                    void* eax_38 = data_147b06c
                                    *(eax_38 + 0x2dc) = 0
                                    __builtin_memcpy(eax_38 + 0x124, 
                                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                    "3f\x00", 
                                        0x41)
                                    sub_649d30()
                                    result = data_1a9a330
                                    
                                    if (result s> *(esi_3 + 8))
                                        int32_t* var_164_11 = &data_1a9a330
                                        result = sub_75970e(&data_1a9a330)
                                        
                                        if (data_1a9a330 == 0xffffffff)
                                            int32_t var_8_5 = 2
                                            int32_t* var_164_12 = &data_1a9a330
                                            data_1a9a334 =
                                                sub_69f030("sys/editor/arrow_widget.structure", 2)
                                            int32_t var_8_6 = 0xffffffff
                                            result = __Init_thread_footer(&data_1a9a330)
                                    
                                    if (data_147aba1 != 0)
                                        int32_t ecx_16 = data_1a9a334
                                        data_cf6a70 = data_893570
                                        int32_t var_164_13 = 0
                                        int128_t xmm0_26 = var_e4.o
                                        int32_t var_168_7 = 0
                                        var_16c = 0f
                                        var_34 = xmm0_26
                                        int128_t var_24_2 = var_d4_1
                                        var_34.d = fconvert.s(fconvert.d(xmm0_26) * 0.5)
                                        result = sub_648920(result, &var_34, ecx_16)
                                    
                                    if (data_147aba1 == 0 || data_147aba1 == 0)
                                        char const* const var_164_18 = "Draw3DSetMaterialColor"
                                        int32_t var_168_10 = 0x304
                                        char const* const var_16c_3 =
                                            "C:\x\ax2017\Engine\Draw3d.cpp"
                                        ecx_1 = "gDraw3DData.submittingRenderItems"
                                        break
                                    
                                    data_cf6a70 = data_7fefb0
                            case 8
                                void* ecx_18 = data_147abe8
                                result = *(esi_1 + 0x4b8)
                                
                                if (ecx_18 == 0)
                                    char const* const var_164_19 = "GetGameData"
                                    int32_t var_168_11 = 0x45
                                    char const* const var_16c_4 = "C:\x\ax2017\Engine\Game.h"
                                    ecx_1 = "gpGameData"
                                    break
                                
                                void* edx_14 = *(ecx_18 + 0x10)
                                
                                if (result != 0)
                                    uint32_t ecx_19 = zx.d(result.w)
                                    
                                    if (ecx_19 u< *(edx_14 + 4))
                                        void* ecx_21 = ecx_19 * 0x7c + *edx_14
                                        
                                        if (*(ecx_21 + 0x78) == result && ecx_21 != 0)
                                            sub_6c24d0(ecx_21, &data_bf21e8)
                    else
                        eax_10(edi_1, esi_1, eax_2)
                else if (arg2 != 1)
                    result = arg2 - 2
                    
                    if (arg2 != 2)
                        char const* const var_164_17 = "SatisfiesDrawStyle"
                        int32_t var_168_9 = 0x4e4
                        ecx_1 = "Halt"
                        goto label_6d0b6d
                    
                    if (*(edi_1 + 0x3a) == result.b)
                        goto label_6d0501
                else if (*(edi_1 + 0x3a) == 0 && *(edi_1 + 0x3b) == 0
                        && (*edi_1 != 2 || edi_1[0xf].b != 0))
                    goto label_6d0501
            
            edx = var_c4_1
            result = result_1 + 1
            ecx_2 = var_b4_1 + 0xe0
            result_1 = result
            var_b4_1 = ecx_2
            
            if (result s>= edx[2])
                goto label_6d0afb
            
            esi = var_b8
        
    label_6d0b77:
        sub_63b870(result, &data_801800, ecx_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

label_6d0afb:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

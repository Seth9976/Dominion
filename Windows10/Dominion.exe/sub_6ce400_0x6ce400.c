// 函数: sub_6ce400
// 地址: 0x6ce400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770b8d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_11c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_7c = esi
int32_t* ecx = *(esi + 0x60)
char const* const var_128_1
int32_t var_124
char const* const var_120
char* ecx_1

if (ecx[1] == 2)
    void* eax_3
    int32_t edx
    eax_3, edx = sub_5af880(ecx)
    int32_t eax_4
    uint128_t xmm0_1
    uint128_t xmm1_1
    
    if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
        xmm0_1 = *(esi + 0x10)
        eax_4 = *(esi + 0x30)
        xmm1_1 = *(esi + 0x20)
    else
        xmm0_1 = *(arg2 + 0x484)
        eax_4 = *(arg2 + 0x4a4)
        xmm1_1 = *(arg2 + 0x494)
    
    int32_t var_38_1 = eax_4
    uint128_t var_58 = xmm0_1
    uint128_t var_48_1 = xmm1_1
    uint128_t var_24
    int128_t var_ac_1 = *sub_4eb2f0(&var_24, edx, &var_58:0xc, &var_24)
    uint128_t var_a0_1
    var_a0_1:4.q = xmm0_1
    var_a0_1:0xc.d = _mm_bsrli_si128(xmm0_1, 8)
    int128_t var_34 = xmm1_1:8.d.o
    var_24 = var_a0_1
    int128_t var_d0
    sub_4eb600(arg2 + 0x3c, &var_34, &var_d0, arg2 + 0x3c)
    var_34 = var_d0
    var_24 = xmm0_1
    result = sub_64b0d0(arg2 + 0x40)
    
    if (result.b != 0)
        result = sub_64b0d0(&var_34:4)
        
        if (result.b != 0)
            int128_t xmm1_2 = *(esi + 0x70)
            xmm1_2 f- 1f
            float var_c0_2 = xmm1_2.d
            result:1.b = (xmm1_2 f== 1f ? 1 : 0) << 6 | (is_unordered.d(xmm1_2, 1f) ? 1 : 0) << 2
                | (xmm1_2 f< 1f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                float xmm2_1 = xmm1_2:4.d
                xmm2_1 - 1f
                result:1.b = (xmm2_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm2_1, 1f) ? 1 : 0) << 2
                    | (xmm2_1 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (not(p_4))
                    float xmm2_2 = xmm1_2:8.d
                    xmm2_2 - 1f
                    result:1.b = (xmm2_2 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_2, 1f) ? 1 : 0) << 2 | (xmm2_2 < 1f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_6))
                        float xmm2_3 = xmm1_2:0xc.d
                        xmm2_3 - 1f
                        result:1.b = (xmm2_3 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(xmm2_3, 1f) ? 1 : 0) << 2 | (xmm2_3 < 1f ? 1 : 0)
                        bool p_8 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_8))
                            goto label_6ce5e0
            
            if (data_147aba1 == 0)
            label_6ce96b:
                var_120 = "Draw3DSetMaterialColor"
                var_124 = 0x304
                ecx_1 = "gDraw3DData.submittingRenderItems"
                var_128_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
            else
                data_cf6a70 = xmm1_2
            label_6ce5e0:
                result = *(esi + 0x68)
                uint32_t result_4 = 0
                
                if (*result == 0)
                label_6ce703:
                    int32_t* ecx_12 = *(esi + 0x60)
                    
                    if (ecx_12[1] == 2)
                        void* eax_15 = sub_5af880(ecx_12)
                        int32_t esi_3 = 0
                        void* var_80_1 = eax_15
                        int32_t* edx_4
                        
                        if (*(eax_15 + 0x58) s> 0)
                            int32_t edi_4 = 0
                            
                            while (_stricmp(*(*(eax_15 + 0x50) + edi_4), *(var_7c + 0x80)) != 0)
                                eax_15 = var_80_1
                                esi_3 += 1
                                edi_4 += 0x18
                                
                                if (esi_3 s>= *(eax_15 + 0x58))
                                    goto label_6ce78e
                            
                            if (esi_3 != 0xffffffff)
                                edx_4 = *(eax_3 + 0x50) + ((esi_3 * 3 + 1) << 3)
                                goto label_6ce79b
                        
                    label_6ce78e:
                        
                        if (*(eax_3 + 0x48) == 0)
                        label_6ce88b:
                            
                            if (data_1a9a2f8 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                                sub_75970e(&data_1a9a2f8)
                                
                                if (data_1a9a2f8 == 0xffffffff)
                                    int32_t var_8_3 = 1
                                    data_1a9a2fc = sub_69f030("sys/draw3d.material", 5)
                                    int32_t var_8_4 = 0xffffffff
                                    __Init_thread_footer(&data_1a9a2f8)
                            
                            int32_t var_124_5 = 0
                            sub_648920(var_7c, &var_34, *(var_7c + 0x60), data_1a9a2fc, 0, result_4)
                        else
                            edx_4 = eax_3 + 0x40
                        label_6ce79b:
                            
                            if (edx_4 == 0)
                                goto label_6ce88b
                            
                            if (data_cafe88 != 0)
                                if (data_1a9a2f0 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                                    sub_75970e(&data_1a9a2f0)
                                    
                                    if (data_1a9a2f0 == 0xffffffff)
                                        int32_t var_8_1 = 0
                                        data_1a9a2f4 = sub_69f030("sys/draw3d.material", 5)
                                        int32_t var_8_2 = 0xffffffff
                                        __Init_thread_footer(&data_1a9a2f0)
                                
                                int32_t var_124_4 = 0
                                sub_648920(var_7c, &var_34, *(var_7c + 0x60), data_1a9a2f4, 0, 
                                    result_4)
                            else
                                float var_110[0x10]
                                float* eax_20 = sub_64b1b0(&var_110, edx_4, &var_34, &var_110)
                                int128_t* var_124_3 = &var_34
                                int128_t var_74 = *eax_20
                                int128_t var_64_1 = *(eax_20 + 0x10)
                                var_58 = *(eax_20 + 0x20)
                                var_48_1 = *(eax_20 + 0x30)
                                sub_648580(var_7c, &var_74, *(var_7c + 0x60), edx_4, result_4)
                        
                        var_c0_2 - 1f
                        result:1.b = (var_c0_2 == 1f ? 1 : 0) << 6
                            | (is_unordered.d(var_c0_2, 1f) ? 1 : 0) << 2 | (var_c0_2 < 1f ? 1 : 0)
                        bool p_10 = unimplemented  {test ah, 0x44}
                        
                        if (not(p_10))
                            float xmm1_4 = xmm1_2:4.d
                            xmm1_4 - 1f
                            result:1.b = (xmm1_4 == 1f ? 1 : 0) << 6
                                | (is_unordered.d(xmm1_4, 1f) ? 1 : 0) << 2 | (xmm1_4 < 1f ? 1 : 0)
                            bool p_12 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_12))
                                float xmm1_5 = xmm1_2:8.d
                                xmm1_5 - 1f
                                result:1.b = (xmm1_5 == 1f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm1_5, 1f) ? 1 : 0) << 2
                                    | (xmm1_5 < 1f ? 1 : 0)
                                bool p_14 = unimplemented  {test ah, 0x44}
                                
                                if (not(p_14))
                                    float xmm1_6 = xmm1_2:0xc.d
                                    xmm1_6 - 1f
                                    result:1.b = (xmm1_6 == 1f ? 1 : 0) << 6
                                        | (is_unordered.d(xmm1_6, 1f) ? 1 : 0) << 2
                                        | (xmm1_6 < 1f ? 1 : 0)
                                    bool p_16 = unimplemented  {test ah, 0x44}
                                    
                                    if (not(p_16))
                                        goto label_6ce953
                        
                        if (data_147aba1 == 0)
                            goto label_6ce96b
                        
                        data_cf6a70 = data_8935b0
                    label_6ce953:
                        fsbase->NtTib.ExceptionList = ExceptionList
                        CookieCheckFunction(result)
                        return result
                    
                    var_120 = "StructureGetDef"
                    var_124 = 0x559
                    var_128_1 = "C:\x\ax2017\Engine\Structure.cpp"
                    ecx_1 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                else
                    int32_t ecx_7 = *(arg2 + 0x4bc)
                    
                    if (ecx_7 != 0)
                    label_6ce6d0:
                        result = sub_6db490(ecx_7)
                        struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result
                        result_4 = result_3
                        int32_t* ecx_10 = result_3[0xb]
                        
                        if (ecx_10 != 0)
                            result = sub_6dee00(ecx_10)
                        
                        int32_t* i = result_3[0xe]
                        
                        while (i != 0)
                            int32_t* i_1 = i
                            i = i[4]
                            result = sub_6da1f0(result_3, i_1)
                        
                        esi = var_7c
                        goto label_6ce703
                    
                    int32_t* ecx_8 = *(esi + 0x60)
                    
                    if (ecx_8 != 0)
                        char** eax_8 = sub_6da310(ecx_8)
                        int32_t* ecx_9 = *(esi + 0x60)
                        result = *(esi + 0x68)
                        
                        if (ecx_9[1] == 2)
                            int32_t esi_1 = 0
                            void* edi_1 = *sub_5af880(ecx_9)
                            int32_t eax_10 = *(edi_1 + 0x60)
                            int32_t eax_13
                            
                            if (eax_10 s> 0)
                                int32_t* edi_3 = *(edi_1 + 0x68) + 8
                                
                                while (true)
                                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                                    char* eax_11 = *edi_3
                                    
                                    while (true)
                                        char edx_2 = *eax_11
                                        char temp0_1 = *result_2
                                        bool c_5 = edx_2 u< temp0_1
                                        
                                        if (edx_2 == temp0_1)
                                            if (edx_2 == 0)
                                                eax_13 = 0
                                                break
                                            
                                            edx_2 = eax_11[1]
                                            char temp1_1 = *(result_2 + 1)
                                            c_5 = edx_2 u< temp1_1
                                            
                                            if (edx_2 == temp1_1)
                                                eax_11 = &eax_11[2]
                                                result_2 += 2
                                                
                                                if (edx_2 != 0)
                                                    continue
                                                
                                                eax_13 = 0
                                                break
                                        
                                        eax_13 = sbb.d(eax_11, eax_11, c_5) | 1
                                        break
                                    
                                    if (eax_13 == 0)
                                        break
                                    
                                    esi_1 += 1
                                    edi_3 = &edi_3[6]
                                    
                                    if (esi_1 s>= eax_10)
                                        goto label_6ce6b1
                            
                            char** esi_2
                            
                            if (eax_10 s<= 0 || esi_1 == 0xffffffff)
                            label_6ce6b1:
                                struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
                                sub_63b5f0("can't find anim clip: %s")
                                esi_2 = eax_8
                            else
                                esi_2 = eax_8
                                sub_6def90(eax_13, ecx_9, esi_2, esi_1)
                            
                            ecx_7 = esi_2[0x1a]
                            *(arg2 + 0x4bc) = ecx_7
                            goto label_6ce6d0
                        
                        var_120 = "StructureGetDef"
                        var_124 = 0x559
                        var_128_1 = "C:\x\ax2017\Engine\Structure.cpp"
                        ecx_1 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                    else
                        var_120 = "FabModelDraw"
                        var_124 = 0x28e
                        var_128_1 = "C:\x\ax2017\Engine\FabDef.cpp"
                        ecx_1 = "el.model != NULL"
        else
            var_120 = "FabModelDraw"
            var_124 = 0x281
            var_128_1 = "C:\x\ax2017\Engine\FabDef.cpp"
            ecx_1 = "QuatIsValid(transform.r)"
    else
        var_120 = "FabModelDraw"
        var_124 = 0x280
        var_128_1 = "C:\x\ax2017\Engine\FabDef.cpp"
        ecx_1 = "QuatIsValid(state.transform.t.r)"
else
    var_120 = "StructureGetDef"
    var_124 = 0x559
    var_128_1 = "C:\x\ax2017\Engine\Structure.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"

sub_63b870(result, &data_801800, ecx_1, var_128_1, var_124, var_120)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

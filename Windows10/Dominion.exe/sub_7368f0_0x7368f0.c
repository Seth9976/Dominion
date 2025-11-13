// 函数: sub_7368f0
// 地址: 0x7368f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772c95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_144 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_80
__builtin_memset(&var_80, 0, 0x24)
int32_t var_14_1 = 0
sub_7366c0(arg2, &var_80)
int32_t* i_2 = nullptr
int32_t* i_9 = nullptr
int32_t* i_4 = nullptr
int32_t var_8c = 0
int32_t var_88 = 0
int32_t* eax_4 = arg1
var_14_1.b = 1
char const* const var_150
int32_t var_14c
char const* const var_148_1
char* ecx_1

if (eax_4[1] == 0x12)
    void* eax_5 = sub_5af880(eax_4)
    void* var_84_1 = eax_5
    int32_t var_98_1 = 0
    int128_t var_70
    uint32_t result
    
    if (*(eax_5 + 0x1c) s<= 0)
    label_736e93:
        int32_t* i = i_2
        
        while (i != 0)
            int32_t* i_6 = i
            i = i[0x10]
            sub_7363f0(i_6, &var_80)
        
        void* eax_44 = var_84_1
        int32_t i_1 = 0
        
        if (*(eax_44 + 0x1c) s> 0)
            int32_t ecx_23 = 0
            
            do
                void* eax_42 = *(eax_44 + 0x20)
                void* eax_43 = eax_42 + ecx_23
                
                if (eax_42 != neg.d(ecx_23))
                    int32_t var_3c
                    *(eax_43 + 8) = var_3c
                    int32_t var_38
                    *(eax_43 + 0x10) = var_38
                
                eax_44 = var_84_1
                i_1 += 1
                ecx_23 += 0x30
            while (i_1 s< *(eax_44 + 0x1c))
            
            i_2 = i_4
        
        sub_7366c0(&var_80, arg2)
        sub_6960b0(arg1)
        var_14_1.b = 6
        
        while (i_2 != 0)
            int32_t* i_7 = i_2
            i_2 = i_2[0x10]
            sub_64c080(i_7, 0x48)
        
        int32_t var_14_5 = 7
        sub_73a890(&var_70:8)
        int32_t var_14_6 = 8
        sub_7078c0(&var_80:0xc)
        int32_t var_14_7 = 9
        sub_73a850(&var_80)
        result = 2
    label_736f48:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    int32_t edx_1 = 0
    int32_t var_a4_1 = 0
    
    while (true)
        int32_t* esi_1 = *(eax_5 + 0x20) + edx_1
        int32_t* var_f4_1 = esi_1
        int32_t var_10c
        int32_t var_50
        eax_4 = sub_736270(eax_5, &var_10c, *esi_1, var_50)
        int32_t* var_9c_1 = nullptr
        
        if (esi_1[6] s> 0)
            int32_t edx_3 = 0
            int32_t var_104
            int32_t xmm0_2 = _mm_cvtepi32_ps(zx.o(var_104))
            int32_t var_a0_1 = 0
            
            while (true)
                void* ecx_5 = esi_1[8] + edx_3
                float xmm1_1 = *(ecx_5 + 0x10)
                
                if (xmm0_2 f< xmm1_1)
                    var_148_1 = "AtlasMakerPlaceAssetFont"
                    var_14c = 0x3ab
                    ecx_1 = "pGlyph->rectGlyph.y1 <= fontImageSpec.height"
                else
                    int32_t* var_e8 = esi_1
                    int32_t var_e4_1 = var_98_1
                    void* var_e0_1 = ecx_5
                    int64_t var_c4_1
                    __builtin_memset(&var_c4_1, 0, 0x1c)
                    float xmm1_2
                    
                    if (0f <= xmm1_1)
                        xmm1_2 = xmm1_1 + 0.5f
                    else
                        xmm1_2 = xmm1_1 - 0.5f
                    
                    float xmm0_3 = *(ecx_5 + 0xc)
                    float xmm0_4
                    
                    if (0 f<= xmm0_3)
                        xmm0_4 = xmm0_3 + 0.5f
                    else
                        xmm0_4 = xmm0_3 - 0.5f
                    
                    float xmm0_5 = *(ecx_5 + 8)
                    float xmm0_6
                    
                    if (0 f<= xmm0_5)
                        xmm0_6 = xmm0_5 + 0.5f
                    else
                        xmm0_6 = xmm0_5 - 0.5f
                    
                    int32_t edx_4 = int.d(xmm0_6)
                    float xmm0_7 = *(ecx_5 + 4)
                    float xmm0_8
                    
                    if (0 f<= xmm0_7)
                        xmm0_8 = xmm0_7 + 0.5f
                    else
                        xmm0_8 = xmm0_7 - 0.5f
                    
                    int32_t eax_7 = int.d(xmm0_8)
                    float xmm0_9 = *(ecx_5 + 0x14)
                    float xmm0_10
                    
                    if (0f <= xmm0_9)
                        xmm0_10 = xmm0_9 + 0.5f
                    else
                        xmm0_10 = xmm0_9 - 0.5f
                    
                    float xmm0_11 = *(ecx_5 + 0x18)
                    int32_t var_cc_1 = int.d(xmm0_10)
                    float xmm0_12
                    
                    if (0f <= xmm0_11)
                        xmm0_12 = xmm0_11 + 0.5f
                    else
                        xmm0_12 = xmm0_11 - 0.5f
                    
                    int32_t eax_10 = int.d(xmm0_12)
                    sub_736550(&var_e8)
                    int32_t eax_12 = int.d(xmm0_4) - eax_7
                    int32_t esi_4 = int.d(xmm1_2) - edx_4
                    int64_t var_bc
                    int32_t* i_8
                    
                    if (eax_12 == 0 || esi_4 == 0)
                        int32_t var_dc_1
                        var_dc_1.o = zx.o(0)
                        int32_t* eax_35 = sub_64bfd0(0x48)
                        eax_35[3] += 1
                        
                        if (*eax_35 == 0)
                            sub_64be70(eax_35)
                        
                        i_8 = *eax_35
                        int128_t xmm0_18 = var_e8.o
                        *eax_35 = *i_8
                        *i_8 = xmm0_18
                        *(i_8 + 0x10) = edx_4.o
                        *(i_8 + 0x20) = eax_10.o
                        *(i_8 + 0x30) = var_bc:4.o
                        i_8[0x10] = 0
                        i_8[0x11] = i_9
                        
                        if (i_9 == 0)
                        label_736da7:
                            i_4 = i_8
                            goto label_736db0
                        
                        i_9[0x10] = i_8
                    label_736db0:
                        i_9 = i_8
                        esi_1 = var_f4_1
                        eax_4 = var_9c_1 + 1
                        var_88 += 1
                        edx_3 = var_a0_1 + 0x24
                        int32_t* i_10 = i_9
                        var_9c_1 = eax_4
                        var_a0_1 = edx_3
                        xmm0_2 = _mm_cvtepi32_ps(zx.o(var_104))
                        
                        if (eax_4 s>= esi_1[6])
                            goto label_736de8
                        
                        continue
                    else
                        int32_t var_130_1 = eax_12
                        int32_t var_12c_1 = esi_4
                        int32_t var_11c_1 = eax_12
                        int32_t var_118_1 = esi_4
                        int32_t var_100
                        int32_t var_fc
                        int32_t edx_7 = eax_7 * sub_6a9450(var_fc) + var_100 * edx_4
                        int32_t var_128_1 = var_100
                        int32_t var_124_1 = var_fc
                        int32_t var_134 = var_10c + edx_7
                        int32_t var_110_1 = var_50
                        int32_t eax_21 = sub_6a9570(eax_12, var_50)
                        int32_t var_114_1 = eax_21
                        int32_t eax_23 = sub_687730(sub_6a9660(eax_21, esi_4, eax_12, var_50))
                        int32_t var_120 = eax_23
                        sub_6a9de0(&var_134, &var_120)
                        var_bc.d = eax_12
                        int64_t var_b4_1
                        var_b4_1.d = eax_23
                        var_bc:4.d = esi_4
                        eax_4 = sub_735eb0(&var_bc, &var_80)
                        
                        if (eax_4 == 1)
                            var_14_1.b = 2
                            int32_t* i_3 = i_4
                            
                            while (i_3 != 0)
                                int32_t* i_5 = i_3
                                i_3 = i_3[0x10]
                                sub_64c080(i_5, 0x48)
                            
                            int32_t var_14_2 = 3
                            sub_73a890(&var_70:8)
                            int32_t var_14_3 = 4
                            sub_7078c0(&var_80:0xc)
                            int32_t var_14_4 = 5
                            sub_73a850(&var_80)
                            result = 1
                            goto label_736f48
                        
                        if (eax_4 == 2)
                            int32_t* eax_26 = sub_64bfd0(eax_4 + 0x1a)
                            eax_26[3] += 1
                            
                            if (*eax_26 == 0)
                                sub_64be70(eax_26)
                            
                            int32_t* ecx_16 = *eax_26
                            int128_t xmm0_13 = var_bc.o
                            *eax_26 = *ecx_16
                            *ecx_16 = xmm0_13
                            int32_t var_ac
                            ecx_16[4] = var_ac
                            void* eax_29 = var_70:0xc.d
                            ecx_16[5] = 0
                            ecx_16[6] = eax_29
                            int32_t var_60_1
                            
                            if (eax_29 == 0)
                                var_60_1 += 1
                                var_70:8.d = ecx_16
                                var_70:0xc.d = ecx_16
                            else
                                var_60_1 += 1
                                *(eax_29 + 0x14) = ecx_16
                                var_70:0xc.d = ecx_16
                        label_736cd0:
                            var_c4_1.d = var_b4_1:4.d
                            var_c4_1:4.d = var_ac
                            int32_t* eax_33 = sub_64bfd0(0x48)
                            eax_33[3] += 1
                            
                            if (*eax_33 == 0)
                                sub_64be70(eax_33)
                            
                            i_8 = *eax_33
                            int128_t xmm0_14 = var_e8.o
                            *eax_33 = *i_8
                            *i_8 = xmm0_14
                            *(i_8 + 0x10) = edx_4.o
                            *(i_8 + 0x20) = eax_10.o
                            *(i_8 + 0x30) = var_bc:4.o
                            i_8[0x10] = 0
                            i_8[0x11] = i_9
                            
                            if (i_9 == 0)
                                goto label_736da7
                            
                            i_9[0x10] = i_8
                            goto label_736db0
                        
                        if (eax_4 == 0)
                            int32_t eax_30 = var_b4_1.d
                            
                            if (eax_30 != 0)
                                _aligned_free(eax_30)
                            
                            var_b4_1.d = 0
                            goto label_736cd0
                        
                        var_148_1 = "AtlasMakerPlaceAssetFont"
                        var_14c = 0x3d6
                        ecx_1 = "Halt"
                
                var_150 = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
                break
            
            break
        
    label_736de8:
        int32_t eax_39 = var_10c
        
        if (eax_39 != 0)
            _aligned_free(eax_39)
        
        int32_t eax_41 = var_98_1 + 1
        edx_1 = var_a4_1 + 0x30
        var_98_1 = eax_41
        var_a4_1 = edx_1
        
        if (eax_41 s>= *(var_84_1 + 0x1c))
            i_2 = i_4
            goto label_736e93
        
        eax_5 = var_84_1
else
    var_148_1 = "FontGetDef"
    var_14c = 0x2e6
    var_150 = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_FONT"

sub_63b870(eax_4, &data_801800, ecx_1, var_150, var_14c, var_148_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

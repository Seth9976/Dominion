// 函数: sub_738720
// 地址: 0x738720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_772dee
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_d4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_24 = arg4
int32_t var_14_1 = 0
char* const result_9 = &data_801800
int32_t esi = *arg3
char* result_3
char* result_4 = result_3
uint32_t result_8 = arg2

if (result_4 != 0)
    result_9 = result_4

int32_t var_dc = esi
char* const result_12 = result_9
uint32_t result_1
sub_63df30(&result_1, "%s-%s-%d.png")
var_14_1.b = 1
char* const result_10 = &data_801800
char* result_5 = result_3
result_8 = arg2

if (result_5 != 0)
    result_10 = result_5

int32_t var_dc_1 = esi
char* const result_13 = result_10
char* result_2
sub_63df30(&result_2, "%s-%s-%d.texture")
int128_t var_80
__builtin_memset(&var_80, 0, 0x30)
var_14_1.b = 3
uint32_t result_20 = arg3[9]
int32_t edi_2 = arg3[7]
int32_t var_40 = edi_2
int32_t eax_4 = sub_6a9570(edi_2, result_20)
result_8 = result_20
uint32_t result_14 = sub_6a9660(eax_4, edi_2, edi_2, result_8)
uint32_t result_25 = result_14
uint32_t result_15 = sub_687730(result_14)
result_8 = result_14
memset(result_15, 0, result_8)
char* result_7 = result_2
char* const result_11 = &data_801800

if (result_7 != 0)
    result_11 = result_7

int32_t eax_5 = sub_69f030(result_11, 3)
void* var_a8
result_8 = &var_a8
QueryPerformanceCounter(result_8)
void* eax_6 = var_a8
uint32_t eax_8 = arg3[6]
int32_t var_34 = arg3[5]
uint32_t var_30 = eax_8
char const* const var_e0_1
int32_t var_dc_2
char const* const ecx_5

if (result_15 != 0)
    int32_t* eax_9 = sub_64bfd0(0x10)
    eax_9[3] += 1
    
    if (*eax_9 == 0)
        sub_64be70(eax_9)
    
    int32_t* ecx_7 = *eax_9
    int32_t* result_29 = result_24
    int128_t var_70
    var_70.d = ecx_7
    var_80:0xc.d = ecx_7
    *eax_9 = *ecx_7
    *ecx_7 = 0
    ecx_7[1] = 0
    ecx_7[2] = 0
    ecx_7[3] = 0
    void** ecx_8 = *result_29
    int32_t eax_12 = result_29[1] << 2
    result_8 = sub_7355e0
    var_70:4.d = 1
    int32_t var_88_1 = 0
    int32_t eax_13 = eax_12 s>> 2
    sub_73ad90(eax_13, &ecx_8[result_29[1]], ecx_8, eax_13, result_8)
    eax_8 = result_29[1]
    int32_t esi_3 = 0
    
    if (eax_8 s> 0)
        while (true)
            if (esi_3 s< eax_8)
                int32_t* edi_4 = *(*result_29 + (esi_3 << 2))
                int32_t eax_15 = edi_4[1]
                int32_t edi_6
                
                if (eax_15 != 3)
                    if (eax_15 == 0x12)
                        eax_8 = sub_7368f0(edi_4, &var_80)
                        goto label_738943
                    
                    uint32_t result_26 = edi_4[8]
                    uint32_t result_16 = &data_801800
                    
                    if (result_26 != 0)
                        result_16 = result_26
                    
                    result_8 = result_16
                    sub_63b5f0("AtlasMaker: I don't handle this asset type yet %s")
                    edi_6 = var_88_1
                else
                    eax_8 = sub_736030(edi_4, &var_80)
                label_738943:
                    
                    if (eax_8 != 2)
                        if (eax_8 == 1)
                            int32_t edx_5 = arg5[1]
                            
                            if (edx_5 s>= arg5[2])
                                result_8 = "XArray<struct XAsset *>::Append"
                                var_dc_2 = 0x96
                                var_e0_1 = "C:\x\ax2017\Engine\xArray.h"
                                ecx_5 = "mSize < mSizeReserved"
                                goto label_738d59
                            
                            *(*arg5 + (edx_5 << 2)) = edi_4
                            arg5[1] += 1
                        
                        edi_6 = var_88_1
                    else
                        edi_6 = var_88_1 + 1
                        var_88_1 = edi_6
                
                int32_t* result_17 = result_24
                esi_3 += 1
                eax_8 = result_17[1]
                
                if (esi_3 s>= eax_8)
                    if (edi_6 s<= 0)
                        break
                    
                    void* esi_4
                    int32_t edi_10
                    int64_t var_5c
                    
                    if (data_cc8ddc == 0)
                        esi_4 = 8
                        edi_10 = 8
                        
                        if (var_5c.d s> 8)
                            edi_10 = var_5c.d
                        
                        if (var_5c:4.d s> 8)
                            esi_4 = var_5c:4.d
                    else
                        int32_t ecx_14 = (var_5c.d - 1) | (var_5c.d - 1) u>> 1
                        int32_t ecx_15 = ecx_14 | ecx_14 u>> 2
                        int32_t ecx_16 = ecx_15 | ecx_15 u>> 4
                        int32_t ecx_17 = ecx_16 | ecx_16 u>> 8
                        edi_10 = (ecx_17 u>> 0x10 | ecx_17) + 1
                        int32_t ecx_20 = (var_5c:4.d - 1) | (var_5c:4.d - 1) u>> 1
                        int32_t ecx_21 = ecx_20 | ecx_20 u>> 2
                        int32_t ecx_22 = ecx_21 | ecx_21 u>> 4
                        int32_t ecx_23 = ecx_22 | ecx_22 u>> 8
                        result_17 = ecx_23 | ecx_23 u>> 0x10
                        esi_4 = result_17 + 1
                    uint32_t result_6 = result_1
                    result_8 = result_17
                    result_8 = result_6
                    
                    if (result_6 != 0 && *result_6 != 0)
                        char* eax_35 = sub_63d4e0(&result_8)
                        *(eax_35 + 4) += 1
                    
                    var_14_1.b = 4
                    char* eax_37 = *sub_6a0010(&result_24)
                    char* edx_6 = &data_801800
                    
                    if (eax_37 != 0)
                        edx_6 = eax_37
                    
                    char* result_30
                    sub_6c4050(&result_30, edx_6)
                    var_14_1.b = 7
                    
                    if (data_cf65bc != 0)
                        int32_t* result_31 = result_24
                        
                        if (result_31 != 0 && *result_31 != 0)
                            char* eax_38 = sub_63d4e0(&result_24)
                            int32_t temp0_1 = *(eax_38 + 4)
                            *(eax_38 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
                                result_24 = &data_801800
                    
                    var_14_1.b = 6
                    char* const result_34 = &data_801800
                    char* result_32 = result_30
                    
                    if (result_32 != 0)
                        result_34 = result_32
                    
                    sub_69db50(result_34)
                    char* result_27 = result_30
                    char* const result_18 = &data_801800
                    int32_t var_ac = edi_10
                    
                    if (result_27 != 0)
                        result_18 = result_27
                    
                    var_a8 = esi_4
                    uint32_t result_23 = result_20
                    int32_t var_a4 = eax_4
                    uint32_t result_22 = result_15
                    
                    if (sub_72ea50(&result_22, result_18) == 0)
                        result_8 = result_18
                        sub_63b5f0("PNGExportTexture: Failed to write %s")
                        
                        if (result_15 != 0)
                            result_8 = result_15
                            _aligned_free(result_8)
                        
                        char* result_28 = result_30
                        char* result_19 = &data_801800
                        
                        if (result_28 != 0)
                            result_19 = result_28
                        
                        result_8 = result_19
                        sub_63b5f0("AtlasMaker: failed to png write %s")
                    
                    if (result_15 != 0)
                        result_8 = result_15
                        _aligned_free(result_8)
                    
                    int32_t i_1
                    int32_t i = i_1
                    
                    if (i != 0)
                        int32_t* esi_5 = var_70:8.d
                        
                        do
                            int32_t* ecx_30 = esi_5
                            esi_5 = ecx_30[5]
                            var_70:8.d = esi_5
                            
                            if (esi_5 == 0)
                                var_70:0xc.d = 0
                            else
                                esi_5[6] = 0
                            
                            i -= 1
                            int32_t i_2 = i
                            result_22.o = *ecx_30
                            sub_64c080(ecx_30, 0x1c)
                            uint32_t result_21 = _mm_bsrli_si128(result_22.o, 8)
                            
                            if (result_21 != 0)
                                result_8 = result_21
                                _aligned_free(result_8)
                        while (i != 0)
                    
                    int32_t eax_43 = sub_69ec60(eax_5)
                    result_8 = 0
                    char* eax_44 = sub_69f4a0(eax_43, 1, eax_5, result_8.b)
                    
                    if (*(eax_5 + 4) != 3)
                        result_8 = "TextureGetDef"
                        sub_63b870(eax_44, &data_801800, 
                            "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
                            "C:\x\ax2017\Engine\Texture.h", 0x89, result_8)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    *(*sub_5af880(eax_5) + 0x30) = eax_6
                    sub_6960b0(eax_5)
                    var_14_1.b = 8
                    
                    if (data_cf65bc != 0)
                        char* result_33 = result_30
                        
                        if (result_33 != 0 && *result_33 != 0)
                            char* eax_47 = sub_63d4e0(&result_30)
                            int32_t temp1_1 = *(eax_47 + 4)
                            *(eax_47 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
                                result_30 = &data_801800
                    
                    var_14_1.b = 9
                    sub_73a890(&var_70:8)
                    var_14_1.b = 0xa
                    sub_7078c0(&var_80:0xc)
                    var_14_1.b = 0xb
                    char* result = sub_73a850(&var_80)
                    var_14_1.b = 0xc
                    
                    if (data_cf65bc != 0)
                        result = result_2
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_2)
                            int32_t temp2_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp2_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_2 = &data_801800
                    
                    var_14_1.b = 0xd
                    
                    if (data_cf65bc != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp3_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp3_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                                result_1 = &data_801800
                    
                    int32_t var_14_2 = 0xe
                    
                    if (data_cf65bc != 0)
                        result = result_3
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_3)
                            int32_t temp4_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp4_1 == 1)
                                result = sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    CookieCheckFunction(result)
                    return result
                
                if (esi_3 s>= 0)
                    result_29 = result_17
                    continue
            
            result_8 = "XArray<struct XAsset *>::GetAt"
            var_dc_2 = 0xae
            var_e0_1 = "C:\x\ax2017\Engine\xArray.h"
            ecx_5 = "index >= 0 && index < mSize"
            goto label_738d59
    
    result_8 = "AtlasMakerPlacePage"
    var_dc_2 = 0x5c4
    ecx_5 = "imagesOnPage > 0"
else
    result_8 = "AtlasMakerPlacePage"
    var_dc_2 = 0x594
    ecx_5 = "atlasMakingData.mAtlasBits"

var_e0_1 = "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp"
label_738d59:
sub_63b870(eax_8, &data_801800, ecx_5, var_e0_1, var_dc_2, result_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

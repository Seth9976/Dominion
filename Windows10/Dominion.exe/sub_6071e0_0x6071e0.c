// 函数: sub_6071e0
// 地址: 0x6071e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76acd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx = __chkstk(0x6654)
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_cf65b8
int32_t var_3220 = 0
uint128_t xmm1 = zx.o(*(eax_3 + 0x18))
int32_t xmm0_1 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
char* result_17 = _mm_cvtepi32_ps(xmm1)
int32_t var_321c = xmm0_1
char* const result_3 = result_17
int128_t var_3324 = 0.o
uint32_t eax_4 = sub_64e7a0(ecx)
sub_665db0(eax_4, &data_cadf48, eax_4, 0x3f800000, 0xffffffff, 0)
sub_4bbdb0()
void var_6664
int32_t var_4cd4[0x664]
memcpy(&var_4cd4, sub_4e49d0(ecx, &var_6664), 0x1990)
void* var_3310
void* var_3308
int32_t i_3 = sub_6062d0(&var_3310, data_ccf6f4, data_ccf6f0, &var_3310, &var_3308)
int32_t edi = *(data_be1538 + 0xbd4)
int32_t i

if (edi s>= i_3)
    i = 0
else if (edi != 0xffffffff)
    i = *(var_3310 + (edi << 2))
    
    if (i != 0)
        data_19e39f4 = i
else
    i = 0

void* eax_9 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx_7 = 0
int32_t edx_1 = *(eax_9 + 0x63dc)

if (edx_1 s<= 0)
label_60733a:
    void* eax_10 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_10 = 0
    int32_t edx_2 = *(eax_10 + 0x6ed0)
    
    if (edx_2 s> 0)
        do
            if (*(eax_10 + (ecx_10 << 2) + 0x63e0) == i)
                goto label_607362
            
            ecx_10 += 1
        while (ecx_10 s< edx_2)
else
    while (*(eax_9 + (ecx_7 << 2) + 0x58ec) != i)
        ecx_7 += 1
        
        if (ecx_7 s>= edx_1)
            goto label_60733a
    
label_607362:
    uint32_t eax_11 = sub_64e7a0(ecx)
    sub_665db0(eax_11, &data_be5908, eax_11, 0x3f800000, 0xffffffff, 0)

float result_1
char* result_2

if (data_19e39f4 != 0)
    if (sub_606410() == 0)
        uint32_t eax_13 = sub_64e7a0(ecx)
        sub_665db0(eax_13, &data_be5920, eax_13, 0x3f800000, 0xffffffff, 0)
    
    void* eax_14 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t edi_1 = data_19e39f4
    int32_t ecx_18 = 0
    int32_t edx_3 = *(eax_14 + 0x6ed0)
    
    if (edx_3 s> 0)
        do
            if (*(eax_14 + (ecx_18 << 2) + 0x63e0) == edi_1)
                uint32_t eax_15 = sub_64e7a0(ecx)
                sub_665db0(eax_15, &data_be58e4, eax_15, 0x3f800000, 0xffffffff, 0)
                edi_1 = data_19e39f4
                break
            
            ecx_18 += 1
        while (ecx_18 s< edx_3)
    
    void* eax_16 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_23 = 0
    int32_t edx_4 = *(eax_16 + 0x63dc)
    
    if (edx_4 s> 0)
        do
            if (*(eax_16 + (ecx_23 << 2) + 0x58ec) == edi_1)
                uint32_t eax_17 = sub_64e7a0(ecx)
                sub_665db0(eax_17, &data_be58f0, eax_17, 0x3f800000, 0xffffffff, 0)
                edi_1 = data_19e39f4
                break
            
            ecx_23 += 1
        while (ecx_23 s< edx_4)
    
    int32_t eax_19 = *(sub_571b30(edi_1, 0x18) + 0x5c)
    char const* const var_28_1
    int32_t var_24_7
    char const* const var_20_6
    char* ecx_27
    
    if (eax_19 s< 0)
        var_20_6 = "ArtistDefGet"
        var_24_7 = 0x1534
        var_28_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
        ecx_27 = "artist >= 0"
    label_60814c:
        sub_63b870(eax_19, &data_801800, ecx_27, var_28_1, var_24_7, var_20_6)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (eax_19 u>= 0x41)
        var_20_6 = "ArtistDefGet"
        var_24_7 = 0x1535
        var_28_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
        ecx_27 = "artist < ARRAYSIZE(ARTIST_DEFS)"
        goto label_60814c
    
    if (*((eax_19 << 3) + &data_7831c0) != eax_19)
        var_20_6 = "ArtistDefGet"
        var_24_7 = 0x1536
        var_28_1 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Base.cpp"
        ecx_27 = "ARTIST_DEFS[artist].artist == artist"
        goto label_60814c
    
    char* edx_5 = (&data_7831c4)[eax_19 * 2]
    
    if (edx_5 == 0)
        var_20_6 = "XString::XString"
        var_24_7 = 0x94
        var_28_1 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_27 = &data_871e0c
        goto label_60814c
    
    sub_63d720(&result_3, edx_5)
    int32_t var_8_1 = 0
    int32_t var_20_7 = 0xffffffff
    sub_666380(&result_3, &data_be5980, ecx, &result_3)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* result_4 = result_3
        
        if (result_4 != 0 && *result_4 != 0)
            char* eax_21 = sub_63d4e0(&result_3)
            int32_t temp0_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                result_3 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    void* eax_22 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    sub_608170(eax_22, *(eax_22 + 0x63dc), eax_22 + 0x58ec, &result_3, &result_1)
    void* eax_23 = sub_571b30(data_19e39f4, 0x18)
    int32_t ecx_38
    
    if (((*(eax_23 + 0x98) & 0x7f000400) | (*(eax_23 + 0x9c) & 0x940)) != 0)
        ecx_38.b = 1
    else
        ecx_38.b = 0
    
    float result_5 = result_1
    int32_t var_20_9 = 5
    
    if (ecx_38.b != 0)
        result_5 = result_3
    
    float result_20 = result_5
    sub_63df30(&result_2, "(%d/%d)")
    int32_t var_8_4 = 2
    int32_t var_30_1 = 0xffffffff
    sub_666380(&result_2, &data_be592c, ecx, &result_2)
    int32_t var_8_5 = 3
    
    if (data_cf65bc != 0)
        char* result_6 = result_2
        
        if (result_6 != 0 && *result_6 != 0)
            char* eax_27 = sub_63d4e0(&result_2)
            int32_t temp2_1 = *(eax_27 + 4)
            *(eax_27 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                result_2 = &data_801800
    
    int32_t var_8_6 = 0xffffffff

int32_t edi_2

if (data_1a94e88 != "tbl_zoom" || data_1a94e84 != ecx || data_1a94e8c != 0 || data_1a94e90 != 0)
label_6076aa:
    int32_t eax_31 = sub_67bd70(ecx, "tbl_zoom")
    
    if (eax_31 != 0)
        edi_2 = sub_64c870(sub_64e7a0(eax_31), nullptr)
        data_1a94ea4 = edi_2
        
        if (edi_2 != 0)
            data_1a94e88 = "tbl_zoom"
            data_1a94e84 = ecx
            data_1a94e8c = 0
            data_1a94e90 = 0
    else
        data_1a94ea4 = eax_31
        edi_2 = 0
else
    edi_2 = data_1a94ea4
    
    if (edi_2 == 0)
        goto label_6076aa
    
    uint32_t eax_28 = zx.d(edi_2.w)
    
    if (eax_28 u>= data_c23bac || *(eax_28 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
        goto label_6076aa

if (data_1a94eac == "tbl_zoom_landscape" && data_1a94ea8 == ecx && data_1a94eb0 == 0
        && data_1a94eb4 == 0)
    char* result_12 = data_1a94ec8
    result_2 = result_12
    
    if (result_12 == 0)
        goto label_607761
    
    uint32_t eax_34 = zx.d(result_12.w)
    
    if (eax_34 u>= data_c23bac || *(eax_34 * 0x18d0 + data_c23ba8 + 0x18c8) != result_12)
        goto label_607761
    
    if (result_12 == 0)
        goto label_607793
    
    goto label_607809

label_607761:
uint32_t result_7 = sub_67bd70(ecx, "tbl_zoom_landscape")
int128_t var_3274
int128_t xmm0_3
int128_t xmm1_1
int128_t xmm2_1
int128_t xmm3_1

if (result_7 != 0)
    result_7 = sub_64c870(sub_64e7a0(result_7), nullptr)
    result_2 = result_7
    data_1a94ec8 = result_7
    
    if (result_7 == 0)
        goto label_607793
    
    data_1a94eac = "tbl_zoom_landscape"
    data_1a94ea8 = ecx
    data_1a94eb0 = 0
    data_1a94eb4 = 0
label_607809:
    uint32_t eax_37
    
    if (edi_2 != 0)
        eax_37 = zx.d(edi_2.w)
    
    int128_t xmm2_2
    int128_t xmm3_5
    
    if (edi_2 == 0 || eax_37 u>= data_c23bac || *(eax_37 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_2)
        xmm1_1 = data_bf21f8
        xmm0_3 = data_bf21e8
        xmm3_5 = xmm1_1
        xmm2_2 = xmm0_3
    else
        uint32_t eax_40 = sub_64e7a0(edi_2)
        xmm1_1 = data_bf21f8
        xmm0_3 = data_bf21e8
        xmm2_2 = *(eax_40 + 0x1620)
        xmm3_5 = *(eax_40 + 0x1630)
    
    char* result_13 = result_2
    result_7 = zx.d(result_13.w)
    var_3274 = xmm2_2
    int128_t var_3264_1 = xmm3_5
    
    if (result_7 u>= data_c23bac || *(result_7 * 0x18d0 + data_c23ba8 + 0x18c8) != result_13)
        xmm3_1 = xmm1_1
        xmm2_1 = xmm0_3
    else
        result_7 = sub_64e7a0(result_13)
        xmm1_1 = data_bf21f8
        xmm0_3 = data_bf21e8
        xmm2_1 = *(result_7 + 0x1620)
        xmm3_1 = *(result_7 + 0x1630)
else
    data_1a94ec8 = result_7
label_607793:
    xmm0_3 = data_bf21e8
    xmm1_1 = data_bf21f8
    var_3274 = xmm0_3
    int128_t var_3264 = xmm1_1
    xmm3_1 = xmm1_1
    xmm2_1 = xmm0_3

int128_t var_32e4 = xmm3_1
float xmm3_3 = data_ccf6fc - 0f
int128_t var_32f4 = xmm2_1
int32_t xmm3_4

if (not(0 f< xmm3_3))
    xmm3_4 = (zx.o(0)).d
else if (xmm3_3 < 1f)
    int32_t xmm0_5
    result_7, xmm0_5 = sub_4ae110(4, xmm3_3, (zx.o(0)).d, 3.14159274f)
    xmm1_1 = data_bf21f8
    xmm3_4 = xmm0_5
    xmm0_3 = data_bf21e8
else
    xmm3_4 = 0x40490fdb

xmm3_4 f- 1.57079637f
float xmm4 = xmm3_4

if (not(xmm3_4 f<= 1.57079637f))
    xmm4 = 6.28318548f - (3.14159274f f- xmm3_4)

float result_19 = xmm4 * 0.5f
result_7.b = xmm3_4 f> 1.57079637f
char var_330c = result_7.b
int128_t var_3234 = xmm0_3
result_1 = result_19
int32_t var_3224
var_3224.o = xmm1_1
float xmm0_7 = sub_4ae0f0(ebp, result_19)
var_3234:8.d = xmm0_7
float xmm1_4 = xmm0_7 * 0f
var_3234:4.d = xmm1_4
var_3234:0xc.d = xmm1_4
int32_t xmm0_9 = sub_4ae0d0(ebp, result_1)
int128_t* edx_11 = &var_3234
int128_t xmm1_5 = data_bf21e8
int32_t var_3224_1 = xmm0_9
float xmm0_11 = _mm_cvtepi32_ps(zx.o(*(data_cf65b8 + 0x14)))
int128_t var_3294
float* var_20_12 = &var_3294
var_3294 = xmm1_5
int128_t var_3284 = data_bf21f8
var_3284:8.d = 0
var_3284:4.d = xmm0_11 * 0.5f
var_3284:0xc.d = 0
int128_t var_32b4
sub_4eb600(&var_3294, edx_11, &var_32b4, var_20_12)
void var_3344
float var_24_10 = &var_3344
int128_t var_32d4 = var_32b4
int128_t var_32a4
int128_t var_32c4 = var_32a4
int128_t* eax_45 = sub_639a10(&var_3344, edx_11, &var_3294, var_24_10)
var_32b4 = *eax_45
int128_t var_32a4_1 = eax_45[1]
int128_t var_3254
sub_4eb600(&var_32d4, &var_32b4, &var_3254, &var_32d4)
float* var_2c_2 = &var_3234
var_3234 = var_3254
int128_t var_3244
var_3224_1.o = var_3244
sub_4eb600(&var_3234, &var_3274, &var_3254, var_2c_2)
var_3274 = var_3254
int128_t var_3264_2 = var_3244
void var_3214
char* result = sub_5f69b0(&var_4cd4, &var_3214)
int32_t i_2 = i_3
result_1 = result
char var_32f9 = 0

if (i_2 != 0)
    char** eax_48 = sub_5eb240(&result_2, var_3308)
    int32_t var_20_13 = 0xffffffff
    int32_t var_8_7 = 4
    sub_666380(eax_48, &data_be5944, ecx, eax_48)
    int32_t var_8_8 = 5
    
    if (data_cf65bc != 0)
        char* result_8 = result_2
        
        if (result_8 != 0 && *result_8 != 0)
            char* eax_49 = sub_63d4e0(&result_2)
            int32_t temp3_1 = *(eax_49 + 4)
            *(eax_49 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                result_2 = &data_801800
    
    result = nullptr
    int32_t var_8_9 = 0xffffffff
    result_3 = nullptr
    
    if (i_2 s> 0)
        do
            int32_t i_1 = *(var_3310 + (result << 2))
            
            if (i_1 == 0)
                sub_63b870(result, &data_801800, "what != CARD_NONE", 
                    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xa541, 
                    "CardGalleryUpdateCards")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* esi_1 = result * 9
            int32_t ecx_60
            
            if (i_1 != 0x130c)
                void* eax_57 = sub_571b30(i_1, 0x18)
                int32_t ecx_67 = (*(eax_57 + 0x98) & 0x7f000400) | (*(eax_57 + 0x9c) & 0x940)
                
                if (ecx_67 != 0)
                    char* const result_15
                    
                    if (*((esi_1 << 2) + &data_1a94ff4) != "tblCardsLandscape")
                        result_15 = result_3
                    label_607daa:
                        ecx_60 = sub_67be20(result_15)
                        *((esi_1 << 2) + &data_1a95010) = ecx_60
                        
                        if (ecx_60 != 0)
                            *((esi_1 << 2) + &data_1a94ff0) = ecx
                            char* const result_10 = result_3
                            *((esi_1 << 2) + &data_1a94ff4) = "tblCardsLandscape"
                            *((esi_1 << 2) + &data_1a94ff8) = result_10
                            *((esi_1 << 2) + &data_1a94ffc) = 0
                    else
                        result_15 = result_3
                        
                        if (*((esi_1 << 2) + &data_1a94ff0) != ecx
                                || *((esi_1 << 2) + &data_1a94ff8) != result_15
                                || *((esi_1 << 2) + &data_1a94ffc) != 0)
                            goto label_607daa
                        
                        ecx_60 = *((esi_1 << 2) + &data_1a95010)
                        
                        if (ecx_60 == 0)
                            goto label_607daa
                        
                        uint32_t eax_65 = zx.d(ecx_60.w)
                        
                        if (eax_65 u>= data_c23bac
                                || *(eax_65 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_60)
                            goto label_607daa
                else
                    char* const result_14
                    
                    if (*((esi_1 << 2) + &data_1a94ed4) != "tblCards")
                        result_14 = result_3
                    label_607ce9:
                        ecx_60 = sub_67be20(result_14)
                        *((esi_1 << 2) + &data_1a94ef0) = ecx_60
                        
                        if (ecx_60 != 0)
                            *((esi_1 << 2) + &data_1a94ed0) = ecx
                            char* const result_9 = result_3
                            *((esi_1 << 2) + &data_1a94ed4) = "tblCards"
                            *((esi_1 << 2) + &data_1a94ed8) = result_9
                            *((esi_1 << 2) + &data_1a94edc) = 0
                    else
                        result_14 = result_3
                        
                        if (*((esi_1 << 2) + &data_1a94ed0) != ecx
                                || *((esi_1 << 2) + &data_1a94ed8) != result_14
                                || *((esi_1 << 2) + &data_1a94edc) != ecx_67)
                            goto label_607ce9
                        
                        ecx_60 = *((esi_1 << 2) + &data_1a94ef0)
                        
                        if (ecx_60 == 0)
                            goto label_607ce9
                        
                        uint32_t eax_60 = zx.d(ecx_60.w)
                        
                        if (eax_60 u>= data_c23bac
                                || *(eax_60 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_60)
                            goto label_607ce9
            else if (*((esi_1 << 2) + &data_1a94ed4) != "tblCards"
                || *((esi_1 << 2) + &data_1a94ed0) != ecx || *((esi_1 << 2) + &data_1a94ed8) != 4
                || *((esi_1 << 2) + &data_1a94edc) != 0)
            label_607bd9:
                int32_t eax_53 = sub_67bd70(ecx, "tblCards")
                
                if (eax_53 != 0)
                    ecx_60 = sub_64c870(sub_64e7a0(eax_53), 4)
                    *((esi_1 << 2) + &data_1a94ef0) = ecx_60
                    
                    if (ecx_60 != 0)
                        *((esi_1 << 2) + &data_1a94ed4) = "tblCards"
                        *((esi_1 << 2) + &data_1a94ed0) = ecx
                        *((esi_1 << 2) + &data_1a94ed8) = 4
                        *((esi_1 << 2) + &data_1a94edc) = 0
                else
                    *((esi_1 << 2) + &data_1a94ef0) = eax_53
                    ecx_60 = 0
            else
                ecx_60 = *((esi_1 << 2) + &data_1a94ef0)
                
                if (ecx_60 == 0)
                    goto label_607bd9
                
                uint32_t eax_50 = zx.d(ecx_60.w)
                
                if (eax_50 u>= data_c23bac || *(eax_50 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_60)
                    goto label_607bd9
            
            uint32_t eax_70
            
            if (ecx_60 != 0)
                eax_70 = zx.d(ecx_60.w)
            
            int128_t xmm0_21
            int128_t xmm1_7
            
            if (ecx_60 == 0 || eax_70 u>= data_c23bac
                    || *(eax_70 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_60)
                xmm1_7 = data_bf21f8
                xmm0_21 = data_bf21e8
            else
                uint32_t eax_73 = sub_64e7a0(ecx_60)
                xmm0_21 = *(eax_73 + 0x1620)
                xmm1_7 = *(eax_73 + 0x1630)
            
            var_32d4 = xmm0_21
            int128_t var_32c4_1 = xmm1_7
            void* eax_74 = sub_571b30(i_1, 0x18)
            int32_t ecx_73
            
            if (((*(eax_74 + 0x98) & 0x7f000400) | (*(eax_74 + 0x9c) & 0x940)) != 0)
                ecx_73.b = 1
            else
                ecx_73.b = 0
            
            char* const result_16 = result_3
            int128_t* eax_77 = &var_32f4
            
            if (ecx_73.b == 0)
                eax_77 = &var_3274
            
            void* edx_23 = data_be1538
            int128_t xmm0_22 = *eax_77
            void* result_21 = *(edx_23 + 0xbbc)
            *(edx_23 + 0x258) = 1
            var_3254 = xmm0_22
            *(edx_23 + 0xbfc) = 1
            int128_t xmm0_23 = eax_77[1]
            void* result_11 = &result_16[1]
            result_2 = result_11
            int128_t var_3244_1 = xmm0_23
            
            if (result_11 s<= result_21)
                result_11 = result_21
            
            *(edx_23 + 0xbbc) = result_11
            var_321c.q = 0
            int32_t edx_24 = 0
            var_3308 = edx_23 + (result_16 << 2)
            void* eax_78
            
            if (result_1 s<= 0)
            label_607f0c:
                eax_78.b = 0
            else
                void var_3210
                eax_78 = &var_3210
                
                while (true)
                    int32_t ecx_74 = *(eax_78 - 4)
                    
                    if (ecx_74 == 0)
                        goto label_607f0c
                    
                    if (ecx_74 == 1 && *eax_78 == i_1)
                        eax_78.b = 1
                        break
                    
                    edx_24 += 1
                    eax_78 += 0x10
                    
                    if (edx_24 s>= result_1)
                        goto label_607f0c
            
            float xmm0_24 = *((result_16 << 2) + &data_ccf700)
            float xmm1_9 = data_8c4634 * 5f
            var_321c:2.b = eax_78.b
            float xmm0_25
            
            if (*(data_be1538 + 0xbd4) != result_16)
                xmm0_25 = xmm0_24 - xmm1_9
            else
                xmm0_25 = xmm0_24 + xmm1_9
            
            int32_t result_18
            
            if (0 f<= xmm0_25)
                result_18 = _mm_min_ss(0x3f800000, xmm0_25)
            else
                result_18 = (zx.o(0)).d
            
            result_18 f- 0
            *((result_16 << 2) + &data_ccf700) = result_18
            result_3 = result_18
            void* eax_79
            eax_79:1.b = (result_18 f== 0f ? 1 : 0) << 6
                | (is_unordered.d(result_18, 0f) ? 1 : 0) << 2 | (result_18 f< 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2 && var_32f9 == 0)
                var_32f9 = 1
                
                if (sub_6071a0() != 0)
                    uint32_t eax_81 = sub_64e7a0(ecx)
                    sub_665db0(eax_81, &data_be595c, eax_81, 0x3f800000, 0xffffffff, 0)
            
            var_321c:1.b = sub_606410()
            void* eax_83 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            int32_t ecx_81 = 0
            int32_t edx_25 = *(eax_83 + 0x63dc)
            
            if (edx_25 s<= 0)
            label_60800e:
                void* eax_84 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
                int32_t ecx_84 = 0
                int32_t edx_26 = *(eax_84 + 0x6ed0)
                
                if (edx_26 s<= 0)
                label_608032:
                    var_321c.b = 0
                else
                    while (*(eax_84 + (ecx_84 << 2) + 0x63e0) != i_1)
                        ecx_84 += 1
                        
                        if (ecx_84 s>= edx_26)
                            goto label_608032
                    
                    var_321c.b = 1
            else
                while (*(eax_83 + (ecx_81 << 2) + 0x58ec) != i_1)
                    ecx_81 += 1
                    
                    if (ecx_81 s>= edx_25)
                        goto label_60800e
                
                var_321c.b = 1
            
            sub_606900(&var_3324, 0x36b1, i_1, var_3308, &var_3324, &var_32d4, &var_3254, 
                &var_321c, data_ccf6e8, data_ccf6ec, 0, var_330c)
            result = result_2
            i_2 = i_3
            result_3 = result
        while (result s< i_2)

for (; i_2 s< 9; i_2 += 1)
    void* edx_27 = data_be1538
    int32_t eax_86 = i_2 + 1
    int32_t ecx_86 = *(edx_27 + 0xbbc)
    *(edx_27 + 0x258) = 1
    
    if (i_2 + 1 s<= ecx_86)
        eax_86 = ecx_86
    
    *(edx_27 + 0xbfc) = 1
    *(edx_27 + 0xbbc) = eax_86
    result = sub_64e810(edx_27 + (i_2 << 2))

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

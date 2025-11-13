// 函数: sub_7392c0
// 地址: 0x7392c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?write_double_translated_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQBDIAAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_94 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* i_7 = *arg1
sub_63b5f0("AtlasMaker: making page %s")
char* var_4c
i_7 = &var_4c
QueryPerformanceCounter(i_7)
char* var_84 = var_4c
int32_t var_48
int32_t var_80 = var_48
int32_t* i_8 = nullptr
int32_t var_54 = 0
int32_t var_50 = 0
int32_t i = 0
var_8_1.b = 2

if (arg1[4] s> 0)
    do
        int32_t eax_4 = arg1[2]
        i_7 = &i_8
        sub_738db0(eax_4, arg2, *(eax_4 + (i << 3)), i_7)
        i += 1
    while (i s< arg1[4])

char* result_1
char* result_2

if (arg1[4] s<= 0 || var_50 s<= 0)
    i_7 = *arg1
    sub_63b5f0("AtlasMaker: not enough textures for atlas page: '%s'")
    var_8_1.b = 9
else
    int32_t* i_1 = nullptr
    var_4c.q = 0
    int32_t edi_1 = var_48
    char* ebx_1 = var_4c
    int32_t var_60_1 = edi_1
    char* const var_44 = ebx_1
    PSTR lpFileName_6
    void var_38
    char* var_24
    int32_t var_20
    
    do
        char* result_3 = result_2
        char* const result_6 = &data_801800
        i_7 = i_1
        
        if (result_3 != 0)
            result_6 = result_3
        
        int32_t var_9c_1 = *arg1
        char* const result_8 = result_6
        sub_63df30(&lpFileName_6, "%s-%s-%d.png")
        PSTR lpFileName_3 = lpFileName_6
        PSTR lpFileName = &data_801800
        
        if (lpFileName_3 != 0)
            lpFileName = lpFileName_3
        
        i_7 = &var_38
        
        if (GetFileAttributesExA(lpFileName, GetFileExInfoStandard, i_7) == 0)
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                PSTR lpFileName_8 = lpFileName_6
                
                if (lpFileName_8 != 0 && *lpFileName_8 != 0)
                    char* eax_9 = sub_63d4e0(&lpFileName_6)
                    int32_t temp2_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                        lpFileName_6 = &data_801800
            
            var_8_1.b = 2
            break
        
        if (var_20 u>= edi_1 && (var_20 u> edi_1 || var_24 u> ebx_1))
            ebx_1 = var_24
            edi_1 = var_20
            var_44 = ebx_1
            var_60_1 = edi_1
        
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            PSTR lpFileName_7 = lpFileName_6
            
            if (lpFileName_7 != 0 && *lpFileName_7 != 0)
                char* eax_8 = sub_63d4e0(&lpFileName_6)
                int32_t temp3_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    lpFileName_6 = &data_801800
        
        i_1 += 1
        var_8_1.b = 2
    while (i_1 s< 0x64)
    
    int32_t* i_9 = i_8
    char* const esi = var_44
    
    if (edi_1 != 0 || esi != 0)
        char* lpFileName_4 = result_1
        char* const lpFileName_1 = &data_801800
        
        if (lpFileName_4 != 0)
            lpFileName_1 = lpFileName_4
        
        i_7 = &var_38
        
        if (GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, i_7) == 0)
            goto label_739605
        
        char var_3d_1 = 1
        
        if (var_20 u>= edi_1 && (var_20 u> edi_1 || var_24 u>= esi))
            i_7 = "AtlasMaker: rebuilding page because atlasmaker file is new"
            sub_63b5f0(i_7)
            var_3d_1 = 0
        
        int32_t* i_2 = i_9
        
        while (i_2 != 0)
            void* esi_1 = *i_2
            i_2 = i_2[1]
            
            if (*(esi_1 + 8) != 0)
                char eax_11 = sub_6c5840(esi_1)
                char* i_20 = *(esi_1 + 0x20)
                
                if (eax_11 != 0)
                    char* i_10 = &data_801800
                    
                    if (i_20 != 0)
                        i_10 = i_20
                    
                    i_7 = i_10
                    sub_63b5f0("AtlasMaker: rebuilding page for: '%s'")
                    goto label_739605
                
                char* i_21 = &data_801800
                
                if (i_20 != 0)
                    i_21 = i_20
                
                sub_6c48e0(&lpFileName_6, i_21)
                PSTR lpFileName_5 = lpFileName_6
                PSTR lpFileName_2 = &data_801800
                
                if (lpFileName_5 != 0)
                    lpFileName_2 = lpFileName_5
                
                i_7 = &var_38
                
                if (GetFileAttributesExA(lpFileName_2, GetFileExInfoStandard, i_7) == 0)
                    int32_t* i_19 = *(esi_1 + 0x20)
                    int32_t* i_16 = &data_801800
                    
                    if (i_19 != 0)
                        i_16 = i_19
                    
                    i_7 = i_16
                    sub_63b5f0("AtlasMaker: rebuilding page because no xbin for: '%s'")
                    var_8_1.b = 6
                label_7395ce:
                    
                    if (data_cf65bc != 0)
                        PSTR lpFileName_10 = lpFileName_6
                        
                        if (lpFileName_10 != 0 && *lpFileName_10 != 0)
                            char* eax_16 = sub_63d4e0(&lpFileName_6)
                            int32_t temp6_1 = *(eax_16 + 4)
                            *(eax_16 + 4) -= 1
                            
                            if (temp6_1 == 1)
                                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                                lpFileName_6 = &data_801800
                    
                    var_8_1.b = 2
                    goto label_739605
                
                if (var_20 u> var_60_1 || (var_20 u>= var_60_1 && var_24 u>= var_44))
                    int32_t* i_18 = *(esi_1 + 0x20)
                    int32_t* i_12 = &data_801800
                    
                    if (i_18 != 0)
                        i_12 = i_18
                    
                    i_7 = i_12
                    sub_63b5f0("AtlasMaker: rebuilding page because image is new: '%s'")
                    var_8_1.b = 7
                    goto label_7395ce
                
                var_8_1.b = 8
                
                if (data_cf65bc != 0)
                    PSTR lpFileName_9 = lpFileName_6
                    
                    if (lpFileName_9 != 0 && *lpFileName_9 != 0)
                        char* eax_15 = sub_63d4e0(&lpFileName_6)
                        int32_t temp7_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                            lpFileName_6 = &data_801800
                
                var_8_1.b = 2
            else
                char* i_17 = *(esi_1 + 0x20)
                char* const i_11 = &data_801800
                
                if (i_17 != 0)
                    i_11 = i_17
                
                i_7 = i_11
                sub_63b5f0("AtlasMaker: unknown asset '%s'")
        
        if (var_3d_1 == 0)
            goto label_739605
        
        i_7 = "AtlasMaker: atlas is up to date."
        sub_63b5f0(i_7)
        var_8_1.b = 9
    else
    label_739605:
        int32_t esi_2 = var_50 << 2
        int32_t* var_6c = sub_64c020(esi_2)
        int32_t edi_2 = 0
        int32_t var_68_1 = 0
        var_8_1.b = 0xa
        int32_t* var_78 = sub_64c020(esi_2)
        int32_t var_74_1 = 0
        int32_t* i_3 = i_9
        var_8_1.b = 0xb
        
        while (i_3 != 0)
            int32_t* ebx_2 = *i_3
            i_3 = i_3[1]
            uint32_t eax_22 = sub_7391b0(ebx_2)
            
            if (eax_22.b != 0)
                if (edi_2 s>= var_50)
                    i_7 = "XArray<struct XAsset *>::Append"
                    sub_63b870(eax_22, &data_801800, "mSize < mSizeReserved", 
                        "C:\x\ax2017\Engine\xArray.h", 0x96, i_7)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                var_6c[edi_2] = ebx_2
                edi_2 += 1
                int32_t var_68_2 = edi_2
        
        i_7 = sub_64b4d0(&var_84)
        int32_t* i_13 = sub_63b5f0("AtlasMaker: match and load assets time %d ms")
        int32_t* ebx_3 = &var_6c
        int32_t* esi_3 = &var_78
        uint32_t i_4
        
        for (i_4 = 0; i_4 s< 0x64; )
            char* eax_25 = result_2
            i_7 = i_13
            i_7 = eax_25
            char* result_4 = result_2
            
            if (result_4 != 0 && *result_4 != 0)
                result_4 = sub_63d4e0(&i_7)
                *(result_4 + 4) += 1
            
            i_13 = sub_738720(result_4, i_4, arg1, ebx_3, esi_3)
            
            if (esi_3[1] == 0)
                break
            
            int32_t* eax_26 = ebx_3
            i_4 += 1
            ebx_3 = esi_3
            esi_3 = eax_26
            eax_26[1] = 0
        
        int32_t* i_5 = i_4 + 1
        
        while (i_5 s< 0x64)
            char* edx_10 = *arg1
            
            if (edx_10 == 0)
                i_7 = "XString::XString"
                sub_63b870(arg1, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, i_7)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_63d720(&var_44, edx_10)
            var_8_1.b = 0xc
            char* result_7 = &data_801800
            char* result_5 = result_2
            char* esi_4 = var_44
            
            if (result_5 != 0)
                result_7 = result_5
            
            char* const eax_28 = &data_801800
            i_7 = i_5
            
            if (esi_4 != 0)
                eax_28 = esi_4
            
            char* const var_9c_3 = eax_28
            char* result_9 = result_7
            sub_63df30(&lpFileName_6, "%s-%s-%d.png")
            PSTR eax_29 = lpFileName_6
            PSTR i_14 = &data_801800
            
            if (eax_29 != 0)
                i_14 = eax_29
            
            i_7 = i_14
            
            if (GetFileAttributesA(i_7) == 0xffffffff)
                var_8_1.b = 0xd
                
                if (data_cf65bc != 0)
                    PSTR lpFileName_12 = lpFileName_6
                    
                    if (lpFileName_12 != 0 && *lpFileName_12 != 0)
                        char* eax_36 = sub_63d4e0(&lpFileName_6)
                        int32_t temp8_1 = *(eax_36 + 4)
                        *(eax_36 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)
                            lpFileName_6 = &data_801800
                
                var_8_1.b = 0xe
                
                if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                    char* eax_37 = sub_63d4e0(&var_44)
                    int32_t temp9_1 = *(eax_37 + 4)
                    *(eax_37 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                        var_44 = &data_801800
                
                var_8_1.b = 0xb
                break
            
            PSTR eax_31 = lpFileName_6
            PSTR i_15 = &data_801800
            
            if (eax_31 != 0)
                i_15 = eax_31
            
            i_7 = i_15
            _unlink(i_7)
            var_8_1.b = 0xf
            
            if (data_cf65bc != 0)
                PSTR lpFileName_11 = lpFileName_6
                
                if (lpFileName_11 != 0 && *lpFileName_11 != 0)
                    char* eax_32 = sub_63d4e0(&lpFileName_6)
                    int32_t temp10_1 = *(eax_32 + 4)
                    *(eax_32 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                        lpFileName_6 = &data_801800
            
            var_8_1.b = 0x10
            
            if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
                char* eax_33 = sub_63d4e0(&var_44)
                int32_t temp11_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp11_1 == 1)
                    sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                    var_44 = &data_801800
            
            i_5 += 1
            var_8_1.b = 0xb
        
        int32_t* i_6 = i_8
        
        while (i_6 != 0)
            int32_t* ecx_24 = *i_6
            i_6 = i_6[1]
            
            if (ecx_24[2] != 4)
                sub_739120(ecx_24)
        
        var_8_1.b = 0x11
        
        if (data_cf65bc != 0)
            int32_t* ecx_25 = var_78
            
            if (ecx_25 != 0)
                sub_64c080(ecx_25, var_50 << 2)
        
        var_8_1.b = 0x12
        
        if (data_cf65bc != 0)
            int32_t* ecx_26 = var_6c
            
            if (ecx_26 != 0)
                sub_64c080(ecx_26, var_50 << 2)
        
        var_8_1.b = 0x13

char* result = sub_4d4b30(&i_8)
var_8_1.b = 0x14

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

int32_t var_8_2 = 0x15

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

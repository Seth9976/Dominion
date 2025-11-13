// 函数: sub_739a20
// 地址: 0x739a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772ea5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_90 = *arg1
sub_63b5f0("AtlasMaker: making page %s")
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t performanceCount_1 = performanceCount
int32_t var_48
int32_t var_78 = var_48
int32_t* i_8 = nullptr
int32_t var_60 = 0
int32_t var_5c = 0
int32_t i = 0
var_8_1.b = 2

if (arg1[4] s> 0)
    do
        int32_t eax_4 = arg1[2]
        sub_738db0(eax_4, arg2, *(eax_4 + (i << 3)), &i_8)
        i += 1
    while (i s< arg1[4])

char* result_1
char* result_2

if (arg1[4] s<= 0 || var_5c s<= 0)
    int32_t var_90_13 = *arg1
    sub_63b5f0("AtlasMaker: not enough textures for atlas page: '%s'")
    var_8_1.b = 9
else
    int32_t i_1 = 0
    performanceCount.q = 0
    int32_t edi_1 = var_48
    int32_t performanceCount_2 = performanceCount
    int32_t var_54_1 = edi_1
    int32_t performanceCount_3 = performanceCount_2
    char* var_3c
    void fileInformation
    int32_t performanceCount_4
    int32_t var_20
    
    do
        char* result_3 = result_2
        char* const result_5 = &data_801800
        int32_t i_6 = i_1
        
        if (result_3 != 0)
            result_5 = result_3
        
        int32_t var_94_1 = *arg1
        char* const result_7 = result_5
        sub_63df30(&var_3c, "%s-%s-%d.png")
        char* lpFileName_4 = var_3c
        char* const lpFileName = &data_801800
        
        if (lpFileName_4 != 0)
            lpFileName = lpFileName_4
        
        if (GetFileAttributesExA(lpFileName, GetFileExInfoStandard, &fileInformation) == 0)
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_10 = var_3c
                
                if (eax_10 != 0 && *eax_10 != 0)
                    char* eax_11 = sub_63d4e0(&var_3c)
                    int32_t temp2_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                        var_3c = &data_801800
            
            var_8_1.b = 2
            break
        
        if (var_20 u>= edi_1 && (var_20 u> edi_1 || performanceCount_4 u> performanceCount_2))
            performanceCount_2 = performanceCount_4
            edi_1 = var_20
            performanceCount_3 = performanceCount_2
            var_54_1 = edi_1
        
        var_8_1.b = 5
        
        if (data_cf65bc != 0)
            char* eax_8 = var_3c
            
            if (eax_8 != 0 && *eax_8 != 0)
                char* eax_9 = sub_63d4e0(&var_3c)
                int32_t temp3_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                    var_3c = &data_801800
        
        i_1 += 1
        var_8_1.b = 2
    while (i_1 s< 0x64)
    
    int32_t* i_5 = i_8
    
    if (edi_1 != 0 || performanceCount_3 != 0)
        char* lpFileName_5 = result_1
        char* const lpFileName_1 = &data_801800
        
        if (lpFileName_5 != 0)
            lpFileName_1 = lpFileName_5
        
        if (GetFileAttributesExA(lpFileName_1, GetFileExInfoStandard, &fileInformation) == 0)
            goto label_739d71
        
        char var_3d_1 = 1
        
        if (var_20 u>= edi_1 && (var_20 u> edi_1 || performanceCount_4 u>= performanceCount_3))
            sub_63b5f0("AtlasMaker: rebuilding page because atlasmaker file is new")
            var_3d_1 = 0
        
        int32_t* i_2 = i_5
        
        while (i_2 != 0)
            void* esi_1 = *i_2
            i_2 = i_2[1]
            
            if (*(esi_1 + 8) != 0)
                char eax_14 = sub_6c5840(esi_1)
                char* ecx_10 = *(esi_1 + 0x20)
                
                if (eax_14 != 0)
                    char* eax_35 = &data_801800
                    
                    if (ecx_10 != 0)
                        eax_35 = ecx_10
                    
                    char* var_90_12 = eax_35
                    sub_63b5f0("AtlasMaker: rebuilding page for: '%s'")
                    goto label_739d71
                
                char* edx_5 = &data_801800
                
                if (ecx_10 != 0)
                    edx_5 = ecx_10
                
                sub_6c48e0(&var_3c, edx_5)
                char* lpFileName_6 = var_3c
                char* lpFileName_2 = &data_801800
                
                if (lpFileName_6 != 0)
                    lpFileName_2 = lpFileName_6
                
                if (GetFileAttributesExA(lpFileName_2, GetFileExInfoStandard, &fileInformation)
                        == 0)
                    char* eax_34 = *(esi_1 + 0x20)
                    char* const ecx_24 = &data_801800
                    
                    if (eax_34 != 0)
                        ecx_24 = eax_34
                    
                    char* const var_90_11 = ecx_24
                    sub_63b5f0("AtlasMaker: rebuilding page because no xbin for: '%s'")
                    var_8_1.b = 6
                label_739d2e:
                    
                    if (data_cf65bc != 0)
                        char* eax_21 = var_3c
                        
                        if (eax_21 != 0 && *eax_21 != 0)
                            char* eax_22 = sub_63d4e0(&var_3c)
                            int32_t temp8_1 = *(eax_22 + 4)
                            *(eax_22 + 4) -= 1
                            
                            if (temp8_1 == 1)
                                sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                                var_3c = &data_801800
                    
                    var_8_1.b = 2
                    goto label_739d71
                
                if (var_20 u> var_54_1
                        || (var_20 u>= var_54_1 && performanceCount_4 u>= performanceCount_3))
                    char* eax_20 = *(esi_1 + 0x20)
                    char* const ecx_14 = &data_801800
                    
                    if (eax_20 != 0)
                        ecx_14 = eax_20
                    
                    char* const var_90_7 = ecx_14
                    sub_63b5f0("AtlasMaker: rebuilding page because image is new: '%s'")
                    var_8_1.b = 7
                    goto label_739d2e
                
                var_8_1.b = 8
                
                if (data_cf65bc != 0)
                    char* eax_18 = var_3c
                    
                    if (eax_18 != 0 && *eax_18 != 0)
                        char* eax_19 = sub_63d4e0(&var_3c)
                        int32_t temp9_1 = *(eax_19 + 4)
                        *(eax_19 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                            var_3c = &data_801800
                
                var_8_1.b = 2
            else
                char* eax_13 = *(esi_1 + 0x20)
                char* const ecx_8 = &data_801800
                
                if (eax_13 != 0)
                    ecx_8 = eax_13
                
                char* const var_90_5 = ecx_8
                sub_63b5f0("AtlasMaker: unknown asset '%s'")
        
        if (var_3d_1 == 0)
            goto label_739d71
        
        sub_63b5f0("AtlasMaker: atlas is up to date.")
        var_8_1.b = 9
    else
    label_739d71:
        int32_t esi_2 = 0
        int32_t* var_70 = sub_64c020(var_5c << 2)
        int32_t var_6c_1 = 0
        int32_t var_68_1 = var_5c
        int32_t* i_3 = i_5
        var_8_1.b = 0xa
        
        while (i_3 != 0)
            int32_t* eax_24 = *i_3
            i_3 = i_3[1]
            uint32_t eax_25 = sub_7391b0(eax_24)
            
            if (eax_25.b != 0)
                if (esi_2 s>= var_5c)
                    sub_63b870(eax_25, &data_801800, "mSize < mSizeReserved", 
                        "C:\x\ax2017\Engine\xArray.h", 0x96, "XArray<struct XAsset *>::Append")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                var_70[esi_2] = eax_24
                esi_2 += 1
                int32_t var_6c_2 = esi_2
        
        uint32_t var_90_8 = sub_64b4d0(&performanceCount_1)
        sub_63b5f0("AtlasMaker: match and load assets time %d ms")
        uint32_t i_4 = sub_7380d0(&result_2, &var_70, arg1, &result_2)
        
        while (i_4 s< 0x64)
            char* result_4 = result_2
            char* result_6 = &data_801800
            uint32_t i_7 = i_4
            
            if (result_4 != 0)
                result_6 = result_4
            
            int32_t var_94_2 = *arg1
            char* result_8 = result_6
            sub_63df30(&var_3c, "%s-%s-%d.png")
            char* lpFileName_7 = var_3c
            char* lpFileName_3 = &data_801800
            
            if (lpFileName_7 != 0)
                lpFileName_3 = lpFileName_7
            
            if (GetFileAttributesA(lpFileName_3) == 0xffffffff)
                var_8_1.b = 0xb
                
                if (data_cf65bc != 0)
                    char* eax_36 = var_3c
                    
                    if (eax_36 != 0 && *eax_36 != 0)
                        char* eax_37 = sub_63d4e0(&var_3c)
                        int32_t temp6_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                            var_3c = &data_801800
                
                var_8_1.b = 0xa
                break
            
            char* _FileName_1 = var_3c
            char* _FileName = &data_801800
            
            if (_FileName_1 != 0)
                _FileName = _FileName_1
            
            _unlink(_FileName)
            var_8_1.b = 0xc
            
            if (data_cf65bc != 0)
                char* eax_32 = var_3c
                
                if (eax_32 != 0 && *eax_32 != 0)
                    char* eax_33 = sub_63d4e0(&var_3c)
                    int32_t temp7_1 = *(eax_33 + 4)
                    *(eax_33 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                        var_3c = &data_801800
            
            i_4 += 1
            var_8_1.b = 0xa
        
        while (i_5 != 0)
            int32_t* ecx_27 = *i_5
            i_5 = i_5[1]
            
            if (ecx_27[2] != 4)
                sub_739120(ecx_27)
        
        var_8_1.b = 0xd
        
        if (data_cf65bc != 0)
            int32_t* eax_38 = var_70
            
            if (eax_38 != 0)
                sub_64c080(eax_38, var_5c << 2)
        
        var_8_1.b = 0xe

char* result = sub_4d4b30(&i_8)
var_8_1.b = 0xf

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

int32_t var_8_2 = 0x10

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

// 函数: sub_6ee270
// 地址: 0x6ee270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771d15
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t j
int32_t j_1 = j
int32_t performanceCount_1 = performanceCount
int32_t j_3 = j_1
sub_63b5f0("CreateXPack: scanning...")
sub_6c93a0()
sub_63b5f0("CreateXPack: compiling...")
int32_t* i_5 = nullptr
int32_t* i_2 = nullptr
int32_t var_2c = 0
int32_t var_28 = 0
int32_t var_8_1 = 0
int32_t i = 0
int32_t* eax_4 = data_147ac2c
int32_t* eax_5 = *eax_4
char* const result_3

do
    int32_t j_2 = *eax_5
    result_3 = &data_801800
    
    if (j_2 != 0)
        j = j_2
        
        do
            int32_t* esi_1 = sub_6a01a0(&j)[1]
            int32_t eax_8 = esi_1[2]
            
            if (eax_8 != 3 && eax_8 != 4 && eax_8 != 0)
                if (esi_1[1] == 0)
                    sub_63b870(eax_8, &data_801800, "assetPtr->assetType != ASSET_TYPE_INVALID", 
                        "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x11b, "CreateXPack")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                char eax_9
                
                if (*esi_1 == 0)
                    eax_9 = sub_69f4a0(eax_8, 0, esi_1, 0)
                
                if (*esi_1 != 0 || eax_9 != 0)
                    char* eax_11 = esi_1[8]
                    char* const ecx_2 = &data_801800
                    
                    if (eax_11 != 0)
                        ecx_2 = eax_11
                    
                    char* const var_48_4 = ecx_2
                    sub_63b5f0("-----------------------------CreateXPack: adding %s")
                    int32_t** eax_12 = sub_64bfd0(0xc)
                    eax_12[3] += 1
                    
                    if (*eax_12 == 0)
                        sub_64be70(eax_12)
                    
                    int32_t* i_4 = *eax_12
                    *eax_12 = *i_4
                    *i_4 = esi_1
                    i_4[1] = 0
                    i_4[2] = i_5
                    
                    if (i_5 == 0)
                        i_2 = i_4
                    else
                        i_5[1] = i_4
                    
                    var_28 += 1
                    i_5 = i_4
                    int32_t* i_6 = i_5
                    result_3 = &data_801800
                else
                    char* eax_10 = esi_1[8]
                    char* const ecx_1 = &data_801800
                    
                    if (eax_10 != 0)
                        ecx_1 = eax_10
                    
                    char* const var_48_3 = ecx_1
                    sub_63b5f0("can't compile %s")
        while (j != 0)
        
        break
    
    i += 1
    eax_5 = &eax_5[1]
while (i u<= eax_4[1])

sub_63b5f0("CreateXPack: writing...")
int32_t var_48_1 = *(data_cf65b8 + 4)
char* result_1
sub_63df30(&result_1, "XBin\%s")
var_8_1.b = 1
char* result_2 = result_1

if (result_2 != 0)
    result_3 = result_2

int32_t _Str1 = strrchr(result_3, 0x2e)

if (_Str1 != 0)
    _Str1 = _stricmp(_Str1, ".zip")
    
    if (_Str1 == 0)
        sub_696080()
        noreturn

if (sub_695fb0(_Str1, &i_2, result_3, 1) == 0)
    MessageBoxA(data_147d46c, "Failed to write xpack file", "Error", MB_OK)

uint32_t var_48_5 = sub_64b4d0(&performanceCount_1)
char* result = sub_63b5f0("CreateXPack: done (%d ms)")
var_8_1.b = 2

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

int32_t var_8_2 = 3
int32_t* i_1 = i_2

while (i_1 != 0)
    int32_t* i_3 = i_1
    i_1 = i_1[1]
    result = sub_64c080(i_3, 0xc)

fsbase->NtTib.ExceptionList = ExceptionList
return result

// 函数: sub_6960b0
// 地址: 0x6960b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f005
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i_1 = nullptr
int32_t var_20 = 0
int32_t var_1c = 0
int32_t var_8_1 = 0
int32_t* eax_3 = sub_64bfd0(0xc)
eax_3[3] += 1

if (*eax_3 == 0)
    sub_64be70(eax_3)

int32_t* i_3 = *eax_3
i_1 = i_3
int32_t* i_4 = i_3
int32_t var_1c_1 = 1
*eax_3 = *i_3
char* const result_5 = &data_801800
*i_3 = arg1
char* const edx = &data_801800
i_3[1] = 0
i_3[2] = 0
char* eax_5 = arg1[8]

if (eax_5 != 0)
    edx = eax_5

char* result_1
sub_6c48e0(&result_1, edx)
var_8_1.b = 1
void* eax_6 = *arg1

if (eax_6 == 0 || (*(eax_6 + 8) & 1) != 0)
    sub_63b870(eax_6, &data_801800, 
        "assetPtr->pAssetData && !TEST_BIT(assetPtr->pAssetData->defFlags, DEF_FLAGS_CONTIGUOUS)", 
        "C:\x\ax2017\Engine\DefBin.cpp", 0x53c, "DefBinWriteXbinFile")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

char* result_2 = result_1
char* result_4 = &data_801800

if (result_2 != 0)
    result_4 = result_2

int32_t ebx
ebx.b = sub_695fb0(result_2, &i_1, result_4, 0).b

if (ebx.b == 0)
    char* result_3 = result_1
    
    if (result_3 != 0)
        result_5 = result_3
    
    char* const result_6 = result_5
    sub_63b5f0("Failed to write xbin file: '%s'")

var_8_1.b = 2
char* result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

int32_t var_8_2 = 3
int32_t* i = i_1

while (i != 0)
    int32_t* i_2 = i
    i = i[1]
    sub_64c080(i_2, 0xc)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result

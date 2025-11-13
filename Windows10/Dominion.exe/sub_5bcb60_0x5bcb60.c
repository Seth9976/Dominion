// 函数: sub_5bcb60
// 地址: 0x5bcb60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$throw_exception@Vevaluation_error@math@boost@@@boost@@YAXABVevaluation_error@math@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_6c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg3
int32_t* var_14_1 = arg3
int32_t var_8_1 = 0
char* var_84
void* arg_c
char** eax_4
int32_t edx_1
eax_4, edx_1 = sub_5be8d0(arg3.b, &arg_c, &var_84, "/kernel")
int32_t* eax_5 = sub_5b0f90(eax_4, edx_1, arg2, var_84)
char** eax_6
int32_t edx_3
eax_6, edx_3 = sub_5be8d0(eax_5.b, &arg_c, &var_84, "/bias")
int32_t* eax_7 = sub_5b10e0(eax_6, edx_3, arg2)
float* var_20 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
void* var_4c
int32_t* var_14_2 = &var_4c
var_4c = nullptr
int32_t edi = arg4[1]
int32_t var_48 = 0xffffffff
int32_t esi_2 = eax_5[2]
void* var_44
int32_t* var_58 = &var_44
var_44 = nullptr
int32_t var_40 = 0
int32_t var_3c = 0
var_8_1.b = 2

if (edi != 0 && esi_2 != 0 && edi s> divs.dp.d(0x7fffffff, esi_2))
    sub_5b0890()
    noreturn

sub_5bffd0(&var_44, edi * esi_2, edi, esi_2)
var_8_1.b = 3
var_4c = var_44
sub_5c34f0(var_40, arg4, &var_44, eax_5)
int32_t* var_38 = eax_7
int32_t eax_13 = *eax_7
int32_t var_2c = eax_7[1]
var_8_1.b = 4
int32_t ecx_8 = var_1c
int32_t esi_3 = eax_7[1]
int32_t edx_7

if (ecx_8 == edi)
    edx_7 = var_18

if (ecx_8 != edi || edx_7 != esi_3)
    if (edi != 0 && esi_3 != 0 && edi s> divs.dp.d(0x7fffffff, esi_3))
        sub_5b0890()
        noreturn
    
    sub_5bffd0(&var_20, esi_3 * edi, edi, esi_3)
    edx_7 = var_18
    ecx_8 = var_1c

int32_t ebx_1 = 0

if (edx_7 s> 0)
    float* edi_1 = var_20
    int32_t eax_17 = ecx_8
    float* var_24_1 = edi_1
    
    do
        int32_t esi_6 = 0
        
        if (eax_17 s> 0)
            do
                int32_t edx_12 = var_40 * ebx_1 + esi_6
                esi_6 += 1
                *edi_1 = *(var_4c + (edx_12 << 2)) f+ *(eax_13 + (ebx_1 << 2))
                edi_1 = &edi_1[1]
                ecx_8 = var_1c
            while (esi_6 s< ecx_8)
            
            edx_7 = var_18
            eax_17 = ecx_8
            edi_1 = var_24_1
        
        edi_1 = &edi_1[eax_17]
        ebx_1 += 1
        var_24_1 = edi_1
    while (ebx_1 s< edx_7)

var_8_1.b = 1
void* eax_19 = var_44

if (eax_19 != 0)
    free(*(eax_19 - 4))
    edx_7 = var_18
    ecx_8 = var_1c

int32_t var_70_5
int32_t ecx_13
void* edx_14

if (arg5 == 0)
    float* eax_25 = var_20
    arg3[1] = ecx_8
    *arg3 = eax_25
    arg3[2] = edx_7
    var_20 = nullptr
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0
    
    if (arg6 u> 0xf)
        edx_14 = arg_c
        ecx_13 = arg6 + 1
        void* eax_26 = edx_14
        
        if (ecx_13 u< 0x1000)
            var_70_5 = ecx_13
            operator new(edx_14)
        else
            edx_14 = *(eax_26 - 4)
            
            if (eax_26 - edx_14 - 4 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            var_70_5 = ecx_13 + 0x23
            operator new(edx_14)
else
    sub_5beb50(arg3, &var_20)
    float* eax_20 = var_20
    
    if (eax_20 != 0)
        free(eax_20[-1])
    
    if (arg6 u> 0xf)
        edx_14 = arg_c
        ecx_13 = arg6 + 1
        void* eax_21 = edx_14
        
        if (ecx_13 u< 0x1000)
            var_70_5 = ecx_13
            operator new(edx_14)
        else
            edx_14 = *(eax_21 - 4)
            
            if (eax_21 - edx_14 - 4 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            var_70_5 = ecx_13 + 0x23
            operator new(edx_14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3

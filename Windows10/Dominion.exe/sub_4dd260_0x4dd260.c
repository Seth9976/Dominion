// 函数: sub_4dd260
// 地址: 0x4dd260
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0agent@Concurrency@@QAE@AAVScheduler@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result_3 = arg2
uint32_t result_1 = result_3
char* ebx = arg3
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = sub_4dd080(arg3, arg2)

if (eax_3 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return *eax_3

int32_t eax_6 = data_19e5d0c
char* const var_14

if (eax_6 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    eax_6 = sub_75970e(&data_19e5d0c)
    
    if (data_19e5d0c == 0xffffffff)
        int32_t var_8_1 = 0
        int32_t* eax_7 = operator new(0xc)
        var_14 = eax_7
        var_8_1.b = 1
        *eax_7 = 0
        eax_7[1] = 0
        eax_7[2] = 0
        *eax_7 = sub_64c020(0x1000)
        eax_7[1] = 0x3ff
        data_19e5d10 = eax_7
        int32_t var_8_2 = 0xffffffff
        eax_6 = __Init_thread_footer(&data_19e5d0c)
        result_3 = result_1

if (ebx == 0)
    sub_63b870(eax_6, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

var_14 = &data_801800
sub_63db30(&var_14, ebx, result_3)
int32_t var_8_3 = 2
char* const ecx_4 = &data_801800
char* const esi_1 = var_14
int32_t* edi = data_19e5d10

if (esi_1 != 0)
    ecx_4 = esi_1

int32_t eax_10 = sub_69c4d0(ecx_4, 0) & edi[1]
int32_t ecx_5 = *edi
int32_t* edi_1 = *(ecx_5 + (eax_10 << 2))
uint32_t result

if (edi_1 == 0)
label_4dd394:
    int32_t var_30_2 = arg4
    uint32_t result_2 = sub_4dc930(eax_10, result_1, ebx, ecx_5)
    int32_t* ecx_8 = data_19e5d10
    result = result_2
    result_1 = result
    sub_4e9f80(ecx_8, &var_14, &result_1)
else
    while (true)
        eax_10, ecx_5 = sub_63d7f0(&var_14, edi_1)
        
        if (eax_10.b == 0)
            break
        
        edi_1 = edi_1[2]
        
        if (edi_1 == 0)
            goto label_4dd394
    
    if (edi_1 == 0xfffffffc)
        goto label_4dd394
    
    result = edi_1[1]

int32_t var_8_4 = 3

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    char* eax_11 = sub_63d4e0(&var_14)
    int32_t temp1_1 = *(eax_11 + 4)
    *(eax_11 + 4) -= 1
    
    if (temp1_1 == 1)
        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result

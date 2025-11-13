// 函数: sub_6364e0
// 地址: 0x6364e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c21b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t ecx
float edx
ecx, edx = __chkstk(0x2100)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t edi
int32_t var_28 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_30 = sub_5a0bf0
int32_t var_2108
`eh vector constructor iterator'(&var_2108, 0x10, 6, 0x5a0be0)
var_30 = edx
int32_t var_14_1 = 0
uint32_t eax_4 = sub_634db0(ecx, var_30)
var_14_1.b = 1
int32_t i_2 = 6
void var_2100
void* edi_2 = &var_2100
void* esi_1 = eax_4 + 8
int32_t i

do
    var_30 = esi_1 - 8
    sub_63d850(edi_2 - 8, var_30)
    i = i_2
    i_2 -= 1
    esi_1 += 0x10
    edi_2 += 0x10
    *(edi_2 - 0x14) = *(esi_1 - 0x14)
    *(edi_2 - 0x10) = *(esi_1 - 0x10)
    int32_t eax_7
    eax_7.b = *(esi_1 - 0xc)
    void var_2104
    *(&var_2104 - eax_4 + esi_1 - 0x10) = eax_7.b
    eax_7.b = *(esi_1 - 0xb)
    void var_2103
    *(&var_2103 - eax_4 + esi_1 - 0x10) = eax_7.b
while (i != 1)
int32_t i_3 = 0x40
void* ecx_6 = eax_4 + 0x6c
int32_t var_20a8 = *(eax_4 + 0x60)
int32_t var_20a4 = *(eax_4 + 0x64)
int32_t var_20a0 = *(eax_4 + 0x68)
void var_209c
void* eax_11 = &var_209c
int32_t i_1

do
    ecx_6 += 0x40
    eax_11 += 0x40
    *(eax_11 - 0x40) = *(ecx_6 - 0x40)
    *(eax_11 - 0x30) = *(ecx_6 - 0x30)
    *(eax_11 - 0x20) = *(ecx_6 - 0x20)
    *(eax_11 - 0x10) = *(ecx_6 - 0x10)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int32_t var_109c = *(eax_4 + 0x106c)
var_30 = sub_5a0bf0
int32_t var_34_1 = 6
var_14_1.b = 2
void var_1098
`eh vector vbase constructor iterator'(&var_1098, 0x10, var_34_1, var_30)
var_14_1.b = 0
void var_e0
sub_6347a0(&var_2108, &var_e0)
var_30 = 0f
uint32_t var_34_2 = 0
int32_t edi_3 = 0
uint32_t var_210c = sub_67cf80(&var_30, var_34_1, &var_e0, &var_30, var_34_2, var_30)

if (var_34_2 s> 0)
    void* esi_3 = &var_e0
    
    do
        sub_64e810(esi_3)
        edi_3 += 1
        esi_3 += 4
    while (edi_3 s< var_34_2)

int32_t eax_15
int32_t edx_4
eax_15, edx_4 = sub_5a0e20()
var_30 = 1.40129846e-45f
uint32_t _Count = sub_6a9660(edx_4, edx_4, eax_15, var_30)
int32_t eax_19

if (sub_6a9450(1) * eax_15 s>= 4)
    eax_19 = sub_6a9450(1) * eax_15
else
    eax_19 = 4

data_bf17c8 = eax_15
data_bf17cc = edx_4
data_bf17d0 = eax_19
data_bf17d4 = 1
int32_t var_34_3
char const* const ecx_13

if (_Count s<= 0)
    var_30 = "XMalloc"
    var_34_3 = 0x3d
    ecx_13 = "size > 0"
else if (_Count s< 0x77359400)
    var_30 = 2.24207754e-44f
    eax_19 = _aligned_malloc(_Count, var_30)
    
    if (eax_19 != 0)
        bool cond:1 = data_bf17a4 != 0
        data_bf17c4 = eax_19
        
        if (not(cond:1))
            var_30 = 1.43492963e-42f
            InitializeCriticalSectionAndSpinCount(&data_bf17a8, var_30)
            data_bf17a4 = 1
        
        var_30 = &data_bf17a8
        EnterCriticalSection(var_30)
        int32_t* ecx_14 = data_147b070
        var_30 = &data_bf17c4
        (*(*ecx_14 + 0x84))(var_210c, var_30, eax_2)
        sub_69ec60(var_210c)
        sub_63d8d0(&data_bf17c0, arg2)
        uint32_t* lpThreadId = nullptr
        enum THREAD_CREATION_FLAGS dwCreationFlags = THREAD_CREATE_RUN_IMMEDIATELY
        int32_t lpParameter = 0
        int32_t (* lpStartAddress)() = sub_635ab0
        uint32_t dwStackSize = 0x100000
        SECURITY_ATTRIBUTES* lpThreadAttributes = nullptr
        data_bf17a5 = 1
        data_bf17d8 = CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, 
            dwCreationFlags, lpThreadId)
        int32_t var_14_2 = 3
        uint32_t result = `eh vector vbase constructor iterator'(&var_2108, 0x10, 6, sub_5a0bf0)
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    var_30 = "XMalloc"
    var_34_3 = 0x57
    ecx_13 = "pBuffer"
else
    var_30 = "XMalloc"
    var_34_3 = 0x3e
    ecx_13 = "size < 2000000000"

sub_63b870(eax_19, &data_801800, ecx_13, "C:\x\ax2017\Engine\xMemory.cpp", var_34_3, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn

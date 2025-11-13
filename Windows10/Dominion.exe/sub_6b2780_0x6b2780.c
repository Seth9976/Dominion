// 函数: sub_6b2780
// 地址: 0x6b2780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fda1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_254 = ebx
int32_t esi
int32_t var_258 = esi
int32_t var_260[0x2]
var_260[1] = arg4
int32_t __saved_ebp
var_260[0] = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg3
__alloca_probe_16((arg6[2] << 3) + 0x18)
int32_t ebx_1 = 2
int32_t (* pDefines)[0x2] = &var_260
var_260[0] = "HAVE_DX11"
var_260[1] = &data_8737cc
char const* const var_258_1 = "HAVE_RIFT"
void* const var_254_1 = &data_8737cc
int32_t* i = *arg6

while (i != 0)
    char* eax_7 = *i
    int32_t* i_2 = i
    i = i[2]
    char* const ecx = &data_801800
    
    if (eax_7 != 0)
        ecx = eax_7
    
    (&var_260)[ebx_1][0] = ecx
    char* const ecx_1 = &data_801800
    char* eax_8 = i_2[1]
    
    if (eax_8 != 0)
        ecx_1 = eax_8
    
    var_25c
    *(&var_25c + (ebx_1 << 3)) = ecx_1
    ebx_1 += 1

__builtin_memset(&(&var_260)[ebx_1], 0, 8)
struct ID3DBlob* ppCode_3
char const* const pTarget

if (arg5 != 1)
    if (arg5 != 0)
        ppCode_3 = "Dx11CompileShader"
        sub_63b870(arg5, &data_801800, "Halt", "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0xa44, 
            ppCode_3)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    pTarget = "vs_4_0"
else
    pTarget = "ps_4_0"

void** const include = &data_87c7d0
struct ID3DBlob ppCode
struct ID3DBlob ppCode_9
char* ebx_2
HRESULT esi_3

if (arg9 == 0)
    char* ecx_21 = edi
    ebx_2 = "memory_shader"
    int32_t eax_9
    
    do
        eax_9.b = *ecx_21
        ecx_21 = &ecx_21[1]
    while (eax_9.b != 0)
    ppCode_3 = &ppCode_9
    esi_3 = D3DCompile(edi, ecx_21 - &ecx_21[1], "memory_shader", pDefines, &include, arg2, 
        pTarget, 0x1000, 0, &ppCode, ppCode_3)
else
    struct ID3DBlob* ppCode_10
    ppCode_3 = sub_6c4220(&ppCode_10, edi)
    int32_t var_8_1 = 0
    struct ID3DBlob* ppCode_4 = ppCode_10
    ppCode_3 = ppCode_4
    
    if (ppCode_4 != 0 && ppCode_4->vtable.b != 0)
        char* eax_10 = sub_63d4e0(&ppCode_3)
        *(eax_10 + 4) += 1
    
    char* const var_22c
    sub_6c5250(&var_22c)
    var_8_1.b = 1
    char* esi_2 = var_22c
    struct ID3DBlob var_224 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_11 = sub_63d4e0(&var_224)
        *(eax_11 + 4) += 1
    
    var_8_1.b = 2
    int32_t* ecx_7 = data_147d094
    ppCode_3 = &var_224
    sub_63d850(ecx_7, ppCode_3)
    var_8_1.b = 3
    int32_t* eax_12
    
    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
        eax_12 = sub_63d4e0(&var_224)
        int32_t temp0_1 = eax_12[1]
        eax_12[1] -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_12, eax_12[3] + 0x10)
    
    char* ecx_10 = edi
    var_8_1.b = 1
    ebx_2 = edi
    
    do
        eax_12.b = *ecx_10
        ecx_10 = &ecx_10[1]
    while (eax_12.b != 0)
    
    ppCode_3 = ecx_10 - &ecx_10[1]
    wchar16 fileName[0x104]
    mbstowcs(&fileName, edi, ppCode_3)
    void* ecx_12 = &edi[1]
    char i_1
    
    do
        i_1 = *edi
        edi = &edi[1]
    while (i_1 != 0)
    
    if ((edi - ecx_12) * 2 u>= 0x208)
        ___report_rangecheckfailure()
        noreturn
    
    fileName[edi - ecx_12] = 0
    ppCode_3 = &ppCode_9
    esi_3 = D3DCompileFromFile(&fileName, pDefines, &include, arg2, pTarget, 0x1000, 0, &ppCode, 
        ppCode_3)
    sub_63d720(&var_224, &data_801800)
    var_8_1.b = 4
    int32_t* ecx_14 = data_147d094
    ppCode_3 = &var_224
    sub_63d850(ecx_14, ppCode_3)
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        struct ID3DBlob eax_14 = var_224
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_63d4e0(&var_224)
            int32_t temp1_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
    
    var_8_1.b = 6
    
    if (data_cf65bc != 0)
        char* eax_16 = var_22c
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_63d4e0(&var_22c)
            int32_t temp2_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                var_22c = &data_801800
    
    int32_t var_8_2 = 7
    
    if (data_cf65bc != 0)
        struct ID3DBlob* ppCode_11 = ppCode_10
        
        if (ppCode_11 != 0 && ppCode_11->vtable.b != 0)
            char* eax_18 = sub_63d4e0(&ppCode_10)
            int32_t temp3_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                ppCode_10 = &data_801800
    
    int32_t var_8_3 = 0xffffffff

uint32_t result

if (esi_3 s>= 0)
    struct ID3DBlob ppCode_7 = ppCode_9
    
    if (ppCode_7 != 0)
        int32_t eax_21 = *ppCode_7
        ppCode_3 = ppCode_7
        ppCode_3 = (*(eax_21 + 0xc))(ppCode_3)
        char* var_268_4 = ebx_2
        sub_63b5f0("Dx11 compile warning on %s:\n%s\n")
        struct ID3DBlob ppCode_8 = ppCode_9
        
        if (ppCode_8 != 0)
            int32_t eax_23 = *ppCode_8
            ppCode_3 = ppCode_8
            (*(eax_23 + 8))(ppCode_3)
    
    struct ID3DBlob ppCode_1 = ppCode
    ppCode_3 = ppCode_1
    int32_t eax_24 = (*(*ppCode_1 + 0xc))(ppCode_3)
    struct ID3DBlob ppCode_2 = ppCode
    ppCode_3 = ppCode_2
    uint32_t ppCode_6 = (*(*ppCode_2 + 0x10))(ppCode_3)
    *arg8 = ppCode_6
    int32_t eax_26 = sub_687730(ppCode_6)
    ppCode_3 = ppCode_6
    *arg7 = eax_26
    memcpy(eax_26, eax_24, ppCode_3)
    result.b = 1
else
    struct ID3DBlob ppCode_5 = ppCode_9
    ppCode_3 = ppCode_5
    ppCode_3 = (*(*ppCode_5 + 0xc))(ppCode_3)
    char* var_268_3 = ebx_2
    sub_63b5f0("Dx11 compile error on %s:\n%s\n")
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
var_260[1]
CookieCheckFunction(result)
return result

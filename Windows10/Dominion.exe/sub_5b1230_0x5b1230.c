// 函数: sub_5b1230
// 地址: 0x5b1230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?Create@UMSFreeThreadProxyFactory@details@Concurrency@@EAEPAVUMSFreeThreadProxy@23@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_54
char** eax_3
int32_t edx
eax_3, edx = sub_5bbeb0(&var_54, "parameters")
int32_t* eax_4 = sub_5b10e0(eax_3, edx, arg1, var_54)
int32_t edx_1 = int.d(fconvert.t(**eax_4))
*(arg1 + 0x40cc0) = edx_1
*(arg1 + 0x40cc4) = int.d(fconvert.t(*(*eax_4 + 4)))
*(arg1 + 0x40cc8) = int.d(fconvert.t(*(*eax_4 + 8)))
*(arg1 + 0x40ccc) = int.d(fconvert.t(*(*eax_4 + 0xc)))

if (edx_1 s< 0xf)
    *(arg1 + 0x40cc8) = 4

char** eax_9
int32_t edx_2
eax_9, edx_2 = sub_5bbeb0(&var_54, "card_pre/kernel")
void* ecx_7 = nullptr
int32_t var_1c = 0
int32_t var_18 = 0
int32_t esi_1 = *(sub_5b0f90(eax_9, edx_2, arg1) + 8)
int32_t var_14 = 0
int32_t var_8_1 = 0

if (esi_1 != 0)
    if (divs.dp.d(0x7fffffff, esi_1) s< 0x32b)
        sub_5b0890()
        noreturn
    
    int32_t eax_13 = esi_1 * 0x32b
    
    if (eax_13 != 0)
        if (eax_13 s<= 0)
            ecx_7 = nullptr
        else
            ecx_7 = sub_5c0320(eax_13)

int32_t var_8_2 = 0xffffffff
void* eax_15 = *(arg1 + 0x40004)
*(arg1 + 0x40004) = ecx_7
*(arg1 + 0x40008) = 0x32b
*(arg1 + 0x4000c) = esi_1

if (eax_15 != 0)
    free(*(eax_15 - 4))

int32_t edx_6 = *(arg1 + 0x4000c) * *(arg1 + 0x40008)
int32_t* ecx_9 = *(arg1 + 0x40004)
int32_t* var_40_2 = &var_14
var_14 = 0
sub_5c3cd0(&var_14, edx_6, ecx_9, var_40_2)
char** eax_17
int32_t edx_7
eax_17, edx_7 = sub_5bbeb0(&var_54, "policy_dense/kernel")
int32_t esi_2 = *(sub_5b0f90(eax_17, edx_7, arg1) + 4)
void* eax_19 = nullptr
int32_t var_18_1 = 0
var_14 = 0
int32_t var_8_3 = 1

if (esi_2 != 0)
    if (esi_2 s<= 0)
        eax_19 = nullptr
    else
        eax_19 = sub_5c0320(esi_2)

int32_t var_8_4 = 0xffffffff
void* ecx_13 = *(arg1 + 0x40010)
*(arg1 + 0x40010) = eax_19
*(arg1 + 0x40014) = esi_2

if (ecx_13 != 0)
    free(*(ecx_13 - 4))

char** eax_20
int32_t edx_8
eax_20, edx_8 = sub_5bbeb0(&var_54, "card_embed/embeddings")
void* eax_21 = sub_5b0f90(eax_20, edx_8, arg1)
char** eax_22
int32_t edx_9
eax_22, edx_9 = sub_5bbeb0(&var_54, "card_pre/kernel")
void* eax_23 = sub_5b0f90(eax_22, edx_9, arg1)
int32_t ecx_18 = *(eax_21 + 4)
void* esi_4 = nullptr
var_14 = ecx_18
int32_t var_28 = 0
int32_t ebx = *(eax_23 + 8)
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_8_5 = 2

if (ecx_18 != 0 && ebx != 0 && ecx_18 s> divs.dp.d(0x7fffffff, ebx))
    sub_5b0890()
    noreturn

int32_t ecx_19 = ecx_18 * ebx

if (ecx_19 != 0)
    if (ecx_19 s<= 0)
        esi_4 = nullptr
    else
        esi_4 = sub_5c0320(ecx_19)

void* ecx_20 = *(arg1 + 0x40018)
int32_t eax_27 = var_14
*(arg1 + 0x40018) = esi_4
*(arg1 + 0x4001c) = eax_27
*(arg1 + 0x40020) = ebx

if (ecx_20 != 0)
    free(*(ecx_20 - 4))

int32_t edx_13 = *(arg1 + 0x40020) * *(arg1 + 0x4001c)
int32_t* ecx_21 = *(arg1 + 0x40018)
int32_t* var_40_5 = &var_14
var_14 = 0
int32_t* result = sub_5c3cd0(&var_14, edx_13, ecx_21, var_40_5)
fsbase->NtTib.ExceptionList = ExceptionList
return result

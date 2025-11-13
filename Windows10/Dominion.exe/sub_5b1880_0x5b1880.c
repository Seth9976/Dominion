// 函数: sub_5b1880
// 地址: 0x5b1880
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = __ehhandler$___std_fs_copy_file@12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg2
int32_t* var_2c = edi
float xmm1 = *(*(arg1 + 0x40018) + ((*(arg1 + 0x40020) * *edi) << 2))
xmm1 f- 0
void* result
result:1.b =
    (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    char* var_cc
    char** eax_4
    int32_t edx
    eax_4, edx = sub_5bbeb0(&var_cc, "card_embed/embeddings")
    int32_t* eax_5 = sub_5b0f90(eax_4, edx, arg1, var_cc)
    char** eax_6
    int32_t edx_1
    eax_6, edx_1 = sub_5bbeb0(&var_cc, "card_pre/kernel")
    int32_t esi_2 = *(sub_5b0f90(eax_6, edx_1, arg1) + 4)
    void* result_2 = nullptr
    void* result_1 = nullptr
    int32_t var_3c_1 = 0
    int32_t var_14_1 = 0
    
    if (esi_2 != 0)
        if (divs.dp.d(0x7fffffff, esi_2) s< 1)
            sub_5b0890()
            noreturn
        
        if (esi_2 s<= 0)
            result_2 = nullptr
        else
            result_2 = sub_5c0320(esi_2)
        
        result_1 = result_2
    
    int32_t var_3c_2 = esi_2
    int32_t* var_44
    int32_t* var_b8_1 = &var_44
    var_44 = nullptr
    sub_5c3cd0(result_2, esi_2, result_2, var_b8_1)
    int32_t var_14_2 = 1
    int32_t var_6c_1 = 0
    int32_t var_68_1 = 0
    var_14_2.b = 2
    int32_t esi_3 = eax_5[2]
    void* result_3 = result_1
    var_44 = *eax_5 + (*edi << 2)
    int32_t eax_12 = eax_5[1]
    int32_t edx_6 = 0
    
    if (esi_3 s>= 4)
        int32_t* edi_1 = var_44
        void* ecx_7 = result_3 + 8
        int32_t* var_34_1 = &edi_1[eax_12 * 3]
        int32_t* var_24_1 = &edi_1[eax_12 * 2]
        int32_t* var_28_1 = &edi_1[eax_12]
        int32_t i_5 = ((esi_3 - 4) u>> 2) + 1
        int32_t* edx_9 = var_44
        int32_t i
        
        do
            ecx_7 += 0x10
            *(ecx_7 - 0x18) = *edx_9
            edx_9 = &edx_9[eax_12 * 4]
            int32_t* eax_22 = var_28_1
            var_28_1 = &var_28_1[eax_12 * 4]
            *(ecx_7 - 0x14) = *eax_22
            int32_t* eax_24 = var_24_1
            var_24_1 = &var_24_1[eax_12 * 4]
            *(ecx_7 - 0x10) = *eax_24
            int32_t* eax_26 = var_34_1
            var_34_1 = &var_34_1[eax_12 * 4]
            *(ecx_7 - 0xc) = *eax_26
            i = i_5
            i_5 -= 1
        while (i != 1)
        edx_6 = (((esi_3 - 4) u>> 2) + 1) << 2
        edi = var_2c
        
        if (edx_6 s< esi_3)
            goto label_5b1a43
    else if (esi_3 s> 0)
    label_5b1a43:
        void* ecx_10 = &var_44[eax_12 * edx_6]
        
        do
            int32_t eax_29 = *ecx_10
            ecx_10 += eax_12 << 2
            *(result_3 + (edx_6 << 2)) = eax_29
            edx_6 += 1
        while (edx_6 s< esi_3)
        
        edi = var_2c
    
    int32_t var_24_2 = 2
    int32_t* eax_31 = 0x29
    int32_t ecx_12 = eax_5[2] + 0xc
    int32_t var_28_2 = ecx_12
    
    if (*(arg1 + 0x40cc0) s>= 0xc)
        eax_31 = 0x32
    
    int32_t i_1 = 0
    var_2c = eax_31
    int32_t var_34_2 = ecx_12 << 2
    void invalid
    int32_t ecx_27
    
    do
        *(var_34_2 + result_1) = __ultof3(__aullshr(edi[2], edi[3], i_1.b) & 1, 0, invalid, eax_2)
        *(result_1 + (var_28_2 << 2) + 4) =
            __ultof3(__aullshr(edi[2], edi[3], var_24_2.b - 1) & 1, 0, invalid)
        *(result_1 + (var_28_2 << 2) + 8) =
            __ultof3(__aullshr(edi[2], edi[3], var_24_2.b) & 1, 0, invalid)
        int32_t xmm0_4 = __ultof3(__aullshr(edi[2], edi[3], var_24_2.b + 1) & 1, 0, invalid)
        i_1 += 4
        var_24_2 += 4
        var_34_2 += 0x10
        *(result_1 + (var_28_2 << 2) + 0xc) = xmm0_4
        ecx_27 = var_28_2 + 4
        var_28_2 = ecx_27
    while (i_1 s< eax_31 - 3)
    
    if (i_1 s< var_2c)
        void* var_30_2 = ecx_27 << 2
        
        do
            int32_t xmm0_5 = __ultof3(__aullshr(edi[2], edi[3], i_1.b) & 1, 0, invalid)
            int32_t* ecx_30 = var_30_2
            i_1 += 1
            *(ecx_30 + result_1) = xmm0_5
            var_30_2 = &ecx_30[1]
        while (i_1 s< var_2c)
    
    sub_5bbeb0(&var_cc, "card_pre")
    void* var_5c
    int32_t** eax_56 = sub_5bc6a0(&result_1, arg1, &var_5c, &result_1, 0)
    int32_t i_3 = *(arg1 + 0x40020)
    int32_t edi_3 = *edi
    int32_t* eax_57 = *eax_56
    int32_t ecx_34 = *(arg1 + 0x40018)
    void* var_80 = arg1 + 0x40018
    var_2c = eax_57
    int32_t var_78_1 = 0
    int32_t ecx_35 = ecx_34 + ((i_3 * edi_3) << 2)
    int32_t i_2 = i_3
    int32_t i_7 = i_3
    int32_t i_6 = i_3
    int32_t var_70 = ecx_35
    int32_t i_8 = i_3
    var_80 = &var_70
    int128_t var_a8 = ecx_35.o
    int32_t** var_7c_2 = &var_2c
    void var_45
    void* var_78_2 = &var_45
    int64_t var_98_1 = edi_3.q
    int128_t* var_74_1 = &var_a8
    
    if ((ecx_35.b & 3) == 0)
        int32_t i_4 = neg.d(ecx_35 u>> 2) & 3
        
        if (i_4 s< i_3)
            i_2 = i_4
    
    int32_t eax_60
    int32_t edx_20
    edx_20:eax_60 = sx.q(i_3 - i_2)
    int32_t eax_62 = (eax_60 + (edx_20 & 3)) s>> 2
    int32_t edi_4 = i_2 + (eax_62 << 2)
    int32_t eax_63 = sub_5c5320(eax_62, 0, &var_80, i_2)
    
    for (; i_2 s< edi_4; i_2 += 4)
        eax_63 = var_70
        *(eax_63 + (i_2 << 2)) = *(var_2c + (i_2 << 2))
    
    sub_5c5320(eax_63, edi_4, &var_80, i_3)
    void* eax_65 = var_5c
    
    if (eax_65 != 0)
        free(*(eax_65 - 4))
    
    result = result_1
    
    if (result != 0)
        result = free(*(result - 4))

fsbase->NtTib.ExceptionList = ExceptionList
return result

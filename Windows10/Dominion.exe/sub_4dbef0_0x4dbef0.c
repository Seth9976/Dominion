// 函数: sub_4dbef0
// 地址: 0x4dbef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763d00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx
int32_t edx
ecx, edx = __chkstk(0x334c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx_1 = ecx
void* var_19c8 = edx_1
void* result_9 = *(edx_1 + 0x11a0)
void* result_5 = 6

if (result_9 s< 6)
    result_5 = result_9

int32_t esi = 0
void* result_1 = result_5
*(edx_1 + 0x11a0) = result_5

if (arg1 s> 0)
    do
        if (sub_4db700(*(edx + (esi << 2)), 3) != 0)
            edx_1 = var_19c8
            goto label_4dbf93
        
        esi += 1
    while (esi s< arg1)
    
    result_5 = result_1
    edx_1 = var_19c8

void* result_10 = 4

if (result_5 s< 4)
    result_10 = result_5

*(edx_1 + 0x11a0) = result_10
label_4dbf93:
*(edx_1 + 0x28)
*(edx_1 + 0x30)
void var_335c
void var_19a4
void var_fdc
sub_4db960(memcpy(&var_19a4, sub_4deeb0(&var_335c), 0x1990), edx, &var_fdc, arg1)
int32_t esi_1 = 0
int32_t esi_2

if (arg1 s> 0)
    while (true)
        if (sub_4db700(*(edx + (esi_1 << 2)), 6) != 0)
            esi_2 = 0
            break
        
        esi_1 += 1
        
        if (esi_1 s>= arg1)
            goto label_4dbffa
    
    goto label_4dc018

label_4dbffa:
esi_2 = 0
int32_t var_da8_1 = 0

if (arg1 s<= 0)
label_4dc026:
    int32_t var_da4_1 = 0
else
label_4dc018:
    
    while (sub_4db700(*(edx + (esi_2 << 2)), 9) == 0)
        esi_2 += 1
        
        if (esi_2 s>= arg1)
            goto label_4dc026

void var_1994
void* eax_9 = &var_1994
void* var_19ac = nullptr
void* var_19a8 = &var_1994
void* esi_3 = &var_19a4

while (*esi_3 != 0)
    sub_4dbbd0(eax_9, edx, esi_3, arg1)
    void* eax_13
    void* ecx_9
    
    if (*esi_3 != 0)
        eax_13 = var_19ac
        ecx_9 = var_19a8
    else
        memmove(esi_3, var_19a8, (9 - var_19ac) << 4)
        eax_13 = var_19ac - 1
        esi_3 -= 0x10
        int32_t var_1914_1 = 0
        ecx_9 = var_19a8 - 0x10
    
    eax_9 = eax_13 + 1
    esi_3 += 0x10
    var_19ac = eax_9
    var_19a8 = ecx_9 + 0x10
    
    if (eax_9 s>= 0xa)
        break

void* result_8 = nullptr
void var_18f4
void* var_19ac_1 = &var_18f4
void var_1904
void* result_6 = &var_1904
void var_18bc
void* result_3 = &var_18bc
uint32_t count = 0xd8
result_1 = &var_1904
void* var_19a8_1 = &var_18bc

while (*result_6 != 0)
    sub_4dbbd0(result_3, edx, result_6, arg1)
    void* edx_6 = var_19ac_1
    int32_t i_2 = 0
    void* var_19c4_1 = edx_6
    int32_t i
    
    do
        int32_t ecx_12 = *edx_6
        int32_t var_19b4_1 = ecx_12
        
        if (ecx_12 == 0)
            break
        
        if (ecx_12 - 0x200 u>= 0x100)
            int32_t esi_4 = 0
            
            if (arg1 s> 0)
                do
                    if (sub_4db7a0(*(edx + (esi_4 << 2)), ecx_12) != 0)
                        edx_6 = var_19c4_1
                        goto label_4dc185
                    
                    ecx_12 = var_19b4_1
                    esi_4 += 1
                while (esi_4 s< arg1)
                
                edx_6 = var_19c4_1
            
            *edx_6 = 0
        
    label_4dc185:
        edx_6 += 4
        i = i_2 + 1
        var_19c4_1 = edx_6
        i_2 = i
    while (i s< 0xe)
    void* result_7 = result_1
    void* result_11
    uint32_t count_1
    void* edx_9
    
    if (*result_7 != 0)
        result_11 = result_8
        count_1 = count
        edx_9 = var_19a8_1
    else
        memmove(result_7, var_19a8_1, count)
        result_11 = result_8 - 1
        edx_9 = var_19a8_1 - 0x48
        var_19ac_1 -= 0x48
        result_7 -= 0x48
        int32_t var_182c_1 = 0
        count_1 = count + 0x48
    
    var_19ac_1 += 0x48
    result_3 = result_11 + 1
    result_8 = result_3
    result_6 = result_7 + 0x48
    var_19a8_1 = edx_9 + 0x48
    result_1 = result_6
    count = count_1 - 0x48
    
    if (result_3 s>= 4)
        break

result_1 = nullptr
void var_17e4
int32_t* esi_5 = &var_17e4

while (*esi_5 != 0)
    sub_4dbbd0(result_3, edx, esi_5, arg1)
    result_3 = result_1 + 1
    esi_5 = &esi_5[4]
    result_1 = result_3
    
    if (result_3 s>= 0x6b)
        break

int32_t ecx_17 = 0
void var_294
void* eax_19 = &var_294
int32_t var_19a8_2 = 0
void* var_19ac_2 = &var_294

while (*eax_19 != 0)
    int32_t eax_20 = *(eax_19 + 4)
    int32_t var_19b4_2 = eax_20
    void* eax_22
    
    if (eax_20 == 0)
    label_4dc2d5:
        int32_t eax_23 = sub_516f30(*var_19ac_2)
        int32_t i_1 = 0
        int32_t ecx_21 = eax_23
        
        do
            if (*(ecx_21 + 0xc) == 7)
                int32_t ecx_32 = *(i_1 * 0x26c + eax_23 + 0x270)
                
                if (ecx_32 == 0)
                    goto label_4dc2f6
                
                void* result_4 = nullptr
                result_1 = nullptr
                
                if (ecx_32 s> 0)
                    do
                        int32_t esi_9 = 0
                        int32_t ecx_34 = *(ecx_21 + 0x10 + (result_4 << 2))
                        int32_t var_19c0_1 = ecx_34
                        
                        if (arg1 s> 0)
                            do
                                if (sub_4db700(*(edx + (esi_9 << 2)), ecx_34) != 0)
                                    goto label_4dc2f6
                                
                                ecx_34 = var_19c0_1
                                esi_9 += 1
                            while (esi_9 s< arg1)
                            
                            result_4 = result_1
                        
                        result_4 += 1
                        result_1 = result_4
                    while (result_4 s< ecx_32)
                
                ecx_17 = var_19a8_2
                goto label_4dc488
            
            i_1 += 1
            ecx_21 += 0x26c
        while (i_1 s< 4)
        
    label_4dc2f6:
        eax_22 = var_19ac_2
        ecx_17 = var_19a8_2
    else
        int32_t esi_6 = 0
        
        if (arg1 s<= 0)
        label_4dc488:
            eax_22 = var_19ac_2
            *eax_22 = 0
        else
            do
                if (sub_4db7a0(*(edx + (esi_6 << 2)), eax_20) != 0)
                    goto label_4dc2d5
                
                eax_20 = var_19b4_2
                esi_6 += 1
            while (esi_6 s< arg1)
            
            eax_22 = var_19ac_2
            ecx_17 = var_19a8_2
            *eax_22 = 0
    
    ecx_17 += 1
    eax_19 = eax_22 + 0x14
    var_19a8_2 = ecx_17
    var_19ac_2 = eax_19
    
    if (ecx_17 s>= 0x20)
        break

int32_t var_24_7 = 0
char** eax_24 = sub_4e0ff0(eax_19, &var_19a4, &result_1, *(var_19c8 + 0x28))
int32_t var_8_1 = 0
char* result_2 = &data_801800
char* edx_14 = *(var_19c8 + 0x30)
char* const ecx_23 = &data_801800
char* result = *eax_24

if (edx_14 != 0)
    ecx_23 = edx_14

if (result != 0)
    result_2 = result

if (ecx_23 != result_2)
    if (data_cf65bc != 0 && edx_14 != 0 && *edx_14 != 0)
        char* eax_25 = sub_63d4e0(var_19c8 + 0x30)
        int32_t temp1_1 = *(eax_25 + 4)
        *(eax_25 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
            *(var_19c8 + 0x30) = &data_801800
    
    result = *eax_24
    *(var_19c8 + 0x30) = result
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(var_19c8 + 0x30)
        *(result + 4) += 1

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result

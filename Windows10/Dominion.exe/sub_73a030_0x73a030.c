// 函数: sub_73a030
// 地址: 0x73a030
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772efd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const i_8 = &data_801800
char* result_2
char* result_4 = result_2
char* const result_11 = &data_801800
char* const i_1 = 0x2e

if (result_4 != 0)
    result_11 = result_4

char* const result_3 = result_11
int32_t eax_3 = strrchr(result_3, i_1.b)

if (eax_3 == 0)
    i_1 = "AtlasMakerMakeNoScan"
    result_3 = 0x7cc
    sub_63b870(eax_3, &data_801800, "ext", "C:\x\ax2017\Engine\Editor\AtlasMaker.cpp", result_3, 
        i_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char const* const i_5

if (data_cc8ddd != 0)
    i_5 = "xbin/ios/"
else if (data_cc8ddc == 0)
    i_5 = "xbin/"
else
    i_5 = "xbin/web/"

i_1 = i_5
var_8_1.b = 0
result_3 = "%satlases/"
uint32_t result_1
sub_63df30(&result_1, result_3)
var_8_1.b = 6
char* const result_5 = result_2
void* i_7

if (result_5 != 0)
    i_7 = eax_3 - result_5
else
    i_7 = eax_3 - &data_801800
    result_5 = &data_801800

i_1 = i_7
result_3 = result_5
sub_63db30(&result_1, result_3, i_1)
char* result_6 = result_2
char* const result_12 = &data_801800
char* ecx_1 = data_1777618
i_1 = nullptr

if (result_6 != 0)
    result_12 = result_6

result_3 = nullptr
int32_t** i_9 = sub_6a70c0(result_6, result_12, ecx_1, result_3)
uint32_t result

if (i_9 != 0)
    char* i_3 = nullptr
    char* i_2 = nullptr
    int32_t ebx_1 = 0
    int32_t var_2c_1 = 0
    int32_t var_28_1 = 0
    var_8_1.b = 9
    char* i = nullptr
    int32_t* eax_4 = data_147ac2c
    int32_t* eax_5 = *eax_4
    char* j
    
    do
        char* j_1 = *eax_5
        
        if (j_1 != 0)
            j = j_1
            
            do
                i_1 = &j
                int32_t* eax_6
                eax_6, i = sub_6a01a0(i_1)
                void* eax_7 = eax_6[1]
                int32_t eax_8 = *(eax_7 + 4)
                
                if (eax_8 == 3 || eax_8 == 0x12)
                    char** eax_9 = sub_64bfd0(0xc)
                    eax_9[3] = &eax_9[3][1]
                    
                    if (*eax_9 == 0)
                        sub_64be70(eax_9)
                    
                    i = *eax_9
                    *eax_9 = *i
                    *i = eax_7
                    *(i + 4) = 0
                    *(i + 8) = i_3
                    
                    if (i_3 == 0)
                        i_2 = i
                    else
                        *(i_3 + 4) = i
                    
                    ebx_1 += 1
                    i_3 = i
                    int32_t var_28_2 = ebx_1
                    char* i_4 = i_3
            while (j != 0)
            
            break
        
        i = &i[1]
        eax_5 = &eax_5[1]
    while (i u<= eax_4[1])
    
    int32_t** i_6 = i_9
    j = nullptr
    int32_t* edi = *i_6
    
    if (edi[2] s> 0)
        int32_t esi_3 = 0
        
        do
            int32_t eax_12 = *edi
            i_1 = i
            char* const* ecx_5 = &i_1
            bool cond:2_1 = *(eax_12 + esi_3 + 0x20) != 1
            i_1 = result_1
            uint32_t result_8 = result_1
            
            if (cond:2_1)
                char* const* var_24_1 = &i_1
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_17 = sub_63d4e0(ecx_5)
                    *(eax_17 + 4) += 1
                
                result_3 = &i_1
                var_8_1.b = 0xb
                int32_t* ebx_5 = *edi + esi_3
                result_3 = result_2
                char* result_10 = result_2
                
                if (result_10 != 0 && *result_10 != 0)
                    char* eax_19 = sub_63d4e0(&result_3)
                    *(eax_19 + 4) += 1
                
                var_8_1.b = 9
                sub_7392c0(ebx_5, &i_2)
            else
                char* const* var_20_2 = &i_1
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_14 = sub_63d4e0(ecx_5)
                    *(eax_14 + 4) += 1
                
                result_3 = &i_1
                var_8_1.b = 0xa
                int32_t* ebx_3 = *edi + esi_3
                result_3 = result_2
                char* result_9 = result_2
                
                if (result_9 != 0 && *result_9 != 0)
                    char* eax_16 = sub_63d4e0(&result_3)
                    *(eax_16 + 4) += 1
                
                var_8_1.b = 9
                sub_739a20(ebx_3, &i_2)
            
            i = &j[1]
            esi_3 += 0x28
            j = i
        while (i s< edi[2])
        
        i_6 = i_9
    
    if ((i_6[2].b & 1) == 0)
        sub_69cee0(*i_6, i_6[3])
        *i_6 = nullptr
    
    char** ecx_12 = i_6[1]
    
    if (ecx_12 != 0)
        sub_6a3220(ecx_12)
        i_6[1] = 0
    
    i_1 = i_6
    _aligned_free(i_1)
    i_1 = "AtlasMaker: done."
    sub_63b5f0(i_1)
    var_8_1.b = 0xc
    result = sub_4d4b30(&i_2)
    var_8_1.b = 0xd
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                result_1 = &data_801800
    
    int32_t var_8_3 = 0xe
else
    char* result_7 = result_2
    
    if (result_7 != 0)
        i_8 = result_7
    
    i_1 = i_8
    result_3 = "failed to read %s"
    result = sub_63b5f0(result_3)
    var_8_1.b = 7
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                result_1 = &data_801800
    
    int32_t var_8_2 = 8

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result

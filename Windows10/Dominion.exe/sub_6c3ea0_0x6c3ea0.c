// 函数: sub_6c3ea0
// 地址: 0x6c3ea0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t j = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = data_147ac2c

if (esi != 0)
    int32_t i = 0
    int32_t* ecx = *esi
    
    do
        int32_t j_1 = *ecx
        
        if (j_1 != 0)
            j = j_1
            
            do
                sub_69ed20(sub_6a01a0(&j)[1])
            while (j != 0)
            
            esi = data_147ac2c
            break
        
        i += 1
        ecx = &ecx[1]
    while (i u<= esi[1])
    
    sub_4e9e80(esi)
    int32_t* ecx_3 = data_147ac2c
    int32_t* i_4 = ecx_3[4]
    void* ebx_2 = &ecx_3[3]
    
    if (i_4 != 0)
        int32_t* i_1
        
        do
            i_1 = *i_4
            _aligned_free(i_4)
            i_4 = i_1
        while (i_1 != 0)
        ecx_3 = data_147ac2c
    
    *ebx_2 = 0
    *(ebx_2 + 4) = 0
    *(ebx_2 + 0xc) = 0
    
    if (ecx_3 != 0)
        int32_t var_8_1 = 0
        sub_4e9e80(ecx_3)
        int32_t var_8_2 = 0xffffffff
        sub_64c080(data_147ac2c, 0x28)
        data_147ac2c = 0

int32_t* ecx_5 = data_147ac64
int32_t* i_5 = ecx_5[5]
void* ebx_3 = &ecx_5[4]

if (i_5 != 0)
    int32_t* i_2
    
    do
        i_2 = *i_5
        _aligned_free(i_5)
        i_5 = i_2
    while (i_2 != 0)
    ecx_5 = data_147ac64

*ebx_3 = 0
*(ebx_3 + 4) = 0
*(ebx_3 + 0xc) = 0
int32_t* ebx_4 = ecx_5
int32_t* i_6 = ebx_4[1]

if (i_6 != 0)
    int32_t* i_3
    
    do
        i_3 = *i_6
        _aligned_free(i_6)
        i_6 = i_3
    while (i_3 != 0)
    ecx_5 = data_147ac64

*ebx_4 = 0
ebx_4[1] = 0
ebx_4[3] = 0

if (ecx_5 != 0)
    _aligned_free(ecx_5)

int32_t eax_4 = data_147d2e4
int32_t esi_1 = 0

if (eax_4 s> 0)
    do
        void* ebx_5 = *((esi_1 << 2) + &data_147d2e8)
        int32_t ecx_6 = *(ebx_5 + 0xc)
        
        if (ecx_6 != 0)
            _aligned_free(ecx_6)
            eax_4 = data_147d2e4
        
        esi_1 += 1
        *(ebx_5 + 0xc) = 0
    while (esi_1 s< eax_4)

int32_t result = data_147b07c

if (result != 0)
    result = _aligned_free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result

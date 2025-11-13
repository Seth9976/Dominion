// 函数: sub_63f8b0
// 地址: 0x63f8b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_hermite@12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
(*(*data_cf65b8 + 4))(__security_cookie ^ &__saved_ebp)

if (*(data_cf65b4 + 0x2c) != 0)
    sub_687db0()

DeleteCriticalSection(data_147ac20 + 0x902c)
void* esi = data_147ac20
char* eax_7 = *(esi + 0x9028)

if (eax_7 != 0 && eax_7 != &data_801800)
    if (data_cf65bc != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(esi + 0x9028)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            *(esi + 0x9028) = &data_801800
    
    *(esi + 0x9028) = &data_801800

void* esi_1 = data_147ac20

if (esi_1 != 0)
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        char* eax_9 = *(esi_1 + 0x9028)
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_63d4e0(esi_1 + 0x9028)
            int32_t temp1_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                *(esi_1 + 0x9028) = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    sub_64c080(data_147ac20, 0x9044)
    data_147ac20 = 0

sub_6896b0()
CloseHandle(*(data_147ac28 + 0xc))
sub_69ea70(data_147ac28 + 0x10)
int32_t* esi_2 = data_147ac28

if (esi_2 != 0)
    int32_t var_8_3 = 1
    sub_69ea70(&esi_2[4])
    int32_t var_8_4 = 2
    sub_69ea70(esi_2)
    int32_t var_8_5 = 0xffffffff
    sub_64c080(data_147ac28, 0x2c)
    data_147ac28 = 0

int32_t* ecx_12 = data_147ac34

while (ecx_12[2] != 0)
    int32_t* edi_1 = *ecx_12
    void* eax_12 = edi_1[1]
    *ecx_12 = eax_12
    
    if (eax_12 == 0)
        ecx_12[1] = 0
    else
        *(eax_12 + 8) = 0
    
    void* esi_3 = *edi_1
    ecx_12[2] -= 1
    sub_64c080(edi_1, 0xc)
    ecx_12 = data_147ac34
    *(esi_3 + 0x1c) -= 1

int32_t* edi_2 = ecx_12
int32_t* i = *edi_2

if (i != 0)
    do
        int32_t* i_6 = i
        i = i[1]
        sub_64c080(i_6, 0xc)
    while (i != 0)
    
    ecx_12 = data_147ac34

edi_2[2] = 0
*edi_2 = 0
edi_2[1] = 0

if (ecx_12 != 0)
    int32_t var_8_6 = 3
    sub_4d4b30(ecx_12)
    int32_t var_8_7 = 0xffffffff
    sub_64c080(data_147ac34, 0xc)
    data_147ac34 = 0

int32_t* i_4 = data_147d2cc

if (i_4 != 0)
    int32_t* i_1
    
    do
        i_1 = *i_4
        _aligned_free(i_4)
        i_4 = i_1
    while (i_1 != 0)

data_147d2c8 = 0
data_147d2cc = 0
data_147d2d4 = 0
sub_6acc30()
int32_t* ecx_15 = data_147d1b0

if (ecx_15 != 0)
    (*(*ecx_15 + 8))()
    int32_t* ecx_16 = data_147d1b0
    
    if (ecx_16 != 0)
        (**ecx_16)(0)
        int32_t eax_15 = data_147d1b0
        
        if (eax_15 != 0)
            _aligned_free(eax_15)
    
    data_147d1b0 = 0
    data_147d1d8 = 0

int32_t* ecx_17 = data_147d2d8

if (ecx_17 != 0)
    (*(*ecx_17 + 0xc))()
    int32_t* ecx_18 = data_147d2d8
    
    if (ecx_18 != 0)
        (**ecx_18)(1)
    
    data_147d2d8 = 0

void* ecx_19 = data_caf244

if (ecx_19 != 0)
    void* esi_4 = nullptr
    
    while (true)
        if (esi_4 != 0)
            esi_4 += 0x1d8
        else
            esi_4 = ecx_19
        
        void* eax_19 = data_caf248 * 0x1d8 + ecx_19
        
        if (esi_4 u>= eax_19)
            break
        
        while ((*(esi_4 + 0x1d4) & 0xffff0000) == 0)
            esi_4 += 0x1d8
            
            if (esi_4 u>= eax_19)
                goto label_63fbda
        
        sub_697ed0(esi_4)
        int32_t ecx_22 = data_caf250
        data_caf250 = zx.d(*(esi_4 + 0x1d4))
        *(esi_4 + 0x1d4) = ecx_22
        data_caf254 -= 1
        ecx_19 = data_caf244
    
label_63fbda:
    data_caf248 = 0
    data_caf250 = 0
    
    if (ecx_19 != 0)
        _aligned_free(ecx_19)
    
    __builtin_memset(&data_caf244, 0, 0x14)
    data_caf25c = 0

void* ecx_20 = data_caf260

if (ecx_20 != 0)
    void* edx_5 = nullptr
    
    while (true)
        if (edx_5 != 0)
            edx_5 += 0x438
        else
            edx_5 = ecx_20
        
        void* eax_22 = data_caf264 * 0x438 + ecx_20
        
        if (edx_5 u>= eax_22)
            break
        
        while (true)
            int32_t esi_5 = *(edx_5 + 0x434)
            
            if ((esi_5 & 0xffff0000) != 0)
                int32_t ecx_24 = data_caf26c
                data_caf26c = zx.d(esi_5.w)
                *(edx_5 + 0x434) = ecx_24
                data_caf270 -= 1
                ecx_20 = data_caf260
                break
            
            edx_5 += 0x438
            
            if (edx_5 u>= eax_22)
                goto label_63fcae
    
label_63fcae:
    data_caf264 = 0
    data_caf26c = 0
    
    if (ecx_20 != 0)
        _aligned_free(ecx_20)
    
    __builtin_memset(&data_caf260, 0, 0x14)
    data_caf278 = 0

void* ecx_23 = data_c23ba8

if (ecx_23 != 0)
    void* esi_6 = nullptr
    
    while (true)
        if (esi_6 != 0)
            esi_6 += 0x18d0
        else
            esi_6 = ecx_23
        
        void* eax_25 = data_c23bac * 0x18d0 + ecx_23
        
        if (esi_6 u>= eax_25)
            break
        
        while ((*(esi_6 + 0x18c8) & 0xffff0000) == 0)
            esi_6 += 0x18d0
            
            if (esi_6 u>= eax_25)
                goto label_63fd7a
        
        sub_67e6e0(esi_6)
        int32_t ecx_26 = data_c23bb4
        data_c23bb4 = zx.d(*(esi_6 + 0x18c8))
        *(esi_6 + 0x18c8) = ecx_26
        data_c23bb8 -= 1
        ecx_23 = data_c23ba8
    
label_63fd7a:
    data_c23bac = 0
    data_c23bb4 = 0
    
    if (ecx_23 != 0)
        ecx_23 = _aligned_free(ecx_23)
    
    __builtin_memset(&data_c23ba8, 0, 0x14)
    data_c23bc0 = 0

if (data_c23bc4 != 0)
    ecx_23 = Concurrency::details::ResourceManager::~ResourceManager(&data_c23bc4)
    int32_t eax_26 = data_c23bc4
    
    if (eax_26 != 0)
        ecx_23 = _aligned_free(eax_26)
    
    __builtin_memset(&data_c23bc4, 0, 0x14)
    data_c23bdc = 0

if (data_ccf6e4 != 0)
    ecx_23 = data_cafe6c
    
    if (ecx_23 != 0)
        void* edx_6 = nullptr
        
        while (true)
            if (edx_6 != 0)
                edx_6 += 0x4d0
            else
                edx_6 = ecx_23
            
            void* eax_29 = data_cafe70 * 0x4d0 + ecx_23
            
            if (edx_6 u>= eax_29)
                break
            
            while (true)
                int32_t esi_7 = *(edx_6 + 0x4cc)
                
                if ((esi_7 & 0xffff0000) != 0)
                    int32_t ecx_32 = data_cafe78
                    data_cafe78 = zx.d(esi_7.w)
                    *(edx_6 + 0x4cc) = ecx_32
                    data_cafe7c -= 1
                    ecx_23 = data_cafe6c
                    break
                
                edx_6 += 0x4d0
                
                if (edx_6 u>= eax_29)
                    goto label_63febc
        
    label_63febc:
        data_cafe70 = 0
        data_cafe78 = 0
        
        if (ecx_23 != 0)
            ecx_23 = _aligned_free(ecx_23)
        
        __builtin_memset(&data_cafe6c, 0, 0x14)
        data_cafe84 = 0

int32_t* esi_8 = data_147d094

if (esi_8 != 0)
    int32_t var_8_8 = 4
    
    if (data_cf65bc != 0)
        char* eax_30 = *esi_8
        
        if (eax_30 != 0 && *eax_30 != 0)
            char* eax_31 = sub_63d4e0(esi_8)
            int32_t temp2_1 = *(eax_31 + 4)
            *(eax_31 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                *esi_8 = &data_801800
            
            esi_8 = data_147d094
    
    int32_t var_8_9 = 0xffffffff
    ecx_23 = sub_64c080(esi_8, 4)
    data_147d094 = 0

sub_6c3ea0(ecx_23)
int32_t* ecx_30 = data_147abec

if (ecx_30 != 0)
    (*(*ecx_30 + 8))()
    int32_t* ecx_31 = data_147abec
    
    if (ecx_31 != 0)
        (**ecx_31)(1)
    
    int32_t* eax_36 = data_147abf0
    int32_t* esi_9 = eax_36
    data_147abec = 0
    
    if (*esi_9 != 0)
        int32_t edx_9 = 0
        int32_t edi_3
        
        while (true)
            if (edx_9 != 0)
                edx_9 += 0x64
            else
                edx_9 = *esi_9
            
            edi_3 = *esi_9
            int32_t ecx_34 = esi_9[1] * 0x64 + edi_3
            
            if (edx_9 u>= ecx_34)
                break
            
            while (true)
                int32_t eax_35 = *(edx_9 + 0x60)
                
                if ((eax_35 & 0xffff0000) != 0)
                    int32_t ecx_42 = esi_9[3]
                    esi_9[3] = zx.d(eax_35.w)
                    *(edx_9 + 0x60) = ecx_42
                    esi_9[4] -= 1
                    break
                
                edx_9 += 0x64
                
                if (edx_9 u>= ecx_34)
                    goto label_640015
        
    label_640015:
        esi_9[1] = 0
        esi_9[3] = 0
        
        if (edi_3 != 0)
            _aligned_free(edi_3)
        
        eax_36 = data_147abf0
        __builtin_memset(esi_9, 0, 0x14)
        esi_9[6] = 0
    
    if (eax_36 != 0)
        sub_64c080(eax_36, 0x28)
        data_147abf0 = 0

char* ecx_36 = data_147ac30

if (*ecx_36 != 0)
    HANDLE hSemaphore = *(ecx_36 + 0x20)
    ecx_36[1] = 1
    ReleaseSemaphore(hSemaphore, 1, nullptr)
    WaitForSingleObject(*(data_147ac30 + 0x1c), 0xffffffff)
    DeleteCriticalSection(data_147ac30 + 4)
    CloseHandle(*(data_147ac30 + 0x20))
    CloseHandle(*(data_147ac30 + 0x1c))
    ecx_36 = data_147ac30
    *ecx_36 = 0

sub_64c080(ecx_36, 0x74)
int32_t* ecx_37 = data_147b070
data_147ac30 = 0

if (ecx_37 != 0)
    (*(*ecx_37 + 4))()

int32_t* i_5 = data_147d1a4

if (i_5 != 0)
    int32_t* i_2
    
    do
        i_2 = *i_5
        _aligned_free(i_5)
        i_5 = i_2
    while (i_2 != 0)

int32_t* ecx_38 = data_cf65b4
data_147d1a0 = 0
data_147d1a4 = 0
data_147d1ac = 0

if (ecx_38 != 0)
    sub_64c080(ecx_38, 0x30)
    data_cf65b4 = 0

int32_t ecx_39 = data_cf65bc

for (void* i_3 = nullptr; i_3 s< 0xa0; )
    int32_t* j_1 = *(i_3 + ecx_39 + 4)
    void* ebx_1 = i_3 + ecx_39
    
    if (j_1 != 0)
        int32_t* j
        
        do
            j = *j_1
            _aligned_free(j_1)
            j_1 = j
        while (j != 0)
        ecx_39 = data_cf65bc
    
    i_3 += 0x14
    *(ebx_1 + 4) = 0

if (ecx_39 != 0)
    _aligned_free(ecx_39)

int32_t _Stream = data_cf64ac
data_cf65bc = 0

if (_Stream != 0)
    _Stream = fclose(_Stream)
    data_cf64ac = 0

data_cf65b8 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return _Stream

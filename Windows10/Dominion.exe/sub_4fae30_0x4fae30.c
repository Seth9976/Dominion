// 函数: sub_4fae30
// 地址: 0x4fae30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_1c = __chkstk(0x3298)
int32_t var_20 = 0
void* result_1 = nullptr
uint32_t var_10
uint32_t eax_2 = sub_568960(__security_cookie ^ &var_10, 0, 0x3ea, 0x10)
int32_t var_20_1 = 0
uint32_t eax_3 = sub_568960(eax_2, 0, 0x3ea, 0x20)
int32_t var_20_2 = 0
uint32_t eax_4
int32_t edx
eax_4, edx = sub_568960(eax_3, 0, 0x3ea, 0)
var_10 = eax_4
int32_t eax_5

if (eax_2 s< 2)
label_4faec5:
    
    if (eax_3 s>= 1 && eax_4 s>= 6)
        eax_5 = 0x8b
    else if (eax_2 s>= 2 && eax_3 s>= 1)
        eax_5 = 0x88
    else if (eax_4 s>= 6)
        eax_5 = 0x89
    else if (eax_2 s< 2)
        eax_5 = 0x89
        edx = 0x86
        
        if (eax_3 s>= 1)
            eax_5 = 0x86
    else
        eax_5 = 0x87
else if (eax_3 s< 1)
    if (eax_4 s< 6)
        goto label_4faec5
    
    eax_5 = 0x8a
else
    if (eax_4 s< 6)
        goto label_4faec5
    
    eax_5 = 0x85

var_4.q = 0
int64_t arg_c
__builtin_memset(&arg_c, 0, 0x1c)
int32_t arg_4 = 0
int128_t arg_28 = eax_5.o
int128_t arg_38 = eax_4.o
int128_t arg_48 = arg1.o
void arg_60
void arg_25f8
__builtin_memcpy(&arg_25f8, sub_568780(&arg_60, edx, 0x3ea, &arg_60), 0xc84)
uint32_t eax_8 = 6

if (var_10 s< 6)
    eax_8 = var_10

void arg_ce8
int32_t arg_1970
__builtin_memcpy(&arg_1970, 
    sub_563960(&arg_ce8, 0, &arg_25f8, &arg_ce8, eax_8, 0x17, &arg_28, 5, 0, 0), 0xc84)
void* result = result_1
int32_t arg_1974

if (result == var_10)
label_4fb0dc:
    void* eax_20 = sub_573400()
    *(eax_20 + 0xc)
    *(eax_20 + 4)
    sub_582eb0(&arg_1970, result_1, 0x3ea, 0xb, 7, 0, 0, 0, nullptr, nullptr)
    result = result_1
    
    if (result == 6)
    label_4fb1dc:
        sub_56e9c0(1)
        result = sub_563590(0x106)
        
        if (result != 0)
            void* eax_26 = sub_573400()
            result = sub_583720(eax_26, *(eax_26 + 0xc), *(eax_26 + 4), result, 0x476, nullptr, 
                0x476, 0, 0, 4)
    else
        if (result != 1)
            goto label_4fb170
        
        uint32_t esi_12 = zx.d(arg_1970.w)
        void* edi_5 = *(sub_573400() + 4)
        
        if (esi_12 u>= 0x320)
            sub_591930()
        
        int32_t eax_22 = esi_12 * 0x64
        
        if (sub_5754f0(eax_22, *(eax_22 + edi_5 + 0x1a4c), edi_5, 0x20, 0) != 0)
            goto label_4fb1dc
        
        result = result_1
    label_4fb170:
        
        if (result == 2)
            uint32_t esi_14 = zx.d(arg_1970.w)
            int32_t edi_6 = *(sub_573400() + 4)
            
            if (esi_14 u>= 0x320)
                sub_591930()
            
            result = esi_14 * 0x64
            
            if (*(result + edi_6 + 0x1a4c) == 0x100)
                uint32_t esi_16 = zx.d(arg_1974.w)
                int32_t edi_7 = *(sub_573400() + 4)
                
                if (esi_16 u>= 0x320)
                    sub_591930()
                
                result = esi_16 * 0x64
                
                if (*(result + edi_7 + 0x1a4c) == 0x100)
                    goto label_4fb1dc
else
    if (result != 1)
        goto label_4fb069
    
    uint32_t esi_4 = zx.d(arg_1970.w)
    void* edi_1 = *(sub_573400() + 4)
    
    if (esi_4 u>= 0x320)
        sub_591930()
    
    int32_t eax_12 = esi_4 * 0x64
    
    if (sub_5754f0(eax_12, *(eax_12 + edi_1 + 0x1a4c), edi_1, 0x20, 0) != 0)
        goto label_4fb0dc
    
    result = result_1
    
    if (result == 1)
        uint32_t esi_6 = zx.d(arg_1970.w)
        int32_t edi_2 = *(sub_573400() + 4)
        
        if (esi_6 u>= 0x320)
            sub_591930()
        
        if (*(esi_6 * 0x64 + edi_2 + 0x1a4c) == 0x100 && eax_2 == 1)
            goto label_4fb0dc
        
        result = result_1
    
label_4fb069:
    
    if (result != 2)
        goto label_4fb0d3
    
    uint32_t esi_8 = zx.d(arg_1970.w)
    int32_t edi_3 = *(sub_573400() + 4)
    
    if (esi_8 u>= 0x320)
        sub_591930()
    
    uint32_t esi_10
    int32_t edi_4
    
    if (*(esi_8 * 0x64 + edi_3 + 0x1a4c) == 0x100)
        esi_10 = zx.d(arg_1974.w)
        edi_4 = *(sub_573400() + 4)
        
        if (esi_10 u>= 0x320)
            sub_591930()
    
    if (*(esi_8 * 0x64 + edi_3 + 0x1a4c) == 0x100 && *(esi_10 * 0x64 + edi_4 + 0x1a4c) == 0x100)
        goto label_4fb0dc
    
    result = result_1
label_4fb0d3:
    
    if (result == 6)
        goto label_4fb0dc
CookieCheckFunction(result)
return result

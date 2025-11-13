// 函数: sub_58ca10
// 地址: 0x58ca10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t i_1
uint32_t i_5 = i_1
char* var_64 = arg2
int32_t var_5c = 0
int32_t ecx = arg1[0x350]

if (ecx != 0 && (arg1[0x351] & 0x100) == 0)
    void* eax_2 = sub_5b06a0(ecx)
    int32_t ecx_1 = *(eax_2 + 0x1834)
    
    if (ecx_1 != 0)
        arg1[0x399] = ecx_1
    
    int32_t i = 0
    void* edx = &arg1[0x353]
    void* eax_3 = eax_2 + 0x1800
    
    do
        int32_t edi_1 = *eax_3
        
        if (edi_1 == 0)
            break
        
        *edx = edi_1
        i += 1
        eax_3 += 4
        edx += 4
    while (i s< 0xa)
    
    void* edx_1 = &arg1[0x35d]
    i_1 = 0
    void* ecx_3 = eax_2 + 0x18a8
    
    do
        int32_t edi_2 = *(ecx_3 - 0x10)
        
        if (edi_2 == 0)
            break
        
        *edx_1 = edi_2
        *(edx_1 + 4) = *ecx_3
        
        if (edi_2 == 0x121c)
            __builtin_memcpy(&arg1[0x39f], 
                "\x01\x12\x00\x00\x3c\x12\x00\x00\x07\x12\x00\x00\x0f\x12\x00\x00\x0d\x12\x00\x00\x06\x"
            "12\x00\x00\x05\x12\x00\x00\x02\x12\x00\x00\x0e\x12\x00\x00\x10\x12\x00\x00", 
                0x28)
        
        i_1 += 1
        ecx_3 += 4
        edx_1 += 0x3c
    while (i_1 s< 4)
    
    var_5c = *(eax_2 + 0x1930)

i_1.b = arg1[0x41a].b
int32_t ecx_4 = arg1[0x350]
char var_58 = i_1.b

if (ecx_4 != 0 && (arg1[0x351].b & 0x80) == 0)
    i_1 = zx.d(i_1.b)
    
    if (*(sub_5b06a0(ecx_4) + 0x1830) != 0)
        i_1 = 1
    
    var_58 = i_1.b

int32_t var_60 = 6
int128_t var_50
__builtin_memcpy(&var_50, 
    "\x03\x01\x00\x00\x06\x01\x00\x00\x02\x01\x00\x00\x05\x01\x00\x00\x01\x01\x00\x00\x04\x01\x00\x00", 
    0x18)

if (i_1.b != 0)
    memmove(&var_50:8, &var_50, 0x18)
    var_50.d = 0x601
    var_50:4.d = 0x600
    var_60 = 8

int32_t ebx = 0
uint32_t eax_9

do
    void* edi_3 = *(&var_50 + (ebx << 2))
    eax_9 = sub_5735a0(sub_573c80(edi_3, var_64, 0, nullptr), edi_3, arg1, var_64, 0)
    ebx += 1
while (ebx s< var_60)

void* edi_4 = &arg1[0x353]
int32_t i_7 = 0xa
int32_t* j
int32_t i_2

do
    eax_9, j = sub_574180(eax_9, *edi_4, arg1, var_64)
    edi_4 += 4
    i_2 = i_7
    i_7 -= 1
while (i_2 != 1)
int32_t i_3 = 0
void* var_54 = &arg1[0x35d]
void* ebx_1 = &arg1[0x35d]

do
    char* ecx_8 = *ebx_1
    
    if (ecx_8 == 0)
        break
    
    j = 0x22
    void* eax_11 = &arg1[0x5d1]
    
    do
        if (*eax_11 == 0)
            if (j != 0)
                char* var_74_1 = var_64
                sub_573af0(eax_11, j, arg1, ecx_8, ecx_8)
            
            break
        
        j += 1
        eax_11 += 0x10
    while (j s< 0x26)
    
    i_3 += 1
    ebx_1 += 0x3c
while (i_3 s< 4)

j.b = *var_64
int32_t var_60_1
char* eax_14
int32_t ecx_10
int32_t ebx_3

if (var_58 == 0)
    int32_t var_34
    int32_t eax_15 = var_34
    ecx_10 = 6
    int32_t var_38_1 = 0x100
    
    if (j.b != 0)
        eax_15 = 0x500
    
    var_60_1 = 6
    int32_t var_34_1 = eax_15
    eax_14 = var_64
    int32_t ebx_4
    ebx_4.b = j.b != 0
    ebx_3 = ebx_4 + 7
    
    if (eax_14[1] != 0)
        *(&var_50 + (ebx_3 << 2)) = 0x923
        ebx_3 += 1
else
    int32_t var_30
    int32_t eax_13 = var_30
    ecx_10 = 8
    
    if (j.b != 0)
        eax_13 = 0x500
    
    var_60_1 = 8
    int32_t var_30_1 = eax_13
    eax_14 = var_64
    int32_t ebx_2
    ebx_2.b = j.b != 0
    ebx_3 = ebx_2 + 8
    
    if (eax_14[1] != 0)
        *(&var_50 + (ebx_3 << 2)) = 0x923
        ebx_3 += 1
    
    *(&var_50 + (ebx_3 << 2)) = 0x100
    ebx_3 += 1

if (ecx_10 u< ebx_3)
    while (true)
        void* edi_5 = *(&var_50 + (ecx_10 << 2))
        sub_5735a0(sub_573c80(edi_5, eax_14, 0, nullptr), edi_5, arg1, var_64, 0)
        ecx_10 = var_60_1 + 1
        var_60_1 = ecx_10
        
        if (ecx_10 s>= ebx_3)
            break
        
        eax_14 = var_64

sub_51bb20(
    sub_51bb20(sub_51bb20(sub_574380(arg1, var_64), 0xffffffff, arg1, &arg1[0x34e], 4), 0xffffffff, 
        arg1, &arg1[0x34e], 8), 
    0xffffffff, arg1, &arg1[0x34e], 0x10)
int32_t i_6 = 0
void* eax_20 = &arg1[0x35d]
int32_t i_4

do
    int32_t ecx_18 = *eax_20
    
    if (ecx_18 == 0)
        break
    
    if ((*(sub_571b30(ecx_18, 0x17) + 0x9c) & 0x100) != 0)
        int32_t* edx_8 = var_54
        int32_t ecx_21 = 0
        int32_t j_1 = 0
        void* edi_7 = &edx_8[1]
        
        do
            int32_t eax_23 = *edi_7
            
            if (eax_23 == 0)
                break
            
            ecx_21 += 1
            
            if (eax_23 == 0x106)
                int32_t eax_24 = arg1[0x541]
                
                if (eax_24 != 3 && eax_24 != 5 && eax_24 != 4 && eax_24 != 6 && arg1[0x540].b == 0)
                    int32_t eax_25 = 0xffffffff
                    
                    if (arg1[0x673] == 0xffffffff)
                        eax_25 = arg1[0x674]
                    
                    sub_59f9b0(eax_25, 0xffffffff, arg1, eax_25, 0x49, 0, edi_7, 1, *edx_8, 0, 0, 0)
                    edx_8 = var_54
            
            j_1 += 1
            edi_7 += 4
        while (j_1 s< 0xe)
        
        if (ecx_21 s> 1)
            int32_t eax_26 = arg1[0x541]
            
            if (eax_26 != 3 && eax_26 != 5 && eax_26 != 4 && eax_26 != 6 && arg1[0x540].b == 0)
                int32_t edi_8 = 0xffffffff
                
                if (arg1[0x673] == 0xffffffff)
                    edi_8 = arg1[0x674]
                
                sub_59f9b0(&edx_8[1], 0xffffffff, arg1, edi_8, 0x49, 0, &edx_8[1], ecx_21, *edx_8, 
                    0, 0, 0)
    
    i_4 = i_6 + 1
    eax_20 = var_54 + 0x3c
    i_6 = i_4
    var_54 = eax_20
while (i_4 s< 4)
uint32_t result = sub_593d70(arg1)

if (var_5c != 0)
    TEB* fsbase
    void* ebx_5 = *fsbase->ThreadLocalStoragePointer
    
    if (*(ebx_5 + 0xf010) s>= 0x200)
        sub_591930()
    
    int32_t eax_30 = *(ebx_5 + 0xf010)
    int32_t edi_12 = eax_30 * 0x78
    void* ecx_25
    
    if (eax_30 != 0)
        ecx_25 = ebx_5 - 0x68 + edi_12
    else
        ecx_25 = nullptr
    
    *(ebx_5 + 0xf010) = eax_30 + 1
    *(edi_12 + ebx_5 + 0x18) = ecx_25
    *(edi_12 + ebx_5 + 0x10) = 4
    *(edi_12 + ebx_5 + 0x14) = arg1
    *(edi_12 + ebx_5 + 0x20) = 0
    *(edi_12 + ebx_5 + 0x1c) = 0xffffffff
    *(edi_12 + ebx_5 + 0x2c) = 0
    *(edi_12 + ebx_5 + 0x30) = 0
    int32_t eax_32 = arg1[0x683]
    int32_t eax_33
    int32_t edx_10
    edx_10:eax_33 = sx.q(eax_32)
    arg1[0x683] = eax_32 + 1
    *(edi_12 + ebx_5 + 0x38) = eax_33
    char* eax_34 = var_64
    *(edi_12 + ebx_5 + 0x3c) = edx_10
    *(edi_12 + ebx_5 + 0x54) = 0
    *(edi_12 + ebx_5 + 0x34) = 0
    *(edi_12 + ebx_5 + 0x44) = 0
    *(edi_12 + ebx_5 + 0x80) = eax_34
    *(edi_12 + ebx_5 + 0x48) = 0
    var_5c()
    int32_t eax_35 = *(ebx_5 + 0xf010)
    
    if (eax_35 s<= 0)
        sub_63b870(eax_35, &data_801800, "cs.numContexts > 0", 
            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = eax_35 - 1
    *(ebx_5 + 0xf010) = result

CookieCheckFunction(result)
return result

// 函数: sub_60fbd0
// 地址: 0x60fbd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = __chkstk(0x19c0)
int32_t __saved_ebp
int32_t var_c = __security_cookie ^ &__saved_ebp
void var_1990
memset(&var_1990, 0, 0xbec)
void var_d9c
memset(&var_d9c, 0, 0xd8c)
int32_t esi = 0
int32_t* ebx_1 = ecx + 0x48
int32_t* edi = ebx_1
void var_19a1
int32_t eax_3

while (true)
    if (sub_60eb90(*edi, &var_19a1) == 6)
        eax_3 = 1
        break
    
    esi += 1
    edi = &edi[1]
    
    if (esi s>= 3)
        eax_3 = 0
        break

int32_t var_da4 = eax_3
int32_t esi_1 = 0
int32_t* edi_1 = ebx_1
int32_t eax_5

while (true)
    if (sub_60eb90(*edi_1, &var_19a1) == 9)
        eax_5 = 1
        break
    
    esi_1 += 1
    edi_1 = &edi_1[1]
    
    if (esi_1 s>= 3)
        eax_5 = 0
        break

int32_t var_da0 = eax_5
void var_fd8
memset(&var_fd8, 0, 0x200)
void var_fd4
void* esi_2 = &var_fd4

for (int32_t i = 0; i s< 3; )
    int32_t eax_6 = sub_60eb90(*ebx_1, &var_19a1)
    
    if (eax_6 == 0)
        break
    
    *(esi_2 - 4) = eax_6
    i += 1
    *esi_2 = 0xffffffff
    ebx_1 = &ebx_1[1]
    *(esi_2 + 4) = 0
    *(esi_2 + 8) = 0xa
    esi_2 += 0x10

void var_19a0
void* ecx_4 = &var_19a0
void* edx_5 = ecx + 0xc
int32_t i_5 = 0xa
int32_t i_1

do
    int32_t eax_7 = *edx_5
    edx_5 += 4
    int32_t var_19b4_1 = eax_7
    ecx_4 += 0x10
    int64_t var_19b0_1 = 0
    *(ecx_4 - 0x10) = 1.o
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
void* edx_6 = ecx
void var_18f0
void* esi_3 = &var_18f0
int32_t i_4 = 4
void* eax_8 = edx_6 + 0x58
void* var_19bc = eax_8
void* edi_2 = eax_8
int32_t i_2

do
    int32_t ebx_2 = *(edi_2 - 0x20)
    
    if (ebx_2 != 0)
        bool cond:0_1 = *(edx_6 + 0x54) != 3
        int64_t var_19b0_2 = 0
        int32_t var_19b4_2 = ebx_2
        *(esi_3 - 0x10) = 1.o
        __builtin_memset(esi_3, 0, 0x38)
        
        if (not(cond:0_1) && ebx_2 == 0xf3a)
            *esi_3 = *eax_8
        
        if ((*(sub_571b30(ebx_2, sub_5cf7e0()) + 0x9c) & 0x100) != 0)
            *esi_3 = *edi_2
        
        int32_t eax_14 = *(edi_2 - 0x20)
        edx_6 = ecx
        
        if (eax_14 != 0 && eax_14 == 0x121a)
            *esi_3 = *edi_2
        
        eax_8 = var_19bc
    else
        *(esi_3 - 0x10) = zx.o(0)
    
    edi_2 += 4
    esi_3 += 0x48
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
int32_t eax_16 = *(edx_6 + 0x54)

if (eax_16 == 1)
    int64_t var_19b0_3 = 0
    int32_t var_17dc_1 = *(edx_6 + 0x58)
    int32_t var_17e0_1 = 1
    int32_t var_17d8_1 = 0
    int32_t var_17d4_1 = 0
else if (eax_16 == 4)
    int64_t var_19b0_4 = 0
    int32_t var_178c_1 = *(edx_6 + 0x58)
    int32_t var_1790_1 = 1
    int32_t var_1788_1 = 0
    int32_t var_1784_1 = 0
else
    int32_t eax_19
    
    if (eax_16 != 5)
        if (eax_16 == 6)
            eax_19 = *(edx_6 + 0x5c)
            goto label_60fe9c
        
        if (eax_16 == 2)
            void var_17d0
            void* ecx_8 = &var_17d0
            void* edx_8 = edx_6 + 0x58
            int32_t i_6 = eax_16 + 1
            int32_t i_3
            
            do
                int32_t eax_20 = *edx_8
                edx_8 += 4
                int32_t var_19b4_3 = eax_20
                ecx_8 += 0x10
                int64_t var_19b0_6 = 0
                *(ecx_8 - 0x10) = 1.o
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
    else
        eax_19 = *(edx_6 + 0x58)
    label_60fe9c:
        int32_t var_166c_1 = eax_19
        int64_t var_19b0_5 = 0
        int32_t var_1670_1 = 1
        int32_t var_1668_1 = 0
        int32_t var_1664_1 = 0

memcpy(arg2, &var_19a0, 0x1990)
CookieCheckFunction(arg2)
return arg2

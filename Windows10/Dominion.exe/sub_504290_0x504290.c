// 函数: sub_504290
// 地址: 0x504290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0
int32_t i = 7
int32_t* eax_4 = *(sub_573400() + 4) + 0x1594
int32_t var_c98[0x321]

do
    int32_t edx_1 = *eax_4
    
    if (edx_1 != 0)
        var_c98[esi] = edx_1
        esi += 1
    
    i += 1
    eax_4 = &eax_4[4]
while (i s< 0x21)

int32_t edi = 0

if (esi s> 0)
    do
        void* eax_5 = sub_573400()
        int32_t eax_6 = var_c98[edi]
        
        if (eax_6 != 0 && sub_5754f0(eax_6, eax_6, *(eax_5 + 4), 8, 0) != 0)
            void var_c9c
            int32_t eax_8 = *(&var_c9c + (esi << 2))
            esi -= 1
            var_c98[edi] = eax_8
            edi -= 1
        
        edi += 1
    while (edi s< esi)

int64_t var_cfc
__builtin_memset(&var_cfc, 0, 0x2c)
int128_t var_cd0 = 0xf6.o
int32_t var_cf0
int128_t var_cc0 = var_cf0.o
int64_t var_ce0
int128_t var_cb0 = var_ce0.o
void* eax_9 = sub_573400()
int32_t var_d08 = *eax_9
int32_t var_d04 = *(eax_9 + 0x10)
int32_t ecx_4 = *(eax_9 + 0xc)
int32_t* eax_10 = *(eax_9 + 4)
int32_t var_d24
uint32_t var_d20
int32_t eax_11

if (esi != 0 && esi != 1)
    int32_t edx_3
    
    if (ecx_4 != eax_10[0x673])
        edx_3 = ecx_4
    else
        edx_3 = eax_10[0x674]
    
    int32_t var_d14_1 = ecx_4
    int32_t var_d18_1 = 0x22
    var_d20 = 1
    var_d24 = ecx_4
    eax_11 =
        sub_623b70(eax_10, &var_d08, eax_10, 8, ecx_4, edx_3, &var_c98, esi, var_d24, 1, &var_cd0)

int32_t esi_1

if (esi == 0 || (esi != 1 && eax_11 == 0))
    esi_1 = 0
else
    esi_1 = var_c98[0]

void* eax_12 = sub_573400()
int32_t var_d14_2 = 0x42
int32_t var_d18_2 = 0xffffffff
sub_571fa0(eax_12, *(eax_12 + 0xc), *(eax_12 + 4), 0x1000, 0xffffffff, 0x476, nullptr, var_d24, 
    var_d20, 0)
void* i_1

if (esi_1 != 0)
    i_1 = 7
    void* ecx_8 = *(eax_12 + 4) + 0x1594
    
    do
        if (*ecx_8 == esi_1)
            goto label_50442a
        
        if (*(ecx_8 + 4) == esi_1)
            goto label_50442a
        
        i_1 += 1
        ecx_8 += 0x10
    while (i_1 s< 0x48)

i_1 = nullptr
label_50442a:
int32_t var_d14_3 = 0
int32_t var_d18_3 = *(eax_12 + 0xc)
int32_t var_d1c_2 = 0
int32_t result = sub_571fa0(i_1, 0xffffffff, *(eax_12 + 4), 0x1000, 1, i_1, nullptr)
CookieCheckFunction(result)
return result

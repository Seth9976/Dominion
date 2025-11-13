// 函数: sub_56b580
// 地址: 0x56b580
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
        
        if ((*(sub_571b30(var_c98[edi], *(*(eax_5 + 4) + 0xd48)) + 0x98) & 4) == 0)
            void var_c9c
            int32_t eax_10 = *(&var_c9c + (esi << 2))
            esi -= 1
            var_c98[edi] = eax_10
            edi -= 1
        
        edi += 1
    while (edi s< esi)

int32_t var_d00
__builtin_memset(&var_d00, 0, 0x30)
int128_t var_cd0 = var_d00.o
int32_t var_cf0
int128_t var_cc0 = var_cf0.o
int64_t var_ce0
int128_t var_cb0 = var_ce0.o
void* eax_11 = sub_573400()
int32_t var_d08 = *eax_11
int32_t var_d04 = *(eax_11 + 0x10)
int32_t ecx_3 = *(eax_11 + 0xc)
int32_t* eax_12 = *(eax_11 + 4)

if (esi != 0)
    int32_t eax_13
    
    if (esi != 1)
        int32_t edx_4
        
        if (ecx_3 != eax_12[0x673])
            edx_4 = ecx_3
        else
            edx_4 = eax_12[0x674]
        
        int32_t var_d24_1 = ecx_3
        int32_t edx
        int32_t var_d28_1 = edx
        eax_13 =
            sub_623b70(eax_12, &var_d08, eax_12, 8, ecx_3, edx_4, &var_c98, esi, ecx_3, 1, &var_cd0)
    
    if (esi == 1 || eax_13 != 0)
        uint32_t result = var_c98[0]
        CookieCheckFunction(result)
        return result

CookieCheckFunction(0)
return 0

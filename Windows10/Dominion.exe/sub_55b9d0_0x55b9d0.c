// 函数: sub_55b9d0
// 地址: 0x55b9d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_573400()
int32_t* esi = *(eax_2 + 4)
int32_t ecx = esi[0x541]

if (ecx != 3 && ecx != 5 && ecx != 4 && ecx != 6 && esi[0x540].b == 0)
    int32_t eax_3 = 0xffffffff
    
    if (esi[0x673] == 0xffffffff)
        eax_3 = esi[0x674]
    
    int32_t var_94
    __builtin_memset(&var_94, 0, 0x1c)
    int32_t* var_90
    int32_t var_8c
    int32_t var_88
    int32_t var_84
    int32_t var_80
    int32_t var_7c
    sub_59f9b0(eax_3, 0xffffffff, esi, eax_3, 0x3c, var_94, var_90, var_8c, var_88, var_84, var_80, 
        var_7c)

for (int32_t* i = 0x13; i != 0x21; i += 1)
    sub_570370(esi, i)

sub_5704d0(esi)
void var_60
memset(&var_60, 0, 0x50)
int32_t ebx = 0
int32_t* eax_6 = *(sub_573400() + 4) + 0xe7c
int32_t i_1 = 0
int32_t* var_68 = eax_6

do
    void* edx_2 = eax_6[i_1]
    
    if (edx_2 == 0)
        break
    
    sub_574180(&var_60, edx_2, esi, &var_60)
    eax_6 = var_68
    i_1 += 1
    ebx += 1
while (i_1 s< 0xa)

int32_t ecx_5 = esi[0x541]

if (ecx_5 != 3 && ecx_5 != 5 && ecx_5 != 4 && ecx_5 != 6 && esi[0x540].b == 0)
    int32_t edx_4 = *(eax_2 + 0xc)
    int32_t ecx_6 = edx_4
    
    if (edx_4 == esi[0x673])
        ecx_6 = esi[0x674]
    
    sub_59f9b0(eax_6, edx_4, esi, ecx_6, 0x3e, 0, eax_6, ebx, 0, 0, 0, 0)

int32_t ebx_2 = *(sub_573400() + 4) + 0xea8
int32_t i_2 = 0
int32_t var_68_1 = ebx_2
int32_t* var_a0

do
    char* ecx_8 = *(ebx_2 + (i_2 << 2))
    
    if (ecx_8 == 0)
        break
    
    int32_t* j = 0x22
    void* eax_9 = &esi[0x5d1]
    
    do
        if (*eax_9 == 0)
            if (j != 0)
                void* var_7c_3 = &var_60
                sub_573af0(&var_60, j, esi, ecx_8, ecx_8)
                int32_t ebx_3 = *(ebx_2 + (i_2 << 2))
                void* eax_11 = sub_573400()
                
                if (ebx_3 != 0)
                    char eax_12
                    int32_t edx_6
                    eax_12, edx_6 = sub_5754f0(eax_11, ebx_3, *(eax_11 + 4), 0, 0x40)
                    
                    if (eax_12 != 0)
                        var_a0 = &std::_Func_impl_no_alloc<class <lambda_918243c06928344067d1e02bd1edd4b1>, void>::`vftable'{for `std::_Func_base<void>'}
                        int32_t** var_7c_5 = &var_a0
                        sub_569b30(&var_a0, edx_6, 0, var_a0)
                
                ebx_2 = var_68_1
            
            break
        
        j += 1
        eax_9 += 0x10
    while (j s< 0x26)
    
    i_2 += 1
while (i_2 s< 4)

sub_574380(esi, &var_60)
sub_593d70(*(sub_573400() + 4))
void* result = esi[0x541]

if (result != 3 && result != 5 && result != 4 && result != 6)
    __builtin_memset(&var_a0, 0, 0x28)
    int32_t* var_9c_3
    void* var_98_3
    void* var_94_2
    int128_t* var_90_2
    int32_t var_8c_2
    int32_t var_88_2
    int32_t var_84_5
    int32_t var_80_5
    int32_t var_7c_6
    result = sub_61b1b0(result, 0x2e, result == 2, 0xffffffff, var_a0, var_9c_3, var_98_3, 
        var_94_2, var_90_2, var_8c_2, var_88_2, var_84_5, var_80_5, var_7c_6)

CookieCheckFunction(result)
return result

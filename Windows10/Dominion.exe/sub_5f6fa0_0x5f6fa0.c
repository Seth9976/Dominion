// 函数: sub_5f6fa0
// 地址: 0x5f6fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t var_2c = 0
int32_t* i = &data_af3ccc
int32_t var_30 = 0
int32_t eax_6

do
    int32_t eax_2 = *i
    void* var_3c
    void* var_38
    uint32_t eax_3 = sub_4daf40(&var_38, &var_3c)
    int32_t esi_1 = 0
    int32_t ecx_6
    
    if (eax_3 s<= 0)
    label_5f6ffb:
        ecx_6 = var_30
        eax_6 = var_2c
    else
        while (true)
            if (sub_4db7a0(*(var_38 + (esi_1 << 2)), eax_2) != 0)
                ecx_6 = var_30
                eax_6 = var_2c | 1 << (ecx_6 u% 0x20)
                var_2c = eax_6
                break
            
            esi_1 += 1
            
            if (esi_1 s>= eax_3)
                goto label_5f6ffb
    
    i = &i[0x1a6]
    var_30 = ecx_6 + 1
while (i s< &data_af9fb4)

uint32_t result = 0
int128_t var_28
__builtin_memcpy(&var_28, 
    "\x00\x13\x00\x00\x01\x00\x00\x00\x0b\x13\x00\x00\x02\x00\x00\x00\x0a\x13\x00\x00\x04\x00\x00\x00\x"
"0e\x13\x00\x00\x08\x00\x00\x00", 
    0x20)
int32_t esi_2 = 1

for (int32_t* i_1 = &data_af3ccc; i_1 s< &data_af9fb4; )
    if ((eax_6 & esi_2) != 0)
        int128_t* j = &var_28
        
        do
            uint32_t result_1 = *(j + 4) | result
            
            if (*i_1 != *j)
                result_1 = result
            
            j += 8
            result = result_1
        while (j != &var_8)
        
        eax_6 = var_2c
    
    i_1 = &i_1[0x1a6]
    esi_2 = rol.d(esi_2, 1)

CookieCheckFunction(result)
return result

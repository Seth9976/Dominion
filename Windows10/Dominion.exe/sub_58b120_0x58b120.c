// 函数: sub_58b120
// 地址: 0x58b120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int64_t var_ca8 = 0
sub_573050(&var_ca8, arg1[0x673], arg1, &var_ca8)
int32_t ecx = arg1[0x541]
arg1[0x676].b = 1

if (ecx != 3 && ecx != 5 && ecx != 4 && ecx != 6)
    void* eax_3
    eax_3.b = arg1[0x67a] != 0
    ecx.b = ecx == 2
    sub_61b1b0(eax_3, 4, ecx.b, arg1[0x673], 0, arg1[0x674], arg1[0x679], eax_3, nullptr, 0, 0, 0, 
        0, 0)

int32_t eax_4 = arg1[0x541]

if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6 && arg1[0x540].b == 0)
    sub_59f9b0(eax_4, arg1[0x673], arg1, arg1[0x674], 6, arg1[0x67a], nullptr, 0, arg1[0x677], 
        arg1[0x679], 0, 0)

int32_t eax_5 = arg1[0x541]
uint32_t ebx = arg1[0x673]
arg1[0x67b] = 1

if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6)
    ecx.b = eax_5 == 2
    sub_61b1b0(eax_5, 0x29, ecx.b, ebx, 0, 1, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)

sub_589000(arg1, ebx)
int32_t esi = ebx * 0x5a30
void* var_ca0
uint32_t i_1

while (true)
label_58b274:
    sub_586cf0(arg1, ebx)
    arg1[0x67b] = 2
    arg1[ebx * 0x168c + 0x5d52] = 0
    arg1[ebx * 0x168c + 0x5d53] = 0
    int32_t eax_6 = arg1[0x541]
    
    if (eax_6 != 3 && eax_6 != 5 && eax_6 != 4 && eax_6 != 6)
        sub_61b1b0(eax_6, 0x29, eax_6 == 2, ebx, 0, 2, nullptr, nullptr, nullptr, 0, 0, 0, 0, 0)
    
    void var_cf4
    memset(&var_cf4, 0, 0x48)
    i_1 = 1
    sub_580700(esi, &i_1, 1, &var_cf4, 0, nullptr, 0, nullptr)
    int32_t eax_7 = arg1[0x67b]
    
    if (eax_7 == 2 || eax_7 == 3)
        char var_c95 = 0
        
        while (true)
            void var_c94
            uint32_t var_14_1 = sub_5777b0(&var_c94, ebx, arg1, &var_c94, 4)
            var_ca0 = nullptr
            char eax_10 = sub_5875c0(esi, &var_c94, 1, &var_ca0, &var_c95, 0)
            eax_7 = arg1[0x67b]
            
            if (eax_7 != 2 && eax_7 != 3)
                break
            
            if (eax_10 != 0)
                memset(&var_cf4, 0, 0x48)
                i_1 = 2
                sub_580700(esi, &i_1, 1, &var_cf4, 0, nullptr, 0, nullptr)
                
                if (arg1[0x67b] == 1)
                    goto label_58b274
                
                arg1[0x67b] = 0
                goto label_58b403
    
    if (eax_7 != 1)
    label_58b403:
        sub_58ae10(arg1, ebx)
        
        if (arg1[0x67b] != 1)
            break

sub_58a230()
void* ecx_12 = arg1[0x674]
uint32_t edx_10 = arg1[0x673]
int32_t* eax_12
eax_12.b = edx_10 != ecx_12
sub_571680(eax_12, 6, arg1, edx_10, 0, eax_12, ecx_12, nullptr, nullptr, 0, 0, 0, 0, 0)
int32_t eax_13 = arg1[0x541]

if (eax_13 != 3 && eax_13 != 5 && eax_13 != 4 && eax_13 != 6 && arg1[0x540].b == 0)
    sub_59f9b0(eax_13, arg1[0x673], arg1, arg1[0x674], 7, 0, nullptr, 0, 0, 0, 0, 0)

uint32_t i = 0
arg1[0x676].b = 0
i_1 = 0

if (arg1[0x34e] s> 0)
    void* esi_1 = &arg1[0x5d45]
    
    do
        void* ecx_15 = esi_1 - 0x10
        var_ca0 = ecx_15
        void* eax_14 = esi_1 + 0x28
        var_ca8:4.d = eax_14
        
        if (i == ebx)
            *(esi_1 + 0x2c) = *eax_14
            int32_t eax_16 = *ecx_15
            *esi_1 = eax_16
            memcpy(esi_1 + 0xce4, esi_1 + 0x64, eax_16 << 2)
            ecx_15 = var_ca0
            eax_14 = var_ca8:4.d
            i = i_1
        
        *(esi_1 - 0xc) = 0
        i += 1
        *(esi_1 - 8) = 0
        *(esi_1 - 4) = 0
        *(esi_1 + 0x14) = 0
        *(esi_1 + 0x18) = 0
        *(esi_1 + 0x1c) = 0
        *(esi_1 + 0x20) = 0
        __builtin_memset(esi_1 + 0x30, 0, 0x18)
        esi_1 += 0x5a30
        *ecx_15 = 0
        *eax_14 = 0
        i_1 = i
    while (i s< arg1[0x34e])

arg1[0x66a] = 0
arg1[0x66c] = 0
uint32_t result = sub_5733b0()
CookieCheckFunction(result)
return result

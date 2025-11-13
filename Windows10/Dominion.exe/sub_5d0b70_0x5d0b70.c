// 函数: sub_5d0b70
// 地址: 0x5d0b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = arg1
void* edx = &data_b7d438
void* var_18c = eax_2

if (data_b7f4b8 == 0)
    edx = nullptr

void* var_188 = edx

if (edx == 0)
label_5d0bf3:
    edx = nullptr
    var_188 = nullptr
else
    while (true)
        int32_t esi_1 = *edx
        int32_t ecx = 0
        
        if (esi_1 s> 0)
            void* eax_3 = edx + 0xc
            
            while (*eax_3 != *(eax_2 + 0x1c28))
                ecx += 1
                eax_3 += 0xc
                
                if (ecx s>= esi_1)
                    goto label_5d0bd8
            
            break
        
    label_5d0bd8:
        edx = edx + esi_1 * 0xc + 8
        var_188 = edx
        
        if (edx == data_b7f4b8 + &data_b7d438)
            goto label_5d0bf3
        
        if (edx == 0)
            goto label_5d0bf3
        
        eax_2 = var_18c

if (edx == data_b7f4c0)
    void* eax_7 = sub_5cffd0()
    CookieCheckFunction(eax_7)
    return eax_7

if (*edx == 1)
    sub_5cba00(*(edx + 0xc))
    void* eax_9 = sub_5cffd0()
    CookieCheckFunction(eax_9)
    return eax_9

data_b7f4c0 = edx
bool cond:1 = data_b7d424 == 3
data_b7d424 = 4
int32_t eax_10
eax_10.b = cond:1
int32_t i = 0
int32_t i_1 = 0
void* eax_11 = (eax_10 << 1) + 1
data_b7d428 = eax_11

if (*edx s> 0)
    void* ecx_8 = edx + 0xc
    void* var_184_1 = ecx_8
    
    do
        uint32_t eax_12 = sub_5cba00(*ecx_8)
        int32_t var_140 = 0x24
        int32_t var_138 = 0xffffffff
        int32_t var_134_1 = 0xffffffff
        int128_t var_b0 = var_140.o
        int64_t var_178_1 = 0
        int32_t var_17c_1 = 2
        int128_t var_160 = eax_12.o
        var_b0:0xc.d = i
        int32_t var_16c_1 = 0
        int64_t var_150_1 = 0.q
        int128_t xmm0_4 = var_b0
        var_140 = 1
        var_138.o = xmm0_4
        __builtin_memcpy(&var_b0, &var_140, 0x88)
        sub_6372f0(eax_12 + 0x258, &var_b0, 6, 1, &var_160)
        eax_11 = var_188
        i = i_1 + 1
        ecx_8 = var_184_1 + 0xc
        i_1 = i
        var_184_1 = ecx_8
    while (i s< *eax_11)

CookieCheckFunction(eax_11)
return eax_11

// 函数: sub_53ee90
// 地址: 0x53ee90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebp
uint32_t var_4 = ebp
__chkstk(0x1a18)
__security_cookie
void* eax_2 = sub_573400()
void arg_f0
uint32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_5777b0(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), &arg_f0, 4)
uint32_t arg_d70 = eax_3
void arg_d78
__builtin_memcpy(&arg_d78, &arg_f0, 0xc84)
int32_t var_24 = 0
int32_t result = sub_561880(eax_3, edx_1, &arg_d78, 4)

if (arg3 != 0)
    int64_t arg_1c
    __builtin_memset(&arg_1c, 0, 0x2c)
    int128_t arg_98 = 0xc5.o
    int128_t arg_a8 = arg1.o
    int128_t arg_b8 = arg2.o
    int32_t* eax_4 = sub_563c40(&arg_98, 0x17, 0)
    uint32_t eax_6 = *(sub_573400() + 0xc)
    void* eax_7 = sub_573400()
    uint32_t esi_1 = zx.d(eax_4.w)
    var_4 = esi_1
    int32_t eax_8 = *(eax_7 + 4)
    
    if (esi_1 u>= 0x320)
        sub_591930()
    
    void* var_1c_2 = nullptr
    void* var_20_2 = nullptr
    int32_t* eax_9 = esi_1 * 0x64
    int128_t* var_24_2 = 0xc
    char var_d
    char* var_28_1 = &var_d
    void* var_2c_1 = nullptr
    int32_t var_30_1 = 0x462
    int32_t* var_8 = eax_9
    sub_565ff0(eax_9, *(eax_9 + eax_8 + 0x1a50), eax_4, eax_6, var_30_1, var_2c_1, var_28_1, 
        var_24_2, var_20_2, var_1c_2)
    void* eax_10 = sub_573400()
    int32_t ecx_3 = *(eax_10 + 4)
    
    if (var_4 u>= 0x320)
        sub_591930()
    
    int32_t* eax_11 = var_8
    *(eax_11 + ecx_3 + 0x1a6c) |= 0x20
    int32_t eax_13 = *(*(eax_10 + 4) + 0x1504)
    
    if (eax_13 != 3 && eax_13 != 5 && eax_13 != 4 && eax_13 != 6)
        void* var_34_2
        __builtin_memset(&var_34_2, 0, 0x1c)
        ecx_3.b = eax_13 == 2
        int128_t* var_30_2
        int32_t var_2c_2
        int32_t var_28_2
        int32_t var_24_3
        int32_t var_20_3
        int32_t var_1c_3
        sub_61b1b0(eax_13, 0x16, ecx_3.b, *(eax_10 + 0xc), eax_4, 6, 1, var_34_2, var_30_2, 
            var_2c_2, var_28_2, var_24_3, var_20_3, var_1c_3)
    
    void* eax_14 = sub_573400()
    uint32_t eax_15 = sub_5834f0(eax_14, *(eax_14 + 0xc), *(eax_14 + 4), &arg_98, eax_4, 
        *(eax_14 + 0x28), *(eax_14 + 0x2c))
    bool cond:1_1 = var_d != 0
    int32_t esi_3 = 1
    var_4 = 0xf
    __return_addr = 0x13
    int128_t xmm0_4 = *eax_15
    var_8 = eax_4
    int128_t arg_48 = xmm0_4
    int128_t arg_58 = *(eax_15 + 0x10)
    int128_t arg_68 = *(eax_15 + 0x20)
    int128_t arg_78 = *(eax_15 + 0x30)
    int64_t arg_88 = *(eax_15 + 0x40)
    
    if (cond:1_1)
        esi_3 = 2
    
    void* eax_16 = sub_573400()
    *(eax_16 + 0xc)
    *(eax_16 + 4)
    result = sub_580700(esi_3, &var_4, esi_3, &arg_48, 0, &var_8, 1, nullptr)

CookieCheckFunction(result)
return result

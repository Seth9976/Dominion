// 函数: _ZN5Botan12bcrypt_pbkdfEPhmPKcmPKhmm
// 地址: 0xcd3fbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* const x0_31

if (arg7 == 0)
    x0_31 = "Invalid rounds for Bcrypt PBKDF"
label_cd4f54:
    Botan::throw_invalid_argument(x0_31, "bcrypt_pbkdf", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
    noreturn

if (arg2 == 0)
    return 

if (arg2 u> 0xa00000)
    x0_31 = "Too much output for Bcrypt PBKDF"
    goto label_cd4f54

uint8_t var_d8 = 0xe
int32_t var_d7
__builtin_strncpy(&var_d7, "SHA-512", 8)
int16_t var_88 = 0
Botan::HashFunction::create_or_throw(&var_d8, &var_88)
void* var_78

if ((zx.d(var_88.b) & 1) != 0)
    operator delete(var_78)

void* var_c8

if ((zx.d(var_d8) & 1) != 0)
    operator delete(var_c8)
int64_t* var_70
(*(*var_70 + 0x18))(var_70, arg3, arg4)
Botan::Buffered_Computation::final()
uint64_t x0_6 = (**var_70)()
uint64_t var_a0_1
__builtin_memset(&var_a0_1, 0, 0x18)
uint64_t var_98_1
uint64_t var_90_1

if (x0_6 != 0)
    if ((x0_6 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    uint64_t x0_8 = Botan::allocate_memory(x0_6, 1)
    uint64_t x19_1 = x0_8 + x0_6
    var_a0_1 = x0_8
    var_90_1 = x19_1
    memset(x0_8, 0, x0_6)
    var_98_1 = x19_1

char var_d0
__builtin_memset(&var_d0, 0, 0x30)
var_d8.q = _vtable_for_Botan::Blowfish + 0x10
char* x0_9 = Botan::allocate_memory(0x20, 1)
__builtin_memset(x0_9, 0, 0x20)
void* var_e0_1 = &x0_9[0x20]
char* var_f0 = x0_9
void* var_e8_1 = &x0_9[0x20]
void* x0_10
int128_t v0_1
x0_10, v0_1 = Botan::allocate_memory(0x20, 1)
uint64_t x25_2 = (arg2 + 0x1f) u>> 5
uint64_t x26_2 = x25_2 << 1
uint64_t x20_1 = x25_2 << 2
int64_t x27_1 = x25_2 * 0xb
int64_t x10_1 = x25_2 * 0xd
int64_t x8_10 = x25_2 * 0xe
uint64_t x5_1 = x26_2 + x25_2
uint64_t x6 = x20_1 + x25_2
uint64_t x19_2 = x25_2 << 3
uint64_t x11_1 = x5_1 << 1
uint64_t x10_2 = x6 << 1
void* var_100_1 = x0_10 + 0x20
void* var_f8_1 = x0_10 + 0x20
uint64_t x12_1 = x25_2 << 4
uint64_t x9_2 = x19_2 - x25_2
uint64_t x28_1 = x19_2 + x25_2
uint64_t x10_3 = x5_1 << 2
v0_1.q = 0
v0_1:8.q = 0
int64_t x13_1 = x25_2 * 0x13
int64_t x14_1 = x25_2 * 0x15
int64_t x15_1 = x25_2 * 0x16
int64_t x16_1 = x25_2 * 0x17
int64_t x17_1 = x25_2 * 0x19
int64_t x0_11 = x25_2 * 0x1a
int64_t x1_2 = x25_2 * 0x1b
int64_t x2_2 = x25_2 * 0x1c
int64_t x3 = x25_2 * 0x1d
int64_t x4 = x25_2 * 0x1e
uint64_t lr_1 = x12_1 - x25_2
uint64_t x9_3 = x12_1 + x25_2
uint64_t x8_12 = x25_2 * 0x1f
uint64_t x11_2 = x28_1 << 1
uint64_t x7_1 = x6 << 2
uint64_t x10_4 = x5_1 << 3
__builtin_memset(x0_10, 0, 0x20)
void* var_108 = x0_10
int64_t var_80
int32_t var_64

if (arg7 != 1)
    int64_t x28_3 = 0
    
    do
        v0_1.q = 0
        v0_1:8.q = 0
        __builtin_memset(x0_9, 0, 0x20)
        (*(*var_70 + 0x18))(var_70, arg5, arg6, v0_1)
        var_64 = _byteswap((x28_3 + 1).d)
        (*(*var_70 + 0x18))(var_70, &var_64, 4)
        (*(*var_70 + 0x20))(var_70, var_a0_1)
        sub_cd57a0(&var_d8, var_88.q, var_80, var_a0_1, var_98_1, &var_f0, &var_108)
        int64_t i_1 = arg7 - 1
        int64_t i
        
        do
            (*(*var_70 + 0x18))(var_70, x0_10, 0x20)
            (*(*var_70 + 0x20))(var_70, var_a0_1)
            sub_cd57a0(&var_d8, var_88.q, var_80, var_a0_1, var_98_1, &var_f0, &var_108)
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (x28_3 u< arg2)
            arg1[x28_3] = *x0_9
        
        int64_t x8_170 = x25_2 + x28_3
        int64_t x8_171
        
        if (x8_170 u>= arg2)
            x8_171 = x26_2 + x28_3
            
            if (x8_171 u< arg2)
                goto label_cd4be4
            
            goto label_cd4a30
        
        arg1[x8_170] = x0_9[1]
        x8_171 = x26_2 + x28_3
        int64_t x8_172
        
        if (x8_171 u>= arg2)
        label_cd4a30:
            x8_172 = x5_1 + x28_3
            
            if (x8_172 u< arg2)
                arg1[x8_172] = x0_9[3]
        else
        label_cd4be4:
            arg1[x8_171] = x0_9[2]
            x8_172 = x5_1 + x28_3
            
            if (x8_172 u< arg2)
                arg1[x8_172] = x0_9[3]
        int64_t x8_173 = x20_1 + x28_3
        int64_t x8_174
        
        if (x8_173 u>= arg2)
            x8_174 = x6 + x28_3
            
            if (x8_174 u< arg2)
                goto label_cd4c14
            
            goto label_cd4a68
        
        arg1[x8_173] = x0_9[4]
        x8_174 = x6 + x28_3
        uint64_t x6_9
        int64_t x8_175
        
        if (x8_174 u< arg2)
        label_cd4c14:
            arg1[x8_174] = x0_9[5]
            x6_9 = x10_3
            x8_175 = x11_1 + x28_3
            
            if (x8_175 u>= arg2)
                goto label_cd4a78
            
            goto label_cd4c2c
        
    label_cd4a68:
        x6_9 = x10_3
        x8_175 = x11_1 + x28_3
        uint64_t x5_12
        int64_t x8_176
        
        if (x8_175 u>= arg2)
        label_cd4a78:
            x5_12 = x10_2
            x8_176 = x9_2 + x28_3
            
            if (x8_176 u< arg2)
                goto label_cd4c44
            
            goto label_cd4a88
        
    label_cd4c2c:
        arg1[x8_175] = x0_9[6]
        x5_12 = x10_2
        x8_176 = x9_2 + x28_3
        int64_t x8_188
        
        if (x8_176 u< arg2)
        label_cd4c44:
            arg1[x8_176] = x0_9[7]
            x8_188 = x19_2 + x28_3
            
            if (x8_188 u>= arg2)
                goto label_cd4a94
            
            goto label_cd4c58
        
    label_cd4a88:
        x8_188 = x19_2 + x28_3
        int64_t x8_189
        
        if (x8_188 u>= arg2)
        label_cd4a94:
            x8_189 = x28_1 + x28_3
            
            if (x8_189 u< arg2)
                goto label_cd4c6c
            
            goto label_cd4aa0
        
    label_cd4c58:
        arg1[x8_188] = x0_9[8]
        x8_189 = x28_1 + x28_3
        uint64_t x5_13
        int64_t x8_190
        
        if (x8_189 u< arg2)
        label_cd4c6c:
            arg1[x8_189] = x0_9[9]
            x8_190 = x5_12 + x28_3
            x5_13 = lr_1
            
            if (x8_190 u>= arg2)
                goto label_cd4ab0
            
            goto label_cd4c84
        
    label_cd4aa0:
        x8_190 = x5_12 + x28_3
        x5_13 = lr_1
        int64_t x8_191
        
        if (x8_190 u>= arg2)
        label_cd4ab0:
            x8_191 = x27_1 + x28_3
            
            if (x8_191 u< arg2)
                goto label_cd4c98
            
            goto label_cd4abc
        
    label_cd4c84:
        arg1[x8_190] = x0_9[0xa]
        x8_191 = x27_1 + x28_3
        int64_t x8_177
        int64_t x10_16
        
        if (x8_191 u< arg2)
        label_cd4c98:
            arg1[x8_191] = x0_9[0xb]
            x10_16 = x10_1
            x8_177 = x6_9 + x28_3
            
            if (x8_177 u>= arg2)
                goto label_cd4acc
            
            goto label_cd4cb0
        
    label_cd4abc:
        x10_16 = x10_1
        x8_177 = x6_9 + x28_3
        int64_t x8_192
        
        if (x8_177 u>= arg2)
        label_cd4acc:
            x8_192 = x10_16 + x28_3
            
            if (x8_192 u< arg2)
                goto label_cd4cc4
            
            goto label_cd4ad8
        
    label_cd4cb0:
        arg1[x8_177] = x0_9[0xc]
        x8_192 = x10_16 + x28_3
        int64_t x8_193
        
        if (x8_192 u< arg2)
        label_cd4cc4:
            arg1[x8_192] = x0_9[0xd]
            x8_193 = x8_10 + x28_3
            
            if (x8_193 u>= arg2)
                goto label_cd4ae4
            
            goto label_cd4cd8
        
    label_cd4ad8:
        x8_193 = x8_10 + x28_3
        int64_t x8_194
        
        if (x8_193 u>= arg2)
        label_cd4ae4:
            x8_194 = x5_13 + x28_3
            
            if (x8_194 u< arg2)
                goto label_cd4cec
            
            goto label_cd4af0
        
    label_cd4cd8:
        arg1[x8_193] = x0_9[0xe]
        x8_194 = x5_13 + x28_3
        int64_t x8_195
        
        if (x8_194 u< arg2)
        label_cd4cec:
            arg1[x8_194] = x0_9[0xf]
            x8_195 = x12_1 + x28_3
            
            if (x8_195 u>= arg2)
                goto label_cd4b00
            
            goto label_cd4d00
        
    label_cd4af0:
        x8_195 = x12_1 + x28_3
        int64_t x8_179
        
        if (x8_195 u>= arg2)
        label_cd4b00:
            x8_179 = x9_3 + x28_3
            
            if (x8_179 u< arg2)
                goto label_cd4d18
            
            goto label_cd4b10
        
    label_cd4d00:
        arg1[x8_195] = x0_9[0x10]
        x8_179 = x9_3 + x28_3
        int64_t x8_181
        
        if (x8_179 u< arg2)
        label_cd4d18:
            arg1[x8_179] = x0_9[0x11]
            x8_181 = x11_2 + x28_3
            
            if (x8_181 u>= arg2)
                goto label_cd4b1c
            
            goto label_cd4d30
        
    label_cd4b10:
        x8_181 = x11_2 + x28_3
        int64_t x8_198
        
        if (x8_181 u>= arg2)
        label_cd4b1c:
            x8_198 = x13_1 + x28_3
            
            if (x8_198 u< arg2)
                goto label_cd4d44
            
            goto label_cd4b2c
        
    label_cd4d30:
        arg1[x8_181] = x0_9[0x12]
        x8_198 = x13_1 + x28_3
        int64_t x8_183
        
        if (x8_198 u< arg2)
        label_cd4d44:
            arg1[x8_198] = x0_9[0x13]
            x8_183 = x7_1 + x28_3
            
            if (x8_183 u>= arg2)
                goto label_cd4b38
            
            goto label_cd4d5c
        
    label_cd4b2c:
        x8_183 = x7_1 + x28_3
        int64_t x8_200
        
        if (x8_183 u>= arg2)
        label_cd4b38:
            x8_200 = x14_1 + x28_3
            
            if (x8_200 u< arg2)
                goto label_cd4d70
            
            goto label_cd4b44
        
    label_cd4d5c:
        arg1[x8_183] = x0_9[0x14]
        x8_200 = x14_1 + x28_3
        int64_t x8_201
        
        if (x8_200 u< arg2)
        label_cd4d70:
            arg1[x8_200] = x0_9[0x15]
            x8_201 = x15_1 + x28_3
            
            if (x8_201 u>= arg2)
                goto label_cd4b50
            
            goto label_cd4d84
        
    label_cd4b44:
        x8_201 = x15_1 + x28_3
        int64_t x8_202
        
        if (x8_201 u>= arg2)
        label_cd4b50:
            x8_202 = x16_1 + x28_3
            
            if (x8_202 u< arg2)
                goto label_cd4d98
            
            goto label_cd4b60
        
    label_cd4d84:
        arg1[x8_201] = x0_9[0x16]
        x8_202 = x16_1 + x28_3
        int64_t x8_185
        
        if (x8_202 u< arg2)
        label_cd4d98:
            arg1[x8_202] = x0_9[0x17]
            x8_185 = x10_4 + x28_3
            
            if (x8_185 u>= arg2)
                goto label_cd4b6c
            
            goto label_cd4db0
        
    label_cd4b60:
        x8_185 = x10_4 + x28_3
        int64_t x8_204
        
        if (x8_185 u>= arg2)
        label_cd4b6c:
            x8_204 = x17_1 + x28_3
            
            if (x8_204 u< arg2)
                goto label_cd4dc4
            
            goto label_cd4b78
        
    label_cd4db0:
        arg1[x8_185] = x0_9[0x18]
        x8_204 = x17_1 + x28_3
        int64_t x8_205
        
        if (x8_204 u< arg2)
        label_cd4dc4:
            arg1[x8_204] = x0_9[0x19]
            x8_205 = x0_11 + x28_3
            
            if (x8_205 u>= arg2)
                goto label_cd4b84
            
            goto label_cd4dd8
        
    label_cd4b78:
        x8_205 = x0_11 + x28_3
        int64_t x8_206
        
        if (x8_205 u>= arg2)
        label_cd4b84:
            x8_206 = x1_2 + x28_3
            
            if (x8_206 u< arg2)
                goto label_cd4dec
            
            goto label_cd4b90
        
    label_cd4dd8:
        arg1[x8_205] = x0_9[0x1a]
        x8_206 = x1_2 + x28_3
        int64_t x8_207
        
        if (x8_206 u< arg2)
        label_cd4dec:
            arg1[x8_206] = x0_9[0x1b]
            x8_207 = x2_2 + x28_3
            
            if (x8_207 u>= arg2)
                goto label_cd4b9c
            
            goto label_cd4e00
        
    label_cd4b90:
        x8_207 = x2_2 + x28_3
        int64_t x8_208
        
        if (x8_207 u>= arg2)
        label_cd4b9c:
            x8_208 = x3 + x28_3
            
            if (x8_208 u< arg2)
                goto label_cd4e14
            
            goto label_cd4ba8
        
    label_cd4e00:
        arg1[x8_207] = x0_9[0x1c]
        x8_208 = x3 + x28_3
        int64_t x8_209
        
        if (x8_208 u< arg2)
        label_cd4e14:
            arg1[x8_208] = x0_9[0x1d]
            x8_209 = x4 + x28_3
            
            if (x8_209 u>= arg2)
                goto label_cd4bb8
            
            goto label_cd4e28
        
    label_cd4ba8:
        x8_209 = x4 + x28_3
        int64_t x8_187
        
        if (x8_209 u< arg2)
        label_cd4e28:
            arg1[x8_209] = x0_9[0x1e]
            x8_187 = x8_12 + x28_3
            
            if (x8_187 u< arg2)
                arg1[x8_187] = x0_9[0x1f]
        else
        label_cd4bb8:
            x8_187 = x8_12 + x28_3
            
            if (x8_187 u< arg2)
                arg1[x8_187] = x0_9[0x1f]
        x28_3 += 1
    while (x28_3 != x25_2)
else
    int64_t x27_2 = 0
    bool cond:5_1
    
    do
        v0_1.q = 0
        v0_1:8.q = 0
        __builtin_memset(x0_9, 0, 0x20)
        (*(*var_70 + 0x18))(var_70, arg5, arg6, v0_1)
        var_64 = _byteswap((x27_2 + 1).d)
        (*(*var_70 + 0x18))(var_70, &var_64, 4)
        (*(*var_70 + 0x20))(var_70, var_a0_1)
        sub_cd57a0(&var_d8, var_88.q, var_80, var_a0_1, var_98_1, &var_f0, &var_108)
        
        if (x27_2 u< arg2)
            arg1[x27_2] = *x0_9
        
        if (x25_2 + x27_2 u< arg2)
            arg1[x25_2 + x27_2] = x0_9[1]
            
            if (x26_2 + x27_2 u< arg2)
            label_cd45e0:
                arg1[x26_2 + x27_2] = x0_9[2]
                
                if (x5_1 + x27_2 u>= arg2)
                    goto label_cd4448
                
                goto label_cd45f8
        else if (x26_2 + x27_2 u< arg2)
            goto label_cd45e0
        
        uint64_t x5_4
        
        if (x5_1 + x27_2 u< arg2)
        label_cd45f8:
            arg1[x5_1 + x27_2] = x0_9[3]
            x5_4 = x11_1
            
            if (x20_1 + x27_2 u< arg2)
            label_cd4624:
                arg1[x20_1 + x27_2] = x0_9[4]
                
                if (x6 + x27_2 u>= arg2)
                    goto label_cd4464
                
                goto label_cd464c
        else
        label_cd4448:
            x5_4 = x11_1
            
            if (x20_1 + x27_2 u< arg2)
                goto label_cd4624
        
        uint64_t x6_3
        
        if (x6 + x27_2 u>= arg2)
        label_cd4464:
            x6_3 = x10_3
            
            if (x5_4 + x27_2 u< arg2)
                goto label_cd4668
            
            goto label_cd4474
        
    label_cd464c:
        arg1[x6 + x27_2] = x0_9[5]
        x6_3 = x10_3
        uint64_t x5_5
        
        if (x5_4 + x27_2 u< arg2)
        label_cd4668:
            arg1[x11_1 + x27_2] = x0_9[6]
            x5_5 = x10_2
            
            if (x9_2 + x27_2 u>= arg2)
                goto label_cd4488
            
            goto label_cd4684
        
    label_cd4474:
        x5_5 = x10_2
        
        if (x9_2 + x27_2 u< arg2)
        label_cd4684:
            arg1[x9_2 + x27_2] = x0_9[7]
            
            if (x19_2 + x27_2 u< arg2)
            label_cd469c:
                arg1[x19_2 + x27_2] = x0_9[8]
                
                if (x28_1 + x27_2 u>= arg2)
                    goto label_cd44a0
                
                goto label_cd46b4
        else
        label_cd4488:
            
            if (x19_2 + x27_2 u< arg2)
                goto label_cd469c
        
        uint64_t x5_6
        
        if (x28_1 + x27_2 u< arg2)
        label_cd46b4:
            arg1[x28_1 + x27_2] = x0_9[9]
            x5_6 = lr_1
            
            if (x5_5 + x27_2 u< arg2)
            label_cd46d0:
                arg1[x10_2 + x27_2] = x0_9[0xa]
                
                if (x27_1 + x27_2 u>= arg2)
                    goto label_cd44b8
                
                goto label_cd46e8
        else
        label_cd44a0:
            x5_6 = lr_1
            
            if (x5_5 + x27_2 u< arg2)
                goto label_cd46d0
        
        uint64_t x9_5
        
        if (x27_1 + x27_2 u>= arg2)
        label_cd44b8:
            x9_5 = x9_3
            
            if (x6_3 + x27_2 u< arg2)
                goto label_cd4704
            
            goto label_cd44cc
        
    label_cd46e8:
        arg1[x27_1 + x27_2] = x0_9[0xb]
        x9_5 = x9_3
        
        if (x6_3 + x27_2 u< arg2)
        label_cd4704:
            arg1[x10_3 + x27_2] = x0_9[0xc]
            
            if (x10_1 + x27_2 u>= arg2)
                goto label_cd44d8
            
            goto label_cd471c
        
    label_cd44cc:
        
        if (x10_1 + x27_2 u>= arg2)
        label_cd44d8:
            
            if (x8_10 + x27_2 u< arg2)
                goto label_cd4734
            
            goto label_cd44e4
        
    label_cd471c:
        arg1[x10_1 + x27_2] = x0_9[0xd]
        
        if (x8_10 + x27_2 u< arg2)
        label_cd4734:
            arg1[x8_10 + x27_2] = x0_9[0xe]
            
            if (x5_6 + x27_2 u>= arg2)
                goto label_cd44f0
            
            goto label_cd474c
        
    label_cd44e4:
        
        if (x5_6 + x27_2 u< arg2)
        label_cd474c:
            arg1[lr_1 + x27_2] = x0_9[0xf]
            
            if (x12_1 + x27_2 u< arg2)
            label_cd4764:
                arg1[x12_1 + x27_2] = x0_9[0x10]
                
                if (x9_5 + x27_2 u>= arg2)
                    goto label_cd4504
                
                goto label_cd477c
        else
        label_cd44f0:
            
            if (x12_1 + x27_2 u< arg2)
                goto label_cd4764
        
        uint64_t x9_6
        
        if (x9_5 + x27_2 u>= arg2)
        label_cd4504:
            x9_6 = x7_1
            
            if (x11_2 + x27_2 u< arg2)
                goto label_cd4798
            
            goto label_cd4518
        
    label_cd477c:
        arg1[x9_3 + x27_2] = x0_9[0x11]
        x9_6 = x7_1
        
        if (x11_2 + x27_2 u< arg2)
        label_cd4798:
            arg1[x11_2 + x27_2] = x0_9[0x12]
            
            if (x13_1 + x27_2 u>= arg2)
                goto label_cd4524
            
            goto label_cd47b0
        
    label_cd4518:
        
        if (x13_1 + x27_2 u>= arg2)
        label_cd4524:
            
            if (x9_6 + x27_2 u< arg2)
                goto label_cd47c8
            
            goto label_cd452c
        
    label_cd47b0:
        arg1[x13_1 + x27_2] = x0_9[0x13]
        uint64_t x9_7
        
        if (x9_6 + x27_2 u< arg2)
        label_cd47c8:
            arg1[x7_1 + x27_2] = x0_9[0x14]
            x9_7 = x10_4
            
            if (x14_1 + x27_2 u>= arg2)
                goto label_cd4540
            
            goto label_cd47e4
        
    label_cd452c:
        x9_7 = x10_4
        
        if (x14_1 + x27_2 u>= arg2)
        label_cd4540:
            
            if (x15_1 + x27_2 u< arg2)
                goto label_cd47fc
            
            goto label_cd454c
        
    label_cd47e4:
        arg1[x14_1 + x27_2] = x0_9[0x15]
        
        if (x15_1 + x27_2 u< arg2)
        label_cd47fc:
            arg1[x15_1 + x27_2] = x0_9[0x16]
            
            if (x16_1 + x27_2 u>= arg2)
                goto label_cd4558
            
            goto label_cd4814
        
    label_cd454c:
        
        if (x16_1 + x27_2 u>= arg2)
        label_cd4558:
            
            if (x9_7 + x27_2 u< arg2)
                goto label_cd482c
            
            goto label_cd4564
        
    label_cd4814:
        arg1[x16_1 + x27_2] = x0_9[0x17]
        
        if (x9_7 + x27_2 u< arg2)
        label_cd482c:
            arg1[x10_4 + x27_2] = x0_9[0x18]
            
            if (x17_1 + x27_2 u>= arg2)
                goto label_cd4570
            
            goto label_cd4844
        
    label_cd4564:
        
        if (x17_1 + x27_2 u>= arg2)
        label_cd4570:
            
            if (x0_11 + x27_2 u< arg2)
                goto label_cd485c
            
            goto label_cd457c
        
    label_cd4844:
        arg1[x17_1 + x27_2] = x0_9[0x19]
        
        if (x0_11 + x27_2 u< arg2)
        label_cd485c:
            arg1[x0_11 + x27_2] = x0_9[0x1a]
            
            if (x1_2 + x27_2 u>= arg2)
                goto label_cd4588
            
            goto label_cd4874
        
    label_cd457c:
        
        if (x1_2 + x27_2 u>= arg2)
        label_cd4588:
            
            if (x2_2 + x27_2 u< arg2)
                goto label_cd488c
            
            goto label_cd4594
        
    label_cd4874:
        arg1[x1_2 + x27_2] = x0_9[0x1b]
        
        if (x2_2 + x27_2 u< arg2)
        label_cd488c:
            arg1[x2_2 + x27_2] = x0_9[0x1c]
            
            if (x3 + x27_2 u>= arg2)
                goto label_cd45a4
            
            goto label_cd48a4
        
    label_cd4594:
        
        if (x3 + x27_2 u>= arg2)
        label_cd45a4:
            
            if (x4 + x27_2 u< arg2)
                goto label_cd48c0
            
            goto label_cd45b4
        
    label_cd48a4:
        arg1[x3 + x27_2] = x0_9[0x1d]
        
        if (x4 + x27_2 u>= arg2)
        label_cd45b4:
            
            if (x8_12 + x27_2 u< arg2)
                arg1[x8_12 + x27_2] = x0_9[0x1f]
        else
        label_cd48c0:
            arg1[x4 + x27_2] = x0_9[0x1e]
            
            if (x8_12 + x27_2 u< arg2)
                arg1[x8_12 + x27_2] = x0_9[0x1f]
        
        cond:5_1 = x25_2 == x27_2 + 1
        x27_2 += 1
    while (not(cond:5_1))

if (x0_10 != 0)
    Botan::deallocate_memory(x0_10, 0x20, 1)

if (x0_9 != 0)
    Botan::deallocate_memory(x0_9, 0x20, 1)

int128_t var_c0
void* x0_27 = var_c0:8.q
var_d8.q = _vtable_for_Botan::Blowfish + 0x10

if (x0_27 != 0)
    int128_t var_b0
    int64_t x8_212 = var_b0:8.q
    var_b0.q = x0_27
    Botan::deallocate_memory(x0_27, (x8_212 - x0_27) s>> 2, 4)

void* x0_28 = var_d0.q

if (x0_28 != 0)
    void* var_c8_1 = x0_28
    Botan::deallocate_memory(x0_28, (var_c0.q - x0_28) s>> 2, 4)

uint64_t x0_29 = var_a0_1

if (x0_29 != 0)
    uint64_t var_98_2 = x0_29
    Botan::deallocate_memory(x0_29, var_90_1 - x0_29, 1)

void* x0_30 = var_88.q

if (x0_30 != 0)
    void* var_80_1 = x0_30
    Botan::deallocate_memory(x0_30, var_78 - x0_30, 1)

arg1 = var_70
int64_t var_70_1 = 0

if (arg1 != 0)
    (*(*arg1 + 0x10))()

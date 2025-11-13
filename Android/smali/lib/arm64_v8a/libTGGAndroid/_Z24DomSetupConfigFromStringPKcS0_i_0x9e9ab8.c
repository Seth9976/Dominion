// 函数: _Z24DomSetupConfigFromStringPKcS0_i
// 地址: 0x9e9ab8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomSetupConfigFromString(arg1, arg3)
DomSetupConfigFromString(arg2, arg3)
void* entry_x8
int128_t v0
int128_t v1
int128_t v2
v0, v1, v2 = memset(entry_x8, 0, 0x1990)

for (int64_t i = 0; i != 0xc80; i += 4)
    void var_dbc
    int32_t x11_1 = *(&var_dbc + i)
    
    if (x11_1 == 0)
        break
    
    *(entry_x8 + 0xc04 + i) = x11_1

uint64_t x8 = 0
void var_2988
void* x9 = &var_2988
void* x10_1 = entry_x8 + 0x9c8

while (*x9 != 0)
    v0 = *x9
    x9 += 0x10
    x8 += 1
    *x10_1 = v0
    x10_1 += 0x10
    
    if (x8 == 0x20)
        break

int64_t i_1 = 0
int32_t x10_2 = *V2I0
int32_t x11_3 = *(V2I0 + 4)

do
    int32_t var_19c0[0x301]
    void* x14_4 = &var_19c0[i_1 * 4]
    int32_t j = *(x14_4 + 0x9c8)
    
    if (j == 0)
        break
    
    int32_t x16_1 = *(x14_4 + 0x9d4)
    
    if (*(x14_4 + 0x9d0) != x10_2 || x16_1 != x11_3)
        if (x8.d s< 1)
        label_9e9b88:
            void* x14_2 = entry_x8 + (sx.q(x8.d) << 4)
            x8 = zx.q(x8.d + 1)
            *(x14_2 + 0x9c8) = *(x14_4 + 0x9c8)
        else
            uint64_t x0_2 = zx.q(x8.d)
            void* x17_2 = entry_x8 + 0x9d4
            
            while (*(x17_2 - 0xc) != j)
                uint64_t temp0_1 = x0_2
                x0_2 -= 1
                x17_2 += 0x10
                
                if (temp0_1 == 1)
                    goto label_9e9b88
            
            int32_t x14_5 = *x17_2
            int32_t x14_6
            
            x14_6 = x14_5 s> x16_1 ? x14_5 : x16_1
            
            *x17_2 = x14_6
    
    i_1 += 1
while (i_1 != 0x20)

int64_t var_2754
v2.q = var_2754
v0.d = 1
v0:4.d = 1
v1.d = 2
v1:4.d = 2
*(entry_x8 + 0xbfc) = vbsl_s8(vceq_u32(v2, v0), v0, v1).q
int128_t v0_1 = *DEFAULT_LANDSCAPE_MODIFIERS
v1 = *(DEFAULT_LANDSCAPE_MODIFIERS + 0x10)
int128_t v2_1 = *(DEFAULT_LANDSCAPE_MODIFIERS + 0x20)
*(entry_x8 + 0xbf8) = *(DEFAULT_LANDSCAPE_MODIFIERS + 0x30)
*(entry_x8 + 0xbd8) = v1
*(entry_x8 + 0xbe8) = v2_1
*(entry_x8 + 0xbc8) = v0_1
int32_t var_2b8
*(entry_x8 + 0x1708) = var_2b8
int128_t var_2c8
*(entry_x8 + 0x16f8) = var_2c8
int32_t var_2cc
*(entry_x8 + 0x16f4) = var_2cc
int32_t var_1c44
*(entry_x8 + 0x170c) = var_1c44
void var_3350
memcpy(entry_x8, &var_3350, 0x9c8)
void var_1c40
return memcpy(entry_x8 + 0x1710, &var_1c40, 0x280)

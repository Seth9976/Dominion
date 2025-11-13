// 函数: _Z14LoadWeightsTGG9PlayerWhoP6XAsset
// 地址: 0xc3a58c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XAsset* x19 = arg2
int32_t x20 = arg1
int64_t* x8

if (arg2 == 0)
    x19 = AssetPtrGetNull(0x24)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

int64_t x25 = sx.q(x20)
int64_t var_e0 = x25
*(x19 + 0x24) += 1
int64_t* x28 = *x8
char var_a8
char var_90
char var_78
void* var_68

if (x28[1].d s>= 1)
    void* x27_1 = &var_78 | 1
    int64_t i = 0
    char*** x20_1 = x25 * 0x80cf8 + 0x195dc30
    
    do
        int64_t* x26_1 = *x28
        char** x0 = XMalloc(0x28)
        *x0 = strdup(x26_1[i * 5])
        char* x23_1 = x26_1[i * 5]
        size_t x0_4 = strlen(x23_1)
        
        if (x0_4 u>= -0x10)
            int32_t* x0_42
            int32_t* x1_8
            x0_42, x1_8 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
            return Eigen::Matrix<float, -1, -1, 0, -1, -1>::Matrix<int32_t, int32_t>(x0_42, x1_8)
                __tailcall
        
        int64_t var_77
        void* x24_1
        
        if (x0_4 u>= 0x17)
            uint64_t x25_1 = (x0_4 + 0x10) & 0xfffffffffffffff0
            void* x0_6 = operator new(x25_1)
            x25 = var_e0
            x24_1 = x0_6
            var_77 = x0_4
            var_68 = x0_6
            var_78.q = x25_1 | 1
            memcpy(x24_1, x23_1, x0_4)
        else
            x24_1 = x27_1
            var_78 = (x0_4.d << 1).b
            
            if (x0_4 != 0)
                memcpy(x24_1, x23_1, x0_4)
        
        *(x24_1 + x0_4) = 0
        uint64_t x8_12 = zx.q(var_78)
        int32_t temp0_1 = x8_12.d & 1
        void* x0_8
        
        x0_8 = temp0_1 == 0 ? x27_1 : var_68
        
        uint64_t x1_1
        
        if (temp0_1 == 0)
            x1_1 = x8_12 u>> 1
        else
            x1_1 = var_77
        
        var_90.q = 0
        var_a8.q = 0
        SpookyHash::Hash128(x0_8, x1_1, &var_90, &var_a8)
        uint64_t x22_3 = zx.q(var_90.w)
        
        if ((zx.d(var_78) & 1) != 0)
            operator delete(var_68)
        
        uint64_t x9_3 = x22_3 << 3
        x0[1] = *(&data_18ddc30 + x25 * 0x80cf8 + x9_3)
        *(&data_18ddc30 + x25 * 0x80cf8 + x9_3) = x0
        x0[2] = *x20_1
        *x20_1 = x0
        int32_t x8_17 = *(x26_1 + i * 0x28 + 0x10)
        
        if (x8_17 == 1)
            int64_t* x0_12 = operator new(0x10)
            int32_t* x8_19 = *(x26_1 + i * 0x28 + 8)
            *x0_12 = 0
            x0_12[1] = 0
            int64_t x24_2 = sx.q(*x8_19)
            
            if (x24_2.d != 0)
                if (x24_2.d s< 1)
                    *x0_12 = 0
                else
                    int64_t x0_14 = malloc((x24_2 << 2) + 0x10)
                    void* const x8_22
                    
                    if (x0_14 != 0)
                        x8_22 = (x0_14 + 0x10) & 0xfffffffffffffff0
                        *(x8_22 - 8) = x0_14
                    
                    if (x0_14 == 0 || x8_22 == 0)
                        operator new(-1)
                        x8_22 = nullptr
                    
                    *x0_12 = x8_22
            
            x0_12[1] = x24_2
            x0[3] = x0_12
            x0[4] = 0
            
            if (**(x26_1 + i * 0x28 + 8) s>= 1)
                **x0_12 = **(x26_1 + i * 0x28 + 0x18)
                
                if (**(x26_1 + i * 0x28 + 8) s>= 2)
                    int64_t j = 1
                    
                    do
                        j += 1
                        (*x0[3])[j] = (*(x26_1 + i * 0x28 + 0x18))[j]
                    while (j s< sx.q(**(x26_1 + i * 0x28 + 8)))
        else if (x8_17 != 0)
            int32_t* x0_15 = operator new(0x18)
            Eigen::Matrix<float, -1, -1, 0, -1, -1>::Matrix<int32_t, int32_t>(x0_15, 
                *(x26_1 + i * 0x28 + 8))
            x0[3] = 0
            x0[4] = x0_15
            int32_t* x11_2 = *(x26_1 + i * 0x28 + 8)
            int32_t x12_1 = *x11_2
            
            if (x12_1 s>= 1)
                int64_t j_1 = 0
                int32_t x9_4 = 0
                
                do
                    if (x11_2[1] s>= 1)
                        int64_t k = 0
                        
                        do
                            int64_t* x14_1 = x0[4]
                            *(*x14_1 + ((j_1 + x14_1[1] * k) << 2)) = *(*(x26_1 + i * 0x28 + 0x18)
                                + (zx.q(x9_4) << 0x20 s>> 0x1e) + (k << 2))
                            x11_2 = *(x26_1 + i * 0x28 + 8)
                            k += 1
                        while (k s< sx.q(x11_2[1]))
                        
                        x12_1 = *x11_2
                        x9_4 += k.d
                    
                    j_1 += 1
                while (j_1 s< sx.q(x12_1))
        else
            int64_t* x0_10 = operator new(0x10)
            *x0_10 = 0
            x0_10[1] = 0
            int64_t x0_11 = malloc(0x14)
            void* const x8_3
            
            if (x0_11 != 0)
                x8_3 = (x0_11 + 0x10) & 0xfffffffffffffff0
                *(x8_3 - 8) = x0_11
            
            if (x0_11 == 0 || x8_3 == 0)
                operator new(-1)
                x8_3 = nullptr
            
            *x0_10 = x8_3
            x0_10[1] = 1
            x0[3] = x0_10
            x0[4] = 0
            **x0_10 = **(x26_1 + i * 0x28 + 0x18)
        
        i += 1
    while (i s< sx.q(x28[1].d))

var_78 = 0x14
int64_t var_77_1
__builtin_strncpy(&var_77_1, "parameters", 0xb)
int64_t* x0_17 = sub_c4aa70(&data_18ddc30 + muls.dp.d(x20, 0x80cf8), &var_78)

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

uint32_t temp0_2 = vcvts_s32_f32(**x0_17)
*(x25 * 0x80cf8 + 0x195e914) = temp0_2
*(x25 * 0x80cf8 + 0x195e918) = vcvts_s32_f32(*(*x0_17 + 4))
*(x25 * 0x80cf8 + 0x195e91c) = vcvts_s32_f32(*(*x0_17 + 8))
*(x25 * 0x80cf8 + 0x195e920) = vcvts_s32_f32(*(*x0_17 + 0xc))

if (temp0_2 s<= 0xe)
    *(x25 * 0x80cf8 + 0x195e91c) = 4

var_90 = 0x1e
int64_t var_8f
__builtin_strncpy(&var_8f, "card_pre/kernel", 0x10)
void* x0_20 = sub_c48afc(&data_18ddc30 + muls.dp.d(x20, 0x80cf8), &var_90)
char var_80

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80.q)
int64_t x21_4 = *(x0_20 + 0x10)

if (x21_4 != 0 && 0x7fffffffffffffff s/ x21_4 s<= 0x32a)
    operator new(-1)

void* const x24_3

if (x21_4 == 0 || x21_4 s< 1)
    x24_3 = nullptr
else
    if ((x21_4 * 0x32b) u>> 0x3e != 0)
        operator new(-1)
    
    int64_t x23_6 = x21_4 * 0xcac
    int64_t x0_23 = malloc(x23_6 + 0x10)
    
    if (x0_23 == 0)
        x24_3 = nullptr
        
        if (x23_6 != 0)
        label_c3aadc:
            
            if (x24_3 == 0)
                operator new(-1)
    else
        x24_3 = (x0_23 + 0x10) & 0xfffffffffffffff0
        *(x24_3 - 8) = x0_23
        
        if (x23_6 != 0)
            goto label_c3aadc

void* x9_11 = *(x25 * 0x80cf8 + &data_195dc38)
*(x25 * 0x80cf8 + &data_195dc38) = x24_3
int64_t x8_38 = 0x32b
*(x25 * 0x80cf8 + 0x195dc40) = 0x32b
*(x25 * 0x80cf8 + &data_195dc48) = x21_4

if (x9_11 != 0)
    free(*(x9_11 - 8))
    x8_38 = *(x25 * 0x80cf8 + 0x195dc40)
    x21_4 = *(x25 * 0x80cf8 + &data_195dc48)

int64_t x8_39 = x8_38 * x21_4

if (x8_39 s>= 1)
    memset(*(x25 * 0x80cf8 + &data_195dc38), 0, x8_39 << 2)

__builtin_strncpy(&var_a8, "&policy_dense/kernel", 0x15)
void* x0_29 = sub_c48afc(&data_18ddc30 + muls.dp.d(x20, 0x80cf8), &var_a8)
int32_t var_98

if ((zx.d(var_a8) & 1) != 0)
    operator delete(var_98.q)
int64_t x21_6 = *(x0_29 + 8)
void* const x23_8

if (x21_6 s< 1)
    x23_8 = nullptr
else
    if (x21_6 u>> 0x3e != 0)
        operator new(-1)
    
    int64_t x24_6 = x21_6 << 2
    int64_t x0_32 = malloc(x24_6 + 0x10)
    
    if (x0_32 == 0)
        x23_8 = nullptr
        
        if (x24_6 != 0)
        label_c3abec:
            
            if (x23_8 == 0)
                operator new(-1)
    else
        x23_8 = (x0_32 + 0x10) & 0xfffffffffffffff0
        *(x23_8 - 8) = x0_32
        
        if (x24_6 != 0)
            goto label_c3abec

void* x8_44 = *(var_e0 * 0x80cf8 + &data_195dc48:8)
*(var_e0 * 0x80cf8 + &data_195dc48:8) = x23_8
*(var_e0 * 0x80cf8 + &data_195dc58) = x21_6

if (x8_44 != 0)
    free(*(x8_44 - 8))

char var_c0
__builtin_strncpy(&var_c0, "*card_embed/embeddings", 0x17)
void* x0_35 = sub_c48afc(&data_18ddc30 + muls.dp.d(x20, 0x80cf8), &var_c0)
int128_t var_bf

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_bf:0xf.q)
int64_t var_d7
__builtin_strncpy(&var_d7, "card_pre/kernel", 0x10)
char var_d8 = 0x1e
void* result = sub_c48afc(&data_18ddc30 + muls.dp.d(x20, 0x80cf8), &var_d8)
void* result_1 = result
char var_c8

if ((zx.d(var_d8) & 1) != 0)
    result = operator delete(var_c8.q)
int64_t x21_8 = *(x0_35 + 8)
int64_t x19_1 = *(result_1 + 0x10)

if (x21_8 != 0 && x19_1 != 0 && 0x7fffffffffffffff s/ x19_1 s< x21_8)
    result = operator new(-1)

int64_t x20_3 = x19_1 * x21_8
void* x22_7

if (x20_3 s< 1)
    x22_7 = nullptr
else
    if (x20_3 u>> 0x3e != 0)
        operator new(-1)
    
    int64_t x23_9 = x20_3 << 2
    result = malloc(x23_9 + 0x10)
    
    if (result == 0)
        x22_7 = nullptr
        
        if (x23_9 != 0)
        label_c3ad1c:
            
            if (x22_7 == 0)
                result = operator new(-1)
    else
        x22_7 = (result + 0x10) & 0xfffffffffffffff0
        *(x22_7 - 8) = result
        
        if (x23_9 != 0)
            goto label_c3ad1c

void* x8_51 = *(var_e0 * 0x80cf8 + &data_195dc58:8)
*(var_e0 * 0x80cf8 + &data_195dc58:8) = x22_7
*(var_e0 * 0x80cf8 + &data_195dc68) = x21_8
*(var_e0 * 0x80cf8 + &data_195dc68:8) = x19_1

if (x8_51 != 0)
    result = free(*(x8_51 - 8))
    x20_3 = *(var_e0 * 0x80cf8 + &data_195dc68:8) * *(var_e0 * 0x80cf8 + &data_195dc68)

if (x20_3 s>= 1)
    result = memset(*(var_e0 * 0x80cf8 + &data_195dc58:8), 0, x20_3 << 2)

if (x19 != 0)
    *(x19 + 0x24) -= 1

return result

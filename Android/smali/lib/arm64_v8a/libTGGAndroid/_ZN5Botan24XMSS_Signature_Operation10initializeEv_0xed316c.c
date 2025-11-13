// 函数: _ZN5Botan24XMSS_Signature_Operation10initializeEv
// 地址: 0xed316c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (zx.d(*(entry_x0 + 0x36c)) != 0)
    return 

void* var_40
__builtin_memset(&var_40, 0, 0x18)
*(entry_x0 + 0x368) = Botan::XMSS_PrivateKey::reserve_unused_leaf_index()
void* x8_1 = var_40
char var_60 = 0
void* var_38
void* x9_2 = var_38 - x8_1

if (x9_2 != -0x1d && x9_2 u>= -0x1d)
    var_38 = x9_2 + x8_1 + 0x1c
else
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_40, 0x1c)

var_60.q = &var_40
sub_f4a08c(&var_60, entry_x0 + 0x36b)
sub_f4a08c(&var_60, entry_x0 + 0x36a)
sub_f4a08c(&var_60, entry_x0 + 0x369)
sub_f4a08c(&var_60, entry_x0 + 0x368)
int64_t* x0_7 = *(entry_x0 + 0x308)
int64_t x1_5 = *(entry_x0 + 0x318)
(*(*x0_7 + 0x18))(x0_7, x1_5, *(entry_x0 + 0x320) - x1_5)
int64_t* x0_8 = *(entry_x0 + 0x308)
char var_24 = 3
(*(*x0_8 + 0x18))(x0_8, &var_24, 1)
int64_t* x0_9 = *(entry_x0 + 0x308)
int64_t x1_7 = *(entry_x0 + 0x168)
(*(*x0_9 + 0x18))(x0_9, x1_7, *(entry_x0 + 0x170) - x1_7)
int64_t* x0_10 = *(entry_x0 + 0x308)
void* x1_8 = var_40
(*(*x0_10 + 0x18))(x0_10, x1_8, var_38 - x1_8)
*(entry_x0 + 0x308)
Botan::Buffered_Computation::final()
void* x0_12 = *(entry_x0 + 0x350)

if (x0_12 != 0)
    int64_t x8_12 = *(entry_x0 + 0x360)
    *(entry_x0 + 0x358) = x0_12
    Botan::deallocate_memory(x0_12, x8_12 - x0_12, 1)
    __builtin_memset(entry_x0 + 0x350, 0, 0x18)

int64_t i_2 = *(entry_x0 + 0x1e0)
*(entry_x0 + 0x350) = var_60.o
int64_t i_1

i_1 = i_2 u> 4 ? 4 : i_2

int64_t var_50
*(entry_x0 + 0x360) = var_50
void* x8_15 = var_40

if (i_2 u>= 5)
    var_60 = 0
    std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(&var_40, i_2 - 4)

var_60.q = &var_40

if (i_1 != 0)
    int64_t i
    
    do
        sub_f4a08c(&var_60, entry_x0 + 0x367 + i_1)
        i = i_1
        i_1 -= 1
    while (i != 1)

(*(**(entry_x0 + 0x310) + 0x38))()
int64_t* x0_16 = *(entry_x0 + 0x310)
int64_t x1_12 = *(entry_x0 + 0x318)
(*(*x0_16 + 0x18))(x0_16, x1_12, *(entry_x0 + 0x320) - x1_12)
int64_t* x0_17 = *(entry_x0 + 0x310)
var_60 = 2
(*(*x0_17 + 0x18))(x0_17, &var_60, 1)
int64_t* x0_18 = *(entry_x0 + 0x310)
int64_t x1_14 = *(entry_x0 + 0x350)
(*(*x0_18 + 0x18))(x0_18, x1_14, *(entry_x0 + 0x358) - x1_14)
int64_t* x0_19 = *(entry_x0 + 0x310)
int64_t x1_15 = *(entry_x0 + 0x278)
(*(*x0_19 + 0x18))(x0_19, x1_15, *(entry_x0 + 0x280) - x1_15)
int64_t* x0_20 = *(entry_x0 + 0x310)
void* x1_16 = var_40
(*(*x0_20 + 0x18))(x0_20, x1_16, x8_15 - x1_16)
*(entry_x0 + 0x36c) = 1
entry_x0 = var_40

if (entry_x0 != 0)
    void* var_38_2 = entry_x0
    int64_t var_30
    Botan::deallocate_memory(entry_x0, var_30 - entry_x0, 1)

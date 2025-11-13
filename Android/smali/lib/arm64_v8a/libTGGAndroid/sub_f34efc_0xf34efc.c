// 函数: sub_f34efc
// 地址: 0xf34efc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *(arg1 + 8)
Botan::BigInt::encode(**(arg1 + 0x10))
char var_40
uint8_t* var_28
int64_t var_20
uint8_t* var_20_1

if (var_28 == var_20)
    var_40 = 4
    int16_t var_3f_1 = 0x3030
    char var_3d_1 = 0
    
    if (var_28 != 0)
        var_20_1 = var_28
        operator delete(var_28)
else
    Botan::hex_encode(var_28, var_20 - var_28, true)
    
    if (var_28 != 0)
        var_20_1 = var_28
        operator delete(var_28)
uint64_t x8_2 = zx.q(var_40)
int32_t temp0 = x8_2.d & 1
uint64_t x8_3
uint64_t var_38

if (temp0 == 0)
    x8_3 = x8_2 u>> 1
else
    x8_3 = var_38
void* var_30
void* x1_2

if (temp0 == 0)
    x1_2 = &var_40 | 1
else
    x1_2 = var_30

memcpy(*x19, x1_2, x8_3 + 1)

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)

return 0
